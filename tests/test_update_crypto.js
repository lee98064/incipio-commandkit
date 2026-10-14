const assert=require('node:assert/strict');
const crypto=require('node:crypto');
const {sha256,hex}=require('../firmware/matter/src/update/update.js');
for(const n of [0,1,55,56,63,64,65,4096,0x290100]){
  const bytes=crypto.randomBytes(n);
  assert.equal(hex(sha256(bytes)),crypto.createHash('sha256').update(bytes).digest('hex'));
}
console.log('Browser SHA-256: 9 independent Node.js comparisons passed.');
