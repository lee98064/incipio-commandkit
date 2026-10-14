# FUN_0041c4a0 @ 0041c4a0
0041c4a0  addiu sp,sp,-0x20
0041c4a4  sw ra,0x1c(sp)
0041c4a8  lui gp,0x62
0041c4ac  addiu gp,gp,-0x6b80
0041c4b0  sw gp,0x10(sp)
0041c4b4  lw t9,-0x5a68(gp)
0041c4b8  li a0,0x1
0041c4bc  jalr t9
0041c4c0  _li a1,0x18
0041c4c4  beq v0,zero,0x0041c4d0
0041c4c8  _li v1,0x1
0041c4cc  sw v1,0x4(v0)
0041c4d0  lw ra,0x1c(sp)
0041c4d4  nop
0041c4d8  jr ra
0041c4dc  _addiu sp,sp,0x20
