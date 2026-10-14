# FUN_80404a10 @ 80404a10
80404a10  addiu sp,sp,-0x18
80404a14  sw ra,0x14(sp)
80404a18  sll v1,a0,0x3
80404a1c  sll v0,a0,0x6
80404a20  addu v1,v1,v0
80404a24  lui v0,0x8041
80404a28  addiu v0,v0,0xe64
80404a2c  addu v0,v0,v1
80404a30  lw v0,0x34(v0)
80404a34  nop
80404a38  jalr v0
80404a3c  _andi a0,a0,0xff
80404a40  lw ra,0x14(sp)
80404a44  nop
80404a48  jr ra
80404a4c  _addiu sp,sp,0x18
