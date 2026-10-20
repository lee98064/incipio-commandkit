#!/usr/bin/env python3
"""Execute original Boa MIPS validation/planning in Unicorn, without an OS.

Requires unicorn==2.1.4. Every external operation is a stub; MTD writes are
represented only by a plan, then applied to an in-memory bytearray.
"""
import argparse
import hashlib
import json
import lzma
import struct
import sys
from pathlib import Path
from unicorn import Uc, UC_ARCH_MIPS, UC_MODE_MIPS32, UC_MODE_BIG_ENDIAN, UC_HOOK_CODE
from unicorn.mips_const import (UC_MIPS_REG_A0, UC_MIPS_REG_A1, UC_MIPS_REG_A2,
    UC_MIPS_REG_A3, UC_MIPS_REG_V0, UC_MIPS_REG_RA, UC_MIPS_REG_SP, UC_MIPS_REG_PC,
    UC_MIPS_REG_T9)
from analyze_elf import dynsym

ROOT = Path(__file__).resolve().parents[2]
sys.path.insert(0, str(ROOT/'tools'))
from factory_image import inspect, CANONICAL_MARK, journal_initializer
from fwlib import sha


def boot_checks(loader, flash):
    """Run the vendor selector/checksums with only SPI copy/console/poll stubbed."""
    u = Uc(UC_ARCH_MIPS, UC_MODE_MIPS32 | UC_MODE_BIG_ENDIAN)
    u.mem_map(0,0x1000000)
    u.mem_map(0x1d000000,0x800000)
    u.mem_write(0x400000,loader)
    u.mem_write(0x1d000000,bytes(flash))
    def stub(name):
        def hook(u,address,size,data):
            if name == 'spi_copy':
                dest,offset,n=[u.reg_read(r) for r in (UC_MIPS_REG_A0,UC_MIPS_REG_A1,UC_MIPS_REG_A2)]
                assert offset+n <= len(flash)
                u.mem_write(dest & 0x1fffffff,bytes(flash[offset:offset+n]))
            u.reg_write(UC_MIPS_REG_V0,0)
            u.reg_write(UC_MIPS_REG_PC,u.reg_read(UC_MIPS_REG_RA))
        return hook
    for address,name in [(0x80404a94,'spi_copy'),(0x804079cc,'console'),
                          (0x804077a4,'console'),(0x80407de0,'poll')]:
        u.hook_add(UC_HOOK_CODE,stub(name),begin=address,end=address)
    u.hook_add(UC_HOOK_CODE,lambda u,a,n,d:u.emu_stop(),begin=0x80900000,end=0x80900000)
    u.reg_write(UC_MIPS_REG_SP,0x808ff000)
    u.reg_write(UC_MIPS_REG_RA,0x80900000)
    u.reg_write(UC_MIPS_REG_A0,1)
    u.emu_start(0x804086b0,0x80900004,timeout=30_000_000,count=150_000_000)
    assert u.reg_read(UC_MIPS_REG_V0) != 0
    return struct.unpack('>I',u.mem_read(0x40fdb0,4))[0]


