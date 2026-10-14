# add_alias @ 00404de0
00404de0  addiu sp,sp,-0x50
00404de4  sw ra,0x4c(sp)
00404de8  sw s7,0x48(sp)
00404dec  sw s6,0x44(sp)
00404df0  sw s5,0x40(sp)
00404df4  sw s4,0x3c(sp)
00404df8  sw s3,0x38(sp)
00404dfc  sw s2,0x34(sp)
00404e00  sw s1,0x30(sp)
00404e04  sw s0,0x2c(sp)
00404e08  lui gp,0x47
00404e0c  addiu gp,gp,0x2630
00404e10  sw gp,0x20(sp)
00404e14  lw t9,-0x7f1c(gp)
00404e18  move s2,a1
00404e1c  move s3,a2
00404e20  jalr t9
00404e24  _move s0,a0
00404e28  lw gp,0x20(sp)
00404e2c  move a0,s2
00404e30  lw t9,-0x7f1c(gp)
00404e34  nop
00404e38  jalr t9
00404e3c  _move s5,v0
00404e40  move a0,s0
00404e44  jal 0x00403d30
00404e48  _move s4,v0
00404e4c  lw gp,0x20(sp)
00404e50  move s1,v0
00404e54  lw v0,-0x7a3c(gp)
00404e58  nop
00404e5c  lw v0,0x0(v0)
00404e60  nop
00404e64  andi v0,v0,0x1
00404e68  beq v0,zero,0x00404ea8
00404e6c  _lui v0,0x47
00404e70  lw v0,-0x7e40(gp)
00404e74  lw t9,-0x7c44(gp)
00404e78  lui a1,0x45
00404e7c  lw a0,0x0(v0)
00404e80  lui a2,0x45
00404e84  sw s0,0x10(sp)
00404e88  sw s2,0x14(sp)
00404e8c  sw s1,0x18(sp)
00404e90  addiu a1,a1,-0x69d4
00404e94  addiu a2,a2,-0x6acc
00404e98  jalr t9
00404e9c  _li a3,0x6c
00404ea0  lw gp,0x20(sp)
00404ea4  lui v0,0x47
00404ea8  sll v1,s1,0x2
00404eac  addiu v0,v0,-0x3a94
00404eb0  addu v0,v1,v0
00404eb4  lw s6,0x0(v0)
00404eb8  nop
00404ebc  bne s6,zero,0x00404ee4
00404ec0  _nop
00404ec4  b 0x00404ef4
00404ec8  _nop
00404ecc  lw a1,0x0(s6)
00404ed0  jalr t9
00404ed4  _move s6,v0
00404ed8  lw gp,0x20(sp)
00404edc  beq v0,zero,0x00404fb0
00404ee0  _nop
00404ee4  lw v0,0x14(s6)
00404ee8  lw t9,-0x7e0c(gp)
00404eec  bne v0,zero,0x00404ecc
00404ef0  _move a0,s0
00404ef4  lw t9,-0x7b1c(gp)
00404ef8  nop
00404efc  jalr t9
00404f00  _li a0,0x18
00404f04  lw gp,0x20(sp)
00404f08  beq s6,zero,0x00404f18
00404f0c  _move s7,v0
00404f10  b 0x00404f2c
00404f14  _sw v0,0x14(s6)
00404f18  lui v0,0x47
00404f1c  sll v1,s1,0x2
00404f20  addiu v0,v0,-0x3a94
00404f24  addu v0,v1,v0
00404f28  sw s7,0x0(v0)
00404f2c  lw t9,-0x7d8c(gp)
00404f30  nop
00404f34  jalr t9
00404f38  _move a0,s0
00404f3c  lw gp,0x20(sp)
00404f40  sw v0,0x0(s7)
00404f44  sw s5,0xc(s7)
00404f48  lw t9,-0x7d8c(gp)
00404f4c  nop
00404f50  jalr t9
00404f54  _move a0,s2
00404f58  lw gp,0x20(sp)
00404f5c  sw v0,0x4(s7)
00404f60  sw s4,0x10(s7)
00404f64  lw v0,-0x7a3c(gp)
00404f68  nop
00404f6c  lw v0,0x0(v0)
00404f70  sw s3,0x8(s7)
00404f74  andi v0,v0,0x1
00404f78  beq v0,zero,0x00404fb0
00404f7c  _sw zero,0x14(s7)
00404f80  lw v0,-0x7e40(gp)
00404f84  lw t9,-0x7c44(gp)
00404f88  lui a1,0x45
00404f8c  lw a0,0x0(v0)
00404f90  lui a2,0x45
00404f94  sw s0,0x10(sp)
00404f98  sw s2,0x14(sp)
00404f9c  sw s1,0x18(sp)
00404fa0  addiu a1,a1,-0x699c
00404fa4  addiu a2,a2,-0x6acc
00404fa8  jalr t9
00404fac  _li a3,0x96
00404fb0  lw ra,0x4c(sp)
00404fb4  lw s7,0x48(sp)
00404fb8  lw s6,0x44(sp)
00404fbc  lw s5,0x40(sp)
00404fc0  lw s4,0x3c(sp)
00404fc4  lw s3,0x38(sp)
00404fc8  lw s2,0x34(sp)
00404fcc  lw s1,0x30(sp)
00404fd0  lw s0,0x2c(sp)
00404fd4  jr ra
00404fd8  _addiu sp,sp,0x50
