# FUN_80404ac4 @ 80404ac4
80404ac4  addiu sp,sp,-0x18
80404ac8  sw ra,0x14(sp)
80404acc  move v1,a0
80404ad0  move a3,a1
80404ad4  lui v0,0x8041
80404ad8  lw v0,0xe9c(v0)
80404adc  clear a0
80404ae0  jalr v0
80404ae4  _move a1,v1
80404ae8  lw ra,0x14(sp)
80404aec  nop
80404af0  jr ra
80404af4  _addiu sp,sp,0x18
