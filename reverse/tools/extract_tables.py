#!/usr/bin/env python3
"""Export the exact meter frames/constants and updater's bank device tables."""
import json
import struct
from pathlib import Path
from analyze_elf import dynsym

OUT=Path(__file__).resolve().parents[1]

def reader(bank,name):
    d=(OUT/f'binaries/{bank}/{name}').read_bytes();_,_,ph,_=dynsym(d)
    def get(va,n):
        for t,o,v,p,fs,ms,fl,al in ph:
            if t==1 and v<=va and va+n<=v+fs:
                offset=o+va-v;return offset,d[offset:offset+n]
        raise ValueError(f'unmapped address {va:x}')
    return get

def main():
    meters={}
    for bank,framebase,floatbase in [('130000',0x5ffc78,0x5ad980),('530000',0x600b00,0x5ae820)]:
        get=reader(bank,'homekitserver');frames=[];constants=[]
        for i,meaning in enumerate(['off','on','A2_unknown','A3_unknown','relay_query','voltage_query','current_query','power_query']):
            va=framebase+i*16;o,blob=get(va,14)
            frames.append(dict(meaning=meaning,address=hex(va),file_offset=hex(o),hex=blob.hex(' ')))
        for i in range(3):
            va=floatbase+i*8;o,blob=get(va,8)
            constants.append(dict(address=hex(va),file_offset=hex(o),value=struct.unpack('>d',blob)[0]))
        va=0x5ad998 if bank=='130000' else 0x5ae81c;o,blob=get(va,4)
        constants.append(dict(address=hex(va),file_offset=hex(o),value=struct.unpack('>f',blob)[0]))
        pointer_va=0x5ed7c8 if bank=='130000' else 0x5ee668
        pointer_offset,blob=get(pointer_va,4)
        string_va=struct.unpack('>I',blob)[0]
        string_offset,blob=get(string_va,64)
        uart=dict(pointer_address=hex(pointer_va),pointer_file_offset=hex(pointer_offset),
                  string_address=hex(string_va),string_file_offset=hex(string_offset),
                  device=blob.split(b'\0')[0].decode('ascii'),
                  open_function='0x00433178' if bank=='130000' else '0x004335e8',
                  baud=19200,data_bits=8,parity='N',stop_bits=1)
        meters[bank]=dict(frames=frames,constants=constants,uart=uart)
    (OUT/'evidence/meter-data.json').write_text(json.dumps(meters,indent=2)+'\n')
    get=reader('530000','upgfw');tables=[];signatures=[]
    for va in [0x576680,0x576684,0x576688,0x57668c]:
        o,blob=get(va,4);target=struct.unpack('>I',blob)[0];to,text=get(target,64)
        tables.append(dict(address=hex(va),file_offset=hex(o),pointer=hex(target),value=text.split(b'\0')[0].decode('ascii')))
    for va in [0x532cb4,0x532cbc,0x532cc4,0x532ccc,0x532ac8,0x532b20]:
        o,blob=get(va,8);signatures.append(dict(address=hex(va),file_offset=hex(o),value=blob.split(b'\0')[0].decode('ascii')))
    (OUT/'evidence/updater-tables.json').write_text(json.dumps(dict(bank='530000',tables=tables,signatures=signatures),indent=2)+'\n')

if __name__=='__main__':main()
