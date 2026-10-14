# FUN_0040f990 @ 0040f990
0040f990  lui gp,0x2
0040f994  addiu gp,gp,-0x4620
0040f998  addu gp,gp,t9
0040f99c  addiu sp,sp,-0x28
0040f9a0  sw ra,0x24(sp)
0040f9a4  sw s1,0x20(sp)
0040f9a8  sw s0,0x1c(sp)
0040f9ac  sw gp,0x10(sp)
0040f9b0  lw s0,-0x7fe8(gp)
0040f9b4  li s1,-0x1
0040f9b8  b 0x0040f9c8
0040f9bc  _addiu s0,s0,0x24e4
0040f9c0  jalr t9
0040f9c4  _nop
0040f9c8  lw t9,0x0(s0)
0040f9cc  nop
0040f9d0  bne t9,s1,0x0040f9c0
0040f9d4  _addiu s0,s0,-0x4
0040f9d8  lw ra,0x24(sp)
0040f9dc  lw s1,0x20(sp)
0040f9e0  lw s0,0x1c(sp)
0040f9e4  jr ra
0040f9e8  _addiu sp,sp,0x28
