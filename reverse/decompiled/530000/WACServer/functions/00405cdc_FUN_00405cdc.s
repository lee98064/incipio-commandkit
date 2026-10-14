# FUN_00405cdc @ 00405cdc
00405cdc  addiu sp,sp,-0x50
00405ce0  sw ra,0x4c(sp)
00405ce4  sw s8,0x48(sp)
00405ce8  sw s7,0x44(sp)
00405cec  sw s6,0x40(sp)
00405cf0  sw s5,0x3c(sp)
00405cf4  sw s4,0x38(sp)
00405cf8  sw s3,0x34(sp)
00405cfc  sw s2,0x30(sp)
00405d00  sw s1,0x2c(sp)
00405d04  sw s0,0x28(sp)
00405d08  lui gp,0x44
00405d0c  addiu gp,gp,-0x4fc0
00405d10  sw gp,0x10(sp)
00405d14  li v1,-0x1
00405d18  move v0,a1
00405d1c  move s0,a2
00405d20  move s6,a3
00405d24  lw s7,0x60(sp)
00405d28  lw s8,0x64(sp)
00405d2c  bne a1,v1,0x00405d48
00405d30  _move s3,a0
00405d34  lw t9,-0x7f74(gp)
00405d38  nop
00405d3c  jalr t9
00405d40  _nop
00405d44  lw gp,0x10(sp)
00405d48  addu s5,s3,v0
00405d4c  beq s0,zero,0x00405d6c
00405d50  _clear s4
00405d54  lw t9,-0x7f74(gp)
00405d58  nop
00405d5c  jalr t9
00405d60  _move a0,s0
00405d64  lw gp,0x10(sp)
00405d68  move s4,v0
00405d6c  li t0,0xd
00405d70  li a3,0xa
00405d74  b 0x00405d80
00405d78  _li v1,0x3a
00405d7c  move s3,s1
00405d80  move s2,s3
00405d84  sltu v0,s2,s5
00405d88  beq v0,zero,0x00405f64
00405d8c  _li v0,-0x1a47
00405d90  lb v0,0x0(s2)
00405d94  nop
00405d98  beq v0,t0,0x00405f94
00405d9c  _addiu s1,s2,0x1
00405da0  bne v0,a3,0x00405d84
00405da4  _addiu s2,s2,0x1
00405da8  addiu s2,s2,-0x1
00405dac  b 0x00405f94
00405db0  _addiu s1,s2,0x1
00405db4  lb v0,0x0(s1)
00405db8  nop
00405dbc  xori v0,v0,0xa
00405dc0  sltiu v0,v0,0x1
00405dc4  addu s1,s1,v0
00405dc8  bne s0,zero,0x00405e00
00405dcc  _move v0,s3
00405dd0  b 0x00405ddc
00405dd4  _sltu a0,v0,s2
00405dd8  sltu a0,v0,s2
00405ddc  beq a0,zero,0x00405d7c
00405de0  _nop
00405de4  lb a0,0x0(v0)
00405de8  nop
00405dec  bne a0,v1,0x00405dd8
00405df0  _addiu v0,v0,0x1
00405df4  addiu v0,v0,-0x1
00405df8  b 0x00405fcc
00405dfc  _subu s4,v0,s3
00405e00  subu v0,s2,s3
00405e04  sltu v0,s4,v0
00405e08  beq v0,zero,0x00405d7c
00405e0c  _addu v0,s3,s4
00405e10  lb v0,0x0(v0)
00405e14  nop
00405e18  bne v0,v1,0x00405d7c
00405e1c  _move a0,s3
00405e20  lw t9,-0x7f10(gp)
00405e24  sw v1,0x20(sp)
00405e28  sw a3,0x1c(sp)
00405e2c  sw t0,0x18(sp)
00405e30  move a1,s0
00405e34  jalr t9
00405e38  _move a2,s4
00405e3c  lw gp,0x10(sp)
00405e40  lw v1,0x20(sp)
00405e44  lw a3,0x1c(sp)
00405e48  lw t0,0x18(sp)
00405e4c  bne v0,zero,0x00405d7c
00405e50  _addiu v0,s4,0x1
00405e54  addu v0,s3,v0
00405e58  li a1,0x20
00405e5c  b 0x00405e68
00405e60  _li a0,0x9
00405e64  addiu v0,v0,0x1
00405e68  sltu v1,v0,s2
00405e6c  bne v1,zero,0x00405e84
00405e70  _li a3,0x20
00405e74  li a2,0x9
00405e78  li a1,0xd
00405e7c  b 0x00405ef0
00405e80  _li a0,0xa
00405e84  lb v1,0x0(v0)
00405e88  nop
00405e8c  beq v1,a1,0x00405e64
00405e90  _nop
00405e94  beq v1,a0,0x00405e68
00405e98  _addiu v0,v0,0x1
00405e9c  addiu v0,v0,-0x1
00405ea0  b 0x00405e74
00405ea4  _li a3,0x20
00405ea8  addiu s2,s1,0x1
00405eac  sltu v1,s2,s5
00405eb0  beq v1,zero,0x00405ef0
00405eb4  _move s1,s2
00405eb8  lb v1,0x0(s2)
00405ebc  nop
00405ec0  beq v1,a1,0x00405fb0
00405ec4  _addiu s1,s2,0x1
00405ec8  bne v1,a0,0x00405eac
00405ecc  _addiu s2,s2,0x1
00405ed0  addiu s2,s2,-0x1
00405ed4  b 0x00405fb0
00405ed8  _addiu s1,s2,0x1
00405edc  lb v1,0x0(s1)
00405ee0  nop
00405ee4  xori v1,v1,0xa
00405ee8  sltiu v1,v1,0x1
00405eec  addu s1,s1,v1
00405ef0  sltu v1,s1,s5
00405ef4  beq v1,zero,0x00405f14
00405ef8  _nop
00405efc  lb v1,0x0(s1)
00405f00  nop
00405f04  beq v1,a3,0x00405ea8
00405f08  _nop
00405f0c  beq v1,a2,0x00405ea8
00405f10  _nop
00405f14  beq s6,zero,0x00405f20
00405f18  _nop
00405f1c  sw s3,0x0(s6)
00405f20  beq s7,zero,0x00405f2c
00405f24  _nop
00405f28  sw s4,0x0(s7)
00405f2c  beq s8,zero,0x00405f38
00405f30  _nop
00405f34  sw v0,0x0(s8)
00405f38  lw v1,0x68(sp)
00405f3c  nop
00405f40  beq v1,zero,0x00405f4c
00405f44  _subu s2,s2,v0
00405f48  sw s2,0x0(v1)
00405f4c  lw v1,0x6c(sp)
00405f50  nop
00405f54  beq v1,zero,0x00405f64
00405f58  _clear v0
00405f5c  sw s1,0x0(v1)
00405f60  clear v0
00405f64  lw ra,0x4c(sp)
00405f68  lw s8,0x48(sp)
00405f6c  lw s7,0x44(sp)
00405f70  lw s6,0x40(sp)
00405f74  lw s5,0x3c(sp)
00405f78  lw s4,0x38(sp)
00405f7c  lw s3,0x34(sp)
00405f80  lw s2,0x30(sp)
00405f84  lw s1,0x2c(sp)
00405f88  lw s0,0x28(sp)
00405f8c  jr ra
00405f90  _addiu sp,sp,0x50
00405f94  xori v0,v0,0xd
00405f98  movn s1,s2,v0
00405f9c  sltu v0,s1,s5
00405fa0  beq v0,zero,0x00405dc8
00405fa4  _nop
00405fa8  b 0x00405db4
00405fac  _nop
00405fb0  xori v1,v1,0xd
00405fb4  movn s1,s2,v1
00405fb8  sltu v1,s1,s5
00405fbc  bne v1,zero,0x00405edc
00405fc0  _nop
00405fc4  b 0x00405ef4
00405fc8  _nop
00405fcc  b 0x00405e54
00405fd0  _addiu v0,s4,0x1
