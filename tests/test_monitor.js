const assert=require('node:assert/strict');
const {meterView,hmac256,hex}=require('../firmware/matter/src/update/update.js');
const crypto=require('node:crypto');
for(const message of ['Hi There','commandkit/protocol/v1\n'+'ab'.repeat(32)+'\nhomekit']){
  const key=Uint8Array.from({length:32},(_,i)=>i),data=new TextEncoder().encode(message);
  assert.equal(hex(hmac256(key,data)),crypto.createHmac('sha256',key).update(data).digest('hex'));
}
const sample={available:true,sample_age_ms:100,voltage_mv:122313,current_ma:12,power_mw:0,energy_mwh:'1234567',relay_on:false};
let v=meterView(sample);
assert.deepEqual([v.voltage,v.current,v.power,v.energy],['122.31','0.012','0.0','1.234567']);
assert.equal(v.complete,true);assert.equal(v.relay,'插座已關閉');
assert.equal(meterView({...sample,energy_mwh:'0'}).energy,'0.000000');
assert.equal(meterView({...sample,energy_mwh:'4611686018427387904'}).energy,'4611686018427.387904');
for(const d of [null,{...sample,available:false},{...sample,sample_age_ms:5001},{...sample,sample_age_ms:-1}]){
  v=meterView(d);assert.equal(v.live,false);
  assert.deepEqual([v.voltage,v.current,v.power,v.energy],['—','—','—','—']);
}
v=meterView({...sample,voltage_mv:null,current_ma:-1,power_mw:2000001,energy_mwh:'4611686018427387905'});
assert.equal(v.complete,false);assert.deepEqual([v.voltage,v.current,v.power,v.energy],['—','—','—','—']);
for(const invalid of [1234567,'1e6','-1','1.5','001','<script>',null])assert.equal(meterView({...sample,energy_mwh:invalid}).energy,'—');
console.log('Monitor: units, valid zero, exact 64-bit kWh, stale/unavailable data and invalid readings passed.');
