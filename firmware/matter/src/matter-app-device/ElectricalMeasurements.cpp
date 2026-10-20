#include "ElectricalMeasurements.h"
#include "../update/ck_energy.h"
#include "../update/ck_meter.h"
using namespace chip;
using namespace chip::app;
namespace EPM = Clusters::ElectricalPowerMeasurement;
namespace EEM = Clusters::ElectricalEnergyMeasurement;

ElectricalMeasurements::PowerCluster::PowerCluster(ElectricalMeasurements & owner) :
    ElectricalPowerMeasurementCluster({1, owner, BitMask<EPM::Feature>(EPM::Feature::kAlternatingCurrent),
        EPM::ElectricalPowerMeasurementCluster::OptionalAttributesSet()
            .Set<EPM::Attributes::Voltage::Id>()
            .Set<EPM::Attributes::RMSVoltage::Id>()
            .Set<EPM::Attributes::RMSCurrent::Id>()}) {}

ElectricalMeasurements::ElectricalMeasurements(TimerDelegate & timer) :
    mEnergyCluster({1,BitMask<EEM::Feature>(EEM::Feature::kImportedEnergy,EEM::Feature::kCumulativeEnergy),
        EEM::ElectricalEnergyMeasurementCluster::OptionalAttributesSet().Set<EEM::Attributes::CumulativeEnergyReset::Id>(),mEnergyAccuracy,*this,timer}) {
    // Nominal vendor bounds; no unverified calibration or accuracy percentage.
    const int64_t limits[] = {300000, 300000, 15000, 2000000};
    for (unsigned i=0; i<4; ++i) { mRanges[i].rangeMin=0; mRanges[i].rangeMax=limits[i]; }
}
CHIP_ERROR ElectricalMeasurements::Register(CodeDrivenDataModelProvider & model) {
    ReturnErrorOnFailure(model.AddCluster(mTopologyRegistration));
    ReturnErrorOnFailure(model.AddCluster(mPowerRegistration));
    return model.AddCluster(mEnergyRegistration);
}
void ElectricalMeasurements::Unregister(CodeDrivenDataModelProvider & model) {
    LogErrorOnFailure(model.RemoveCluster(&mEnergyCluster));
    LogErrorOnFailure(model.RemoveCluster(&mPowerCluster));
    LogErrorOnFailure(model.RemoveCluster(&mTopology));
}
EPM::PowerModeEnum ElectricalMeasurements::GetPowerMode() { return EPM::PowerModeEnum::kAc; }
CHIP_ERROR ElectricalMeasurements::GetAccuracyByIndex(uint8_t index, Accuracy & out) {
    using Type = Clusters::detail::MeasurementTypeEnum;
    static const Type types[] = {Type::kVoltage, Type::kRMSVoltage, Type::kRMSCurrent, Type::kActivePower};
    if (index>=4) { return CHIP_ERROR_PROVIDER_LIST_EXHAUSTED; }
    out={}; out.measurementType=types[index]; out.measured=true;
    out.minMeasuredValue=0; out.maxMeasuredValue=mRanges[index].rangeMax;
    out.accuracyRanges=DataModel::List<const Range>(&mRanges[index],1);
    return CHIP_NO_ERROR;
}
void ElectricalMeasurements::Poll(const incipio::RelaySnapshot & s, uint64_t now) {
    mCounter.Observe(s.powerValid,s.powerRaw*1000,s.powerAt,now);
    LogErrorOnFailure(SaveEnergy());
    // Advertise only durable totals, so a reported value cannot roll back merely
    // because the device loses power before its next checkpoint.
    if(mEnergyReady && (mFirstEnergyReport || mReportedMwh!=mSavedMwh)) {
        mEnergyCluster.GenerateSnapshots();mFirstEnergyReport=false;mReportedMwh=mSavedMwh;
    }
    auto value=[](bool valid, uint64_t at, uint64_t current, int64_t numerator, int64_t divisor) -> Value {
        if (!valid || current-at>15000) { return {}; }
        return DataModel::MakeNullable((numerator+divisor/2)/divisor);
    };
    Value voltage=value(s.voltageValid,s.voltageAt,now,int64_t(s.voltageRaw)*1000,64);
    Value current=value(s.currentValid,s.currentAt,now,int64_t(s.currentRaw)*1000,256);
    Value power=value(s.powerValid,s.powerAt,now,int64_t(s.powerRaw)*1000,1);
    if (voltage!=mVoltage) {
        mVoltage=voltage; mPowerCluster.Changed(EPM::Attributes::Voltage::Id); mPowerCluster.Changed(EPM::Attributes::RMSVoltage::Id);
    }
    if (current!=mCurrent) { mCurrent=current; mPowerCluster.Changed(EPM::Attributes::RMSCurrent::Id); }
    if (power!=mPower) { mPower=power; mPowerCluster.Changed(EPM::Attributes::ActivePower::Id); }
    if (now >= mNextPublish) {
        mNextPublish=now+1000;
        ck_meter sample{};
        sample.published_ms=now;
        sample.voltage_ms=s.voltageAt;sample.current_ms=s.currentAt;
        sample.power_ms=s.powerAt;sample.relay_ms=s.relayAt;
        if (!mVoltage.IsNull()) { sample.flags|=CK_METER_VOLTAGE;sample.voltage_mv=uint32_t(mVoltage.Value()); }
        if (!mCurrent.IsNull()) { sample.flags|=CK_METER_CURRENT;sample.current_ma=uint32_t(mCurrent.Value()); }
        if (!mPower.IsNull()) { sample.flags|=CK_METER_POWER;sample.power_mw=uint32_t(mPower.Value()); }
        if (mEnergyReady && mPersistent) { sample.flags|=CK_METER_ENERGY;sample.energy_mwh=mSavedMwh; }
        if (s.known && now-s.relayAt<=10000) { sample.flags|=CK_METER_RELAY;if(s.on)sample.flags|=CK_METER_ON; }
        // Failure only makes the monitor unavailable; relay control stays independent.
        (void)ck_meter_publish(&sample);
    }
}

