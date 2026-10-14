# FUN_80405ae0 @ 80405ae0
80405ae0  addiu sp,sp,-0x28
80405ae4  sw ra,0x24(sp)
80405ae8  lui v0,0xb00
80405aec  sw v0,0x10(sp)
80405af0  li v0,0x1
80405af4  sw v0,0x14(sp)
80405af8  sw zero,0x18(sp)
80405afc  sw v0,0x1c(sp)
80405b00  jal 0x804059b0
80405b04  _andi a0,a0,0xff
80405b08  lw ra,0x24(sp)
80405b0c  nop
80405b10  jr ra
80405b14  _addiu sp,sp,0x28
