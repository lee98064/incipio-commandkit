#!/bin/sh
# New wire-compatibility revision; preserve all shipped artifacts.
set -eu
cd /work
export PATH=/work/.sdk-venv/bin:$PATH
mkdir -p evidence/softap evidence/runtime-v2 evidence/softap-device-code
dir=/work/artifacts/matter-app-uclibc-device
gn gen "$dir" --root=/work/src/matter-app-device --args='target_os="linux" target_cpu="mips" custom_toolchain="custom" target_cc="/work/toolchains/uclibc/bin/mips-linux-uclibc-gcc -mno-shared -mno-llsc -mno-load-store-pairs -mmemcpy -fno-builtin-memcpy -fno-builtin-memmove" target_cxx="/work/toolchains/uclibc/bin/mips-linux-uclibc-g++ -mno-shared -mno-llsc -mno-load-store-pairs -mmemcpy -fno-builtin-memcpy -fno-builtin-memmove" target_ar="/work/toolchains/uclibc/bin/mips-linux-uclibc-ar" is_clang=false is_debug=false optimize_for_size=true enable_pic=false enable_pie=false chip_device_platform="linux" treat_warnings_as_errors=false incipio_uclibc_runtime=true chip_target_is_big_endian=true'
ninja -C "$dir" -j8 matterd-test
mkdir -p artifacts/softap-device-code
cp "$dir/obj/bin/matterd-test" artifacts/softap-device-code/matterd-test.full
toolchains/uclibc/bin/mips-linux-uclibc-strip -o artifacts/softap-device-code/matterd-test artifacts/softap-device-code/matterd-test.full
python3 - <<'PY'
from pathlib import Path
text = Path('/work/artifacts/matter-app-uclibc-device/gen/include/core/CHIPBuildConfig.h').read_text()
assert '#define CHIP_CONFIG_BIG_ENDIAN_TARGET 1' in text
PY
sha256sum artifacts/softap-device-code/matterd-test
