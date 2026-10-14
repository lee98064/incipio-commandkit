# FUN_00420d64 @ 00420d64
00420d64  addiu sp,sp,-0xe0
00420d68  sw ra,0xdc(sp)
00420d6c  sw s8,0xd8(sp)
00420d70  sw s7,0xd4(sp)
00420d74  sw s6,0xd0(sp)
00420d78  sw s5,0xcc(sp)
00420d7c  sw s4,0xc8(sp)
00420d80  sw s3,0xc4(sp)
00420d84  sw s2,0xc0(sp)
00420d88  sw s1,0xbc(sp)
00420d8c  sw s0,0xb8(sp)
00420d90  lui gp,0x47
00420d94  addiu gp,gp,0x2630
00420d98  sw gp,0x10(sp)
00420d9c  lw t9,-0x7de8(gp)
00420da0  move s2,a0
00420da4  lui a0,0x45
00420da8  jalr t9
00420dac  _addiu a0,a0,0x920
00420db0  lw gp,0x10(sp)
00420db4  bne v0,zero,0x00420ee8
00420db8  _move s6,v0
00420dbc  lw t9,-0x7a08(gp)
00420dc0  lui a0,0x45
00420dc4  jalr t9
00420dc8  _addiu a0,a0,0x914
00420dcc  b 0x00420f48
00420dd0  _clear v0
00420dd4  jalr t9
00420dd8  _nop
00420ddc  lw gp,0x10(sp)
00420de0  beq v0,zero,0x00420f04
00420de4  _nop
00420de8  lw a0,-0x7a70(gp)
00420dec  lb v0,0xb(s0)
00420df0  lw v1,0x0(a0)
00420df4  sll v0,v0,0x1
00420df8  addu v0,v1,v0
00420dfc  lhu v0,0x0(v0)
00420e00  nop
00420e04  andi v0,v0,0x8
00420e08  beq v0,zero,0x00420f04
00420e0c  _lui a1,0x45
00420e10  lw t9,-0x7e28(gp)
00420e14  move a2,s1
00420e18  move a0,s5
00420e1c  jalr t9
00420e20  _addiu a1,a1,0x928
00420e24  lw gp,0x10(sp)
00420e28  move a0,s5
00420e2c  lw t9,-0x7d9c(gp)
00420e30  nop
00420e34  jalr t9
00420e38  _move a1,s8
00420e3c  lw gp,0x10(sp)
00420e40  li a1,0x31
00420e44  move a0,s4
00420e48  lw t9,-0x7ab8(gp)
00420e4c  move s0,v0
00420e50  beq v0,zero,0x00420f04
00420e54  _move a2,v0
00420e58  jalr t9
00420e5c  _nop
00420e60  lw gp,0x10(sp)
00420e64  nop
00420e68  lw t9,-0x7dd4(gp)
00420e6c  bne v0,zero,0x00420e88
00420e70  _move a0,s0
00420e74  jalr t9
00420e78  _nop
00420e7c  lw gp,0x10(sp)
00420e80  b 0x00420f04
00420e84  _nop
00420e88  jalr t9
00420e8c  _nop
00420e90  lw gp,0x10(sp)
00420e94  move a0,s4
00420e98  move a1,s7
00420e9c  lw t9,-0x7d6c(gp)
00420ea0  nop
00420ea4  jalr t9
00420ea8  _move a2,s3
00420eac  lw gp,0x10(sp)
00420eb0  move a0,s3
00420eb4  lw t9,-0x7e0c(gp)
00420eb8  nop
00420ebc  jalr t9
00420ec0  _move a1,s2
00420ec4  lw gp,0x10(sp)
00420ec8  bne v0,zero,0x00420f04
00420ecc  _move a0,s1
00420ed0  lw t9,-0x7be8(gp)
00420ed4  clear a1
00420ed8  jalr t9
00420edc  _clear a2
00420ee0  b 0x00420f48
00420ee4  _nop
00420ee8  lui s8,0x45
00420eec  lui s7,0x45
00420ef0  addiu s8,s8,0x7484
00420ef4  addiu s7,s7,0x938
00420ef8  addiu s5,sp,0x18
00420efc  addiu s4,sp,0x4c
00420f00  addiu s3,sp,0x80
00420f04  lw t9,-0x7b68(gp)
00420f08  nop
00420f0c  jalr t9
00420f10  _move a0,s6
00420f14  lw gp,0x10(sp)
00420f18  lui a1,0x45
00420f1c  addiu s1,v0,0xb
00420f20  addiu a1,a1,-0x6520
00420f24  move s0,v0
00420f28  lw t9,-0x7e0c(gp)
00420f2c  bne v0,zero,0x00420dd4
00420f30  _move a0,s1
00420f34  lui a1,0x45
00420f38  move a0,s2
00420f3c  jalr t9
00420f40  _addiu a1,a1,0x940
00420f44  sltiu v0,v0,0x1
00420f48  lw ra,0xdc(sp)
00420f4c  lw s8,0xd8(sp)
00420f50  lw s7,0xd4(sp)
00420f54  lw s6,0xd0(sp)
00420f58  lw s5,0xcc(sp)
00420f5c  lw s4,0xc8(sp)
00420f60  lw s3,0xc4(sp)
00420f64  lw s2,0xc0(sp)
00420f68  lw s1,0xbc(sp)
00420f6c  lw s0,0xb8(sp)
00420f70  jr ra
00420f74  _addiu sp,sp,0xe0
