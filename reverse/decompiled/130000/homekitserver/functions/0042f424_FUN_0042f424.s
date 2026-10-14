# FUN_0042f424 @ 0042f424
0042f424  addiu sp,sp,-0x50
0042f428  sw ra,0x4c(sp)
0042f42c  lui gp,0x62
0042f430  addiu gp,gp,-0x6b80
0042f434  sw gp,0x40(sp)
0042f438  lbu a1,0x0(a0)
0042f43c  nop
0042f440  addiu v0,a1,-0x30
0042f444  andi v0,v0,0xff
0042f448  sltiu v0,v0,0xa
0042f44c  beq v0,zero,0x0042f538
0042f450  _move v1,a0
0042f454  lbu v0,0x1(a0)
0042f458  nop
0042f45c  addiu v0,v0,-0x30
0042f460  andi v0,v0,0xff
0042f464  sltiu v0,v0,0xa
0042f468  beq v0,zero,0x0042f538
0042f46c  _nop
0042f470  lbu v0,0x2(a0)
0042f474  nop
0042f478  addiu v0,v0,-0x30
0042f47c  andi v0,v0,0xff
0042f480  sltiu v0,v0,0xa
0042f484  beq v0,zero,0x0042f538
0042f488  _nop
0042f48c  lb v0,0x3(a0)
0042f490  li a0,0x2d
0042f494  bne v0,a0,0x0042f538
0042f498  _nop
0042f49c  lbu a0,0x4(v1)
0042f4a0  nop
0042f4a4  addiu a0,a0,-0x30
0042f4a8  andi a0,a0,0xff
0042f4ac  sltiu a0,a0,0xa
0042f4b0  beq a0,zero,0x0042f538
0042f4b4  _nop
0042f4b8  lbu a0,0x5(v1)
0042f4bc  nop
0042f4c0  addiu a0,a0,-0x30
0042f4c4  andi a0,a0,0xff
0042f4c8  sltiu a0,a0,0xa
0042f4cc  beq a0,zero,0x0042f538
0042f4d0  _nop
0042f4d4  lb a0,0x6(v1)
0042f4d8  nop
0042f4dc  bne a0,v0,0x0042f538
0042f4e0  _nop
0042f4e4  lbu v0,0x7(v1)
0042f4e8  nop
0042f4ec  addiu v0,v0,-0x30
0042f4f0  andi v0,v0,0xff
0042f4f4  sltiu v0,v0,0xa
0042f4f8  beq v0,zero,0x0042f538
0042f4fc  _nop
0042f500  lbu v0,0x8(v1)
0042f504  nop
0042f508  addiu v0,v0,-0x30
0042f50c  andi v0,v0,0xff
0042f510  sltiu v0,v0,0xa
0042f514  beq v0,zero,0x0042f538
0042f518  _nop
0042f51c  lbu a0,0x9(v1)
0042f520  nop
0042f524  addiu a0,a0,-0x30
0042f528  andi a0,a0,0xff
0042f52c  sltiu a0,a0,0xa
0042f530  bne a0,zero,0x0042f5b8
0042f534  _li v0,0x1
0042f538  lw a0,-0x6b54(gp)
0042f53c  lbu a3,0x6(v1)
0042f540  lbu a2,0x7(v1)
0042f544  lbu v0,0x9(v1)
0042f548  lbu t4,0x1(v1)
0042f54c  lbu t3,0x2(v1)
0042f550  lbu t2,0x3(v1)
0042f554  lbu t1,0x4(v1)
0042f558  lbu t0,0x5(v1)
0042f55c  lbu v1,0x8(v1)
0042f560  lw a0,0x0(a0)
0042f564  lw t9,-0x73b4(gp)
0042f568  li t5,0x76
0042f56c  sw a1,0x14(sp)
0042f570  sw a3,0x2c(sp)
0042f574  sw a2,0x30(sp)
0042f578  lui a1,0x5b
0042f57c  lui a2,0x5b
0042f580  lui a3,0x5b
0042f584  sw t5,0x10(sp)
0042f588  sw t4,0x18(sp)
0042f58c  sw t3,0x1c(sp)
0042f590  sw t2,0x20(sp)
0042f594  sw t1,0x24(sp)
0042f598  sw t0,0x28(sp)
0042f59c  sw v1,0x34(sp)
0042f5a0  sw v0,0x38(sp)
0042f5a4  addiu a1,a1,-0x3730
0042f5a8  addiu a2,a2,-0x36dc
0042f5ac  jalr t9
0042f5b0  _addiu a3,a3,-0x3660
0042f5b4  clear v0
0042f5b8  lw ra,0x4c(sp)
0042f5bc  nop
0042f5c0  jr ra
0042f5c4  _addiu sp,sp,0x50
