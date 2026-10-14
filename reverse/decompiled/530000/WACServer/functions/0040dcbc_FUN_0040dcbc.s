# FUN_0040dcbc @ 0040dcbc
0040dcbc  addiu sp,sp,-0x20
0040dcc0  sw ra,0x1c(sp)
0040dcc4  sw s0,0x18(sp)
0040dcc8  lui gp,0x44
0040dccc  addiu gp,gp,-0x4fc0
0040dcd0  sw gp,0x10(sp)
0040dcd4  lbu v0,0x140(a0)
0040dcd8  nop
0040dcdc  beq v0,zero,0x0040dcfc
0040dce0  _move s0,a0
0040dce4  lw t9,-0x7f84(gp)
0040dce8  nop
0040dcec  jalr t9
0040dcf0  _addiu a0,a0,0x24
0040dcf4  lw gp,0x10(sp)
0040dcf8  nop
0040dcfc  lw t9,-0x7eb0(gp)
0040dd00  move a0,s0
0040dd04  clear a1
0040dd08  jalr t9
0040dd0c  _li a2,0x144
0040dd10  lw gp,0x10(sp)
0040dd14  move a0,s0
0040dd18  lw ra,0x1c(sp)
0040dd1c  lw t9,-0x7fb8(gp)
0040dd20  lw s0,0x18(sp)
0040dd24  jr t9
0040dd28  _addiu sp,sp,0x20
