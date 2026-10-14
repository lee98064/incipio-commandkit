#!/usr/bin/env python3
"""Build the pinned SDK's native macOS commissioner in separate host directories."""
import hashlib,json,os,platform,subprocess,urllib.request,zipfile
from pathlib import Path

OUT=Path(__file__).resolve().parents[1]
SDK=OUT/'deps/connectedhomeip'
EV=OUT/'evidence/chip-tool-macos'
HOST=OUT/'deps/host-tools'
VENV=OUT/'.host-sdk-venv'
BUILD=OUT/'artifacts/chip-tool-macos'
COMMIT='3bcdd56ba54fb88b2afb4bfef575014671df7aa7'
GN_REV='97b68a0bb62b7528bc3491c7949d6804223c2b82'
ZAP_VERSION='v2026.05.12-nightly.2'
PYTHON='/opt/homebrew/bin/python3.12'
REQUIREMENTS=['click==8.5.0','coloredlogs==15.0.1','humanfriendly==10.0',
              'jinja2==3.1.6','MarkupSafe==3.0.4','lark==1.3.1',
              'python-path==0.1.3','lxml==6.1.3']
def sha(p):return hashlib.sha256(p.read_bytes()).hexdigest()
def run(args,log,env=None):
    print(log.name,flush=True)
    with log.open('w') as f:
        result=subprocess.run(args,cwd=SDK,env=env,stdout=f,stderr=subprocess.STDOUT)
    if result.returncode:raise RuntimeError(f'{log.name} failed; inspect the saved log')
def main():
    assert platform.system()=='Darwin' and platform.machine()=='arm64'
    assert subprocess.check_output(['git','rev-parse','HEAD'],cwd=SDK,text=True).strip()==COMMIT
    EV.mkdir(parents=True,exist_ok=True);HOST.mkdir(parents=True,exist_ok=True)
    manifest=json.loads((SDK/'third_party/pigweed/repo/pw_env_setup/py/pw_env_setup/cipd_setup/pigweed.json').read_text())
    gn_package=next(x for x in manifest['packages'] if x['path']=='gn/gn/${platform}')
    assert gn_package['tags']==['git_revision:'+GN_REV]
    gn=HOST/'gn-macos/gn';gn.parent.mkdir(exist_ok=True)
    url='https://chrome-infra-packages.appspot.com/dl/gn/gn/mac-arm64/+/git_revision:'+GN_REV
    archive=HOST/'gn-macos.zip'
    if not gn.exists():
        print('Downloading the SDK-pinned GN package',flush=True)
        with urllib.request.urlopen(url,timeout=60) as response:archive.write_bytes(response.read(16*1024*1024))
        with zipfile.ZipFile(archive) as package:gn.write_bytes(package.read('gn'))
        gn.chmod(0o755)
    gn_version=subprocess.check_output([str(gn),'--version'],text=True).strip()
    assert GN_REV[:8] in gn_version
    zap_manifest=json.loads((SDK/'scripts/setup/zap.json').read_text())
    zap_package=next(x for x in zap_manifest['packages'] if x['path']=='experimental/matter/zap/mac-amd64')
    assert zap_package['tags']==['version:'+ZAP_VERSION]
    zap=HOST/'zap-macos/zap-cli';zap_url='https://chrome-infra-packages.appspot.com/dl/experimental/matter/zap/mac-amd64/+/version:'+ZAP_VERSION
    zap_archive=HOST/'zap-macos.zip'
    if not zap.exists():
        print('Downloading the SDK-pinned macOS ZAP package',flush=True)
        with urllib.request.urlopen(zap_url,timeout=60) as response,zap_archive.open('wb') as f:
            total=0
            while data:=response.read(1024*1024):
                total+=len(data);assert total<=512*1024*1024;f.write(data)
        destination=zap.parent.resolve();destination.mkdir(exist_ok=True)
        with zipfile.ZipFile(zap_archive) as package:
            for member in package.infolist():
                (destination/member.filename).resolve().relative_to(destination)
                path=Path(package.extract(member,destination))
                if not member.is_dir() and (member.external_attr>>16)&0o111:path.chmod(0o755)
        zap.chmod(0o755)
    zap_version=subprocess.check_output([str(zap),'--version'],text=True).strip()
    submodules=['third_party/boringssl/repo/src','third_party/editline/repo',
                'third_party/libwebsockets/repo']
    run(['git','submodule','update','--init','--depth','1',*submodules],EV/'submodules.log')
    if not (VENV/'bin/python').exists():run([PYTHON,'-m','venv',str(VENV)],EV/'venv.log')
    run([str(VENV/'bin/python'),'-m','pip','install',*REQUIREMENTS],EV/'requirements.log')
    env=dict(os.environ)
    # The all-cluster logger causes excessive LLVM optimization memory; it is
    # host-only diagnostic code. Keep protocol/crypto objects at SDK defaults.
    wrapper=HOST/'compiler-macos/g++';wrapper.parent.mkdir(exist_ok=True)
    wrapper.write_text('#!/bin/sh\nfor arg in "$@"; do\n'
                       ' case "$arg" in */DataModelLogger.cpp|DataModelLogger.cpp)\n'
                       '  exec /usr/bin/clang++ "$@" -O0 -g0 ;;\n'
                       ' esac\ndone\nexec /usr/bin/clang++ "$@"\n')
    wrapper.chmod(0o755)
    env['PATH']=str(wrapper.parent)+':'+str(VENV/'bin')+':'+str(gn.parent)+':/opt/homebrew/bin:/usr/bin:/bin:/usr/sbin:/sbin'
    env['ZAP_INSTALL_PATH']=str(zap.parent)
    args='is_debug=false treat_warnings_as_errors=false matter_log_json_payload_decode_full=false'
    run([str(gn),'gen','--check','--fail-on-unused-args','--root='+str(SDK/'examples/chip-tool'),
         str(BUILD),'--args='+args],EV/'gn.log',env)
    run(['/opt/homebrew/bin/ninja','-C',str(BUILD),'-j6','chip-tool'],EV/'ninja.log',env)
    binary=BUILD/'chip-tool';assert binary.exists()
    metadata={'status':'pass','sdk_commit':COMMIT,'gn_revision':GN_REV,'gn_version':gn_version,
              'gn_sha256':sha(gn),'gn_archive_url':url,'python':PYTHON,
              'zap_release':ZAP_VERSION,'zap_version':zap_version,'zap_sha256':sha(zap),
              'zap_archive_sha256':sha(zap_archive),'zap_archive_url':zap_url,
              'host_compiler_wrapper_sha256':sha(wrapper),
              'host_only_per_file_flags':{'DataModelLogger.cpp':['-O0','-g0']},
              'requirements':REQUIREMENTS,'gn_args':args,'binary':str(binary),'binary_sha256':sha(binary),
              'builder_sha256':sha(Path(__file__)),'purpose':'Native host commissioner, no device bridge or Flash access'}
    (EV/'build.json').write_text(json.dumps(metadata,indent=2)+'\n')
    print(json.dumps({'status':'pass','binary':str(binary),'sha256':sha(binary)}),flush=True)
if __name__=='__main__':main()
