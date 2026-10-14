# FUN_0040c3ac @ 0040c3ac
0040c3ac  addiu sp,sp,-0x60
0040c3b0  sw ra,0x5c(sp)
0040c3b4  sw s8,0x58(sp)
0040c3b8  sw s7,0x54(sp)
0040c3bc  sw s6,0x50(sp)
0040c3c0  sw s5,0x4c(sp)
0040c3c4  sw s4,0x48(sp)
0040c3c8  sw s3,0x44(sp)
0040c3cc  sw s2,0x40(sp)
0040c3d0  sw s1,0x3c(sp)
0040c3d4  sw s0,0x38(sp)
0040c3d8  lui gp,0x43
0040c3dc  addiu gp,gp,-0x4bb0
0040c3e0  sw gp,0x18(sp)
0040c3e4  lw t9,-0x7fa4(gp)
0040c3e8  nop
0040c3ec  jalr t9
0040c3f0  _sw a0,0x60(sp)
0040c3f4  lw gp,0x18(sp)
0040c3f8  bne v0,zero,0x0040c418
0040c3fc  _lui s4,0x42
0040c400  lw t9,-0x7e8c(gp)
0040c404  lui a0,0x41
0040c408  jalr t9
0040c40c  _addiu a0,a0,0x1174
0040c410  b 0x0040c710
0040c414  _nop
0040c418  lw s5,-0x7ef4(gp)
0040c41c  lw s2,-0x7f08(gp)
0040c420  sw zero,0x0(s5)
0040c424  sw zero,0x3630(s4)
0040c428  clear s3
0040c42c  addiu s0,sp,0x20
0040c430  lw v1,0x3630(s4)
0040c434  nop
0040c438  addiu v0,v1,0x1
0040c43c  sltiu a0,v0,0x7
0040c440  beq a0,zero,0x0040c710
0040c444  _sw v0,0x3630(s4)
0040c448  bne v1,zero,0x0040c45c
0040c44c  _li v1,0x2
0040c450  lw s3,-0x7ed0(gp)
0040c454  b 0x0040c4ac
0040c458  _clear s1
0040c45c  bne v0,v1,0x0040c470
0040c460  _li v1,0x3
0040c464  lw s3,-0x7f68(gp)
0040c468  b 0x0040c4ac
0040c46c  _clear s1
0040c470  beq v0,v1,0x0040c498
0040c474  _li v1,0x5
0040c478  beq v0,v1,0x0040c498
0040c47c  _li v1,0x4
0040c480  beq v0,v1,0x0040c4a4
0040c484  _li v1,0x6
0040c488  bne v0,v1,0x0040c4a8
0040c48c  _nop
0040c490  b 0x0040c4a4
0040c494  _nop
0040c498  lw s3,-0x7ec4(gp)
0040c49c  b 0x0040c4ac
0040c4a0  _clear s1
0040c4a4  lw s3,-0x7e68(gp)
0040c4a8  clear s1
0040c4ac  li s8,0x2
0040c4b0  li s7,0x4
0040c4b4  b 0x0040c690
0040c4b8  _li s6,0x6
0040c4bc  lw v0,0x28(sp)
0040c4c0  lw t9,-0x7f00(gp)
0040c4c4  lw a1,0x60(sp)
0040c4c8  addiu v0,v0,0x4
0040c4cc  sw v1,0x30(sp)
0040c4d0  sw v0,0x2c(sp)
0040c4d4  jalr t9
0040c4d8  _move a0,v0
0040c4dc  lw gp,0x18(sp)
0040c4e0  lw v1,0x30(sp)
0040c4e4  beq v0,zero,0x0040c684
0040c4e8  _ori v0,zero,0x8036
0040c4ec  beq v1,v0,0x0040c504
0040c4f0  _li a0,0x35
0040c4f4  ori v0,zero,0x8041
0040c4f8  bne v1,v0,0x0040c518
0040c4fc  _ori v0,zero,0x81f9
0040c500  li a0,0x40
0040c504  jal 0x00408db4
0040c508  _move a1,s0
0040c50c  lw gp,0x18(sp)
0040c510  b 0x0040c594
0040c514  _nop
0040c518  beq v1,v0,0x0040c504
0040c51c  _li a0,0x1f8
0040c520  ori v0,zero,0x826a
0040c524  beq v1,v0,0x0040c504
0040c528  _li a0,0x269
0040c52c  ori v0,zero,0x8070
0040c530  beq v1,v0,0x0040c504
0040c534  _li a0,0x6f
0040c538  ori v0,zero,0x8082
0040c53c  beq v1,v0,0x0040c504
0040c540  _li a0,0x81
0040c544  ori v0,zero,0x8076
0040c548  beq v1,v0,0x0040c504
0040c54c  _li a0,0x75
0040c550  ori v0,zero,0x807c
0040c554  beq v1,v0,0x0040c504
0040c558  _li a0,0x7b
0040c55c  ori v0,zero,0x80f1
0040c560  beq v1,v0,0x0040c504
0040c564  _li a0,0xf0
0040c568  ori v0,zero,0x8088
0040c56c  beq v1,v0,0x0040c504
0040c570  _li a0,0x87
0040c574  ori v0,zero,0x8137
0040c578  beq v1,v0,0x0040c504
0040c57c  _li a0,0x136
0040c580  ori v0,zero,0x8126
0040c584  beq v1,v0,0x0040c504
0040c588  _li a0,0x125
0040c58c  li v1,0x1
0040c590  sw v1,0x20(sp)
0040c594  lw v0,0x20(sp)
0040c598  nop
0040c59c  blez v0,0x0040c684
0040c5a0  _nop
0040c5a4  lw v1,0x28(sp)
0040c5a8  nop
0040c5ac  lw v0,0x24(v1)
0040c5b0  li v1,0x9
0040c5b4  beq v0,v1,0x0040c684
0040c5b8  _nop
0040c5bc  lw v0,0x3630(s4)
0040c5c0  nop
0040c5c4  addiu v1,v0,-0x1
0040c5c8  sltiu v1,v1,0x2
0040c5cc  beq v1,zero,0x0040c5e4
0040c5d0  _addiu v0,v0,-0x3
0040c5d4  lui a0,0x41
0040c5d8  lw t9,-0x7e5c(gp)
0040c5dc  b 0x0040c5f8
0040c5e0  _addiu a0,a0,0xdd4
0040c5e4  sltiu v0,v0,0x2
0040c5e8  beq v0,zero,0x0040c604
0040c5ec  _lui a0,0x41
0040c5f0  lw t9,-0x7e5c(gp)
0040c5f4  addiu a0,a0,0xde0
0040c5f8  jalr t9
0040c5fc  _nop
0040c600  lw gp,0x18(sp)
0040c604  lw v0,0x3630(s4)
0040c608  nop
0040c60c  beq v0,s8,0x0040c650
0040c610  _nop
0040c614  beq v0,s7,0x0040c624
0040c618  _nop
0040c61c  bne v0,s6,0x0040c664
0040c620  _nop
0040c624  lw a2,0x0(s5)
0040c628  nop
0040c62c  blez a2,0x0040c650
0040c630  _addiu a2,a2,-0x1
0040c634  lw t9,-0x7e5c(gp)
0040c638  lw a1,0x0(s2)
0040c63c  lui a0,0x41
0040c640  jalr t9
0040c644  _addiu a0,a0,0x2770
0040c648  b 0x0040c664
0040c64c  _nop
0040c650  lw t9,-0x7e5c(gp)
0040c654  lw a1,0x0(s2)
0040c658  lui a0,0x41
0040c65c  jalr t9
0040c660  _addiu a0,a0,0x2780
0040c664  lw v0,0x28(sp)
0040c668  lw a0,0x2c(sp)
0040c66c  lw a3,0x20(sp)
0040c670  lw a2,0x24(v0)
0040c674  lw a1,0x0(v0)
0040c678  jal 0x0040af80
0040c67c  _sw zero,0x10(sp)
0040c680  lw gp,0x18(sp)
0040c684  b 0x0040c690
0040c688  _addiu s1,s1,0x1
0040c68c  clear s1
0040c690  li v1,0x3c
0040c694  mult s1,v1
0040c698  mflo v0
0040c69c  addu v0,s3,v0
0040c6a0  sw v0,0x28(sp)
0040c6a4  lw v1,0x0(v0)
0040c6a8  nop
0040c6ac  bne v1,zero,0x0040c4bc
0040c6b0  _nop
0040c6b4  lw v0,0x3630(s4)
0040c6b8  nop
0040c6bc  beq v0,s8,0x0040c6f0
0040c6c0  _nop
0040c6c4  beq v0,s7,0x0040c6d4
0040c6c8  _nop
0040c6cc  bne v0,s6,0x0040c430
0040c6d0  _nop
0040c6d4  lw v0,0x0(s5)
0040c6d8  nop
0040c6dc  addiu v0,v0,0x1
0040c6e0  slti v1,v0,0x6
0040c6e4  bne v1,zero,0x0040c68c
0040c6e8  _sw v0,0x0(s5)
0040c6ec  sw zero,0x0(s5)
0040c6f0  lw v0,0x0(s2)
0040c6f4  nop
0040c6f8  addiu v0,v0,0x1
0040c6fc  blez v0,0x0040c68c
0040c700  _sw v0,0x0(s2)
0040c704  lw v1,-0x7f08(gp)
0040c708  b 0x0040c430
0040c70c  _sw zero,0x0(v1)
0040c710  lw ra,0x5c(sp)
0040c714  lw s8,0x58(sp)
0040c718  lw s7,0x54(sp)
0040c71c  lw s6,0x50(sp)
0040c720  lw s5,0x4c(sp)
0040c724  lw s4,0x48(sp)
0040c728  lw s3,0x44(sp)
0040c72c  lw s2,0x40(sp)
0040c730  lw s1,0x3c(sp)
0040c734  lw s0,0x38(sp)
0040c738  jr ra
0040c73c  _addiu sp,sp,0x60