class Boa:
    def __init__(self, binary, flash, image, dual=True):
        self.u = Uc(UC_ARCH_MIPS, UC_MODE_MIPS32 | UC_MODE_BIG_ENDIAN)
        self.flash, self.image, self.dual = flash, image, dual
        self.messages, self.lines, self.fds = [], [], {}
        self.redirect, self.exited, self.next_fd = None, False, 20
        self.alloc_next = 0x1800000
        symbols, deps, ph, tags = dynsym(binary)
        self.u.mem_map(0x400000, 0x400000)
        for t, o, v, _, fs, ms, _, _ in ph:
            if t == 1:
                self.u.mem_write(v, binary[o:o+fs])
        self.u.mem_map(0x1000000, 0x1000000)
        self.u.mem_map(0x3000000, 0x1000)
        self.u.mem_map(0x70000000, 0x100000)
        # Dynamic imports in the vendor image are pointers to its MIPS stubs.
        imports = json.loads(args.imports.read_text())['imports']
        for row in imports:
            if 'plt' in row and row.get('type') == 'FUNC':
                self.hook(row['plt'], row['name'])
        for address, name in [(0x4132b4, 'req_get_cstream_var'),
                (0x412160, 'req_format_write'), (0x40e6f0, 'send_redirect_perm'),
                (0x441988, 'page_header'), (0x41e0ec, 'write_line_to_file'),
                (0x41f66c, 'kill_processes'), (0x40b4d0, 'clear_fwupload_shm')]:
            self.hook(address, name)
        self.u.hook_add(UC_HOOK_CODE, lambda u, a, n, d: u.emu_stop(), begin=0x3000000, end=0x3000000)
        self.request, self.upload = 0x1000000, 0x1100000
        prefix = b'Content-Disposition: form-data; name="binary"; filename="first-install.bin"\r\n'
        prefix += b'X-Padding: ' + b'a' * (256-len(prefix)-11-4-42)
        prefix += b'\r\nContent-Type: application/octet-stream\r\n\r\n'
        # Keep the uploaded kernel aligned for the original MIPS FirmwareUpgrade.
        if len(prefix) % 4:
            prefix = b'X:' + b'a' * ((-len(prefix)-4) % 4) + b'\r\n' + prefix
        assert len(prefix) % 4 == 0
        self.body = prefix + image + b'\r\n--end--\r\n'
        self.u.mem_write(self.upload, self.body)
        self.put(self.request+0x98, self.upload)
        self.put(self.request+0x9c, len(self.body))
        self.offset = len(prefix)

    def hook(self, address, name):
        self.u.hook_add(UC_HOOK_CODE, lambda u, a, n, d: self.external(name), begin=address, end=address)

    def read(self, p, n): return bytes(self.u.mem_read(p, n))
    def string(self, p):
        if not p: return ''
        b = bytearray()
        while len(b) < 20000:
            c = self.read(p+len(b), 1)
            if c == b'\0': return b.decode('latin1')
            b += c
        raise ValueError('unterminated string')
    def put(self, p, n): self.u.mem_write(p, struct.pack('>I', n & 0xffffffff))
    def alloc(self, data):
        p = self.alloc_next
        self.u.mem_write(p, data+b'\0'); self.alloc_next += (len(data)+16) & ~7
        return p
    def external(self, name):
        u = self.u
        a, b, c, d = [u.reg_read(r) for r in [UC_MIPS_REG_A0, UC_MIPS_REG_A1, UC_MIPS_REG_A2, UC_MIPS_REG_A3]]
        result = 0
        if name == 'memcmp': result = (self.read(a,c) > self.read(b,c)) - (self.read(a,c) < self.read(b,c))
        elif name == 'strcmp': result = (self.string(a) > self.string(b)) - (self.string(a) < self.string(b))
        elif name in ('strcpy', 'memcpy', 'memmove'):
            data = self.string(b).encode('latin1')+b'\0' if name == 'strcpy' else self.read(b,c)
            u.mem_write(a,data); result = a
        elif name == 'memset': u.mem_write(a, bytes([b & 255])*c); result = a
        elif name == 'strlen': result = len(self.string(a))
        elif name == 'strstr':
            pos = self.string(a).find(self.string(b)); result = a+pos if pos >= 0 else 0
        elif name == 'strchr':
            pos = self.string(a).find(chr(b)); result = a+pos if pos >= 0 else 0
        elif name == 'req_get_cstream_var': result = self.alloc(b'/upload.htm')
        elif name == 'req_format_write': self.messages.append(self.string(b)); result = 1
        elif name == 'send_redirect_perm': self.redirect = self.string(b)
        elif name == 'sprintf':
            fmt = self.string(b)
            # The planner formats decimal offsets, lengths and shm IDs only.
            if fmt == '%d': text = str(c if c < 2**31 else c-2**32)
            elif fmt == '%d\n': text = str(c)+'\n'
            else: text = fmt.replace('%d',str(c),1).replace('%x',format(c,'x'),1)
            u.mem_write(a,text.encode()+b'\0'); result = len(text)
        elif name in ('printf','puts','fprintf'): result = 1
        elif name == 'apmib_get':
            assert a == 0x514
            self.put(b, int(self.dual)); result = 1
        elif name == 'fopen':
            assert self.string(a) == '/proc/bootbank'
            result = 9
        elif name == 'fgets': u.mem_write(a,b'2\0'); result = a
        elif name in ('fclose','page_header','clear_fwupload_shm','kill_processes','system','sleep','usleep','sync'): pass
        elif name == 'open':
            path = self.string(a)
            assert path in ('/dev/mtdblock0','/dev/mtdblock1','/dev/mtdblock3','/dev/mtdblock4'), path
            result = self.next_fd; self.next_fd += 1; self.fds[result] = [path,0]
        elif name == 'lseek': self.fds[a][1] = b; result = b
        elif name == 'read':
            path, offset = self.fds[a]
            base = {'/dev/mtdblock0':0,'/dev/mtdblock1':0x130000,'/dev/mtdblock3':0x400000,'/dev/mtdblock4':0x530000}[path]
            u.mem_write(b,self.flash[base+offset:base+offset+c]); self.fds[a][1] += c; result = c
        elif name == 'close': pass
        elif name == 'write_line_to_file':
            path, text = self.string(a), self.string(c)
            if path == '/var/fwd.conf':
                if b == 1: self.lines = []
                self.lines.append(text)
            else: assert path == '/var/fwd.ready', path
            result = 1
        elif name == 'exit': self.exited = True; u.emu_stop(); return
        else: raise RuntimeError('unstubbed external: '+name)
        u.reg_write(UC_MIPS_REG_V0, result & 0xffffffff)
        u.reg_write(UC_MIPS_REG_PC, u.reg_read(UC_MIPS_REG_RA))

    def call(self, address, values):
        self.u.reg_write(UC_MIPS_REG_SP, 0x700ff000)
        self.u.reg_write(UC_MIPS_REG_RA, 0x3000000)
        self.u.reg_write(UC_MIPS_REG_T9, address)
        for r,v in zip([UC_MIPS_REG_A0,UC_MIPS_REG_A1,UC_MIPS_REG_A2,UC_MIPS_REG_A3],values): self.u.reg_write(r,v)
        self.u.emu_start(address, 0x3000004, timeout=30_000_000, count=100_000_000)

    def validate(self):
        self.call(0x442f14,[self.request])
        return self.redirect == '/countDownPage.htm'

    def plan(self):
        self.call(0x4438f8,[self.upload,len(self.body),0,0x1700000])
        assert self.exited and len(self.lines) == 8, self.lines
        plans = []
        for i in range(0,len(self.lines),4):
            path, seek, length, offset = self.lines[i:i+4]
            seek,length,offset = map(int,(seek,length,offset))
            plans.append({'device':path,'seek':seek,'length':length,'upload_offset':offset})
        return plans


