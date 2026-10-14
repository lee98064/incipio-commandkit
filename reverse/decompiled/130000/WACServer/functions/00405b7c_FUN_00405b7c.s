# FUN_00405b7c @ 00405b7c
00405b7c  addiu sp,sp,-0x50
00405b80  sw ra,0x4c(sp)
00405b84  sw s8,0x48(sp)
00405b88  sw s7,0x44(sp)
00405b8c  sw s6,0x40(sp)
00405b90  sw s5,0x3c(sp)
00405b94  sw s4,0x38(sp)
00405b98  sw s3,0x34(sp)
00405b9c  sw s2,0x30(sp)
00405ba0  sw s1,0x2c(sp)
00405ba4  sw s0,0x28(sp)
00405ba8  lui gp,0x44
00405bac  addiu gp,gp,-0x4fc0
00405bb0  sw gp,0x10(sp)
00405bb4  li v1,-0x1
00405bb8  move v0,a1
00405bbc  move s0,a2
00405bc0  move s6,a3
00405bc4  lw s7,0x60(sp)
00405bc8  lw s8,0x64(sp)
00405bcc  bne a1,v1,0x00405be8
00405bd0  _move s3,a0
00405bd4  lw t9,-0x7f74(gp)
00405bd8  nop
00405bdc  jalr t9
00405be0  _nop
00405be4  lw gp,0x10(sp)
00405be8  addu s5,s3,v0
00405bec  beq s0,zero,0x00405c0c
00405bf0  _clear s4
00405bf4  lw t9,-0x7f74(gp)
00405bf8  nop
00405bfc  jalr t9
00405c00  _move a0,s0
00405c04  lw gp,0x10(sp)
00405c08  move s4,v0
00405c0c  li t0,0xd
00405c10  li a3,0xa
00405c14  b 0x00405c20
00405c18  _li v1,0x3a
00405c1c  move s3,s1
00405c20  move s2,s3
00405c24  sltu v0,s2,s5
00405c28  beq v0,zero,0x00405e04
00405c2c  _li v0,-0x1a47
00405c30  lb v0,0x0(s2)
00405c34  nop
00405c38  beq v0,t0,0x00405e34
00405c3c  _addiu s1,s2,0x1
00405c40  bne v0,a3,0x00405c24
00405c44  _addiu s2,s2,0x1
00405c48  addiu s2,s2,-0x1
00405c4c  b 0x00405e34
00405c50  _addiu s1,s2,0x1
00405c54  lb v0,0x0(s1)
00405c58  nop
00405c5c  xori v0,v0,0xa
00405c60  sltiu v0,v0,0x1
00405c64  addu s1,s1,v0
00405c68  bne s0,zero,0x00405ca0
00405c6c  _move v0,s3
00405c70  b 0x00405c7c
00405c74  _sltu a0,v0,s2
00405c78  sltu a0,v0,s2
00405c7c  beq a0,zero,0x00405c1c
00405c80  _nop
00405c84  lb a0,0x0(v0)
00405c88  nop
00405c8c  bne a0,v1,0x00405c78
00405c90  _addiu v0,v0,0x1
00405c94  addiu v0,v0,-0x1
00405c98  b 0x00405e6c
00405c9c  _subu s4,v0,s3
00405ca0  subu v0,s2,s3
00405ca4  sltu v0,s4,v0
00405ca8  beq v0,zero,0x00405c1c
00405cac  _addu v0,s3,s4
00405cb0  lb v0,0x0(v0)
00405cb4  nop
00405cb8  bne v0,v1,0x00405c1c
00405cbc  _move a0,s3
00405cc0  lw t9,-0x7f10(gp)
00405cc4  sw v1,0x20(sp)
00405cc8  sw a3,0x1c(sp)
00405ccc  sw t0,0x18(sp)
00405cd0  move a1,s0
00405cd4  jalr t9
00405cd8  _move a2,s4
00405cdc  lw gp,0x10(sp)
00405ce0  lw v1,0x20(sp)
00405ce4  lw a3,0x1c(sp)
00405ce8  lw t0,0x18(sp)
00405cec  bne v0,zero,0x00405c1c
00405cf0  _addiu v0,s4,0x1
00405cf4  addu v0,s3,v0
00405cf8  li a1,0x20
00405cfc  b 0x00405d08
00405d00  _li a0,0x9
00405d04  addiu v0,v0,0x1
00405d08  sltu v1,v0,s2
00405d0c  bne v1,zero,0x00405d24
00405d10  _li a3,0x20
00405d14  li a2,0x9
00405d18  li a1,0xd
00405d1c  b 0x00405d90
00405d20  _li a0,0xa
00405d24  lb v1,0x0(v0)
00405d28  nop
00405d2c  beq v1,a1,0x00405d04
00405d30  _nop
00405d34  beq v1,a0,0x00405d08
00405d38  _addiu v0,v0,0x1
00405d3c  addiu v0,v0,-0x1
00405d40  b 0x00405d14
00405d44  _li a3,0x20
00405d48  addiu s2,s1,0x1
00405d4c  sltu v1,s2,s5
00405d50  beq v1,zero,0x00405d90
00405d54  _move s1,s2
00405d58  lb v1,0x0(s2)
00405d5c  nop
00405d60  beq v1,a1,0x00405e50
00405d64  _addiu s1,s2,0x1
00405d68  bne v1,a0,0x00405d4c
00405d6c  _addiu s2,s2,0x1
00405d70  addiu s2,s2,-0x1
00405d74  b 0x00405e50
00405d78  _addiu s1,s2,0x1
00405d7c  lb v1,0x0(s1)
00405d80  nop
00405d84  xori v1,v1,0xa
00405d88  sltiu v1,v1,0x1
00405d8c  addu s1,s1,v1
00405d90  sltu v1,s1,s5
00405d94  beq v1,zero,0x00405db4
00405d98  _nop
00405d9c  lb v1,0x0(s1)
00405da0  nop
00405da4  beq v1,a3,0x00405d48
00405da8  _nop
00405dac  beq v1,a2,0x00405d48
00405db0  _nop
00405db4  beq s6,zero,0x00405dc0
00405db8  _nop
00405dbc  sw s3,0x0(s6)
00405dc0  beq s7,zero,0x00405dcc
00405dc4  _nop
00405dc8  sw s4,0x0(s7)
00405dcc  beq s8,zero,0x00405dd8
00405dd0  _nop
00405dd4  sw v0,0x0(s8)
00405dd8  lw v1,0x68(sp)
00405ddc  nop
00405de0  beq v1,zero,0x00405dec
00405de4  _subu s2,s2,v0
00405de8  sw s2,0x0(v1)
00405dec  lw v1,0x6c(sp)
00405df0  nop
00405df4  beq v1,zero,0x00405e04
00405df8  _clear v0
00405dfc  sw s1,0x0(v1)
00405e00  clear v0
00405e04  lw ra,0x4c(sp)
00405e08  lw s8,0x48(sp)
00405e0c  lw s7,0x44(sp)
00405e10  lw s6,0x40(sp)
00405e14  lw s5,0x3c(sp)
00405e18  lw s4,0x38(sp)
00405e1c  lw s3,0x34(sp)
00405e20  lw s2,0x30(sp)
00405e24  lw s1,0x2c(sp)
00405e28  lw s0,0x28(sp)
00405e2c  jr ra
00405e30  _addiu sp,sp,0x50
00405e34  xori v0,v0,0xd
00405e38  movn s1,s2,v0
00405e3c  sltu v0,s1,s5
00405e40  beq v0,zero,0x00405c68
00405e44  _nop
00405e48  b 0x00405c54
00405e4c  _nop
00405e50  xori v1,v1,0xd
00405e54  movn s1,s2,v1
00405e58  sltu v1,s1,s5
00405e5c  bne v1,zero,0x00405d7c
00405e60  _nop
00405e64  b 0x00405d94
00405e68  _nop
00405e6c  b 0x00405cf4
00405e70  _addiu v0,s4,0x1
