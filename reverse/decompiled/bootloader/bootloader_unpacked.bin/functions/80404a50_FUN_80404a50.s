# FUN_80404a50 @ 80404a50
80404a50  addiu sp,sp,-0x18
80404a54  sw ra,0x14(sp)
80404a58  move a3,a2
80404a5c  sll v1,a0,0x3
80404a60  sll v0,a0,0x6
80404a64  addu v1,v1,v0
80404a68  lui v0,0x8041
80404a6c  addiu v0,v0,0xe64
80404a70  addu v0,v0,v1
80404a74  lw v0,0x3c(v0)
80404a78  andi a0,a0,0xff
80404a7c  jalr v0
80404a80  _li a2,0x4
80404a84  lw ra,0x14(sp)
80404a88  nop
80404a8c  jr ra
80404a90  _addiu sp,sp,0x18
