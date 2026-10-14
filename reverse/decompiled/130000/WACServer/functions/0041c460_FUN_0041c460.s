# FUN_0041c460 @ 0041c460
0041c460  lui gp,0x2
0041c464  addiu gp,gp,-0x1420
0041c468  addu gp,gp,t9
0041c46c  addiu sp,sp,-0x28
0041c470  sw ra,0x24(sp)
0041c474  sw s1,0x20(sp)
0041c478  sw s0,0x1c(sp)
0041c47c  sw gp,0x10(sp)
0041c480  lw s0,-0x7fe8(gp)
0041c484  li s1,-0x1
0041c488  b 0x0041c498
0041c48c  _addiu s0,s0,0x3000
0041c490  jalr t9
0041c494  _nop
0041c498  lw t9,0x0(s0)
0041c49c  nop
0041c4a0  bne t9,s1,0x0041c490
0041c4a4  _addiu s0,s0,-0x4
0041c4a8  lw ra,0x24(sp)
0041c4ac  lw s1,0x20(sp)
0041c4b0  lw s0,0x1c(sp)
0041c4b4  jr ra
0041c4b8  _addiu sp,sp,0x28
