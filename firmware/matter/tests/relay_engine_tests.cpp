#include "../src/relay/RelayEngine.h"
#include <cstdio>
#include <cstring>
#include <cstdlib>
using namespace incipio;
static int checks;
static void check(bool ok, const char * what) { ++checks; if (!ok) { std::fprintf(stderr,"FAIL %s\n",what); std::exit(1); } }
static void state(RelayEngine & e, bool on, uint64_t at) {
    uint8_t frame[]={0xfe,uint8_t(on ? 0x31:0x30),uint8_t(on ? 0x31:0x30),0x56};
    for (uint8_t b : frame) { e.Feed(b,at); }
}
static void confirmed(RelayEngine & e, uint32_t id, bool on, uint64_t at) {
    check(e.Request(id,on,at),"request accepted"); McuTx tx;
    check(e.NextTx(at,tx),"set frame");
    const uint8_t golden[14]={0xff,0xa1,0,0xe0,0x4c,0x81,0x96,0xc1,0xc1,uint8_t(on?0x31:0x30),0x1b,0,0,0x55};
    check(!std::memcmp(tx.bytes,golden,14),"TX matches independently captured bytes");
    check(e.NextTx(at+100,tx)&&tx.bytes[1]==0xa4,"explicit readback query");
    state(e,on,at+110);
    auto s=e.Snapshot(); check(s.completedId==id&&s.result==RelayResult::Confirmed&&s.on==on,"fresh confirmation");
}
static void power(RelayEngine & e,uint16_t raw,uint64_t at) {
    McuTx tx; bool found=false;
    for (unsigned i=0;i<6;++i) {
        check(e.NextTx(at+i,tx),"poll available");
        if(tx.bytes[1]==0xa4) { state(e,true,at+i); }
        else if(tx.bytes[1]==0xa7) { found=true; break; }
        else { uint8_t reply[]={0xff,0,0,0x55}; for(auto b:reply)e.Feed(b,at+i); }
    }
    check(found,"power query only");
    uint8_t frame[]={0xff,uint8_t(raw),uint8_t(raw>>8),0x55}; for(auto b:frame)e.Feed(b,at+2);
}
int main() {
    RelayEngine e; McuTx tx;
    check(!e.Request(2,true,0),"ON inhibited until cold OFF confirmed");
    check(e.Request(1,false,0),"cold OFF queued"); check(!e.Request(3,false,0),"concurrent command rejected");
    check(e.NextTx(0,tx)&&tx.bytes[9]==0x30,"boot never sends ON");
    state(e,false,20); check(e.Snapshot().result==RelayResult::None,"pre-query event cannot acknowledge command");
    check(!e.NextTx(50,tx),"settle delay"); check(e.NextTx(100,tx)&&tx.bytes[1]==0xa4,"boot query");
    state(e,false,110); check(e.Snapshot().bootOffConfirmed,"cold OFF confirmation unlocks ON");
    for (unsigned i=0;i<100;++i) confirmed(e,10+i,(i%2)==0,200+i*200);
    auto before=e.Snapshot().relayFrames;
    uint8_t malformed[]={0,0xfe,0x30,0x31,0x56,0xfe,0x31,0x31,0x55,0xfe,0x7f,0x7f,0x56};
    for(auto b:malformed)e.Feed(b,20200);
    check(e.Snapshot().relayFrames==before,"malformed frames never update state");
    state(e,true,20300); check(e.Snapshot().on,"physical button updates same state");
    check(!e.Fresh(30301),"stale relay excluded");
    check(e.Request(200,false,31000),"OFF available with stale state"); check(e.NextTx(31000,tx),"OFF sent");
    check(e.NextTx(31100,tx),"verification query"); state(e,true,31110);
    check(e.Snapshot().completedId!=200,"opposite state cannot confirm");
    for(uint64_t t=31800;t<=34000;t+=100)e.NextTx(t,tx);
    check(e.Snapshot().completedId==200&&e.Snapshot().result==RelayResult::Timeout&&!e.Snapshot().known,"timeout invalidates cache");
    confirmed(e,201,false,35000); confirmed(e,202,true,36000);
    power(e,5,40000); check(!e.LoadBlink(40003),"one high sample insufficient");
    power(e,5,45000); check(e.LoadBlink(45003),"two high samples blink");
    power(e,3,50000); check(e.LoadBlink(50003),"dead band holds load");
    power(e,2,55000); check(e.LoadBlink(55003),"one low sample insufficient");
    power(e,2,60000); check(!e.LoadBlink(60003),"two low samples stop blink");
    power(e,6,65000); power(e,6,70000); check(e.LoadBlink(70003),"load reentry");
    state(e,true,84000); check(!e.LoadBlink(85002),"stale metering stops blink");
    uint8_t reset[]={0xaa,0xff,0,0x55,0xaa,0xff,0xff,0x55};for(auto b:reset)e.Feed(b,86000);
    check(e.Snapshot().resetEvents==1,"only confirmed long press dispatches factory reset");
    check(e.Request(203,false,87000),"disconnect command");e.Disconnect();
    check(e.Snapshot().completedId==203&&e.Snapshot().result==RelayResult::TransportError&&!e.Snapshot().known,"transport failure never succeeds");
    RelayEngine late; check(late.Request(1,false,0),"late fixture");late.NextTx(0,tx);late.NextTx(100,tx);state(late,false,3000);late.NextTx(3000,tx);
    check(late.Snapshot().result==RelayResult::Timeout,"expired replies do not confirm");
    RelayEngine meter;
    // Numerical replies have no command ID: accept only one pending query.
    check(meter.NextTx(0,tx)&&tx.bytes[1]==0xa4,"initial relay query");state(meter,false,1);
    uint8_t unsolicited[]={0xff,0x40,0x1b,0x55};for(auto b:unsolicited)meter.Feed(b,20);
    check(!meter.Snapshot().voltageValid,"unsolicited number ignored");
    check(meter.NextTx(500,tx)&&tx.bytes[1]==0xa5,"voltage poll");
    for(auto b:unsolicited)meter.Feed(b,510); // 109.0 V = 6976 / 64.
    check(meter.Snapshot().voltageRaw==6976&&meter.Snapshot().voltageValid,"fragmented voltage raw");
    check(meter.NextTx(1500,tx)&&tx.bytes[1]==0xa6,"RMS current poll");
    uint8_t amps[]={0xff,0x80,0x01,0x55};for(auto b:amps)meter.Feed(b,1510);
    check(meter.Snapshot().currentRaw==384&&meter.Snapshot().currentValid,"1.5 A raw");
    check(meter.NextTx(5000,tx)&&tx.bytes[1]==0xa4,"relay keeps priority");state(meter,false,5001);
    check(meter.NextTx(5002,tx)&&tx.bytes[1]==0xa7,"power measurement");
    uint8_t watts[]={0xff,0xf4,1,0x55};for(auto b:watts)meter.Feed(b,5003);
    check(meter.Snapshot().powerRaw==500&&meter.Snapshot().powerValid,"500 W raw");
    check(meter.NextTx(5500,tx)&&tx.bytes[1]==0xa5,"second voltage poll");
    uint8_t invalid[]={0xff,0xff,0xff,0x55};for(auto b:invalid)meter.Feed(b,5501);
    check(!meter.Snapshot().voltageValid,"out of range voltage unavailable");
    check(meter.NextTx(6500,tx)&&tx.bytes[1]==0xa6,"second current poll");
    meter.NextTx(7100,tx);check(!meter.Snapshot().currentValid,"query timeout invalidates current");
    for(auto b:amps)meter.Feed(b,7110);
    check(!meter.Snapshot().currentValid,"late response ignored during quiet interval");
    meter.Disconnect();check(!meter.Snapshot().powerValid,"disconnect invalidates metering");
    std::printf("relay_engine=PASS checks=%d commands=100\n",checks);return 0;
}
