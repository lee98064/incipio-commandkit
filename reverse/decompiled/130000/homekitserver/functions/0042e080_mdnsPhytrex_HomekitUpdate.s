# mdnsPhytrex_HomekitUpdate @ 0042e080
0042e080  addiu sp,sp,-0x40
0042e084  sw ra,0x3c(sp)
0042e088  sw s5,0x38(sp)
0042e08c  sw s4,0x34(sp)
0042e090  sw s3,0x30(sp)
0042e094  sw s2,0x2c(sp)
0042e098  sw s1,0x28(sp)
0042e09c  sw s0,0x24(sp)
0042e0a0  lui gp,0x62
0042e0a4  addiu gp,gp,-0x6b80
0042e0a8  sw gp,0x18(sp)
0042e0ac  lw v0,-0x7de8(gp)
0042e0b0  move s2,a0
0042e0b4  lw v0,0x0(v0)
0042e0b8  nop
0042e0bc  beq v0,zero,0x0042e320
0042e0c0  _move s3,a1
0042e0c4  lw t9,-0x7cbc(gp)
0042e0c8  lui a0,0x5b
0042e0cc  addiu a0,a0,-0x39a0
0042e0d0  jalr t9
0042e0d4  _li a1,0x1
0042e0d8  lw gp,0x18(sp)
0042e0dc  bne v0,zero,0x0042e104
0042e0e0  _move s0,v0
0042e0e4  lw v0,-0x6b54(gp)
0042e0e8  lw t9,-0x7058(gp)
0042e0ec  lui a0,0x5b
0042e0f0  lw a1,0x0(v0)
0042e0f4  jalr t9
0042e0f8  _addiu a0,a0,-0x3990
0042e0fc  lw gp,0x18(sp)
0042e100  nop
0042e104  lw t9,-0x67b0(gp)
0042e108  nop
0042e10c  jalr t9
0042e110  _nop
0042e114  lw gp,0x18(sp)
0042e118  lui a1,0x5b
0042e11c  addiu a1,a1,-0x394c
0042e120  lw t9,-0x6310(gp)
0042e124  nop
0042e128  jalr t9
0042e12c  _move a0,s0
0042e130  lw gp,0x18(sp)
0042e134  nop
0042e138  lw t9,-0x67b0(gp)
0042e13c  nop
0042e140  jalr t9
0042e144  _move s1,v0
0042e148  lw gp,0x18(sp)
0042e14c  nop
0042e150  lw t9,-0x63cc(gp)
0042e154  nop
0042e158  jalr t9
0042e15c  _move a0,s3
0042e160  lui a0,0x61
0042e164  move a3,s3
0042e168  andi a2,v0,0xff
0042e16c  addiu a0,a0,0x4824
0042e170  move t9,s1
0042e174  jalr t9
0042e178  _move a1,s2
0042e17c  lw gp,0x18(sp)
0042e180  nop
0042e184  lw t9,-0x67b0(gp)
0042e188  nop
0042e18c  jalr t9
0042e190  _nop
0042e194  lw gp,0x18(sp)
0042e198  lui a1,0x5b
0042e19c  addiu a1,a1,-0x3938
0042e1a0  lw t9,-0x6310(gp)
0042e1a4  nop
0042e1a8  jalr t9
0042e1ac  _move a0,s0
0042e1b0  lw gp,0x18(sp)
0042e1b4  nop
0042e1b8  lw t9,-0x67b0(gp)
0042e1bc  nop
0042e1c0  jalr t9
0042e1c4  _move s1,v0
0042e1c8  lw gp,0x18(sp)
0042e1cc  lui a1,0x5b
0042e1d0  addiu a1,a1,-0x3920
0042e1d4  lw t9,-0x6310(gp)
0042e1d8  nop
0042e1dc  jalr t9
0042e1e0  _move a0,s0
0042e1e4  lw gp,0x18(sp)
0042e1e8  nop
0042e1ec  lw t9,-0x67b0(gp)
0042e1f0  nop
0042e1f4  jalr t9
0042e1f8  _move s3,v0
0042e1fc  lw gp,0x18(sp)
0042e200  beq v0,zero,0x0042e228
0042e204  _lui a1,0x5b
0042e208  lw v1,-0x6b54(gp)
0042e20c  lw t9,-0x73b4(gp)
0042e210  lw a0,0x0(v1)
0042e214  addiu a1,a1,-0x390c
0042e218  jalr t9
0042e21c  _move a2,v0
0042e220  lw gp,0x18(sp)
0042e224  nop
0042e228  lw t9,-0x67b0(gp)
0042e22c  nop
0042e230  jalr t9
0042e234  _nop
0042e238  lw gp,0x18(sp)
0042e23c  lui a1,0x5b
0042e240  addiu a1,a1,-0x38f8
0042e244  lw t9,-0x6310(gp)
0042e248  nop
0042e24c  jalr t9
0042e250  _move a0,s0
0042e254  lw gp,0x18(sp)
0042e258  nop
0042e25c  lw t9,-0x67b0(gp)
0042e260  nop
0042e264  jalr t9
0042e268  _move s2,v0
0042e26c  lw gp,0x18(sp)
0042e270  nop
0042e274  lw t9,-0x67b0(gp)
0042e278  nop
0042e27c  jalr t9
0042e280  _nop
0042e284  lw gp,0x18(sp)
0042e288  beq v0,zero,0x0042e2a8
0042e28c  _lui a1,0x5b
0042e290  lw v1,-0x6b54(gp)
0042e294  lw t9,-0x73b4(gp)
0042e298  lw a0,0x0(v1)
0042e29c  addiu a1,a1,-0x390c
0042e2a0  jalr t9
0042e2a4  _move a2,v0
0042e2a8  lui s4,0x61
0042e2ac  lui v0,0x61
0042e2b0  lw s5,0x4820(v0)
0042e2b4  move t9,s3
0042e2b8  jalr t9
0042e2bc  _addiu a0,s4,0x4824
0042e2c0  addiu a0,s4,0x4824
0042e2c4  move t9,s2
0042e2c8  jalr t9
0042e2cc  _move s3,v0
0042e2d0  move a0,s5
0042e2d4  andi a3,s3,0xffff
0042e2d8  move t9,s1
0042e2dc  sw v0,0x10(sp)
0042e2e0  sw zero,0x14(sp)
0042e2e4  clear a1
0042e2e8  jalr t9
0042e2ec  _clear a2
0042e2f0  lw gp,0x18(sp)
0042e2f4  move a0,s0
0042e2f8  lw ra,0x3c(sp)
0042e2fc  lw t9,-0x7ea8(gp)
0042e300  lw s5,0x38(sp)
0042e304  lw s4,0x34(sp)
0042e308  lw s3,0x30(sp)
0042e30c  lw s2,0x2c(sp)
0042e310  lw s1,0x28(sp)
0042e314  lw s0,0x24(sp)
0042e318  jr t9
0042e31c  _addiu sp,sp,0x40
0042e320  lw ra,0x3c(sp)
0042e324  lw s5,0x38(sp)
0042e328  lw s4,0x34(sp)
0042e32c  lw s3,0x30(sp)
0042e330  lw s2,0x2c(sp)
0042e334  lw s1,0x28(sp)
0042e338  lw s0,0x24(sp)
0042e33c  jr ra
0042e340  _addiu sp,sp,0x40
