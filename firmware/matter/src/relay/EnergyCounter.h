#pragma once
#include <cstdint>
#include <climits>
namespace incipio {
// Trapezoidal integration of adjacent measured samples. Half-mW.ms units
// preserve all fractional mWh without floating point or per-sample rounding.
class EnergyCounter {
    uint64_t mTotal=0, mAt=0;
    uint32_t mRemainder=0, mPower=0;
    bool mPrevious=false;
public:
    static constexpr uint64_t kMaxMwh=uint64_t(1)<<62;
    static constexpr uint32_t kDenominator=7200000;
    static constexpr uint64_t kMaxGapMs=7500;
    bool Restore(uint64_t total,uint32_t remainder) {
        if(total>kMaxMwh || remainder>=kDenominator) return false;
        mTotal=total;mRemainder=remainder;mPrevious=false;return true;
    }
    void Observe(bool valid,uint32_t powerMw,uint64_t at,uint64_t now) {
        if(!valid || powerMw>2000000 || at>now || now-at>kMaxGapMs) { mPrevious=false;return; }
        if(mPrevious && at==mAt) return;
        if(mPrevious && at>mAt && at-mAt<=kMaxGapMs) {
            uint64_t numerator=(uint64_t(mPower)+powerMw)*(at-mAt)+mRemainder;
            uint64_t increment=numerator/kDenominator;
            if(increment<=kMaxMwh-mTotal) {
                mTotal+=increment;mRemainder=uint32_t(numerator%kDenominator);
            }
        }
        mAt=at;mPower=powerMw;mPrevious=true;
    }
    uint64_t TotalMwh() const { return mTotal; }
    uint32_t Remainder() const { return mRemainder; }
};
}
