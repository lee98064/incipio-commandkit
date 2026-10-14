# FUN_00435d24 @ 00435d24
00435d24  lui gp,0x1e
00435d28  addiu gp,gp,0x45ec
00435d2c  addu gp,gp,t9
00435d30  addiu sp,sp,-0x20
00435d34  sw ra,0x1c(sp)
00435d38  sw s8,0x18(sp)
00435d3c  move s8,sp
00435d40  sw gp,0x10(sp)
00435d44  sw a0,0x20(s8)
00435d48  sw a1,0x24(s8)
00435d4c  sw a2,0x28(s8)
00435d50  sw a3,0x2c(s8)
00435d54  lw v0,0x20(s8)
00435d58  nop
00435d5c  lw v0,0x20(v0)
00435d60  nop
00435d64  beq v0,zero,0x00435d9c
00435d68  _nop
00435d6c  lw v0,0x20(s8)
00435d70  nop
00435d74  lw v0,0x20(v0)
00435d78  lw v1,0x20(s8)
00435d7c  nop
00435d80  lw v1,0x24(v1)
00435d84  lw a0,0x20(s8)
00435d88  move a1,v1
00435d8c  move t9,v0
00435d90  jalr t9
00435d94  _nop
00435d98  lw gp,0x10(s8)
00435d9c  lw v0,0x20(s8)
00435da0  nop
00435da4  sw zero,0x24(v0)
00435da8  lw v0,0x20(s8)
00435dac  nop
00435db0  sw zero,0x20(v0)
00435db4  lw v0,0x24(s8)
00435db8  nop
00435dbc  bne v0,zero,0x00435ecc
00435dc0  _nop
00435dc4  lw v0,0x20(s8)
00435dc8  nop
00435dcc  lw v0,0x0(v0)
00435dd0  nop
00435dd4  sltiu v1,v0,0x7
00435dd8  beq v1,zero,0x00435f04
00435ddc  _nop
00435de0  sll v1,v0,0x2
00435de4  lw v0,-0x7fd0(gp)
00435de8  nop
00435dec  addiu v0,v0,-0x174c
00435df0  addu v0,v1,v0
00435df4  lw v0,0x0(v0)
00435df8  nop
00435dfc  addu v0,v0,gp
00435e00  jr v0
00435e04  _nop
00435e08  lw v0,0x20(s8)
00435e0c  nop
00435e10  sw zero,0x8(v0)
00435e14  b 0x00435ec4
00435e18  _nop
00435e1c  lw v0,0x20(s8)
00435e20  lw v1,-0x7fcc(gp)
00435e24  nop
00435e28  addiu v1,v1,0x6bc4
00435e2c  sw v1,0x8(v0)
00435e30  b 0x00435ec4
00435e34  _nop
00435e38  lw v0,0x20(s8)
00435e3c  lw v1,-0x7fcc(gp)
00435e40  nop
00435e44  addiu v1,v1,0x73f4
00435e48  sw v1,0x8(v0)
00435e4c  b 0x00435ec4
00435e50  _nop
00435e54  lw v0,0x20(s8)
00435e58  lw v1,-0x7fcc(gp)
00435e5c  nop
00435e60  addiu v1,v1,0x6e8c
00435e64  sw v1,0x8(v0)
00435e68  b 0x00435ec4
00435e6c  _nop
00435e70  lw v0,0x20(s8)
00435e74  lw v1,-0x7fcc(gp)
00435e78  nop
00435e7c  addiu v1,v1,0x615c
00435e80  sw v1,0x8(v0)
00435e84  b 0x00435ec4
00435e88  _nop
00435e8c  lw v0,0x20(s8)
00435e90  lw v1,-0x7fcc(gp)
00435e94  nop
00435e98  addiu v1,v1,0x7cdc
00435e9c  sw v1,0x8(v0)
00435ea0  b 0x00435ec4
00435ea4  _nop
00435ea8  lw v0,0x20(s8)
00435eac  lw v1,-0x7fcc(gp)
00435eb0  nop
00435eb4  addiu v1,v1,0x7824
00435eb8  sw v1,0x8(v0)
00435ebc  b 0x00435f08
00435ec0  _nop
00435ec4  b 0x00435f08
00435ec8  _nop
00435ecc  lw v0,0x20(s8)
00435ed0  lw v1,0x24(s8)
00435ed4  nop
00435ed8  sw v1,0x8(v0)
00435edc  lw v0,0x20(s8)
00435ee0  lw v1,0x28(s8)
00435ee4  nop
00435ee8  sw v1,0x24(v0)
00435eec  lw v0,0x20(s8)
00435ef0  lw v1,0x2c(s8)
00435ef4  nop
00435ef8  sw v1,0x20(v0)
00435efc  b 0x00435f08
00435f00  _nop
00435f04  nop
00435f08  move sp,s8
00435f0c  lw ra,0x1c(sp)
00435f10  lw s8,0x18(sp)
00435f14  addiu sp,sp,0x20
00435f18  jr ra
00435f1c  _nop
