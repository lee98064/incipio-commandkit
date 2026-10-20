"""Reproducible, hash-bound 10219 LED observer patch. Never accesses an outlet."""
import hashlib,json,struct,subprocess
from pathlib import Path
ROOT=Path(__file__).resolve().parents[1]
ORIGINAL_SHA='2d50339436759f3d602c150fb4f1a42f0fdf122fc18e9a4f54f6e6b07d7a0c62'
VADDR=0x630000
# Every site is an original read() call, with its delay slot preserved.
READS={0x43335c:'ck_hap_read_relay',0x433cd0:'ck_hap_read_power',0x434528:'ck_hap_read_relay'}
def sha(b):return hashlib.sha256(b).hexdigest()
def build_payload(dest,test=False):
    from build import llvm_tool,FLAGS
    dest=Path(dest);dest.mkdir(parents=True,exist_ok=True);src=ROOT/'firmware/homekit-led/src'
    objects=[]
    for name,path in [('hook',src/'hook.c'),('bridge',src/'bridge.S'),('syscall',ROOT/'firmware/matter/src/linux_o32.S')]:
        obj=dest/(name+'.o');subprocess.run([llvm_tool('clang'),*FLAGS,*( ['-DCK_LED_HOOK_TEST'] if test else []),'-c',str(path),'-o',str(obj)],check=True);objects.append(obj)
    elf=dest/'hook.elf'
    subprocess.run([llvm_tool('ld.lld'),'-m','elf32btsmip','--gc-sections',*[v for name in ['ck_hap_read_relay','ck_hap_read_power','ck_hap_identify','ck_hap_identify_start']+(['ck_hap_test_entry'] if test else []) for v in ['-u',name]],'--no-undefined','--build-id=none','-T',str(src/'payload.ld'),*map(str,objects),'-o',str(elf)],check=True)
    symbols={}
    for line in subprocess.check_output([llvm_tool('llvm-nm'),'-n',str(elf)],text=True).splitlines():
        v=line.split()
        if len(v)==3:symbols[v[2]]=int(v[0],16)
    raw=dest/'hook.bin';subprocess.run([llvm_tool('llvm-objcopy'),'-O','binary',str(elf),str(raw)],check=True)
    asm=subprocess.check_output([llvm_tool('llvm-objdump'),'-d',str(elf)],text=True)
    import re
    # Probe-only assembly sections are discarded by the linker below or must
    # be excluded: this payload never calls LL/SC/TLS CPU probes.
    if re.search(r'\s(?:ll|sc|sync|rdhwr|lwl|lwr|swl|swr|lwc1|swc1|ldc1|sdc1|pref)\s',asm):raise ValueError('unsupported hook ISA')
    (dest/'symbols.json').write_text(json.dumps(symbols,indent=2)+'\n')
    return raw.read_bytes(),symbols

def patch(original,payload,symbols,test=False):
    if sha(original)!=ORIGINAL_SHA:raise ValueError('HomeKit LED: original 10219 hash mismatch')
    b=bytearray(original);edits=[]
    def edit(off,old,new):
        if b[off:off+len(old)]!=old:raise ValueError('HomeKit LED patch site mismatch: '+hex(off))
        b[off:off+len(old)]=new;edits.append({'offset':off,'old':old.hex(),'new':new.hex()})
    def jump(addr,target,old,link=False):edit(addr-0x400000,old,struct.pack('>I',(0x0c000000 if link else 0x08000000)|(target>>2)))
    for addr,name in READS.items():jump(addr,symbols[name],bytes.fromhex('0320f809'),True)
    # Identify_LEDSetup is also called during GPIO initialization. All LED
    # levels belong to ck-led; suppress this legacy low-level entry entirely.
    edit(0x432d24-0x400000,original[0x32d24:0x32d30],bytes.fromhex('03e000080000102100000000'))
    for addr,name in [(0x432ea4,'ck_hap_identify'),(0x43247c,'ck_hap_identify_start')]:
        jump(addr,symbols[name],original[addr-0x400000:addr-0x400000+4]);edit(addr-0x400000+4,original[addr-0x400000+4:addr-0x400000+8],b'\0'*4)
    edit(0x33048,bytes.fromhex('0320f80924060006'),b'\0'*8) # only GPIO6 configuration; retain GPIO0/5
    # Reuse the reserved PT_NULL slot, keeping the mapped PHDR table and all
    # original load segments/addresses unchanged. BSS comes from p_memsz.
    ph=52+7*32;old=bytes(b[ph:ph+32]);assert struct.unpack('>8I',old)==(0,0,0,0,0,0,0,4)
    at=(len(b)+65535)&~65535;end=symbols['__payload_end'];assert VADDR+len(payload)<=end<VADDR+65536
    edit(ph,old,struct.pack('>8I',1,at,VADDR,VADDR,len(payload),end-VADDR,7,65536))
    if test:edit(24,original[24:28],struct.pack('>I',symbols['ck_hap_test_entry']))
    b.extend(b'\0'*(at-len(b)));b.extend(payload)
    record={'original_sha256':sha(original),'original_size':len(original),'payload_offset':at,'payload_size':len(payload),'payload_memsize':end-VADDR,'edits':edits,'patched_sha256':sha(b)}
    return bytes(b),record

def restore(patched,record):
    b=bytearray(patched)
    for e in record['edits']:
        off=e['offset'];new=bytes.fromhex(e['new']);assert b[off:off+len(new)]==new;b[off:off+len(new)]=bytes.fromhex(e['old'])
    b=b[:record['original_size']];assert sha(b)==ORIGINAL_SHA;return bytes(b)
