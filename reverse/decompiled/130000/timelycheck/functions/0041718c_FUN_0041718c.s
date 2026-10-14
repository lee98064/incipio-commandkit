# FUN_0041718c @ 0041718c
0041718c  addiu sp,sp,-0x60
00417190  sw ra,0x5c(sp)
00417194  sw s2,0x58(sp)
00417198  sw s1,0x54(sp)
0041719c  sw s0,0x50(sp)
004171a0  lui gp,0x43
004171a4  addiu gp,gp,0x3060
004171a8  sw gp,0x10(sp)
004171ac  lw t9,-0x7e9c(gp)
004171b0  lui a0,0x41
004171b4  addiu a2,sp,0x18
004171b8  li a1,0x2
004171bc  jalr t9
004171c0  _addiu a0,a0,0x7f3c
004171c4  lw gp,0x10(sp)
004171c8  lw a0,0x18(sp)
004171cc  lw t9,-0x7f58(gp)
004171d0  nop
004171d4  jalr t9
004171d8  _addiu s0,sp,0x34
004171dc  lw gp,0x10(sp)
004171e0  move a1,v0
004171e4  lw t9,-0x7e58(gp)
004171e8  nop
004171ec  jalr t9
004171f0  _addiu a0,sp,0x1c
004171f4  lw gp,0x10(sp)
004171f8  li a0,0x17
004171fc  move a1,s0
00417200  lw t9,-0x7ec0(gp)
00417204  sw zero,0x34(sp)
00417208  sw zero,0x4(s0)
0041720c  sw zero,0x8(s0)
00417210  sw zero,0xc(s0)
00417214  sw zero,0x10(s0)
00417218  jalr t9
0041721c  _sw zero,0x14(s0)
00417220  lw gp,0x10(sp)
00417224  lui a1,0x42
00417228  addiu a1,a1,-0x63c8
0041722c  lw t9,-0x7f28(gp)
00417230  move a0,s0
00417234  jalr t9
00417238  _li a2,0x6
0041723c  lw gp,0x10(sp)
00417240  bne v0,zero,0x00417258
00417244  _move a1,s0
00417248  lw t9,-0x7ec0(gp)
0041724c  nop
00417250  jalr t9
00417254  _li a0,0xc9
00417258  clear s0
0041725c  addiu s2,sp,0x34
00417260  li s1,0x3
00417264  lw a1,0x18(sp)
00417268  move a0,s2
0041726c  addiu s0,s0,0x1
00417270  jal 0x00416fa8
00417274  _move a2,a1
00417278  lw gp,0x10(sp)
0041727c  nop
00417280  lw t9,-0x7ebc(gp)
00417284  nop
00417288  jalr t9
0041728c  _li a0,0x1
00417290  bne s0,s1,0x00417264
00417294  _nop
00417298  lw ra,0x5c(sp)
0041729c  lw s2,0x58(sp)
004172a0  lw s1,0x54(sp)
004172a4  lw s0,0x50(sp)
004172a8  jr ra
004172ac  _addiu sp,sp,0x60
