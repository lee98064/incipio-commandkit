# FUN_80407c3c @ 80407c3c
80407c3c  addiu sp,sp,-0x18
80407c40  sw ra,0x14(sp)
80407c44  lui v0,0xb800
80407c48  ori v0,v0,0x3000
80407c4c  jal 0x80406390
80407c50  _sw zero,0x0(v0)
80407c54  jal 0x8040d07c
80407c58  _nop
80407c5c  jal 0x8040d05c
80407c60  _nop
80407c64  mfc0 at,Status
80407c68  ori at,at,0x1f
80407c6c  xori at,at,0x1e
80407c70  mtc0 at,Status
80407c74  lw ra,0x14(sp)
80407c78  nop
80407c7c  jr ra
80407c80  _addiu sp,sp,0x18
