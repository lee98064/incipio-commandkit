# FUN_80404a94 @ 80404a94
80404a94  addiu sp,sp,-0x18
80404a98  sw ra,0x14(sp)
80404a9c  move a3,a0
80404aa0  lui v0,0x8041
80404aa4  lw v0,0xea0(v0)
80404aa8  nop
80404aac  jalr v0
80404ab0  _clear a0
80404ab4  lw ra,0x14(sp)
80404ab8  nop
80404abc  jr ra
80404ac0  _addiu sp,sp,0x18
