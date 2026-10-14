# FUN_80405cf8 @ 80405cf8
80405cf8  addiu sp,sp,-0x58
80405cfc  sw ra,0x54(sp)
80405d00  sw s4,0x50(sp)
80405d04  sw s3,0x4c(sp)
80405d08  sw s2,0x48(sp)
80405d0c  sw s1,0x44(sp)
80405d10  sw s0,0x40(sp)
80405d14  move s4,a2
80405d18  move s0,a3
80405d1c  andi s3,a0,0xff
80405d20  sll v1,s3,0x3
80405d24  sll v0,s3,0x6
80405d28  addu v0,v1,v0
80405d2c  lui v1,0x8041
80405d30  addiu v1,v1,0xe64
80405d34  addu v0,v0,v1
80405d38  lw a2,0x18(v0)
80405d3c  addiu v0,sp,0x2c
80405d40  sw v0,0x10(sp)
80405d44  addiu v0,sp,0x30
80405d48  sw v0,0x14(sp)
80405d4c  addiu v0,sp,0x34
80405d50  sw v0,0x18(sp)
80405d54  addiu v0,sp,0x38
80405d58  sw v0,0x1c(sp)
80405d5c  addiu v0,sp,0x3c
80405d60  sw v0,0x20(sp)
80405d64  move a0,a1
80405d68  move a1,s4
80405d6c  jal 0x80404d84
80405d70  _addiu a3,sp,0x28
80405d74  lw v0,0x34(sp)
80405d78  nop
80405d7c  bne v0,zero,0x80405dac
80405d80  _nop
80405d84  lw v0,0x3c(sp)
80405d88  nop
80405d8c  bne v0,zero,0x80405dac
80405d90  _move a0,s3
80405d94  lw a1,0x28(sp)
80405d98  lw a2,0x2c(sp)
80405d9c  jal 0x80405c18
80405da0  _move a3,s0
80405da4  j 0x80405e60
80405da8  _move a0,s3
80405dac  lw a2,0x2c(sp)
80405db0  nop
80405db4  beq a2,zero,0x80405dd4
80405db8  _move a0,s3
80405dbc  lw a1,0x28(sp)
80405dc0  jal 0x80405c18
80405dc4  _move a3,s0
80405dc8  lw v0,0x2c(sp)
80405dcc  nop
80405dd0  addu s0,s0,v0
80405dd4  lw v0,0x34(sp)
80405dd8  nop
80405ddc  beq v0,zero,0x80405e40
80405de0  _clear s1
80405de4  sll s2,s3,0x3
80405de8  sll v0,s3,0x6
80405dec  addu s2,s2,v0
80405df0  lui v0,0x8041
80405df4  addiu v0,v0,0xe64
80405df8  addu s2,s2,v0
80405dfc  move a0,s3
80405e00  lw a1,0x30(sp)
80405e04  jal 0x80405b18
80405e08  _move a2,s0
80405e0c  lw v0,0x18(s2)
80405e10  nop
80405e14  addu s0,s0,v0
80405e18  lw v1,0x30(sp)
80405e1c  nop
80405e20  addu v0,v1,v0
80405e24  sw v0,0x30(sp)
80405e28  addiu s1,s1,0x1
80405e2c  lw v0,0x34(sp)
80405e30  nop
80405e34  sltu v0,s1,v0
80405e38  bne v0,zero,0x80405e00
80405e3c  _move a0,s3
80405e40  lw a2,0x3c(sp)
80405e44  nop
80405e48  beq a2,zero,0x80405e60
80405e4c  _move a0,s3
80405e50  lw a1,0x38(sp)
80405e54  jal 0x80405c18
80405e58  _move a3,s0
80405e5c  move a0,s3
80405e60  clear a1
80405e64  jal 0x804051d4
80405e68  _lui a2,0x400
80405e6c  move v0,s4
80405e70  lw ra,0x54(sp)
80405e74  lw s4,0x50(sp)
80405e78  lw s3,0x4c(sp)
80405e7c  lw s2,0x48(sp)
80405e80  lw s1,0x44(sp)
80405e84  lw s0,0x40(sp)
80405e88  jr ra
80405e8c  _addiu sp,sp,0x58
