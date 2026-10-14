#!/usr/bin/env python3
"""Build public OTA artifacts using a pinned public template, without device dumps."""
import argparse
import hashlib
import json
import os
import shutil
import subprocess
import urllib.request
from pathlib import Path
from fwlib import require,load_release,read_file,atomic_write
from ota import pack,catalog
ROOT=Path(__file__).resolve().parents[1]
WORK=ROOT/'firmware/matter'

def call(argv,**kwargs):subprocess.run(list(map(str,argv)),check=True,**kwargs)
def main():
    p=argparse.ArgumentParser(description=__doc__)
    p.add_argument('--private',type=Path,required=True,help='簽章私鑰，不會進入容器或附件')
    p.add_argument('--output',type=Path,required=True)
    p.add_argument('--template',type=Path,help='已下載的固定公開基底 BIN')
    p.add_argument('--sdk',type=Path,default=WORK/'deps/connectedhomeip')
    p.add_argument('--skip-compile',action='store_true',help='使用剛完成的本機建置產物')
    a=p.parse_args();config=json.loads((ROOT/'version.json').read_text());lock=json.loads((ROOT/'third_party/release-base.json').read_text())
    out=a.output.resolve();require(not out.exists(),'輸出已存在，請使用新的版本目錄');out.mkdir(parents=True)
    base=ROOT/'artifacts/update-base';base.mkdir(parents=True,exist_ok=True)
    image=a.template or base/'matter-8m-region.bin';manifest=image.with_suffix('.json')
    if not image.exists():
        with urllib.request.urlopen(lock['url'],timeout=60) as r:atomic_write(image,r.read(0x800001),mode=0o644)
    require(hashlib.sha256(image.read_bytes()).hexdigest()==lock['sha256'],'公開基底 hash 不符')
    if not manifest.exists():
        with urllib.request.urlopen(lock['manifest_url'],timeout=60) as r:atomic_write(manifest,r.read(64*1024),mode=0o644)
    root,_=load_release(image,manifest)
    vendor=ROOT/'artifacts/update-vendor'
    for name in ('libapmib.so','libc.so.0','libgcc_s.so.1','ld-uClibc.so.0'):
        path=vendor/'lib'/name
        if not path.exists():atomic_write(path,read_file(root,'lib/'+name))
    call(['python3',ROOT/'tools/generate_update.py'])
    if not a.skip_compile:
        docker=['docker','run','--rm','-v',str(WORK)+':/work','-v',str(vendor)+':/firmware:ro','incipio-public-build:v0.1.0-preview']
        for script in ('build_updates.sh','build_uclibc_matter_device.sh','build_setup_device.sh','build_setup_legacy.sh'):
            call([*docker,'sh','tools/'+script])
    call(['python3',ROOT/'tools/build.py','matter','--binaries',WORK/'artifacts/softap-device-code','--base',image,'--template-manifest',manifest,'--output',out/'matter-8m-region.bin'])
    exec_binaries=ROOT/'firmware/exec-test/artifacts'
    exec_binaries.mkdir(parents=True,exist_ok=True)
    for name,source in [('ck-wificfg',WORK/'artifacts/softap/ck-wificfg'),
                        ('ck-wifiscan',WORK/'artifacts/softap-device-code/ck-wifiscan'),
                        ('ck-lease',WORK/'artifacts/softap-device-code/ck-lease')]:
        require(source.exists(),'缺少共用服務：'+str(source));shutil.copy2(source,exec_binaries/name)
    call(['python3',ROOT/'tools/build.py','exec-test','--binaries',exec_binaries,'--base',image,'--template-manifest',manifest,'--output',out/'exec-test-8m-region.bin'])
    package=out/'matter.ota'
    pack(out/'matter-8m-region.bin',out/'matter-8m-region.json',a.private,config['software_version'],config['version'],package)
    exec_package=out/'exec-test.ota'
    pack(out/'exec-test-8m-region.bin',out/'exec-test-8m-region.json',a.private,config['software_version'],config['version'],exec_package)
    tool=a.sdk/'src/app/ota_image_tool.py'
    require(tool.exists(),'缺少固定版本 Matter SDK，無法產生 Matter OTA 容器')
    if tool.exists():
        call(['python3',tool,'create','-v','0xFFF1','-p','0x8000','-vn',config['software_version'],'-vs',config['version'],'-da','sha256',package,out/'matter-matter-ota.bin'])
    catalog([package,exec_package],config['catalog_url'].rsplit('/',1)[0],out/'index.json')
    files=sorted(p for p in out.iterdir() if p.is_file());(out/'SHA256SUMS').write_text(''.join(hashlib.sha256(p.read_bytes()).hexdigest()+'  '+p.name+'\n' for p in files))
    print('公開更新包完成：'+str(out))

if __name__=='__main__':main()
