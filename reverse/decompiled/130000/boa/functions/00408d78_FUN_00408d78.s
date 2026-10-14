# FUN_00408d78 @ 00408d78
00408d78  addiu sp,sp,-0x20
00408d7c  sw ra,0x1c(sp)
00408d80  lui gp,0x47
00408d84  addiu gp,gp,0x2630
00408d88  sw gp,0x10(sp)
00408d8c  lui v0,0x47
00408d90  lui a1,0x47
00408d94  addiu v0,v0,-0x3a00
00408d98  addiu a1,a1,-0x3944
00408d9c  clear a2
00408da0  lw v1,0x0(v0)
00408da4  nop
00408da8  beq v1,zero,0x00408dc4
00408dac  _clear a0
00408db0  lw v1,0x8(v1)
00408db4  nop
00408db8  bne v1,zero,0x00408db0
00408dbc  _addiu a0,a0,0x1
00408dc0  addu a2,a2,a0
00408dc4  addiu v0,v0,0x4
00408dc8  bne v0,a1,0x00408da0
00408dcc  _nop
00408dd0  lw v0,-0x7e40(gp)
00408dd4  lw t9,-0x7c44(gp)
00408dd8  lui a1,0x45
00408ddc  lw a0,0x0(v0)
00408de0  jalr t9
00408de4  _addiu a1,a1,-0x5d14
00408de8  lw gp,0x10(sp)
00408dec  lui v0,0x47
00408df0  lui a1,0x47
00408df4  addiu v0,v0,-0x3944
00408df8  addiu a1,a1,-0x3888
00408dfc  clear a2
00408e00  lw v1,0x0(v0)
00408e04  nop
00408e08  beq v1,zero,0x00408e24
00408e0c  _clear a0
00408e10  lw v1,0x8(v1)
00408e14  nop
00408e18  bne v1,zero,0x00408e10
00408e1c  _addiu a0,a0,0x1
00408e20  addu a2,a2,a0
00408e24  addiu v0,v0,0x4
00408e28  bne v0,a1,0x00408e00
00408e2c  _nop
00408e30  lw v0,-0x7e40(gp)
00408e34  lw t9,-0x7c44(gp)
00408e38  lw ra,0x1c(sp)
00408e3c  lw a0,0x0(v0)
00408e40  lui a1,0x45
00408e44  addiu a1,a1,-0x5cec
00408e48  jr t9
00408e4c  _addiu sp,sp,0x20
