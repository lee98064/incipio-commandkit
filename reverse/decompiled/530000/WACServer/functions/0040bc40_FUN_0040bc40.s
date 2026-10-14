# FUN_0040bc40 @ 0040bc40
0040bc40  addiu sp,sp,-0x20
0040bc44  sw ra,0x1c(sp)
0040bc48  lui gp,0x44
0040bc4c  addiu gp,gp,-0x4fc0
0040bc50  sw gp,0x10(sp)
0040bc54  lw t9,-0x7eb0(gp)
0040bc58  clear a1
0040bc5c  jalr t9
0040bc60  _li a2,0x118
0040bc64  lw ra,0x1c(sp)
0040bc68  clear v0
0040bc6c  jr ra
0040bc70  _addiu sp,sp,0x20
