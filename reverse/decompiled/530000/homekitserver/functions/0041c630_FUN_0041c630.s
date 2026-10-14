# FUN_0041c630 @ 0041c630
0041c630  addiu sp,sp,-0x20
0041c634  sw ra,0x1c(sp)
0041c638  lui gp,0x62
0041c63c  addiu gp,gp,-0x5cf0
0041c640  sw gp,0x10(sp)
0041c644  lw t9,-0x5a50(gp)
0041c648  li a0,0x1
0041c64c  jalr t9
0041c650  _li a1,0x18
0041c654  beq v0,zero,0x0041c660
0041c658  _li v1,0x1
0041c65c  sw v1,0x4(v0)
0041c660  lw ra,0x1c(sp)
0041c664  nop
0041c668  jr ra
0041c66c  _addiu sp,sp,0x20
