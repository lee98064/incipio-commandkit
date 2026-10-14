# FUN_00410d60 @ 00410d60
00410d60  addiu sp,sp,-0x20
00410d64  sw ra,0x1c(sp)
00410d68  lui gp,0x58
00410d6c  addiu gp,gp,0x5140
00410d70  sw gp,0x10(sp)
00410d74  lw t9,-0x7e08(gp)
00410d78  lui a0,0x53
00410d7c  jalr t9
00410d80  _addiu a0,a0,0x2470
00410d84  lw gp,0x10(sp)
00410d88  li v1,0x1
00410d8c  lui v0,0x58
00410d90  lw t9,-0x7aa8(gp)
00410d94  sw v1,-0x1520(v0)
00410d98  jalr t9
00410d9c  _clear a0