CHIP_ERROR ElectricalMeasurements::InitEnergy(bool persistent) {
    mPersistent=persistent;
    uint64_t total=0;uint32_t remainder=0;
    int result=persistent ? ck_energy_load(&total,&remainder) : 1;
    if(result<0 || !mCounter.Restore(total,remainder)) return CHIP_ERROR_PERSISTED_STORAGE_FAILED;
    if(persistent && result==1 && ck_energy_save(0,0)) return CHIP_ERROR_PERSISTED_STORAGE_FAILED;
    mSavedMwh=total;mSavedRemainder=remainder;mEnergyReady=true;
    mLastSaveAttempt=incipio::McuController::Now();return CHIP_NO_ERROR;
}
CHIP_ERROR ElectricalMeasurements::SaveEnergy(bool force) {
    if(!mEnergyReady) return CHIP_NO_ERROR;
    uint64_t now=incipio::McuController::Now();
    if(!force && now-mLastSaveAttempt<30000) return CHIP_NO_ERROR;
    mLastSaveAttempt=now;
    if(mSavedMwh==mCounter.TotalMwh() && mSavedRemainder==mCounter.Remainder()) return CHIP_NO_ERROR;
    if(mPersistent && ck_energy_save(mCounter.TotalMwh(),mCounter.Remainder())) return CHIP_ERROR_PERSISTED_STORAGE_FAILED;
    mSavedMwh=mCounter.TotalMwh();mSavedRemainder=mCounter.Remainder();return CHIP_NO_ERROR;
}
CHIP_ERROR ElectricalMeasurements::ResetEnergy() {
    if(!mEnergyReady || (mPersistent && ck_energy_reset())) return CHIP_ERROR_PERSISTED_STORAGE_FAILED;
    mCounter.Restore(0,0);mSavedMwh=0;mSavedRemainder=0;mFirstEnergyReport=true;mNextPublish=0;
    mLastSaveAttempt=incipio::McuController::Now();
    EEM::Structs::CumulativeEnergyResetStruct::Type reset;
    reset.importedResetSystime.SetValue(chip::app::DataModel::MakeNullable(mLastSaveAttempt));
    return mEnergyCluster.SetCumulativeEnergyReset(chip::app::DataModel::MakeNullable(reset));
}
