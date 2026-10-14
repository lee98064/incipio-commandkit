# FUN_00413dc4 @ 00413dc4
00413dc4  addiu sp,sp,-0x20
00413dc8  sw ra,0x1c(sp)
00413dcc  sw s0,0x18(sp)
00413dd0  lui gp,0x47
00413dd4  addiu gp,gp,0x2630
00413dd8  sw gp,0x10(sp)
00413ddc  lw t9,-0x7c04(gp)
00413de0  nop
00413de4  jalr t9
00413de8  _li a0,0x4
00413dec  lw gp,0x10(sp)
00413df0  beq v0,zero,0x00413e08
00413df4  _move s0,v0
00413df8  lw t9,-0x7d38(gp)
00413dfc  nop
00413e00  jalr t9
00413e04  _nop
00413e08  move v0,s0
00413e0c  lw ra,0x1c(sp)
00413e10  lw s0,0x18(sp)
00413e14  jr ra
00413e18  _addiu sp,sp,0x20
