#pragma once
#include "../relay/McuController.h"
#include "../relay/EnergyCounter.h"
#include <app/clusters/electrical-energy-measurement-server/ElectricalEnergyMeasurementCluster.h>
#include <app/clusters/electrical-power-measurement-server/ElectricalPowerMeasurementCluster.h>
#include <app/clusters/power-topology-server/PowerTopologyCluster.h>
#include <data-model-providers/codedriven/CodeDrivenDataModelProvider.h>

// Native Matter attributes; no manufacturer-specific cluster or ecosystem bridge.
// MCU Vrms / Irms are RMS values. Never label Irms as the in-phase ActiveCurrent.
class ElectricalMeasurements final : public chip::app::Clusters::ElectricalPowerMeasurement::Delegate,
                                     public chip::app::Clusters::PowerTopology::Delegate,
                                     public chip::app::Clusters::ElectricalEnergyMeasurement::Delegate {
    using Value = chip::app::DataModel::Nullable<int64_t>;
    using Accuracy = chip::app::Clusters::ElectricalPowerMeasurement::Structs::MeasurementAccuracyStruct::Type;
    using Range = chip::app::Clusters::ElectricalPowerMeasurement::Structs::MeasurementAccuracyRangeStruct::Type;
    class PowerCluster final : public chip::app::Clusters::ElectricalPowerMeasurement::ElectricalPowerMeasurementCluster {
    public:
        explicit PowerCluster(ElectricalMeasurements & owner);
        void Changed(chip::AttributeId id) { NotifyAttributeChanged(id); }
    };
    incipio::EnergyCounter mCounter;
    bool mPersistent=false, mEnergyReady=false, mFirstEnergyReport=true;
    uint64_t mSavedMwh=0, mLastSaveAttempt=0, mReportedMwh=0;
    uint64_t mNextPublish=0;
    uint32_t mSavedRemainder=0;
    Range mEnergyRange{.rangeMin=0,.rangeMax=int64_t(incipio::EnergyCounter::kMaxMwh)};
    Accuracy mEnergyAccuracy{.measurementType=chip::app::Clusters::detail::MeasurementTypeEnum::kElectricalEnergy,
        .measured=false,.minMeasuredValue=0,.maxMeasuredValue=int64_t(incipio::EnergyCounter::kMaxMwh),
        .accuracyRanges=chip::app::DataModel::List<const Range>(&mEnergyRange,1)};
    chip::app::Clusters::ElectricalEnergyMeasurement::ElectricalEnergyMeasurementCluster mEnergyCluster;
    chip::app::ServerClusterRegistration mEnergyRegistration{mEnergyCluster};
    Value mVoltage, mCurrent, mPower;
    Range mRanges[4]{};
    PowerCluster mPowerCluster{*this};
    chip::app::ServerClusterRegistration mPowerRegistration{mPowerCluster};
    chip::app::Clusters::PowerTopology::PowerTopologyCluster mTopology{
        {1, *this, chip::BitMask<chip::app::Clusters::PowerTopology::Feature>(chip::app::Clusters::PowerTopology::Feature::kNodeTopology)}};
    chip::app::ServerClusterRegistration mTopologyRegistration{mTopology};
public:
    explicit ElectricalMeasurements(chip::TimerDelegate & timer);
    CHIP_ERROR InitEnergy(bool persistent);
    CHIP_ERROR SaveEnergy(bool force=false);
    Value GetCumulativeEnergyImported() override { return mEnergyReady ? chip::app::DataModel::MakeNullable(int64_t(mSavedMwh)) : Value{}; }
    Value GetCumulativeEnergyExported() override { return {}; }
    Value GetPeriodicEnergyImported() override { return {}; }
    Value GetPeriodicEnergyExported() override { return {}; }
    CHIP_ERROR Register(chip::app::CodeDrivenDataModelProvider & model);
    void Unregister(chip::app::CodeDrivenDataModelProvider & model);
    void Poll(const incipio::RelaySnapshot & snapshot, uint64_t now);
    chip::app::Clusters::ElectricalPowerMeasurement::PowerModeEnum GetPowerMode() override;
    uint8_t GetNumberOfMeasurementTypes() override { return 4; }
    CHIP_ERROR StartAccuracyRead() override { return CHIP_NO_ERROR; }
    CHIP_ERROR GetAccuracyByIndex(uint8_t index, Accuracy & out) override;
    CHIP_ERROR EndAccuracyRead() override { return CHIP_NO_ERROR; }
    CHIP_ERROR StartRangesRead() override { return CHIP_NO_ERROR; }
    CHIP_ERROR GetRangeByIndex(uint8_t, chip::app::Clusters::ElectricalPowerMeasurement::Structs::MeasurementRangeStruct::Type &) override { return CHIP_ERROR_PROVIDER_LIST_EXHAUSTED; }
    CHIP_ERROR EndRangesRead() override { return CHIP_NO_ERROR; }
    CHIP_ERROR StartHarmonicCurrentsRead() override { return CHIP_NO_ERROR; }
    CHIP_ERROR GetHarmonicCurrentsByIndex(uint8_t, chip::app::Clusters::ElectricalPowerMeasurement::Structs::HarmonicMeasurementStruct::Type &) override { return CHIP_ERROR_PROVIDER_LIST_EXHAUSTED; }
    CHIP_ERROR EndHarmonicCurrentsRead() override { return CHIP_NO_ERROR; }
    CHIP_ERROR StartHarmonicPhasesRead() override { return CHIP_NO_ERROR; }
    CHIP_ERROR GetHarmonicPhasesByIndex(uint8_t, chip::app::Clusters::ElectricalPowerMeasurement::Structs::HarmonicMeasurementStruct::Type &) override { return CHIP_ERROR_PROVIDER_LIST_EXHAUSTED; }
    CHIP_ERROR EndHarmonicPhasesRead() override { return CHIP_NO_ERROR; }
    Value GetVoltage() override { return mVoltage; }
    Value GetRMSVoltage() override { return mVoltage; }
    Value GetRMSCurrent() override { return mCurrent; }
    Value GetActivePower() override { return mPower; }
    Value GetActiveCurrent() override { return {}; }
    Value GetReactiveCurrent() override { return {}; }
    Value GetApparentCurrent() override { return {}; }
    Value GetReactivePower() override { return {}; }
    Value GetApparentPower() override { return {}; }
    Value GetRMSPower() override { return {}; }
    Value GetFrequency() override { return {}; }
    Value GetPowerFactor() override { return {}; }
    Value GetNeutralCurrent() override { return {}; }
    CHIP_ERROR GetAvailableEndpointAtIndex(size_t, chip::EndpointId &) override { return CHIP_ERROR_PROVIDER_LIST_EXHAUSTED; }
    CHIP_ERROR GetActiveEndpointAtIndex(size_t, chip::EndpointId &) override { return CHIP_ERROR_PROVIDER_LIST_EXHAUSTED; }
};
