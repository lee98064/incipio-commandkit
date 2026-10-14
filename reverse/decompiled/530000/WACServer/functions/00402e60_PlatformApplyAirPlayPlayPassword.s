# PlatformApplyAirPlayPlayPassword @ 00402e60
00402e60  addiu sp,sp,-0x28
00402e64  sw ra,0x24(sp)
00402e68  sw s1,0x20(sp)
00402e6c  sw s0,0x1c(sp)
00402e70  lui gp,0x44
00402e74  addiu gp,gp,-0x4fc0
00402e78  sw gp,0x10(sp)
00402e7c  lw t9,-0x7dac(gp)
00402e80  move s0,a0
00402e84  lui a0,0x42
00402e88  jalr t9
00402e8c  _addiu a0,a0,-0x2f38
00402e90  lw gp,0x10(sp)
00402e94  beq s0,zero,0x00402f24
00402e98  _lui a1,0x42
00402e9c  lw t9,-0x7eac(gp)
00402ea0  lui a0,0x42
00402ea4  addiu a0,a0,-0x2f04
00402ea8  jalr t9
00402eac  _addiu a1,a1,-0x3230
00402eb0  lw gp,0x10(sp)
00402eb4  beq v0,zero,0x00402f24
00402eb8  _move s1,v0
00402ebc  lw t9,-0x7f74(gp)
00402ec0  nop
00402ec4  jalr t9
00402ec8  _move a0,s0
00402ecc  lw gp,0x10(sp)
00402ed0  li a2,0x1
00402ed4  move a3,s1
00402ed8  lw t9,-0x7f34(gp)
00402edc  move a1,v0
00402ee0  jalr t9
00402ee4  _move a0,s0
00402ee8  lw gp,0x10(sp)
00402eec  lui a0,0x42
00402ef0  addiu a0,a0,-0x2ee4
00402ef4  lw t9,-0x7d5c(gp)
00402ef8  nop
00402efc  jalr t9
00402f00  _move a1,s0
00402f04  lw gp,0x10(sp)
00402f08  nop
00402f0c  lw t9,-0x7ec8(gp)
00402f10  nop
00402f14  jalr t9
00402f18  _move a0,s1
00402f1c  lw gp,0x10(sp)
00402f20  nop
00402f24  lw t9,-0x7dac(gp)
00402f28  lui a0,0x42
00402f2c  jalr t9
00402f30  _addiu a0,a0,-0x2ed0
00402f34  lw ra,0x24(sp)
00402f38  lw s1,0x20(sp)
00402f3c  lw s0,0x1c(sp)
00402f40  clear v0
00402f44  jr ra
00402f48  _addiu sp,sp,0x28
