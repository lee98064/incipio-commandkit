#!/bin/bash
# Run inside the pinned incipio-public-build image, mounted at /work.
# An independent, static-only C++20 toolchain; never installs vendor libraries.
set -euo pipefail
cd /work
target=mips-linux-uclibc
prefix=/work/toolchains/uclibc
sysroot=$prefix/$target
bootstrap=/work/deps/musl-cross-make/output/bin/mips-linux-musl-
build=/work/artifacts/uclibc-toolchain
mkdir -p "$build" "$prefix/bin" "$sysroot/bin" "$sysroot/usr/include" "$sysroot/lib"
for tool in ar as ld nm objcopy objdump ranlib readelf strip; do
    ln -sf "${bootstrap}${tool}" "$prefix/bin/$target-$tool"
    ln -sf "${bootstrap}${tool}" "$sysroot/bin/$tool"
done
export PATH="$prefix/bin:$PATH"
python3 tools/prepare_uclibc.py
if [ ! -f "$build/headers-installed" ]; then
    # Linux has case-distinct netfilter filenames; extract on the container's
    # case-sensitive filesystem rather than the default macOS bind mount.
    tar -xf deps/downloads/linux-2.6.30.9.tar.xz -C /tmp
    python3 - <<'PY'
from pathlib import Path
p = Path('/tmp/linux-2.6.30.9/Makefile')
s = p.read_text().replace('config %config:', '%config:')
s = s.replace('/ %/: preprocess prepare scripts FORCE', '%/: preprocess prepare scripts FORCE')
p.write_text(s)  # Compatibility with modern GNU make; no kernel is built.
PY
    make -C /tmp/linux-2.6.30.9 ARCH=mips headers_install INSTALL_HDR_PATH="$sysroot/usr"
    touch "$build/headers-installed"
fi
if [ ! -f "$build/libc-built" ]; then
    cp tools/uclibc.config deps/uClibc-ng-1.0.54/.config
    make -C deps/uClibc-ng-1.0.54 olddefconfig
    cp deps/uClibc-ng-1.0.54/.config "$build/uclibc.config"
    make -C deps/uClibc-ng-1.0.54 -j8
    make -C deps/uClibc-ng-1.0.54 install PREFIX="$sysroot"
    touch "$build/libc-built"
fi
python3 tools/prepare_rtl_gcc.py
mkdir -p "$build/gcc-rtl8196e"
cd "$build/gcc-rtl8196e"
if [ ! -f Makefile ] || [ ! -f ../build-sysroot-configured ]; then
    /work/deps/gcc-rtl8196e/configure \
      --target="$target" --prefix="$prefix" --with-sysroot="$sysroot" --with-build-sysroot="$sysroot" \
      --with-arch=mips1 --with-abi=32 --with-float=soft --without-llsc \
      --disable-tls --enable-threads=posix --enable-languages=c,c++ \
      --disable-bootstrap --disable-multilib --disable-nls --disable-werror \
      --disable-shared --disable-libsanitizer --disable-libquadmath \
      --disable-libgomp --disable-libitm --disable-libvtv \
      --enable-libstdcxx-time=rt \
      CFLAGS='-O2 -g0' CXXFLAGS='-O2 -g0' \
      CFLAGS_FOR_TARGET='-Os -mno-llsc -mno-load-store-pairs' \
      CXXFLAGS_FOR_TARGET='-Os -mno-llsc -mno-load-store-pairs'
    touch ../build-sysroot-configured
fi
make -j8 all-gcc all-target-libgcc all-target-libstdc++-v3 all-target-libatomic
make install-gcc install-target-libgcc install-target-libstdc++-v3 install-target-libatomic
"$prefix/bin/$target-g++" -v
cd /work
if [ ! -f "$build/rtl-libc-built" ]; then
    # Rebuild libc with the final ISA-restricted compiler, not the bootstrap.
    make -C deps/uClibc-ng-1.0.54 clean
    cp tools/uclibc.config deps/uClibc-ng-1.0.54/.config
    make -C deps/uClibc-ng-1.0.54 olddefconfig CROSS_COMPILE="$prefix/bin/$target-"
    make -C deps/uClibc-ng-1.0.54 -j8 CROSS_COMPILE="$prefix/bin/$target-"
    make -C deps/uClibc-ng-1.0.54 install PREFIX="$sysroot" CROSS_COMPILE="$prefix/bin/$target-"
    cp deps/uClibc-ng-1.0.54/.config "$build/uclibc.config"
    touch "$build/rtl-libc-built"
fi
