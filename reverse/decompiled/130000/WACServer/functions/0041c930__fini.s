# _fini @ 0041c930
0041c930  lui gp,0x2
0041c934  addiu gp,gp,-0x18f0
0041c938  addu gp,gp,t9
0041c93c  addiu sp,sp,-0x20
0041c940  sw gp,0x10(sp)
0041c944  sw ra,0x1c(sp)
0041c948  sw gp,0x18(sp)
0041c94c  bal 0x0041c954
0041c950  _nop
0041c954  lui gp,0x2
0041c958  addiu gp,gp,-0x1914
0041c95c  addu gp,gp,ra
0041c960  lw t9,-0x7fd8(gp)
0041c964  nop
0041c968  addiu t9,t9,0x1db0
0041c96c  bal 0x00401db0
0041c970  _nop
0041c974  lw gp,0x10(sp)
0041c978  nop
0041c97c  lw ra,0x1c(sp)
0041c980  nop
0041c984  jr ra
0041c988  _addiu sp,sp,0x20
