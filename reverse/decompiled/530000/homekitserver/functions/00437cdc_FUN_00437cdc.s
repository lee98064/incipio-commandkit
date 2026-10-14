# FUN_00437cdc @ 00437cdc
00437cdc  lui gp,0x1e
00437ce0  addiu gp,gp,0x2634
00437ce4  addu gp,gp,t9
00437ce8  addiu sp,sp,-0x30
00437cec  sw ra,0x2c(sp)
00437cf0  sw s8,0x28(sp)
00437cf4  move s8,sp
00437cf8  sw gp,0x10(sp)
00437cfc  sw a0,0x30(s8)
00437d00  sw a1,0x34(s8)
00437d04  sw a2,0x38(s8)
00437d08  sw a3,0x3c(s8)
00437d0c  sw zero,0x20(s8)
00437d10  lw a0,0x34(s8)
00437d14  lw v0,-0x7fd0(gp)
00437d18  nop
00437d1c  addiu a1,v0,-0x16e4
00437d20  lw v0,-0x654c(gp)
00437d24  nop
00437d28  move t9,v0
00437d2c  jalr t9
00437d30  _nop
00437d34  lw gp,0x10(s8)
00437d38  lw v0,0x3c(s8)
00437d3c  nop
00437d40  andi v0,v0,0x2
00437d44  beq v0,zero,0x00437d74
00437d48  _nop
00437d4c  lw a0,0x34(s8)
00437d50  lw v0,-0x7fd0(gp)
00437d54  nop
00437d58  addiu a1,v0,-0x1724
00437d5c  lw v0,-0x654c(gp)
00437d60  nop
00437d64  move t9,v0
00437d68  jalr t9
00437d6c  _nop
00437d70  lw gp,0x10(s8)
00437d74  sw zero,0x1c(s8)
00437d78  b 0x00437f1c
00437d7c  _nop
00437d80  lw v0,0x20(s8)
00437d84  nop
00437d88  beq v0,zero,0x00437df4
00437d8c  _nop
00437d90  lw a0,0x34(s8)
00437d94  lw v0,-0x7fd0(gp)
00437d98  nop
00437d9c  addiu a1,v0,-0x1720
00437da0  lw v0,-0x654c(gp)
00437da4  nop
00437da8  move t9,v0
00437dac  jalr t9
00437db0  _nop
00437db4  lw gp,0x10(s8)
00437db8  lw v0,0x3c(s8)
00437dbc  nop
00437dc0  andi v0,v0,0x2
00437dc4  beq v0,zero,0x00437df4
00437dc8  _nop
00437dcc  lw a0,0x34(s8)
00437dd0  lw v0,-0x7fd0(gp)
00437dd4  nop
00437dd8  addiu a1,v0,-0x1724
00437ddc  lw v0,-0x654c(gp)
00437de0  nop
00437de4  move t9,v0
00437de8  jalr t9
00437dec  _nop
00437df0  lw gp,0x10(s8)
00437df4  li v0,0x1
00437df8  sw v0,0x20(s8)
00437dfc  lw v0,0x3c(s8)
00437e00  nop
00437e04  andi v0,v0,0x1
00437e08  andi v0,v0,0xff
00437e0c  beq v0,zero,0x00437e3c
00437e10  _nop
00437e14  lw a0,0x34(s8)
00437e18  lw v0,-0x7fd0(gp)
00437e1c  nop
00437e20  addiu a1,v0,-0x171c
00437e24  lw v0,-0x654c(gp)
00437e28  nop
00437e2c  move t9,v0
00437e30  jalr t9
00437e34  _nop
00437e38  lw gp,0x10(s8)
00437e3c  lw v0,0x38(s8)
00437e40  nop
00437e44  addiu v0,v0,0x1
00437e48  lw a0,0x34(s8)
00437e4c  move a1,v0
00437e50  lw a2,0x3c(s8)
00437e54  lw v0,-0x7fcc(gp)
00437e58  nop
00437e5c  addiu v0,v0,0x60d0
00437e60  move t9,v0
00437e64  jalr t9
00437e68  _nop
00437e6c  lw gp,0x10(s8)
00437e70  lw a0,0x30(s8)
00437e74  lw a1,0x1c(s8)
00437e78  lw v0,-0x6200(gp)
00437e7c  nop
00437e80  move t9,v0
00437e84  jalr t9
00437e88  _nop
00437e8c  lw gp,0x10(s8)
00437e90  sw v0,0x18(s8)
00437e94  lw v0,0x18(s8)
00437e98  nop
00437e9c  bne v0,zero,0x00437ed4
00437ea0  _nop
00437ea4  lw a0,0x34(s8)
00437ea8  lw v0,-0x7fd0(gp)
00437eac  nop
00437eb0  addiu a1,v0,-0x1730
00437eb4  lw v0,-0x654c(gp)
00437eb8  nop
00437ebc  move t9,v0
00437ec0  jalr t9
00437ec4  _nop
00437ec8  lw gp,0x10(s8)
00437ecc  b 0x00437f0c
00437ed0  _nop
00437ed4  lw v0,0x18(s8)
00437ed8  nop
00437edc  lw v0,0x8(v0)
00437ee0  lw v1,0x38(s8)
00437ee4  nop
00437ee8  addiu v1,v1,0x1
00437eec  lw a0,0x18(s8)
00437ef0  lw a1,0x34(s8)
00437ef4  move a2,v1
00437ef8  lw a3,0x3c(s8)
00437efc  move t9,v0
00437f00  jalr t9
00437f04  _nop
00437f08  lw gp,0x10(s8)
00437f0c  lw v0,0x1c(s8)
00437f10  nop
00437f14  addiu v0,v0,0x1
00437f18  sw v0,0x1c(s8)
00437f1c  lw a0,0x30(s8)
00437f20  lw v0,-0x5b80(gp)
00437f24  nop
00437f28  move t9,v0
00437f2c  jalr t9
00437f30  _nop
00437f34  lw gp,0x10(s8)
00437f38  move v1,v0
00437f3c  lw v0,0x1c(s8)
00437f40  nop
00437f44  slt v0,v0,v1
00437f48  bne v0,zero,0x00437d80
00437f4c  _nop
00437f50  lw v0,0x3c(s8)
00437f54  nop
00437f58  andi v0,v0,0x2
00437f5c  beq v0,zero,0x00437fc4
00437f60  _nop
00437f64  lw v0,0x20(s8)
00437f68  nop
00437f6c  beq v0,zero,0x00437f9c
00437f70  _nop
00437f74  lw a0,0x34(s8)
00437f78  lw v0,-0x7fd0(gp)
00437f7c  nop
00437f80  addiu a1,v0,-0x1724
00437f84  lw v0,-0x654c(gp)
00437f88  nop
00437f8c  move t9,v0
00437f90  jalr t9
00437f94  _nop
00437f98  lw gp,0x10(s8)
00437f9c  lw a0,0x34(s8)
00437fa0  lw a1,0x38(s8)
00437fa4  lw a2,0x3c(s8)
00437fa8  lw v0,-0x7fcc(gp)
00437fac  nop
00437fb0  addiu v0,v0,0x60d0
00437fb4  move t9,v0
00437fb8  jalr t9
00437fbc  _nop
00437fc0  lw gp,0x10(s8)
00437fc4  lw v0,0x3c(s8)
00437fc8  nop
00437fcc  andi v0,v0,0x1
00437fd0  andi v0,v0,0xff
00437fd4  beq v0,zero,0x0043800c
00437fd8  _nop
00437fdc  lw a0,0x34(s8)
00437fe0  lw v0,-0x7fd0(gp)
00437fe4  nop
00437fe8  addiu a1,v0,-0x16e0
00437fec  lw v0,-0x654c(gp)
00437ff0  nop
00437ff4  move t9,v0
00437ff8  jalr t9
00437ffc  _nop
00438000  lw gp,0x10(s8)
00438004  b 0x00438034
00438008  _nop
0043800c  lw a0,0x34(s8)
00438010  lw v0,-0x7fd0(gp)
00438014  nop
00438018  addiu a1,v0,-0x16dc
0043801c  lw v0,-0x654c(gp)
00438020  nop
00438024  move t9,v0
00438028  jalr t9
0043802c  _nop
00438030  lw gp,0x10(s8)
00438034  move sp,s8
00438038  lw ra,0x2c(sp)
0043803c  lw s8,0x28(sp)
00438040  addiu sp,sp,0x30
00438044  jr ra
00438048  _nop
