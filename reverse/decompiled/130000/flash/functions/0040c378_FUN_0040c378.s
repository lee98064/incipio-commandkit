# FUN_0040c378 @ 0040c378
0040c378  addiu sp,sp,-0x60
0040c37c  sw ra,0x5c(sp)
0040c380  sw s8,0x58(sp)
0040c384  sw s7,0x54(sp)
0040c388  sw s6,0x50(sp)
0040c38c  sw s5,0x4c(sp)
0040c390  sw s4,0x48(sp)
0040c394  sw s3,0x44(sp)
0040c398  sw s2,0x40(sp)
0040c39c  sw s1,0x3c(sp)
0040c3a0  sw s0,0x38(sp)
0040c3a4  lui gp,0x43
0040c3a8  addiu gp,gp,-0x4be0
0040c3ac  sw gp,0x18(sp)
0040c3b0  lw t9,-0x7fa4(gp)
0040c3b4  nop
0040c3b8  jalr t9
0040c3bc  _sw a0,0x60(sp)
0040c3c0  lw gp,0x18(sp)
0040c3c4  bne v0,zero,0x0040c3e4
0040c3c8  _lui s4,0x42
0040c3cc  lw t9,-0x7e8c(gp)
0040c3d0  lui a0,0x41
0040c3d4  jalr t9
0040c3d8  _addiu a0,a0,0x1144
0040c3dc  b 0x0040c6dc
0040c3e0  _nop
0040c3e4  lw s5,-0x7ef4(gp)
0040c3e8  lw s2,-0x7f08(gp)
0040c3ec  sw zero,0x0(s5)
0040c3f0  sw zero,0x3600(s4)
0040c3f4  clear s3
0040c3f8  addiu s0,sp,0x20
0040c3fc  lw v1,0x3600(s4)
0040c400  nop
0040c404  addiu v0,v1,0x1
0040c408  sltiu a0,v0,0x7
0040c40c  beq a0,zero,0x0040c6dc
0040c410  _sw v0,0x3600(s4)
0040c414  bne v1,zero,0x0040c428
0040c418  _li v1,0x2
0040c41c  lw s3,-0x7ed0(gp)
0040c420  b 0x0040c478
0040c424  _clear s1
0040c428  bne v0,v1,0x0040c43c
0040c42c  _li v1,0x3
0040c430  lw s3,-0x7f68(gp)
0040c434  b 0x0040c478
0040c438  _clear s1
0040c43c  beq v0,v1,0x0040c464
0040c440  _li v1,0x5
0040c444  beq v0,v1,0x0040c464
0040c448  _li v1,0x4
0040c44c  beq v0,v1,0x0040c470
0040c450  _li v1,0x6
0040c454  bne v0,v1,0x0040c474
0040c458  _nop
0040c45c  b 0x0040c470
0040c460  _nop
0040c464  lw s3,-0x7ec4(gp)
0040c468  b 0x0040c478
0040c46c  _clear s1
0040c470  lw s3,-0x7e68(gp)
0040c474  clear s1
0040c478  li s8,0x2
0040c47c  li s7,0x4
0040c480  b 0x0040c65c
0040c484  _li s6,0x6
0040c488  lw v0,0x28(sp)
0040c48c  lw t9,-0x7f00(gp)
0040c490  lw a1,0x60(sp)
0040c494  addiu v0,v0,0x4
0040c498  sw v1,0x30(sp)
0040c49c  sw v0,0x2c(sp)
0040c4a0  jalr t9
0040c4a4  _move a0,v0
0040c4a8  lw gp,0x18(sp)
0040c4ac  lw v1,0x30(sp)
0040c4b0  beq v0,zero,0x0040c650
0040c4b4  _ori v0,zero,0x8036
0040c4b8  beq v1,v0,0x0040c4d0
0040c4bc  _li a0,0x35
0040c4c0  ori v0,zero,0x8041
0040c4c4  bne v1,v0,0x0040c4e4
0040c4c8  _ori v0,zero,0x81f9
0040c4cc  li a0,0x40
0040c4d0  jal 0x00408d80
0040c4d4  _move a1,s0
0040c4d8  lw gp,0x18(sp)
0040c4dc  b 0x0040c560
0040c4e0  _nop
0040c4e4  beq v1,v0,0x0040c4d0
0040c4e8  _li a0,0x1f8
0040c4ec  ori v0,zero,0x826a
0040c4f0  beq v1,v0,0x0040c4d0
0040c4f4  _li a0,0x269
0040c4f8  ori v0,zero,0x8070
0040c4fc  beq v1,v0,0x0040c4d0
0040c500  _li a0,0x6f
0040c504  ori v0,zero,0x8082
0040c508  beq v1,v0,0x0040c4d0
0040c50c  _li a0,0x81
0040c510  ori v0,zero,0x8076
0040c514  beq v1,v0,0x0040c4d0
0040c518  _li a0,0x75
0040c51c  ori v0,zero,0x807c
0040c520  beq v1,v0,0x0040c4d0
0040c524  _li a0,0x7b
0040c528  ori v0,zero,0x80f1
0040c52c  beq v1,v0,0x0040c4d0
0040c530  _li a0,0xf0
0040c534  ori v0,zero,0x8088
0040c538  beq v1,v0,0x0040c4d0
0040c53c  _li a0,0x87
0040c540  ori v0,zero,0x8137
0040c544  beq v1,v0,0x0040c4d0
0040c548  _li a0,0x136
0040c54c  ori v0,zero,0x8126
0040c550  beq v1,v0,0x0040c4d0
0040c554  _li a0,0x125
0040c558  li v1,0x1
0040c55c  sw v1,0x20(sp)
0040c560  lw v0,0x20(sp)
0040c564  nop
0040c568  blez v0,0x0040c650
0040c56c  _nop
0040c570  lw v1,0x28(sp)
0040c574  nop
0040c578  lw v0,0x24(v1)
0040c57c  li v1,0x9
0040c580  beq v0,v1,0x0040c650
0040c584  _nop
0040c588  lw v0,0x3600(s4)
0040c58c  nop
0040c590  addiu v1,v0,-0x1
0040c594  sltiu v1,v1,0x2
0040c598  beq v1,zero,0x0040c5b0
0040c59c  _addiu v0,v0,-0x3
0040c5a0  lui a0,0x41
0040c5a4  lw t9,-0x7e5c(gp)
0040c5a8  b 0x0040c5c4
0040c5ac  _addiu a0,a0,0xda4
0040c5b0  sltiu v0,v0,0x2
0040c5b4  beq v0,zero,0x0040c5d0
0040c5b8  _lui a0,0x41
0040c5bc  lw t9,-0x7e5c(gp)
0040c5c0  addiu a0,a0,0xdb0
0040c5c4  jalr t9
0040c5c8  _nop
0040c5cc  lw gp,0x18(sp)
0040c5d0  lw v0,0x3600(s4)
0040c5d4  nop
0040c5d8  beq v0,s8,0x0040c61c
0040c5dc  _nop
0040c5e0  beq v0,s7,0x0040c5f0
0040c5e4  _nop
0040c5e8  bne v0,s6,0x0040c630
0040c5ec  _nop
0040c5f0  lw a2,0x0(s5)
0040c5f4  nop
0040c5f8  blez a2,0x0040c61c
0040c5fc  _addiu a2,a2,-0x1
0040c600  lw t9,-0x7e5c(gp)
0040c604  lw a1,0x0(s2)
0040c608  lui a0,0x41
0040c60c  jalr t9
0040c610  _addiu a0,a0,0x2740
0040c614  b 0x0040c630
0040c618  _nop
0040c61c  lw t9,-0x7e5c(gp)
0040c620  lw a1,0x0(s2)
0040c624  lui a0,0x41
0040c628  jalr t9
0040c62c  _addiu a0,a0,0x2750
0040c630  lw v0,0x28(sp)
0040c634  lw a0,0x2c(sp)
0040c638  lw a3,0x20(sp)
0040c63c  lw a2,0x24(v0)
0040c640  lw a1,0x0(v0)
0040c644  jal 0x0040af4c
0040c648  _sw zero,0x10(sp)
0040c64c  lw gp,0x18(sp)
0040c650  b 0x0040c65c
0040c654  _addiu s1,s1,0x1
0040c658  clear s1
0040c65c  li v1,0x3c
0040c660  mult s1,v1
0040c664  mflo v0
0040c668  addu v0,s3,v0
0040c66c  sw v0,0x28(sp)
0040c670  lw v1,0x0(v0)
0040c674  nop
0040c678  bne v1,zero,0x0040c488
0040c67c  _nop
0040c680  lw v0,0x3600(s4)
0040c684  nop
0040c688  beq v0,s8,0x0040c6bc
0040c68c  _nop
0040c690  beq v0,s7,0x0040c6a0
0040c694  _nop
0040c698  bne v0,s6,0x0040c3fc
0040c69c  _nop
0040c6a0  lw v0,0x0(s5)
0040c6a4  nop
0040c6a8  addiu v0,v0,0x1
0040c6ac  slti v1,v0,0x6
0040c6b0  bne v1,zero,0x0040c658
0040c6b4  _sw v0,0x0(s5)
0040c6b8  sw zero,0x0(s5)
0040c6bc  lw v0,0x0(s2)
0040c6c0  nop
0040c6c4  addiu v0,v0,0x1
0040c6c8  blez v0,0x0040c658
0040c6cc  _sw v0,0x0(s2)
0040c6d0  lw v1,-0x7f08(gp)
0040c6d4  b 0x0040c3fc
0040c6d8  _sw zero,0x0(v1)
0040c6dc  lw ra,0x5c(sp)
0040c6e0  lw s8,0x58(sp)
0040c6e4  lw s7,0x54(sp)
0040c6e8  lw s6,0x50(sp)
0040c6ec  lw s5,0x4c(sp)
0040c6f0  lw s4,0x48(sp)
0040c6f4  lw s3,0x44(sp)
0040c6f8  lw s2,0x40(sp)
0040c6fc  lw s1,0x3c(sp)
0040c700  lw s0,0x38(sp)
0040c704  jr ra
0040c708  _addiu sp,sp,0x60
