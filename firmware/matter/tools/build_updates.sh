#!/bin/sh
set -eu
cd /work
export PATH=/work/toolchains/uclibc/bin:$PATH
cross=/work/toolchains/uclibc/bin/mips-linux-uclibc-
dest=artifacts/update
if [ "${CK_TESTING:-0}" = 1 ]; then dest=artifacts/update-test; fi
mkdir -p "$dest"
flags='-static -Os -std=c11 -Wall -Wextra -Werror -Wno-misleading-indentation -Wno-unused-function -mno-llsc -mno-load-store-pairs -mmemcpy -fno-builtin-memcpy -fno-builtin-memmove -ffunction-sections -fdata-sections -Wl,--gc-sections'
if [ "${CK_TESTING:-0}" = 1 ]; then flags="$flags -DCK_TESTING"; fi
common='src/update/ck_common.c src/update/ck_flash.c src/update/ck_store.c src/update/ck_energy.c src/update/ck_led.c src/update/ck_ota.c src/vendor/monocypher/monocypher.c src/vendor/monocypher/monocypher-ed25519.c'
${cross}gcc $flags $common src/update/ck_updater.c -o "$dest/ck-updater"
${cross}gcc $flags $common src/update/ck_meter.c src/update/ck_updated.c -o "$dest/ck-updated"
${cross}gcc $flags src/setup/boot_guard.c -o "$dest/ck-boot-guard"
if [ "${CK_TESTING:-0}" = 1 ]; then
    ${cross}gcc $flags -DCK_TEST_PID1 $common src/update/ck_updater.c -o "$dest/ck-updater-vm"
    ${cross}strip "$dest/ck-updater-vm"
fi
${cross}strip "$dest/ck-updater" "$dest/ck-updated"
${cross}strip "$dest/ck-boot-guard"
${cross}objdump -d "$dest/ck-updater" "$dest/ck-updated" "$dest/ck-boot-guard" > "$dest/disassembly.txt"
CK_BUILD_DEST="$dest" python3 - <<'PY'
import re,os
from pathlib import Path
s=(Path(os.environ['CK_BUILD_DEST'])/'disassembly.txt').read_text()
bad=re.findall(r'\s(?:ll|sc|sync|rdhwr|lwl|lwr|swl|swr|lwc1|swc1|ldc1|sdc1|pref)\s[^\n]*',s)
if bad:raise SystemExit('Unsupported ISA: '+repr(bad[:8]))
print('Update services built; ISA audit passed.')
PY
