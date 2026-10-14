# FUN_80404b40 @ 80404b40
80404b40  addiu sp,sp,-0x18
80404b44  sw ra,0x14(sp)
80404b48  move v1,a2
80404b4c  sll a2,a0,0x3
80404b50  sll v0,a0,0x6
80404b54  addu v0,a2,v0
80404b58  lui a2,0x8041
80404b5c  addiu a2,a2,0xe64
80404b60  addu v0,v0,a2
80404b64  lw v0,0x38(v0)
80404b68  andi a0,a0,0xff
80404b6c  move a2,a3
80404b70  jalr v0
80404b74  _move a3,v1
80404b78  lw ra,0x14(sp)
80404b7c  nop
80404b80  jr ra
80404b84  _addiu sp,sp,0x18
