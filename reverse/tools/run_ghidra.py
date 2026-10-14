#!/usr/bin/env python3
"""Run independent Ghidra projects for both banks and the unpacked bootloader."""
import argparse
import concurrent.futures
import json
import os
import shutil
import subprocess
from pathlib import Path

OUT = Path(__file__).resolve().parents[1]

def analyze(target, headless):
    bank, name, binary, symbols = target
    project = OUT / 'ghidra' / bank / name
    project.mkdir(parents=True, exist_ok=True)
    dest = OUT / 'decompiled' / bank / name
    cmd = [headless,str(project),'Incipio','-import',str(binary),'-overwrite',
           '-scriptPath',str(OUT/'tools'),'-preScript','RecoverSymbols.java',str(symbols),
           '-postScript','CorrectTypes.java',bank,
           '-postScript','ExportAnalysis.java',str(dest),
           '-analysisTimeoutPerFile','180','-max-cpu','2']
    if bank == 'bootloader':
        cmd += ['-loader','BinaryLoader','-loader-baseAddr','0x80400000',
                '-processor','MIPS:BE:32:default','-cspec','default']
    log = OUT / 'evidence' / f'ghidra_{bank}_{name}.log'
    with log.open('w') as f:
        result = subprocess.run(cmd,stdout=f,stderr=subprocess.STDOUT,env=os.environ.copy())
    summary = dest/'summary.txt'
    return dict(bank=bank,name=name,returncode=result.returncode,
                summary=summary.read_text() if summary.exists() else None,
                command=cmd,log=str(log.relative_to(OUT)))

def main():
    parser=argparse.ArgumentParser();parser.add_argument('--headless',required=True)
    parser.add_argument('--workers',type=int,default=2);args=parser.parse_args()
    items=json.loads((OUT/'evidence/selected-binaries.json').read_text())
    # Decompile important applications first; all nine selections are retained per bank.
    order={'homekitserver':1,'upgfw':2,'phytrex_tools':3,'WACServer':4,'boa':5}
    items.sort(key=lambda x:(order.get(x['name'],6),0 if x['bank']=='530000' else 1))
    targets=[('bootloader','bootloader_unpacked.bin',OUT/'images/bootloader_unpacked.bin','raw')]
    targets += [(i['bank'],i['name'],OUT/i['binary'],OUT/i['symbols']) for i in items]
    results=[]
    with concurrent.futures.ThreadPoolExecutor(max_workers=args.workers) as pool:
        futures=[pool.submit(analyze,t,args.headless) for t in targets]
        for future in concurrent.futures.as_completed(futures):
            result=future.result();results.append(result)
            (OUT/'evidence/ghidra-runs.json').write_text(json.dumps(results,indent=2)+'\n')
            print(result['bank'],result['name'],result['returncode'],result['summary'],flush=True)
    if any(r['summary'] is None or r['returncode'] != 0 for r in results):
        raise SystemExit('One or more exports failed; inspect ghidra-runs.json and logs.')

if __name__=='__main__':main()
