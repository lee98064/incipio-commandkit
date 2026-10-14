# FUN_0043e204 @ 0043e204
0043e204  lui gp,0x1e
0043e208  addiu gp,gp,-0x4d84
0043e20c  addu gp,gp,t9
0043e210  addiu sp,sp,-0x38
0043e214  sw ra,0x34(sp)
0043e218  sw s8,0x30(sp)
0043e21c  move s8,sp
0043e220  sw gp,0x10(sp)
0043e224  addiu v0,s8,0x28
0043e228  lw v1,-0x7fd0(gp)
0043e22c  nop
0043e230  addiu a0,v1,-0x1f94
0043e234  lw v1,-0x7fd0(gp)
0043e238  nop
0043e23c  addiu a1,v1,-0x1f74
0043e240  move a2,v0
0043e244  lw v0,-0x6ea4(gp)
0043e248  nop
0043e24c  move t9,v0
0043e250  jalr t9
0043e254  _nop
0043e258  lw gp,0x10(s8)
0043e25c  nop
0043e260  lw v0,-0x5b04(gp)
0043e264  nop
0043e268  move t9,v0
0043e26c  jalr t9
0043e270  _nop
0043e274  lw gp,0x10(s8)
0043e278  lw v0,0x0(v0)
0043e27c  nop
0043e280  sw v0,0x24(s8)
0043e284  lw v1,0x2c(s8)
0043e288  lw v0,0x28(s8)
0043e28c  sw zero,0x20(s8)
0043e290  lui a0,0x8000
0043e294  bne v0,a0,0x0043e2ac
0043e298  _nop
0043e29c  bne v1,zero,0x0043e2ac
0043e2a0  _nop
0043e2a4  li v0,0x1
0043e2a8  sw v0,0x20(s8)
0043e2ac  addiu v0,s8,0x28
0043e2b0  lw v1,-0x7fd0(gp)
0043e2b4  nop
0043e2b8  addiu a0,v1,-0x1f6c
0043e2bc  lw v1,-0x7fd0(gp)
0043e2c0  nop
0043e2c4  addiu a1,v1,-0x1f74
0043e2c8  move a2,v0
0043e2cc  lw v0,-0x6ea4(gp)
0043e2d0  nop
0043e2d4  move t9,v0
0043e2d8  jalr t9
0043e2dc  _nop
0043e2e0  lw gp,0x10(s8)
0043e2e4  nop
0043e2e8  lw v0,-0x5b04(gp)
0043e2ec  nop
0043e2f0  move t9,v0
0043e2f4  jalr t9
0043e2f8  _nop
0043e2fc  lw gp,0x10(s8)
0043e300  lw v0,0x0(v0)
0043e304  nop
0043e308  sw v0,0x1c(s8)
0043e30c  lw v1,0x2c(s8)
0043e310  lw v0,0x28(s8)
0043e314  sw zero,0x18(s8)
0043e318  lui a0,0x7fff
0043e31c  ori a0,a0,0xffff
0043e320  bne v0,a0,0x0043e33c
0043e324  _nop
0043e328  li a0,-0x1
0043e32c  bne v1,a0,0x0043e33c
0043e330  _nop
0043e334  li v0,0x1
0043e338  sw v0,0x18(s8)
0043e33c  lw v1,0x24(s8)
0043e340  li v0,0x22
0043e344  bne v1,v0,0x0043e37c
0043e348  _nop
0043e34c  lw v0,0x20(s8)
0043e350  nop
0043e354  beq v0,zero,0x0043e37c
0043e358  _nop
0043e35c  lw v1,0x1c(s8)
0043e360  li v0,0x22
0043e364  bne v1,v0,0x0043e37c
0043e368  _nop
0043e36c  lw v0,0x18(s8)
0043e370  nop
0043e374  bne v0,zero,0x0043e388
0043e378  _nop
0043e37c  lw v0,-0x7fe8(gp)
0043e380  li v1,0x1
0043e384  sw v1,0x5060(v0)
0043e388  move sp,s8
0043e38c  lw ra,0x34(sp)
0043e390  lw s8,0x30(sp)
0043e394  addiu sp,sp,0x38
0043e398  jr ra
0043e39c  _nop
