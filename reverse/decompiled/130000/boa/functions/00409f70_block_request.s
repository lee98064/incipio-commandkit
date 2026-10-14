# block_request @ 00409f70
00409f70  lui v0,0x47
00409f74  lw v1,-0x2060(v0)
00409f78  lui gp,0x47
00409f7c  bne v1,a0,0x00409f90
00409f80  _addiu gp,gp,0x2630
00409f84  lw v1,0x327c(a0)
00409f88  nop
00409f8c  sw v1,-0x2060(v0)
00409f90  lw v0,0x3280(a0)
00409f94  nop
00409f98  beq v0,zero,0x00409fac
00409f9c  _nop
00409fa0  lw v1,0x327c(a0)
00409fa4  nop
00409fa8  sw v1,0x327c(v0)
00409fac  lw v0,0x327c(a0)
00409fb0  nop
00409fb4  beq v0,zero,0x00409fc8
00409fb8  _nop
00409fbc  lw v1,0x3280(a0)
00409fc0  nop
00409fc4  sw v1,0x3280(v0)
00409fc8  sw zero,0x327c(a0)
00409fcc  sw zero,0x3280(a0)
00409fd0  lui v0,0x47
00409fd4  lw v0,-0x205c(v0)
00409fd8  nop
00409fdc  beq v0,zero,0x00409fe8
00409fe0  _nop
00409fe4  sw a0,0x3280(v0)
00409fe8  lui v0,0x47
00409fec  lw v1,-0x205c(v0)
00409ff0  sw zero,0x3280(a0)
00409ff4  sw v1,0x327c(a0)
00409ff8  sw a0,-0x205c(v0)
00409ffc  lw v0,0x50(a0)
0040a000  nop
0040a004  bne v0,zero,0x0040a050
0040a008  _nop
0040a00c  lw v0,0x0(a0)
0040a010  nop
0040a014  addiu v0,v0,-0x5
0040a018  sltiu v1,v0,0x6
0040a01c  beq v1,zero,0x0040a09c
0040a020  _lui v1,0x45
0040a024  sll v0,v0,0x2
0040a028  addiu v1,v1,-0x5a30
0040a02c  addu v0,v1,v0
0040a030  lw v0,0x0(v0)
0040a034  nop
0040a038  jr v0
0040a03c  _nop
0040a040  lw v0,0x4c(a0)
0040a044  nop
0040a048  beq v0,zero,0x0040a064
0040a04c  _nop
0040a050  lw v0,0xb4(a0)
0040a054  lw a1,-0x7d4c(gp)
0040a058  srl v1,v0,0x5
0040a05c  b 0x0040a0ac
0040a060  _sll v1,v1,0x2
0040a064  lw v0,0x28(a0)
0040a068  lw a1,-0x7fb8(gp)
0040a06c  srl v1,v0,0x5
0040a070  sll v1,v1,0x2
0040a074  addu v1,a1,v1
0040a078  lw a2,0x0(v1)
0040a07c  li a1,0x1
0040a080  sllv a1,a1,v0
0040a084  or a1,a2,a1
0040a088  sw a1,0x0(v1)
0040a08c  lw v0,-0x7fac(gp)
0040a090  lw v1,0x28(a0)
0040a094  b 0x0040a0cc
0040a098  _nop
0040a09c  lw v0,0xb4(a0)
0040a0a0  lw a1,-0x7fb8(gp)
0040a0a4  srl v1,v0,0x5
0040a0a8  sll v1,v1,0x2
0040a0ac  addu v1,a1,v1
0040a0b0  lw a2,0x0(v1)
0040a0b4  li a1,0x1
0040a0b8  sllv a1,a1,v0
0040a0bc  or a1,a2,a1
0040a0c0  sw a1,0x0(v1)
0040a0c4  lw v0,-0x7fac(gp)
0040a0c8  lw v1,0xb4(a0)
0040a0cc  lw a0,0x0(v0)
0040a0d0  nop
0040a0d4  slt a0,a0,v1
0040a0d8  beq a0,zero,0x0040a0e4
0040a0dc  _nop
0040a0e0  sw v1,0x0(v0)
0040a0e4  jr ra
0040a0e8  _nop
