# FUN_80404af8 @ 80404af8
80404af8  addiu sp,sp,-0x18
80404afc  sw ra,0x14(sp)
80404b00  move v1,a2
80404b04  sll a2,a0,0x3
80404b08  sll v0,a0,0x6
80404b0c  addu v0,a2,v0
80404b10  lui a2,0x8041
80404b14  addiu a2,a2,0xe64
80404b18  addu v0,v0,a2
80404b1c  lw v0,0x38(v0)
80404b20  andi a0,a0,0xff
80404b24  move a2,a3
80404b28  jalr v0
80404b2c  _move a3,v1
80404b30  lw ra,0x14(sp)
80404b34  nop
80404b38  jr ra
80404b3c  _addiu sp,sp,0x18
