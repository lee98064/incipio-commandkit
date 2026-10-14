# Phytrex_HMSavePairList @ 00425344
00425344  addiu sp,sp,-0x20
00425348  sw ra,0x1c(sp)
0042534c  sw s0,0x18(sp)
00425350  lui gp,0x62
00425354  addiu gp,gp,-0x6b80
00425358  sw gp,0x10(sp)
0042535c  lw t9,-0x63f4(gp)
00425360  lui a0,0x61
00425364  jalr t9
00425368  _addiu a0,a0,0x3d60
0042536c  lw gp,0x10(sp)
00425370  lui a0,0x5b
00425374  addiu a0,a0,-0x4580
00425378  lw t9,-0x5b88(gp)
0042537c  nop
00425380  jalr t9
00425384  _li a1,0x2
00425388  move s0,v0
0042538c  li v0,-0x1
00425390  lw gp,0x10(sp)
00425394  bne s0,v0,0x004253b0
00425398  _li a1,0x4d
0042539c  jal 0x004251dc
004253a0  _li s0,-0x1a3e
004253a4  lw gp,0x10(sp)
004253a8  b 0x004253fc
004253ac  _nop
004253b0  lw t9,-0x64ac(gp)
004253b4  move a0,s0
004253b8  jalr t9
004253bc  _clear a2
004253c0  lw gp,0x10(sp)
004253c4  lui a1,0x61
004253c8  move a0,s0
004253cc  lw t9,-0x6be8(gp)
004253d0  addiu a1,a1,0x3d78
004253d4  jalr t9
004253d8  _li a2,0xa10
004253dc  lw gp,0x10(sp)
004253e0  move a0,s0
004253e4  lw t9,-0x6d14(gp)
004253e8  nop
004253ec  jalr t9
004253f0  _clear s0
004253f4  lw gp,0x10(sp)
004253f8  nop
004253fc  lw t9,-0x77f4(gp)
00425400  lui a0,0x61
00425404  jalr t9
00425408  _addiu a0,a0,0x3d60
0042540c  move v0,s0
00425410  lw ra,0x1c(sp)
00425414  lw s0,0x18(sp)
00425418  jr ra
0042541c  _addiu sp,sp,0x20
