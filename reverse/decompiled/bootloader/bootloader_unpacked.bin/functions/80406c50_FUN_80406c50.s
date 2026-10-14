# FUN_80406c50 @ 80406c50
80406c50  addiu sp,sp,-0x28
80406c54  sw ra,0x24(sp)
80406c58  sw s3,0x20(sp)
80406c5c  sw s2,0x1c(sp)
80406c60  sw s1,0x18(sp)
80406c64  sw s0,0x14(sp)
80406c68  move s0,a0
80406c6c  move s3,a1
80406c70  move s1,a2
80406c74  lb s2,0x0(s0)
80406c78  jal 0x8040691c
80406c7c  _move a0,s2
80406c80  bne v0,zero,0x80406c74
80406c84  _addiu s0,s0,0x1
80406c88  addiu s0,s0,-0x1
80406c8c  addiu v0,s0,0x1
80406c90  xori s2,s2,0x2b
80406c94  movz s0,v0,s2
80406c98  li v0,0x10
80406c9c  bne s1,v0,0x80406cbc
80406ca0  _li v0,0x30
80406ca4  lb v1,0x0(s0)
80406ca8  nop
80406cac  bne v1,v0,0x80406d00
80406cb0  _nop
80406cb4  j 0x80406cd8
80406cb8  _nop
80406cbc  bne s1,zero,0x80406cf8
80406cc0  _nop
80406cc4  lb v1,0x0(s0)
80406cc8  nop
80406ccc  bne v1,v0,0x80406d00
80406cd0  _li s1,0xa
80406cd4  li s1,0x8
80406cd8  lb v0,0x1(s0)
80406cdc  li v1,0x78
80406ce0  beq v0,v1,0x80406cf0
80406ce4  _li v1,0x58
80406ce8  bne v0,v1,0x80406cf8
80406cec  _nop
80406cf0  addiu s0,s0,0x2
80406cf4  li s1,0x10
80406cf8  lb v1,0x0(s0)
80406cfc  nop
80406d00  beq v1,zero,0x80406d8c
80406d04  _clear v0
80406d08  li a0,0xff
80406d0c  andi v1,v1,0xff
80406d10  sltiu a1,v1,0x61
80406d14  bne a1,zero,0x80406d28
80406d18  _sltiu a1,v1,0x41
80406d1c  addiu v1,v1,-0x57
80406d20  j 0x80406d54
80406d24  _andi v1,v1,0xff
80406d28  bne a1,zero,0x80406d3c
80406d2c  _sltiu a1,v1,0x3a
80406d30  addiu v1,v1,-0x37
80406d34  j 0x80406d54
80406d38  _andi v1,v1,0xff
80406d3c  bne a1,zero,0x80406d4c
80406d40  _nop
80406d44  j 0x80406d54
80406d48  _move v1,a0
80406d4c  addiu v1,v1,-0x30
80406d50  andi v1,v1,0xff
80406d54  slt a1,v1,s1
80406d58  beq a1,zero,0x80406d8c
80406d5c  _mult v0,s1
80406d60  mflo a1
80406d64  sltu v0,a1,v0
80406d68  beq v0,zero,0x80406d78
80406d6c  _addiu s0,s0,0x1
80406d70  j 0x80406d98
80406d74  _li v0,-0x1
80406d78  addu v0,v1,a1
80406d7c  lb v1,0x0(s0)
80406d80  nop
80406d84  bne v1,zero,0x80406d0c
80406d88  _nop
80406d8c  beq s3,zero,0x80406d98
80406d90  _nop
80406d94  sw s0,0x0(s3)
80406d98  lw ra,0x24(sp)
80406d9c  lw s3,0x20(sp)
80406da0  lw s2,0x1c(sp)
80406da4  lw s1,0x18(sp)
80406da8  lw s0,0x14(sp)
80406dac  jr ra
80406db0  _addiu sp,sp,0x28
