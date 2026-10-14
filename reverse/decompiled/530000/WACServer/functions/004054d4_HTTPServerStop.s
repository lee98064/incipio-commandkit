# HTTPServerStop @ 004054d4
004054d4  addiu sp,sp,-0x20
004054d8  sw ra,0x1c(sp)
004054dc  sw s0,0x18(sp)
004054e0  lui gp,0x44
004054e4  addiu gp,gp,-0x4fc0
004054e8  sw gp,0x10(sp)
004054ec  move s0,a0
004054f0  beq a0,zero,0x0040552c
004054f4  _li v0,-0x1a31
004054f8  lw t9,-0x7f9c(gp)
004054fc  lw a0,0x34(a0)
00405500  li v0,0x3
00405504  clear a1
00405508  jalr t9
0040550c  _sw v0,0x8(s0)
00405510  lw gp,0x10(sp)
00405514  lw a0,0x34(s0)
00405518  lw t9,-0x7e60(gp)
0040551c  nop
00405520  jalr t9
00405524  _li a1,0x10
00405528  clear v0
0040552c  lw ra,0x1c(sp)
00405530  lw s0,0x18(sp)
00405534  jr ra
00405538  _addiu sp,sp,0x20
