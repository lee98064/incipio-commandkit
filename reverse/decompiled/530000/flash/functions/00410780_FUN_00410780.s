# FUN_00410780 @ 00410780
00410780  lui gp,0x2
00410784  addiu gp,gp,-0x5330
00410788  addu gp,gp,t9
0041078c  addiu sp,sp,-0x28
00410790  sw ra,0x24(sp)
00410794  sw s1,0x20(sp)
00410798  sw s0,0x1c(sp)
0041079c  sw gp,0x10(sp)
004107a0  lw s0,-0x7fe8(gp)
004107a4  li s1,-0x1
004107a8  b 0x004107b8
004107ac  _addiu s0,s0,0x33e4
004107b0  jalr t9
004107b4  _nop
004107b8  lw t9,0x0(s0)
004107bc  nop
004107c0  bne t9,s1,0x004107b0
004107c4  _addiu s0,s0,-0x4
004107c8  lw ra,0x24(sp)
004107cc  lw s1,0x20(sp)
004107d0  lw s0,0x1c(sp)
004107d4  jr ra
004107d8  _addiu sp,sp,0x28
