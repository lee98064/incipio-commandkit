# FUN_80407d48 @ 80407d48
80407d48  addiu sp,sp,-0x18
80407d4c  sw ra,0x14(sp)
80407d50  jal 0x804027cc
80407d54  _clear a0
80407d58  lui a0,0x8041
80407d5c  jal 0x804077a4
80407d60  _addiu a0,a0,-0x244c
80407d64  mfc0 at,Status
80407d68  ori at,at,0x1f
80407d6c  xori at,at,0x1e
80407d70  mtc0 at,Status
80407d74  jal 0x80400dd8
80407d78  _clear a0
80407d7c  jal 0x8040a594
80407d80  _nop
80407d84  lw ra,0x14(sp)
80407d88  nop
80407d8c  jr ra
80407d90  _addiu sp,sp,0x18
