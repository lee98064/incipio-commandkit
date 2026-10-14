# FUN_0040f6e0 @ 0040f6e0
0040f6e0  lui gp,0x2
0040f6e4  addiu gp,gp,-0x4650
0040f6e8  addu gp,gp,t9
0040f6ec  addiu sp,sp,-0x28
0040f6f0  sw ra,0x24(sp)
0040f6f4  sw s1,0x20(sp)
0040f6f8  sw s0,0x1c(sp)
0040f6fc  sw gp,0x10(sp)
0040f700  lw s0,-0x7fe8(gp)
0040f704  li s1,-0x1
0040f708  b 0x0040f718
0040f70c  _addiu s0,s0,0x2204
0040f710  jalr t9
0040f714  _nop
0040f718  lw t9,0x0(s0)
0040f71c  nop
0040f720  bne t9,s1,0x0040f710
0040f724  _addiu s0,s0,-0x4
0040f728  lw ra,0x24(sp)
0040f72c  lw s1,0x20(sp)
0040f730  lw s0,0x1c(sp)
0040f734  jr ra
0040f738  _addiu sp,sp,0x28
