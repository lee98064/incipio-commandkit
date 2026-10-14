# process_logline @ 0040c104
0040c104  addiu sp,sp,-0x38
0040c108  sw ra,0x34(sp)
0040c10c  sw s4,0x30(sp)
0040c110  sw s3,0x2c(sp)
0040c114  sw s2,0x28(sp)
0040c118  sw s1,0x24(sp)
0040c11c  sw s0,0x20(sp)
0040c120  lui gp,0x47
0040c124  addiu gp,gp,0x2630
0040c128  sw gp,0x10(sp)
0040c12c  lw t9,-0x7f1c(gp)
0040c130  addiu s1,a0,0x10d5
0040c134  sw s1,0x3c(a0)
0040c138  move s0,a0
0040c13c  jalr t9
0040c140  _move a0,s1
0040c144  sltiu v0,v0,0x5
0040c148  lw gp,0x10(sp)
0040c14c  beq v0,zero,0x0040c184
0040c150  _lui a1,0x45
0040c154  lw v0,-0x7a3c(gp)
0040c158  nop
0040c15c  lw v0,0x0(v0)
0040c160  nop
0040c164  andi v0,v0,0x1
0040c168  beq v0,zero,0x0040c59c
0040c16c  _lui a1,0x45
0040c170  lw v0,-0x7e40(gp)
0040c174  lw t9,-0x7c44(gp)
0040c178  lw a0,0x0(v0)
0040c17c  b 0x0040c588
0040c180  _addiu a1,a1,-0x5414
0040c184  lw t9,-0x7d60(gp)
0040c188  addiu a1,a1,-0x53f8
0040c18c  move a0,s1
0040c190  jalr t9
0040c194  _li a2,0x4
0040c198  lw gp,0x10(sp)
0040c19c  bne v0,zero,0x0040c1ac
0040c1a0  _lui a1,0x45
0040c1a4  b 0x0040c1f4
0040c1a8  _li v0,0x1
0040c1ac  lw t9,-0x7d60(gp)
0040c1b0  addiu a1,a1,-0x53f0
0040c1b4  move a0,s1
0040c1b8  jalr t9
0040c1bc  _li a2,0x5
0040c1c0  lw gp,0x10(sp)
0040c1c4  bne v0,zero,0x0040c1d4
0040c1c8  _lui a1,0x45
0040c1cc  b 0x0040c1f4
0040c1d0  _li v0,0x2
0040c1d4  lw t9,-0x7d60(gp)
0040c1d8  addiu a1,a1,-0x53e8
0040c1dc  move a0,s1
0040c1e0  jalr t9
0040c1e4  _li a2,0x5
0040c1e8  lw gp,0x10(sp)
0040c1ec  bne v0,zero,0x0040c220
0040c1f0  _li v0,0x4
0040c1f4  lw s3,0x3c(s0)
0040c1f8  sw v0,0xc(s0)
0040c1fc  li v0,0x2
0040c200  sw v0,0x8(s0)
0040c204  lb v1,0x3(s3)
0040c208  addiu v0,s3,0x4
0040c20c  addiu s2,s3,0x3
0040c210  xori v1,v1,0x20
0040c214  movn s2,v0,v1
0040c218  b 0x0040c268
0040c21c  _li v0,0x20
0040c220  lw v0,-0x7a3c(gp)
0040c224  nop
0040c228  lw v0,0x0(v0)
0040c22c  nop
0040c230  andi v0,v0,0x1
0040c234  beq v0,zero,0x0040c25c
0040c238  _lui a1,0x45
0040c23c  lw v0,-0x7e40(gp)
0040c240  lw t9,-0x7c44(gp)
0040c244  lw a0,0x0(v0)
0040c248  addiu a1,a1,-0x53e0
0040c24c  jalr t9
0040c250  _move a2,s1
0040c254  lw gp,0x10(sp)
0040c258  nop
0040c25c  lw t9,-0x7bcc(gp)
0040c260  b 0x0040c5a4
0040c264  _nop
0040c268  addiu s2,s2,0x1
0040c26c  lb v1,0x0(s2)
0040c270  nop
0040c274  beq v1,v0,0x0040c268
0040c278  _move s1,s2
0040c27c  li v1,0x20
0040c280  lb v0,0x0(s1)
0040c284  nop
0040c288  beq v0,zero,0x0040c2a0
0040c28c  _subu s4,s1,s2
0040c290  bne v0,v1,0x0040c280
0040c294  _addiu s1,s1,0x1
0040c298  addiu s1,s1,-0x1
0040c29c  subu s4,s1,s2
0040c2a0  slti v0,s4,0x801
0040c2a4  bne v0,zero,0x0040c2ec
0040c2a8  _lui a1,0x45
0040c2ac  lw v0,-0x7a3c(gp)
0040c2b0  nop
0040c2b4  lw v0,0x0(v0)
0040c2b8  nop
0040c2bc  andi v0,v0,0x1
0040c2c0  beq v0,zero,0x0040c59c
0040c2c4  _lui a1,0x45
0040c2c8  lw v0,-0x7e40(gp)
0040c2cc  lw t9,-0x7c44(gp)
0040c2d0  lw a0,0x0(v0)
0040c2d4  addiu a1,a1,-0x53c4
0040c2d8  move a3,s3
0040c2dc  jalr t9
0040c2e0  _li a2,0x800
0040c2e4  b 0x0040c594
0040c2e8  _nop
0040c2ec  lw t9,-0x7d60(gp)
0040c2f0  addiu a1,a1,-0x53ac
0040c2f4  move a0,s2
0040c2f8  jalr t9
0040c2fc  _li a2,0x4
0040c300  lw gp,0x10(sp)
0040c304  bne v0,zero,0x0040c448
0040c308  _lui a1,0x45
0040c30c  lw t9,-0x7d60(gp)
0040c310  addiu a1,a1,-0x5e80
0040c314  addiu a0,s2,0x4
0040c318  jalr t9
0040c31c  _li a2,0x3
0040c320  lw gp,0x10(sp)
0040c324  bne v0,zero,0x0040c448
0040c328  _li v1,0x2f
0040c32c  lb v0,0x7(s2)
0040c330  nop
0040c334  beq v0,v1,0x0040c358
0040c338  _addiu s4,s2,0x7
0040c33c  li v1,0x20
0040c340  beq v0,v1,0x0040c358
0040c344  _nop
0040c348  beq v0,zero,0x0040c358
0040c34c  _move s2,s4
0040c350  b 0x0040c390
0040c354  _li a0,0x2f
0040c358  lw v0,-0x7a3c(gp)
0040c35c  nop
0040c360  lw v0,0x0(v0)
0040c364  nop
0040c368  andi v0,v0,0x1
0040c36c  beq v0,zero,0x0040c59c
0040c370  _lui a0,0x45
0040c374  lw v0,-0x7e40(gp)
0040c378  lw t9,-0x7f4c(gp)
0040c37c  lw a1,0x0(v0)
0040c380  jalr t9
0040c384  _addiu a0,a0,-0x53a4
0040c388  b 0x0040c594
0040c38c  _nop
0040c390  lb v0,0x0(s2)
0040c394  nop
0040c398  beq v0,zero,0x0040c3c4
0040c39c  _nop
0040c3a0  bne v0,a0,0x0040c3bc
0040c3a4  _nop
0040c3a8  sltu v0,s1,s2
0040c3ac  bne v0,zero,0x0040c3f4
0040c3b0  _addiu a0,s0,0x8d4
0040c3b4  b 0x0040c428
0040c3b8  _move a1,s2
0040c3bc  bne v0,v1,0x0040c390
0040c3c0  _addiu s2,s2,0x1
0040c3c4  lw v0,-0x7a3c(gp)
0040c3c8  nop
0040c3cc  lw v0,0x0(v0)
0040c3d0  nop
0040c3d4  andi v0,v0,0x1
0040c3d8  beq v0,zero,0x0040c59c
0040c3dc  _lui a1,0x45
0040c3e0  lw v0,-0x7e40(gp)
0040c3e4  lw t9,-0x7c44(gp)
0040c3e8  lw a0,0x0(v0)
0040c3ec  b 0x0040c420
0040c3f0  _addiu a1,a1,-0x5390
0040c3f4  lw v0,-0x7a3c(gp)
0040c3f8  nop
0040c3fc  lw v0,0x0(v0)
0040c400  nop
0040c404  andi v0,v0,0x1
0040c408  beq v0,zero,0x0040c59c
0040c40c  _lui a1,0x45
0040c410  lw v0,-0x7e40(gp)
0040c414  lw t9,-0x7c44(gp)
0040c418  lw a0,0x0(v0)
0040c41c  addiu a1,a1,-0x5370
0040c420  b 0x0040c58c
0040c424  _move a2,s3
0040c428  lw t9,-0x7ad4(gp)
0040c42c  nop
0040c430  jalr t9
0040c434  _subu a2,s1,s2
0040c438  lw gp,0x10(sp)
0040c43c  sb zero,0x0(s2)
0040c440  b 0x0040c460
0040c444  _sw s4,0x60(s0)
0040c448  lw t9,-0x7ad4(gp)
0040c44c  move a2,s4
0040c450  addiu a0,s0,0x8d4
0040c454  jalr t9
0040c458  _move a1,s2
0040c45c  lw gp,0x10(sp)
0040c460  subu s2,s1,s2
0040c464  addu s2,s0,s2
0040c468  sb zero,0x8d4(s2)
0040c46c  lb v0,0x0(s1)
0040c470  nop
0040c474  beq v0,zero,0x0040c4f0
0040c478  _li v1,0x20
0040c47c  bne v0,v1,0x0040c528
0040c480  _nop
0040c484  addiu s1,s1,0x1
0040c488  lb v0,0x0(s1)
0040c48c  nop
0040c490  beq v0,v1,0x0040c488
0040c494  _addiu s1,s1,0x1
0040c498  addiu s1,s1,-0x1
0040c49c  beq v0,zero,0x0040c510
0040c4a0  _li v0,0x1
0040c4a4  lw t9,-0x7d6c(gp)
0040c4a8  lui a1,0x45
0040c4ac  addiu a1,a1,-0x532c
0040c4b0  move a0,s1
0040c4b4  addiu a2,sp,0x18
0040c4b8  jalr t9
0040c4bc  _addiu a3,sp,0x1c
0040c4c0  li v1,0x2
0040c4c4  lw gp,0x10(sp)
0040c4c8  bne v0,v1,0x0040c55c
0040c4cc  _nop
0040c4d0  lw v1,0x18(sp)
0040c4d4  nop
0040c4d8  bne v1,zero,0x0040c4f8
0040c4dc  _li a0,0x1
0040c4e0  lw v1,0x1c(sp)
0040c4e4  li v0,0x9
0040c4e8  bne v1,v0,0x0040c55c
0040c4ec  _nop
0040c4f0  b 0x0040c510
0040c4f4  _li v0,0x1
0040c4f8  bne v1,a0,0x0040c55c
0040c4fc  _nop
0040c500  lw a0,0x1c(sp)
0040c504  nop
0040c508  bne a0,zero,0x0040c518
0040c50c  _nop
0040c510  b 0x0040c528
0040c514  _sw v0,0x8(s0)
0040c518  bne a0,v1,0x0040c55c
0040c51c  _li v1,0x3
0040c520  sw v1,0x8(s0)
0040c524  sw v0,0x4(s0)
0040c528  lw v1,0xc(s0)
0040c52c  li v0,0x2
0040c530  bne v1,v0,0x0040c548
0040c534  _nop
0040c538  lw v1,0x8(s0)
0040c53c  li v0,0x1
0040c540  beq v1,v0,0x0040c59c
0040c544  _nop
0040c548  lw v1,-0x7a10(gp)
0040c54c  li v0,0x1
0040c550  lh v1,0x0(v1)
0040c554  b 0x0040c5b0
0040c558  _sw v1,0x5c(s0)
0040c55c  lw v0,-0x7a3c(gp)
0040c560  nop
0040c564  lw v0,0x0(v0)
0040c568  nop
0040c56c  andi v0,v0,0x1
0040c570  beq v0,zero,0x0040c59c
0040c574  _lui a1,0x45
0040c578  lw v0,-0x7e40(gp)
0040c57c  lw t9,-0x7c44(gp)
0040c580  lw a0,0x0(v0)
0040c584  addiu a1,a1,-0x5320
0040c588  move a2,s1
0040c58c  jalr t9
0040c590  _nop
0040c594  lw gp,0x10(sp)
0040c598  nop
0040c59c  lw t9,-0x7cc8(gp)
0040c5a0  nop
0040c5a4  jalr t9
0040c5a8  _move a0,s0
0040c5ac  clear v0
0040c5b0  lw ra,0x34(sp)
0040c5b4  lw s4,0x30(sp)
0040c5b8  lw s3,0x2c(sp)
0040c5bc  lw s2,0x28(sp)
0040c5c0  lw s1,0x24(sp)
0040c5c4  lw s0,0x20(sp)
0040c5c8  jr ra
0040c5cc  _addiu sp,sp,0x38
