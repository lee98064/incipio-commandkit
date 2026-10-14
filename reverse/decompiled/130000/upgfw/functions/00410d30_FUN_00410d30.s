# FUN_00410d30 @ 00410d30
00410d30  addiu sp,sp,-0x20
00410d34  sw ra,0x1c(sp)
00410d38  lui gp,0x58
00410d3c  addiu gp,gp,0x5010
00410d40  sw gp,0x10(sp)
00410d44  lw t9,-0x7e08(gp)
00410d48  lui a0,0x53
00410d4c  jalr t9
00410d50  _addiu a0,a0,0x2370
00410d54  lw gp,0x10(sp)
00410d58  li v1,0x1
00410d5c  lui v0,0x58
00410d60  lw t9,-0x7aa8(gp)
00410d64  sw v1,-0x1650(v0)
00410d68  jalr t9
00410d6c  _clear a0
