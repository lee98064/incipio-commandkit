# gcm_end @ 0041a8c4
0041a8c4  addiu sp,sp,-0x20
0041a8c8  sw ra,0x1c(sp)
0041a8cc  lui gp,0x44
0041a8d0  addiu gp,gp,-0x4fc0
0041a8d4  sw gp,0x10(sp)
0041a8d8  lw t9,-0x7eb0(gp)
0041a8dc  clear a1
0041a8e0  jalr t9
0041a8e4  _li a2,0x1158
0041a8e8  lw ra,0x1c(sp)
0041a8ec  clear v0
0041a8f0  jr ra
0041a8f4  _addiu sp,sp,0x20
