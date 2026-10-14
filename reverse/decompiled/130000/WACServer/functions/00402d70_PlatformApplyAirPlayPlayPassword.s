# PlatformApplyAirPlayPlayPassword @ 00402d70
00402d70  addiu sp,sp,-0x28
00402d74  sw ra,0x24(sp)
00402d78  sw s1,0x20(sp)
00402d7c  sw s0,0x1c(sp)
00402d80  lui gp,0x44
00402d84  addiu gp,gp,-0x4fc0
00402d88  sw gp,0x10(sp)
00402d8c  lw t9,-0x7dac(gp)
00402d90  move s0,a0
00402d94  lui a0,0x42
00402d98  jalr t9
00402d9c  _addiu a0,a0,-0x3118
00402da0  lw gp,0x10(sp)
00402da4  beq s0,zero,0x00402e34
00402da8  _lui a1,0x42
00402dac  lw t9,-0x7eac(gp)
00402db0  lui a0,0x42
00402db4  addiu a0,a0,-0x30e4
00402db8  jalr t9
00402dbc  _addiu a1,a1,-0x340c
00402dc0  lw gp,0x10(sp)
00402dc4  beq v0,zero,0x00402e34
00402dc8  _move s1,v0
00402dcc  lw t9,-0x7f74(gp)
00402dd0  nop
00402dd4  jalr t9
00402dd8  _move a0,s0
00402ddc  lw gp,0x10(sp)
00402de0  li a2,0x1
00402de4  move a3,s1
00402de8  lw t9,-0x7f34(gp)
00402dec  move a1,v0
00402df0  jalr t9
00402df4  _move a0,s0
00402df8  lw gp,0x10(sp)
00402dfc  lui a0,0x42
00402e00  addiu a0,a0,-0x30c4
00402e04  lw t9,-0x7d5c(gp)
00402e08  nop
00402e0c  jalr t9
00402e10  _move a1,s0
00402e14  lw gp,0x10(sp)
00402e18  nop
00402e1c  lw t9,-0x7ec8(gp)
00402e20  nop
00402e24  jalr t9
00402e28  _move a0,s1
00402e2c  lw gp,0x10(sp)
00402e30  nop
00402e34  lw t9,-0x7dac(gp)
00402e38  lui a0,0x42
00402e3c  jalr t9
00402e40  _addiu a0,a0,-0x30b0
00402e44  lw ra,0x24(sp)
00402e48  lw s1,0x20(sp)
00402e4c  lw s0,0x1c(sp)
00402e50  clear v0
00402e54  jr ra
00402e58  _addiu sp,sp,0x28