def main():
    global args
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument('--boa',type=Path,required=True)
    p.add_argument('--imports',type=Path,required=True)
    p.add_argument('--reference',type=Path,required=True)
    p.add_argument('--image',type=Path,required=True)
    p.add_argument('--output',type=Path,required=True)
    p.add_argument('--bootloader',type=Path)
    args = p.parse_args()
    binary, flash, image = args.boa.read_bytes(), args.reference.read_bytes(), args.image.read_bytes()
    assert sha(binary) in ('2e4b024ca170468c58ace898807f0364c8b23adc6ef234ebc64f9589a464a65a',
                           '175c66efa68eabda38c8ca6990e824ddcc41dfec0219bc739bce7b8ffe0a587a')
    inspect(image)
    boa = Boa(binary,flash,image)
    assert boa.validate(), boa.messages
    plans = boa.plan()
    assert [(p['device'],p['seek'],p['length']) for p in plans] == [
        ('/dev/mtdblock0',0x10000,0x120000),('/dev/mtdblock1',0,0x2b0000)], plans
    result = bytearray(flash)
    for item in plans:
        base = 0 if item['device'] == '/dev/mtdblock0' else 0x130000
        n = item['length']; offset = item['upload_offset']
        result[base+item['seek']:base+item['seek']+n] = boa.read(boa.upload+offset,n)
    assert result[:0x10000] == flash[:0x10000] and result[0x3e0000:] == flash[0x3e0000:]
    assert result[0x3c0000:0x3e0000] in (journal_initializer(False),journal_initializer(True))
    # The compressed kernel and embedded loader stay byte-for-byte intact.
    original_n=struct.unpack_from('>I',flash,0x41000c)[0]
    assert result[0x10010:0x10010+original_n] == flash[0x410010:0x410010+original_n]
    original_decoder=lzma.LZMADecompressor(format=lzma.FORMAT_ALONE)
    original_kernel=original_decoder.decompress(flash[0x412818:0x410010+original_n])
    factory_decoder=lzma.LZMADecompressor(format=lzma.FORMAT_ALONE)
    factory_kernel=factory_decoder.decompress(result[0x12818:0x130000])
    assert original_decoder.eof and factory_decoder.eof
    assert original_kernel == factory_kernel
    active_mark = struct.unpack_from('>I',flash,0x410008)[0]
    mark = struct.unpack_from('>I',result,0x10008)[0]
    assert mark == active_mark+1 and mark > active_mark
    normalized = bytearray(result[0x10000:0x130000]);struct.pack_into('>I',normalized,8,CANONICAL_MARK)
    for offset in (32,0x120000+16+100,-16):
        damaged = bytearray(image);damaged[offset] ^= 1
        assert not Boa(binary,flash,bytes(damaged)).validate(), offset
    report = {'status':'pass','method':'original MIPS Boa executed in Unicorn 2.1.4; every external operation stubbed',
        'boa_sha256':sha(binary),'image_sha256':sha(image),'physical_flash_access':False,
        'actual_mtd_driver_tested':False,'factory_boot_tested':False,
        'stock_bootbank':2,'dual_firmware':True,'writes':plans,
        'kernel_bankmark':hex(mark),'canonical_factory_kernel_sha256':sha(normalized),
        'preserved_ranges':[[0,0x10000],[0x3e0000,0x800000]],
        'journal_initializer':'auto-v1' if result[0x3d0000:0x3d000f] == b'CKAUTOINIT-V1\r\n' else 'erased',
        'damaged_kernel_rootfs_trailer_rejected':True}
    report['decompressed_kernel_unchanged']=True
    report['decompressed_kernel_sha256']=sha(factory_kernel)
    if args.bootloader:
        loader=args.bootloader.read_bytes()
        assert boot_checks(loader,result) == 1
        broken=bytearray(result);broken[0x130100]^=1
        assert boot_checks(loader,broken) == 2
        report.update({'bootloader_sha256':sha(loader),
                       'original_boot_selector_and_checksums_passed':True,
                       'corrupt_bank1_rootfs_selects_bank2_in_emulator':True})
    args.output.parent.mkdir(parents=True,exist_ok=True)
    args.output.write_text(json.dumps(report,indent=2)+'\n')
    print(json.dumps(report,indent=2))


if __name__ == '__main__': main()
