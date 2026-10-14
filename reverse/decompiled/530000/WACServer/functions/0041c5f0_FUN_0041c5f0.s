# FUN_0041c5f0 @ 0041c5f0
0041c5f0  lui gp,0x2
0041c5f4  addiu gp,gp,-0x15b0
0041c5f8  addu gp,gp,t9
0041c5fc  addiu sp,sp,-0x28
0041c600  sw ra,0x24(sp)
0041c604  sw s1,0x20(sp)
0041c608  sw s0,0x1c(sp)
0041c60c  sw gp,0x10(sp)
0041c610  lw s0,-0x7fe8(gp)
0041c614  li s1,-0x1
0041c618  b 0x0041c628
0041c61c  _addiu s0,s0,0x3000
0041c620  jalr t9
0041c624  _nop
0041c628  lw t9,0x0(s0)
0041c62c  nop
0041c630  bne t9,s1,0x0041c620
0041c634  _addiu s0,s0,-0x4
0041c638  lw ra,0x24(sp)
0041c63c  lw s1,0x20(sp)
0041c640  lw s0,0x1c(sp)
0041c644  jr ra
0041c648  _addiu sp,sp,0x28
