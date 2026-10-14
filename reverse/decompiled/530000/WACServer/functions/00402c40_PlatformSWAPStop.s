# PlatformSWAPStop @ 00402c40
00402c40  addiu sp,sp,-0xa0
00402c44  sw ra,0x9c(sp)
00402c48  sw s0,0x98(sp)
00402c4c  lui gp,0x44
00402c50  addiu gp,gp,-0x4fc0
00402c54  sw gp,0x10(sp)
00402c58  lw t9,-0x7eb0(gp)
00402c5c  addiu s0,sp,0x18
00402c60  move a0,s0
00402c64  clear a1
00402c68  jalr t9
00402c6c  _li a2,0x80
00402c70  lw gp,0x10(sp)
00402c74  lui a1,0x42
00402c78  lui a2,0x42
00402c7c  lw t9,-0x7efc(gp)
00402c80  addiu a1,a1,-0x3050
00402c84  addiu a2,a2,-0x3040
00402c88  jalr t9
00402c8c  _move a0,s0
00402c90  lw gp,0x10(sp)
00402c94  nop
00402c98  lw t9,-0x7dbc(gp)
00402c9c  nop
00402ca0  jalr t9
00402ca4  _move a0,s0
00402ca8  lw ra,0x9c(sp)
00402cac  lw s0,0x98(sp)
00402cb0  clear v0
00402cb4  jr ra
00402cb8  _addiu sp,sp,0xa0
