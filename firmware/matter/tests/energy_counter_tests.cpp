#include "../src/relay/EnergyCounter.h"
#include <cstdio>
#include <cstdlib>
using incipio::EnergyCounter;
static unsigned checks;
static void check(bool ok,const char *message) { ++checks;if(!ok){std::fprintf(stderr,"FAIL %s\n",message);std::exit(1);} }
int main() {
    EnergyCounter hour;
    for(uint64_t t=0;t<=3600000;t+=5000) hour.Observe(true,1000000,t,t);
    check(hour.TotalMwh()==1000000 && hour.Remainder()==0,"1000 W for 1 hour = 1 kWh");
    EnergyCounter small;
    for(uint64_t t=0;t<=3600000;t+=5000) small.Observe(true,1,t,t);
    check(small.TotalMwh()==1 && small.Remainder()==0,"fractional mWh carried across all samples");
    EnergyCounter ramp;ramp.Observe(true,0,0,0);ramp.Observe(true,1000000,5000,5000);
    check(ramp.TotalMwh()==694 && ramp.Remainder()==3200000,"trapezoidal ramp");
    auto fraction=ramp.Remainder();ramp.Observe(true,1000000,5000,5100);
    check(ramp.TotalMwh()==694 && ramp.Remainder()==fraction,"duplicate sample is not counted twice");
    ramp.Observe(false,1000000,5000,5500);ramp.Observe(true,1000000,10000,10000);
    check(ramp.TotalMwh()==694,"invalid interval not interpolated");
    ramp.Observe(true,1000000,20000,20000);check(ramp.TotalMwh()==694,"long gap not filled");
    ramp.Observe(true,1000000,20000,30000);ramp.Observe(true,1000000,30000,30000);
    check(ramp.TotalMwh()==694,"stale sample clears integration baseline");
    EnergyCounter restart;check(restart.Restore(ramp.TotalMwh(),ramp.Remainder()),"restore checkpoint");
    restart.Observe(true,1000000,100,100);check(restart.TotalMwh()==694,"no cross-boot time integration");
    restart.Observe(true,1000000,5100,5100);
    check(restart.TotalMwh()==2083 && restart.Remainder()==2400000,"restore keeps sub-mWh residue");
    check(!restart.Restore(1,EnergyCounter::kDenominator),"invalid residue refused");
    check(!restart.Restore(EnergyCounter::kMaxMwh+1,0),"invalid total refused");
    EnergyCounter cap;check(cap.Restore(EnergyCounter::kMaxMwh,0),"maximum valid total");
    cap.Observe(true,2000000,0,0);cap.Observe(true,2000000,5000,5000);
    check(cap.TotalMwh()==EnergyCounter::kMaxMwh,"overflow cannot wrap total");
    std::printf("energy_counter=PASS checks=%u\n",checks);
}
