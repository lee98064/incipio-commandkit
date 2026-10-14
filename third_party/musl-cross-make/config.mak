TARGET = mips-linux-musl
GCC_VER = 14.3.0
BINUTILS_VER = 2.44
MUSL_VER = 1.2.6
LINUX_VER = headers-4.19.88-2
GNU_SITE = https://ftp.gnu.org/gnu
COMMON_CONFIG += --disable-nls
GCC_CONFIG += --with-arch=mips1 --with-abi=32 --with-float=soft
GCC_CONFIG += --disable-libquadmath --disable-libsanitizer --disable-libvtv
GCC_CONFIG += --disable-libgomp --disable-libitm --disable-multilib
GCC_CONFIG += --enable-languages=c,c++ --enable-threads=posix
# musl uses LL/SC and RDHWR internally. On this MIPS-I class CPU these
# require vendor-kernel emulation; the diagnostic child probes gate use.
COMMON_CONFIG += CFLAGS="-O2 -g0" CXXFLAGS="-O2 -g0"
