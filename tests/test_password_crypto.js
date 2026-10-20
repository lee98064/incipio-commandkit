const assert=require('node:assert/strict');
const crypto=require('node:crypto');
const {pbkdf2,hex,hmac256}=require('../firmware/matter/src/update/password.js');
for(const [password,iterations]of [['fixture password',1],['fixture password',2],['中文密碼123',4096],['x'.repeat(100),4096],['fixture password',600000]]){
  const salt=Buffer.from('00112233445566778899aabbccddeeff','hex'),bytes=Buffer.from(password);
  assert.equal(hex(pbkdf2(bytes,salt,iterations)),crypto.pbkdf2Sync(bytes,salt,iterations,32,'sha256').toString('hex'));
}
for(const iterations of [0,600001,-1])assert.throws(()=>pbkdf2(Buffer.from('password'),Buffer.alloc(16),iterations));
const key=crypto.randomBytes(32),message=Buffer.from('ck-admin-login-v1\n'+'a'.repeat(64));
assert.equal(hex(hmac256(key,message)),crypto.createHmac('sha256',key).update(message).digest('hex'));
console.log('Password worker PBKDF2/HMAC agrees with independent Node crypto, including 600,000 rounds.');

// Load both scripts in one browser global: names must not collide.
const vm=require("node:vm"),fs=require("node:fs"),context=vm.createContext({window:{},console});
vm.runInContext(fs.readFileSync(require.resolve("../firmware/matter/src/update/password.js"),"utf8"),context);
vm.runInContext(fs.readFileSync(require.resolve("../firmware/matter/src/update/update.js"),"utf8"),context);
assert.equal(typeof context.window.CKPassword.derive,"function");
console.log("Password and dashboard scripts coexist in one browser global.");
