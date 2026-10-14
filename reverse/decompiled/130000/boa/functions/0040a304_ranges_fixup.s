# ranges_fixup @ 0040a304
0040a304  addiu sp,sp,-0x48
0040a308  sw ra,0x44(sp)
0040a30c  sw s8,0x40(sp)
0040a310  sw s7,0x3c(sp)
0040a314  sw s6,0x38(sp)
0040a318  sw s5,0x34(sp)
0040a31c  sw s4,0x30(sp)
0040a320  sw s3,0x2c(sp)
0040a324  sw s2,0x28(sp)
0040a328  sw s1,0x24(sp)
0040a32c  sw s0,0x20(sp)
0040a330  lui gp,0x47
0040a334  addiu gp,gp,0x2630
0040a338  sw gp,0x10(sp)
0040a33c  lw v0,0x2c(a0)
0040a340  lw s0,0x20(a0)
0040a344  move s1,a0
0040a348  bne v0,zero,0x0040a360
0040a34c  _sw zero,0x20(a0)
0040a350  lui v0,0x47
0040a354  lw v0,-0x2050(v0)
0040a358  b 0x0040a398
0040a35c  _nop
0040a360  lui s8,0x45
0040a364  lui s7,0x45
0040a368  addiu s8,s8,-0x59e0
0040a36c  addiu s7,s7,-0x59b0
0040a370  clear s2
0040a374  lw s4,-0x7a3c(gp)
0040a378  lw s3,-0x7e40(gp)
0040a37c  li s6,-0x1
0040a380  b 0x0040a500
0040a384  _lui s5,0x47
0040a388  lw v1,0x8(s0)
0040a38c  sw v0,0x8(s0)
0040a390  move v0,s0
0040a394  move s0,v1
0040a398  bne s0,zero,0x0040a388
0040a39c  _lui v1,0x47
0040a3a0  b 0x0040a360
0040a3a4  _sw v0,-0x2050(v1)
0040a3a8  lw v0,0x0(s4)
0040a3ac  nop
0040a3b0  andi v0,v0,0x80
0040a3b4  beq v0,zero,0x0040a3dc
0040a3b8  _nop
0040a3bc  lw t9,-0x7c44(gp)
0040a3c0  lw a0,0x0(s3)
0040a3c4  lw a2,0x0(s0)
0040a3c8  lw a3,0x4(s0)
0040a3cc  lui a1,0x45
0040a3d0  jalr t9
0040a3d4  _addiu a1,a1,-0x5a00
0040a3d8  lw gp,0x10(sp)
0040a3dc  lw v0,0x4(s0)
0040a3e0  nop
0040a3e4  beq v0,s6,0x0040a400
0040a3e8  _nop
0040a3ec  lw v1,0x2c(s1)
0040a3f0  nop
0040a3f4  sltu v0,v0,v1
0040a3f8  bne v0,zero,0x0040a410
0040a3fc  _nop
0040a400  lw v0,0x2c(s1)
0040a404  nop
0040a408  addiu v0,v0,-0x1
0040a40c  sw v0,0x4(s0)
0040a410  lw v0,0x0(s0)
0040a414  nop
0040a418  bne v0,s6,0x0040a444
0040a41c  _nop
0040a420  lw v1,0x2c(s1)
0040a424  lw v0,0x4(s0)
0040a428  nop
0040a42c  subu v0,v1,v0
0040a430  sw v0,0x0(s0)
0040a434  lw v0,0x2c(s1)
0040a438  nop
0040a43c  addiu v0,v0,-0x1
0040a440  sw v0,0x4(s0)
0040a444  lw a2,0x0(s0)
0040a448  nop
0040a44c  bltz a2,0x0040a468
0040a450  _nop
0040a454  lw a3,0x4(s0)
0040a458  nop
0040a45c  sltu v0,a3,a2
0040a460  beq v0,zero,0x0040a4c0
0040a464  _nop
0040a468  beq s2,zero,0x0040a47c
0040a46c  _nop
0040a470  lw v0,0x8(s0)
0040a474  nop
0040a478  sw v0,0x8(s2)
0040a47c  lw v0,-0x2050(s5)
0040a480  lw v1,0x8(s0)
0040a484  sw v0,0x8(s0)
0040a488  lw v0,0x0(s4)
0040a48c  nop
0040a490  andi v0,v0,0x80
0040a494  beq v0,zero,0x0040a4fc
0040a498  _sw s0,-0x2050(s5)
0040a49c  lw t9,-0x7f4c(gp)
0040a4a0  lw a1,0x0(s3)
0040a4a4  move a0,s8
0040a4a8  jalr t9
0040a4ac  _sw v1,0x18(sp)
0040a4b0  lw gp,0x10(sp)
0040a4b4  lw v1,0x18(sp)
0040a4b8  b 0x0040a500
0040a4bc  _move s0,v1
0040a4c0  lw v0,0x0(s4)
0040a4c4  nop
0040a4c8  andi v0,v0,0x80
0040a4cc  beq v0,zero,0x0040a4e8
0040a4d0  _nop
0040a4d4  lw t9,-0x7c44(gp)
0040a4d8  lw a0,0x0(s3)
0040a4dc  jalr t9
0040a4e0  _move a1,s7
0040a4e4  lw gp,0x10(sp)
0040a4e8  bne s2,zero,0x0040a4f4
0040a4ec  _nop
0040a4f0  sw s0,0x20(s1)
0040a4f4  lw v1,0x8(s0)
0040a4f8  move s2,s0
0040a4fc  move s0,v1
0040a500  bne s0,zero,0x0040a3a8
0040a504  _nop
0040a508  lw v0,0x20(s1)
0040a50c  nop
0040a510  bne v0,zero,0x0040a530
0040a514  _nop
0040a518  lw t9,-0x7bb0(gp)
0040a51c  nop
0040a520  jalr t9
0040a524  _move a0,s1
0040a528  b 0x0040a568
0040a52c  _clear v0
0040a530  lw v1,-0x7a3c(gp)
0040a534  nop
0040a538  lw v1,0x0(v1)
0040a53c  nop
0040a540  andi v1,v1,0x80
0040a544  beq v1,zero,0x0040a568
0040a548  _li v0,0x1
0040a54c  lw v0,-0x7e40(gp)
0040a550  lw t9,-0x7f4c(gp)
0040a554  lui a0,0x45
0040a558  lw a1,0x0(v0)
0040a55c  jalr t9
0040a560  _addiu a0,a0,-0x598c
0040a564  li v0,0x1
0040a568  lw ra,0x44(sp)
0040a56c  lw s8,0x40(sp)
0040a570  lw s7,0x3c(sp)
0040a574  lw s6,0x38(sp)
0040a578  lw s5,0x34(sp)
0040a57c  lw s4,0x30(sp)
0040a580  lw s3,0x2c(sp)
0040a584  lw s2,0x28(sp)
0040a588  lw s1,0x24(sp)
0040a58c  lw s0,0x20(sp)
0040a590  jr ra
0040a594  _addiu sp,sp,0x48
