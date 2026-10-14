#!/bin/sh
# New wire-compatibility revision; preserve all shipped artifacts.
set -eu
cd /work
export PATH=/work/.sdk-venv/bin:$PATH
mkdir -p evidence/softap evidence/runtime-v2 evidence/softap-device-code
dir=/work/artifacts/matter-app-uclibc-device
extra=${CK_GN_EXTRA:-}
if [ "${CK_UPDATE_TEST:-0}" = 1 ]; then dir=/work/artifacts/matter-app-uclibc-update-test; fi
gn gen "$dir" --root=/work/src/matter-app-device --args='target_os="linux" target_cpu="mips" custom_toolchain="custom" target_cc="/work/toolchains/uclibc/bin/mips-linux-uclibc-gcc -mno-shared -mno-llsc -mno-load-store-pairs -mmemcpy -fno-builtin-memcpy -fno-builtin-memmove" target_cxx="/work/toolchains/uclibc/bin/mips-linux-uclibc-g++ -mno-shared -mno-llsc -mno-load-store-pairs -mmemcpy -fno-builtin-memcpy -fno-builtin-memmove" target_ar="/work/toolchains/uclibc/bin/mips-linux-uclibc-ar" is_clang=false is_debug=false optimize_for_size=true enable_pic=false enable_pie=false chip_device_platform="linux" treat_warnings_as_errors=false incipio_uclibc_runtime=true chip_target_is_big_endian=true'" $extra"
ninja -C "$dir" -j8 matterd-test
dest=artifacts/softap-device-code
if [ "${CK_UPDATE_TEST:-0}" = 1 ]; then dest=artifacts/update-matter-test; fi
mkdir -p "$dest"
cp "$dir/obj/bin/matterd-test" "$dest/matterd-test.full"
toolchains/uclibc/bin/mips-linux-uclibc-strip -o "$dest/matterd-test" "$dest/matterd-test.full"
CK_BUILD_DIR="$dir/gen/include/core/CHIPBuildConfig.h" python3 - <<'PY'
from pathlib import Path
text = Path(__import__('os').environ['CK_BUILD_DIR']).read_text()
assert '#define CHIP_CONFIG_BIG_ENDIAN_TARGET 1' in text
PY
sha256sum "$dest/matterd-test"
CK_BUILD_DEST="$dest" CK_BUILD_DIR="$dir" python3 - <<'PY'
import hashlib,json,os,re
from pathlib import Path
dest=Path(os.environ['CK_BUILD_DEST'])
header=Path('src/matter-app-device/Version.h').read_text()
args=Path(os.environ['CK_BUILD_DIR'])/'args.gn'
test=bool(re.search(r'incipio_update_test\s*=\s*true',args.read_text()))
record={'software_version':int(re.search(r'CK_SOFTWARE_VERSION (\d+)',header)[1]),
        'test_backend':test,'binary_sha256':hashlib.sha256((dest/'matterd-test').read_bytes()).hexdigest()}
(dest/'matter-build.json').write_text(json.dumps(record,indent=2)+'\n')
PY
