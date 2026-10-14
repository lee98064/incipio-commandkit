# FUN_0041c270 @ 0041c270
0041c270  addiu sp,sp,-0x28
0041c274  sw ra,0x24(sp)
0041c278  lui gp,0x62
0041c27c  addiu gp,gp,-0x6b80
0041c280  sw gp,0x18(sp)
0041c284  lw v0,-0x6b54(gp)
0041c288  lw t9,-0x73b4(gp)
0041c28c  lui a1,0x5b
0041c290  lw a0,0x0(v0)
0041c294  lui a2,0x5b
0041c298  li v0,0x81
0041c29c  lui a3,0x5b
0041c2a0  sw v0,0x10(sp)
0041c2a4  addiu a1,a1,-0x4c50
0041c2a8  addiu a2,a2,-0x4c10
0041c2ac  jalr t9
0041c2b0  _addiu a3,a3,-0x4ac0
0041c2b4  lw ra,0x24(sp)
0041c2b8  nop
0041c2bc  jr ra
0041c2c0  _addiu sp,sp,0x28
