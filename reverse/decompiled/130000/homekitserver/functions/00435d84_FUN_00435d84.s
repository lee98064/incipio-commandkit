# FUN_00435d84 @ 00435d84
00435d84  lui gp,0x1e
00435d88  addiu gp,gp,0x36fc
00435d8c  addu gp,gp,t9
00435d90  addiu sp,sp,-0x20
00435d94  sw ra,0x1c(sp)
00435d98  sw s8,0x18(sp)
00435d9c  move s8,sp
00435da0  sw gp,0x10(sp)
00435da4  sw a0,0x20(s8)
00435da8  sw a1,0x24(s8)
00435dac  lw v0,0x20(s8)
00435db0  nop
00435db4  lw v0,0x18(v0)
00435db8  nop
00435dbc  move a0,v0
00435dc0  lw a1,0x24(s8)
00435dc4  lw v0,-0x70ec(gp)
00435dc8  nop
00435dcc  move t9,v0
00435dd0  jalr t9
00435dd4  _nop
00435dd8  lw gp,0x10(s8)
00435ddc  move sp,s8
00435de0  lw ra,0x1c(sp)
00435de4  lw s8,0x18(sp)
00435de8  addiu sp,sp,0x20
00435dec  jr ra
00435df0  _nop
