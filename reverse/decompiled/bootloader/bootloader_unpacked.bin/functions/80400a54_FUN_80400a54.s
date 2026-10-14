# FUN_80400a54 @ 80400a54
80400a54  addiu sp,sp,-0x18
80400a58  sw ra,0x14(sp)
80400a5c  sw s0,0x10(sp)
80400a60  sltiu v0,a0,0x40
80400a64  beq v0,zero,0x80400aa4
80400a68  _move s0,a0
80400a6c  jal 0x804009f8
80400a70  _sw a2,0x10(a1)
80400a74  lui v1,0xb800
80400a78  lw v1,0x3000(v1)
80400a7c  li a0,0x1
80400a80  sllv s0,a0,s0
80400a84  or s0,v1,s0
80400a88  lui v1,0xb800
80400a8c  sw s0,0x3000(v1)
80400a90  lw v1,0x3000(v1)
80400a94  bne v0,zero,0x80400aa8
80400a98  _nop
80400a9c  j 0x80400aa8
80400aa0  _nop
80400aa4  li v0,-0x16
80400aa8  lw ra,0x14(sp)
80400aac  lw s0,0x10(sp)
80400ab0  jr ra
80400ab4  _addiu sp,sp,0x18
