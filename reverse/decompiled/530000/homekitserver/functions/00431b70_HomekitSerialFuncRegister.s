# HomekitSerialFuncRegister @ 00431b70
00431b70  lw v0,0x0(a0)
00431b74  nop
00431b78  beq v0,zero,0x00431b84
00431b7c  _lui v1,0x61
00431b80  sw v0,0x5e60(v1)
00431b84  lw v0,0xc(a0)
00431b88  nop
00431b8c  beq v0,zero,0x00431b98
00431b90  _lui v1,0x61
00431b94  sw v0,0x5e6c(v1)
00431b98  lw v0,0x4(a0)
00431b9c  nop
00431ba0  beq v0,zero,0x00431bac
00431ba4  _lui v1,0x61
00431ba8  sw v0,0x5e64(v1)
00431bac  lw v0,0x8(a0)
00431bb0  nop
00431bb4  beq v0,zero,0x00431bc0
00431bb8  _lui v1,0x61
00431bbc  sw v0,0x5e68(v1)
00431bc0  jr ra
00431bc4  _nop
