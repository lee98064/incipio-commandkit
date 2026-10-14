# FUN_0042f474 @ 0042f474
0042f474  addiu sp,sp,-0x38
0042f478  sw ra,0x34(sp)
0042f47c  sw s6,0x30(sp)
0042f480  sw s5,0x2c(sp)
0042f484  sw s4,0x28(sp)
0042f488  sw s3,0x24(sp)
0042f48c  sw s2,0x20(sp)
0042f490  sw s1,0x1c(sp)
0042f494  sw s0,0x18(sp)
0042f498  lui gp,0x62
0042f49c  addiu gp,gp,-0x5cf0
0042f4a0  sw gp,0x10(sp)
0042f4a4  lui v0,0x61
0042f4a8  lw v1,0x56f0(v0)
0042f4ac  addiu v0,v0,0x56f0
0042f4b0  beq v1,v0,0x0042f550
0042f4b4  _lui s6,0x61
0042f4b8  lw s0,0xc(v0)
0042f4bc  addiu s6,s6,0x56fc
0042f4c0  lw s2,0x0(s0)
0042f4c4  li s5,0x4
0042f4c8  li s4,0x5
0042f4cc  b 0x0042f548
0042f4d0  _li s3,0x3
0042f4d4  lw v0,0x8(s1)
0042f4d8  nop
0042f4dc  beq v0,s5,0x0042f4f4
0042f4e0  _nop
0042f4e4  beq v0,s4,0x0042f4f4
0042f4e8  _nop
0042f4ec  bne v0,s3,0x0042f518
0042f4f0  _nop
0042f4f4  lw a0,0x4(s1)
0042f4f8  nop
0042f4fc  beq a0,zero,0x0042f518
0042f500  _nop
0042f504  lw t9,-0x7aa4(gp)
0042f508  nop
0042f50c  jalr t9
0042f510  _nop
0042f514  lw gp,0x10(sp)
0042f518  lw v0,0x4(s0)
0042f51c  lw v1,0x0(s0)
0042f520  lw t9,-0x7aa4(gp)
0042f524  move a0,s1
0042f528  sw v0,0x4(v1)
0042f52c  sw v1,0x0(v0)
0042f530  sw s0,0x4(s0)
0042f534  jalr t9
0042f538  _sw s0,0x0(s0)
0042f53c  move s0,s2
0042f540  lw gp,0x10(sp)
0042f544  lw s2,0x0(s2)
0042f548  bne s0,s6,0x0042f4d4
0042f54c  _addiu s1,s0,-0xc
0042f550  lw ra,0x34(sp)
0042f554  lw s6,0x30(sp)
0042f558  lw s5,0x2c(sp)
0042f55c  lw s4,0x28(sp)
0042f560  lw s3,0x24(sp)
0042f564  lw s2,0x20(sp)
0042f568  lw s1,0x1c(sp)
0042f56c  lw s0,0x18(sp)
0042f570  clear v0
0042f574  jr ra
0042f578  _addiu sp,sp,0x38
