#!/bin/sh
set -eu
cd /work
cross=/work/toolchains/uclibc/bin/mips-linux-uclibc-
sysroot=/work/toolchains/uclibc/mips-linux-uclibc
mkdir -p artifacts/softap
python3 tools/vendor_import_libraries.py
"${cross}gcc" -Os -fPIC -mno-llsc -mmemcpy -c src/setup/wificfg.c -o artifacts/softap/wificfg.o
"${cross}gcc" -nostdlib -no-pie -Wl,--dynamic-linker,/lib/ld-uClibc.so.0 -Wl,--hash-style=sysv \
    "$sysroot/usr/lib/crt1.o" "$sysroot/usr/lib/crti.o" artifacts/softap/wificfg.o \
    -L/work/artifacts/softap/import-only -lapmib -l:libc.so.0 "$sysroot/usr/lib/crtn.o" \
    -o artifacts/softap/ck-wificfg
"${cross}strip" artifacts/softap/ck-wificfg
