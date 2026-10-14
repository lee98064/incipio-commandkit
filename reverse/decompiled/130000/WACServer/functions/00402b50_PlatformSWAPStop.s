# PlatformSWAPStop @ 00402b50
00402b50  addiu sp,sp,-0xa0
00402b54  sw ra,0x9c(sp)
00402b58  sw s0,0x98(sp)
00402b5c  lui gp,0x44
00402b60  addiu gp,gp,-0x4fc0
00402b64  sw gp,0x10(sp)
00402b68  lw t9,-0x7eb0(gp)
00402b6c  addiu s0,sp,0x18
00402b70  move a0,s0
00402b74  clear a1
00402b78  jalr t9
00402b7c  _li a2,0x80
00402b80  lw gp,0x10(sp)
00402b84  lui a1,0x42
00402b88  lui a2,0x42
00402b8c  lw t9,-0x7efc(gp)
00402b90  addiu a1,a1,-0x3230
00402b94  addiu a2,a2,-0x3220
00402b98  jalr t9
00402b9c  _move a0,s0
00402ba0  lw gp,0x10(sp)
00402ba4  nop
00402ba8  lw t9,-0x7dbc(gp)
00402bac  nop
00402bb0  jalr t9
00402bb4  _move a0,s0
00402bb8  lw ra,0x9c(sp)
00402bbc  lw s0,0x98(sp)
00402bc0  clear v0
00402bc4  jr ra
00402bc8  _addiu sp,sp,0xa0
