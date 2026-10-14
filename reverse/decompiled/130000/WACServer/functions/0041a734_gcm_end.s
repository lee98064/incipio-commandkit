# gcm_end @ 0041a734
0041a734  addiu sp,sp,-0x20
0041a738  sw ra,0x1c(sp)
0041a73c  lui gp,0x44
0041a740  addiu gp,gp,-0x4fc0
0041a744  sw gp,0x10(sp)
0041a748  lw t9,-0x7eb0(gp)
0041a74c  clear a1
0041a750  jalr t9
0041a754  _li a2,0x1158
0041a758  lw ra,0x1c(sp)
0041a75c  clear v0
0041a760  jr ra
0041a764  _addiu sp,sp,0x20
