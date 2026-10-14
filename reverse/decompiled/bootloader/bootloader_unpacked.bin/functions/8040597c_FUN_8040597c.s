# FUN_8040597c @ 8040597c
8040597c  addiu sp,sp,-0x28
80405980  sw ra,0x24(sp)
80405984  lui v0,0x200
80405988  sw v0,0x10(sp)
8040598c  sw zero,0x14(sp)
80405990  sw zero,0x18(sp)
80405994  sw zero,0x1c(sp)
80405998  jal 0x804057f8
8040599c  _andi a0,a0,0xff
804059a0  lw ra,0x24(sp)
804059a4  nop
804059a8  jr ra
804059ac  _addiu sp,sp,0x28
