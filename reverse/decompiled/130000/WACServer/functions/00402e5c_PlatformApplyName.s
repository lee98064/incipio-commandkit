# PlatformApplyName @ 00402e5c
00402e5c  addiu sp,sp,-0x28
00402e60  sw ra,0x24(sp)
00402e64  sw s1,0x20(sp)
00402e68  sw s0,0x1c(sp)
00402e6c  lui gp,0x44
00402e70  addiu gp,gp,-0x4fc0
00402e74  sw gp,0x10(sp)
00402e78  beq a0,zero,0x00402f20
00402e7c  _move s0,a0
00402e80  lw v0,-0x7ed4(gp)
00402e84  lw t9,-0x7d44(gp)
00402e88  move a1,a0
00402e8c  lw a0,0x18(v0)
00402e90  jalr t9
00402e94  _nop
00402e98  lw gp,0x10(sp)
00402e9c  lui a0,0x42
00402ea0  lui a1,0x42
00402ea4  lw t9,-0x7eac(gp)
00402ea8  addiu a0,a0,-0x3080
00402eac  jalr t9
00402eb0  _addiu a1,a1,-0x340c
00402eb4  lw gp,0x10(sp)
00402eb8  beq v0,zero,0x00402f20
00402ebc  _move s1,v0
00402ec0  lw t9,-0x7f74(gp)
00402ec4  nop
00402ec8  jalr t9
00402ecc  _move a0,s0
00402ed0  lw gp,0x10(sp)
00402ed4  li a2,0x1
00402ed8  move a3,s1
00402edc  lw t9,-0x7f34(gp)
00402ee0  move a1,v0
00402ee4  jalr t9
00402ee8  _move a0,s0
00402eec  lw gp,0x10(sp)
00402ef0  lui a0,0x42
00402ef4  addiu a0,a0,-0x3060
00402ef8  lw t9,-0x7d5c(gp)
00402efc  nop
00402f00  jalr t9
00402f04  _move a1,s0
00402f08  lw gp,0x10(sp)
00402f0c  nop
00402f10  lw t9,-0x7ec8(gp)
00402f14  nop
00402f18  jalr t9
00402f1c  _move a0,s1
00402f20  lw ra,0x24(sp)
00402f24  lw s1,0x20(sp)
00402f28  lw s0,0x1c(sp)
00402f2c  clear v0
00402f30  jr ra
00402f34  _addiu sp,sp,0x28
