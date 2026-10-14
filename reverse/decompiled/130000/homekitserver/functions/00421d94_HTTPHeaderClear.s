# HTTPHeaderClear @ 00421d94
00421d94  addiu sp,sp,-0x20
00421d98  sw ra,0x1c(sp)
00421d9c  sw s0,0x18(sp)
00421da0  lui gp,0x62
00421da4  addiu gp,gp,-0x6b80
00421da8  sw gp,0x10(sp)
00421dac  move s0,a0
00421db0  lw a0,0x104(a0)
00421db4  sw zero,0x100(s0)
00421db8  beq a0,zero,0x00421dd8
00421dbc  _sw zero,0x10c(s0)
00421dc0  lw t9,-0x7aa4(gp)
00421dc4  nop
00421dc8  jalr t9
00421dcc  _nop
00421dd0  lw gp,0x10(sp)
00421dd4  sw zero,0x104(s0)
00421dd8  lw a0,0x108(s0)
00421ddc  nop
00421de0  beq a0,zero,0x00421dfc
00421de4  _nop
00421de8  lw t9,-0x7aa4(gp)
00421dec  nop
00421df0  jalr t9
00421df4  _nop
00421df8  sw zero,0x108(s0)
00421dfc  lw ra,0x1c(sp)
00421e00  lw s0,0x18(sp)
00421e04  jr ra
00421e08  _addiu sp,sp,0x20
