# HomekitSerialFuncRegister @ 00431290
00431290  lw v0,0x0(a0)
00431294  nop
00431298  beq v0,zero,0x004312a4
0043129c  _lui v1,0x61
004312a0  sw v0,0x4fb0(v1)
004312a4  lw v0,0xc(a0)
004312a8  nop
004312ac  beq v0,zero,0x004312b8
004312b0  _lui v1,0x61
004312b4  sw v0,0x4fbc(v1)
004312b8  lw v0,0x4(a0)
004312bc  nop
004312c0  beq v0,zero,0x004312cc
004312c4  _lui v1,0x61
004312c8  sw v0,0x4fb4(v1)
004312cc  lw v0,0x8(a0)
004312d0  nop
004312d4  beq v0,zero,0x004312e0
004312d8  _lui v1,0x61
004312dc  sw v0,0x4fb8(v1)
004312e0  jr ra
004312e4  _nop
