# clear_fwupload_shm @ 0040b4d0
0040b4d0  addiu sp,sp,-0x20
0040b4d4  sw ra,0x1c(sp)
0040b4d8  lui gp,0x47
0040b4dc  addiu gp,gp,0x2630
0040b4e0  sw gp,0x10(sp)
0040b4e4  lui v0,0x47
0040b4e8  lw a0,-0x2040(v0)
0040b4ec  nop
0040b4f0  beq a0,zero,0x0040b538
0040b4f4  _lui v0,0x47
0040b4f8  lw t9,-0x7c9c(gp)
0040b4fc  nop
0040b500  jalr t9
0040b504  _nop
0040b508  li v1,-0x1
0040b50c  lw gp,0x10(sp)
0040b510  bne v0,v1,0x0040b538
0040b514  _lui v0,0x47
0040b518  lw v0,-0x7e40(gp)
0040b51c  lw t9,-0x7f4c(gp)
0040b520  lui a0,0x45
0040b524  lw a1,0x0(v0)
0040b528  jalr t9
0040b52c  _addiu a0,a0,-0x55e4
0040b530  lw gp,0x10(sp)
0040b534  lui v0,0x47
0040b538  lw a0,-0x203c(v0)
0040b53c  nop
0040b540  beq a0,zero,0x0040b580
0040b544  _clear a1
0040b548  lw t9,-0x7a28(gp)
0040b54c  nop
0040b550  jalr t9
0040b554  _clear a2
0040b558  li v1,-0x1
0040b55c  lw gp,0x10(sp)
0040b560  bne v0,v1,0x0040b580
0040b564  _nop
0040b568  lw v0,-0x7e40(gp)
0040b56c  lw t9,-0x7f4c(gp)
0040b570  lui a0,0x45
0040b574  lw a1,0x0(v0)
0040b578  jalr t9
0040b57c  _addiu a0,a0,-0x55d4
0040b580  lw ra,0x1c(sp)
0040b584  lui v0,0x47
0040b588  sw zero,-0x203c(v0)
0040b58c  lui v0,0x47
0040b590  sw zero,-0x2040(v0)
0040b594  jr ra
0040b598  _addiu sp,sp,0x20
