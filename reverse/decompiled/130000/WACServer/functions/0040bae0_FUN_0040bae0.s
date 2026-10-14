# FUN_0040bae0 @ 0040bae0
0040bae0  addiu sp,sp,-0x20
0040bae4  sw ra,0x1c(sp)
0040bae8  lui gp,0x44
0040baec  addiu gp,gp,-0x4fc0
0040baf0  sw gp,0x10(sp)
0040baf4  lw t9,-0x7eb0(gp)
0040baf8  clear a1
0040bafc  jalr t9
0040bb00  _li a2,0x118
0040bb04  lw ra,0x1c(sp)
0040bb08  clear v0
0040bb0c  jr ra
0040bb10  _addiu sp,sp,0x20
