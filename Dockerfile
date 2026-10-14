FROM ubuntu:24.04@sha256:4fbb8e6a8395de5a7550b33509421a2bafbc0aab6c06ba2cef9ebffbc7092d90
RUN apt-get update && DEBIAN_FRONTEND=noninteractive apt-get install -y --no-install-recommends \
    build-essential ca-certificates curl wget git python3 python3-venv python3-pip \
    cmake ninja-build pkg-config autoconf automake libtool bison flex gawk texinfo \
    bc cpio rsync unzip file xz-utils libssl-dev libncurses-dev \
    gcc-mips-linux-gnu g++-mips-linux-gnu binutils-mips-linux-gnu qemu-user qemu-system-mips \
    generate-ninja python3-jinja2 python3-yaml python3-click python3-lark \
    clang lld llvm squashfs-tools libusb-1.0-0-dev libftdi1-dev meson \
    && rm -rf /var/lib/apt/lists/*
WORKDIR /work
RUN apt-get update && DEBIAN_FRONTEND=noninteractive apt-get install -y --no-install-recommends \
    python-is-python3 python3-lxml python3-coloredlogs && rm -rf /var/lib/apt/lists/*
