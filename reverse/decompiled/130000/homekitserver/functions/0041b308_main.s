# main @ 0041b308
0041b308  addiu sp,sp,-0x138
0041b30c  sw ra,0x134(sp)
0041b310  sw s8,0x130(sp)
0041b314  sw s7,0x12c(sp)
0041b318  sw s6,0x128(sp)
0041b31c  sw s5,0x124(sp)
0041b320  sw s4,0x120(sp)
0041b324  sw s3,0x11c(sp)
0041b328  sw s2,0x118(sp)
0041b32c  sw s1,0x114(sp)
0041b330  sw s0,0x110(sp)
0041b334  lui gp,0x62
0041b338  addiu gp,gp,-0x6b80
0041b33c  sw gp,0x20(sp)
0041b340  lw t9,-0x7244(gp)
0041b344  move s0,a0
0041b348  move s1,a1
0041b34c  addiu a0,sp,0xa8
0041b350  clear a1
0041b354  jalr t9
0041b358  _li a2,0x64
0041b35c  lw gp,0x20(sp)
0041b360  lui s4,0x5b
0041b364  lui s8,0x5b
0041b368  lui s7,0x5b
0041b36c  lui s6,0x5d
0041b370  sw zero,0x28(sp)
0041b374  addiu s4,s4,-0x4fa0
0041b378  addiu s8,s8,-0x4f40
0041b37c  addiu s7,s7,-0x4f60
0041b380  addiu s6,s6,-0x5ee8
0041b384  addiu s3,sp,0x40
0041b388  addiu s5,sp,0x28
0041b38c  lw t9,-0x5dd8(gp)
0041b390  nop
0041b394  jalr t9
0041b398  _li a0,0x1
0041b39c  lw gp,0x20(sp)
0041b3a0  move a0,s4
0041b3a4  lw t9,-0x676c(gp)
0041b3a8  nop
0041b3ac  jalr t9
0041b3b0  _li a1,0x4
0041b3b4  lw gp,0x20(sp)
0041b3b8  bne v0,zero,0x0041b4d0
0041b3bc  _nop
0041b3c0  lw t9,-0x7c24(gp)
0041b3c4  lui a0,0x5b
0041b3c8  jalr t9
0041b3cc  _addiu a0,a0,-0x4f88
0041b3d0  lw gp,0x20(sp)
0041b3d4  lui a1,0x5b
0041b3d8  move a0,s4
0041b3dc  lw t9,-0x69c0(gp)
0041b3e0  nop
0041b3e4  jalr t9
0041b3e8  _addiu a1,a1,0x1ae8
0041b3ec  lw gp,0x20(sp)
0041b3f0  beq v0,zero,0x0041b4a4
0041b3f4  _move s2,v0
0041b3f8  lw t9,-0x6bb4(gp)
0041b3fc  nop
0041b400  jalr t9
0041b404  _move a0,v0
0041b408  lw gp,0x20(sp)
0041b40c  move a0,v0
0041b410  lw t9,-0x72e4(gp)
0041b414  nop
0041b418  jalr t9
0041b41c  _li a1,0x2
0041b420  lw gp,0x20(sp)
0041b424  bne v0,zero,0x0041b490
0041b428  _move a0,s3
0041b42c  lw t9,-0x6e40(gp)
0041b430  li a1,0x80
0041b434  jalr t9
0041b438  _move a2,s2
0041b43c  lw gp,0x20(sp)
0041b440  beq v0,zero,0x0041b460
0041b444  _move a1,s6
0041b448  lw t9,-0x6ea4(gp)
0041b44c  move a0,s3
0041b450  jalr t9
0041b454  _move a2,s5
0041b458  lw gp,0x20(sp)
0041b45c  nop
0041b460  lw t9,-0x6bb4(gp)
0041b464  nop
0041b468  jalr t9
0041b46c  _move a0,s2
0041b470  lw gp,0x20(sp)
0041b474  move a0,v0
0041b478  lw t9,-0x72e4(gp)
0041b47c  nop
0041b480  jalr t9
0041b484  _li a1,0x8
0041b488  lw gp,0x20(sp)
0041b48c  nop
0041b490  lw t9,-0x68e0(gp)
0041b494  nop
0041b498  jalr t9
0041b49c  _move a0,s2
0041b4a0  lw gp,0x20(sp)
0041b4a4  lw v0,0x28(sp)
0041b4a8  lw t9,-0x7c9c(gp)
0041b4ac  slti v0,v0,0x2
0041b4b0  beq v0,zero,0x0041b4bc
0041b4b4  _move a0,s7
0041b4b8  move a0,s8
0041b4bc  jalr t9
0041b4c0  _nop
0041b4c4  lw gp,0x20(sp)
0041b4c8  b 0x0041b4e8
0041b4cc  _nop
0041b4d0  lw t9,-0x7c9c(gp)
0041b4d4  lui a0,0x5b
0041b4d8  jalr t9
0041b4dc  _addiu a0,a0,-0x4f1c
0041b4e0  lw gp,0x20(sp)
0041b4e4  sw zero,0x28(sp)
0041b4e8  lw v0,0x28(sp)
0041b4ec  nop
0041b4f0  slti v0,v0,0x2
0041b4f4  beq v0,zero,0x0041b38c
0041b4f8  _nop
0041b4fc  lw t9,-0x6704(gp)
0041b500  nop
0041b504  jalr t9
0041b508  _lui s2,0x61
0041b50c  lw gp,0x20(sp)
0041b510  addiu a1,s2,0x3ce0
0041b514  lw t9,-0x68a8(gp)
0041b518  nop
0041b51c  jalr t9
0041b520  _li a0,0x2b0
0041b524  lw gp,0x20(sp)
0041b528  lw a1,0x3ce0(s2)
0041b52c  lw t9,-0x7c24(gp)
0041b530  beq a1,zero,0x0041b544
0041b534  _nop
0041b538  lui a0,0x5b
0041b53c  b 0x0041b550
0041b540  _addiu a0,a0,-0x4ee8
0041b544  lui a0,0x5b
0041b548  addiu a0,a0,-0x4ecc
0041b54c  clear a1
0041b550  jalr t9
0041b554  _addiu s3,sp,0x88
0041b558  lw gp,0x20(sp)
0041b55c  li a0,0x2
0041b560  li a1,0x1
0041b564  lw t9,-0x75d8(gp)
0041b568  nop
0041b56c  jalr t9
0041b570  _clear a2
0041b574  lw gp,0x20(sp)
0041b578  li v1,0x2
0041b57c  lui a1,0x5b
0041b580  lw t9,-0x6f00(gp)
0041b584  sh v1,0x98(sp)
0041b588  addiu a1,a1,-0x4eac
0041b58c  move a0,s3
0041b590  li a2,0xf
0041b594  jalr t9
0041b598  _move s2,v0
0041b59c  lw gp,0x20(sp)
0041b5a0  move a2,s3
0041b5a4  ori a1,zero,0x8927
0041b5a8  lw t9,-0x6380(gp)
0041b5ac  nop
0041b5b0  jalr t9
0041b5b4  _move a0,s2
0041b5b8  lw gp,0x20(sp)
0041b5bc  nop
0041b5c0  lw t9,-0x6d14(gp)
0041b5c4  nop
0041b5c8  jalr t9
0041b5cc  _move a0,s2
0041b5d0  lw gp,0x20(sp)
0041b5d4  lbu a1,0x9c(sp)
0041b5d8  lbu v1,0x9e(sp)
0041b5dc  lbu a0,0x9d(sp)
0041b5e0  lbu v0,0x9f(sp)
0041b5e4  lbu a2,0x9a(sp)
0041b5e8  lbu a3,0x9b(sp)
0041b5ec  lw t9,-0x74f0(gp)
0041b5f0  sw a1,0x10(sp)
0041b5f4  lui a1,0x5b
0041b5f8  sw v1,0x18(sp)
0041b5fc  addiu a1,a1,-0x4ea8
0041b600  sw a0,0x14(sp)
0041b604  sw v0,0x1c(sp)
0041b608  jalr t9
0041b60c  _addiu a0,sp,0x58
0041b610  lw gp,0x20(sp)
0041b614  nop
0041b618  lw t9,-0x6e8c(gp)
0041b61c  nop
0041b620  jalr t9
0041b624  _li a0,0x3f
0041b628  lw gp,0x20(sp)
0041b62c  nop
0041b630  lw a0,-0x5c74(gp)
0041b634  lw t9,-0x6b18(gp)
0041b638  nop
0041b63c  jalr t9
0041b640  _nop
0041b644  lw gp,0x20(sp)
0041b648  nop
0041b64c  lw t9,-0x6d5c(gp)
0041b650  nop
0041b654  jalr t9
0041b658  _nop
0041b65c  lw gp,0x20(sp)
0041b660  lui a0,0x5b
0041b664  addiu a0,a0,-0x4e88
0041b668  lw t9,-0x5b88(gp)
0041b66c  nop
0041b670  jalr t9
0041b674  _clear a1
0041b678  move s2,v0
0041b67c  li v0,-0x1
0041b680  lw gp,0x20(sp)
0041b684  bne s2,v0,0x0041b6a8
0041b688  _lui a0,0x5b
0041b68c  lw v0,-0x6b54(gp)
0041b690  lw t9,-0x7058(gp)
0041b694  lw a1,0x0(v0)
0041b698  jalr t9
0041b69c  _addiu a0,a0,-0x4e7c
0041b6a0  lw gp,0x20(sp)
0041b6a4  nop
0041b6a8  lw t9,-0x6540(gp)
0041b6ac  move a0,s2
0041b6b0  jalr t9
0041b6b4  _clear a1
0041b6b8  li v1,-0x1
0041b6bc  lw gp,0x20(sp)
0041b6c0  bne v0,v1,0x0041b6e4
0041b6c4  _lui a0,0x5b
0041b6c8  lw v0,-0x6b54(gp)
0041b6cc  lw t9,-0x7058(gp)
0041b6d0  lw a1,0x0(v0)
0041b6d4  jalr t9
0041b6d8  _addiu a0,a0,-0x4e64
0041b6dc  lw gp,0x20(sp)
0041b6e0  nop
0041b6e4  lw t9,-0x6d14(gp)
0041b6e8  move a0,s2
0041b6ec  jalr t9
0041b6f0  _lui s7,0x61
0041b6f4  lw gp,0x20(sp)
0041b6f8  addiu a0,s7,0x3ce8
0041b6fc  move s7,a0
0041b700  lw t9,-0x6ae4(gp)
0041b704  lui s6,0x5b
0041b708  jalr t9
0041b70c  _addiu s6,s6,-0x4e3c
0041b710  lw gp,0x20(sp)
0041b714  li s2,-0x1
0041b718  li s5,0x63
0041b71c  lw s3,-0x7e40(gp)
0041b720  b 0x0041b76c
0041b724  _li s4,0x66
0041b728  beq v0,s5,0x0041b754
0041b72c  _nop
0041b730  bne v0,s4,0x0041b76c
0041b734  _nop
0041b738  lw t9,-0x7eb0(gp)
0041b73c  lw a1,0x0(s3)
0041b740  jalr t9
0041b744  _move a0,s7
0041b748  lw gp,0x20(sp)
0041b74c  b 0x0041b76c
0041b750  _nop
0041b754  lw t9,-0x612c(gp)
0041b758  nop
0041b75c  jalr t9
0041b760  _nop
0041b764  b 0x0041bb04
0041b768  _nop
0041b76c  lw t9,-0x791c(gp)
0041b770  move a0,s0
0041b774  move a1,s1
0041b778  jalr t9
0041b77c  _move a2,s6
0041b780  lw gp,0x20(sp)
0041b784  bne v0,s2,0x0041b728
0041b788  _nop
0041b78c  lw t9,-0x78bc(gp)
0041b790  lw s3,-0x6e24(gp)
0041b794  jalr t9
0041b798  _addiu a0,sp,0x58
0041b79c  lw gp,0x20(sp)
0041b7a0  ori v0,zero,0xce03
0041b7a4  lw t9,-0x6f44(gp)
0041b7a8  nop
0041b7ac  jalr t9
0041b7b0  _sw v0,0x0(s3)
0041b7b4  lw gp,0x20(sp)
0041b7b8  nop
0041b7bc  lw t9,-0x7784(gp)
0041b7c0  nop
0041b7c4  jalr t9
0041b7c8  _nop
0041b7cc  lw gp,0x20(sp)
0041b7d0  lui a0,0x5b
0041b7d4  move s1,v0
0041b7d8  lw t9,-0x7c9c(gp)
0041b7dc  nop
0041b7e0  jalr t9
0041b7e4  _addiu a0,a0,-0x4e34
0041b7e8  lw gp,0x20(sp)
0041b7ec  beq s1,s2,0x0041b804
0041b7f0  _nop
0041b7f4  beq s1,zero,0x0041b82c
0041b7f8  _clear a1
0041b7fc  b 0x0041b8a0
0041b800  _nop
0041b804  lw t9,-0x72b8(gp)
0041b808  lui a0,0x5b
0041b80c  jalr t9
0041b810  _addiu a0,a0,-0x4e28
0041b814  lw gp,0x20(sp)
0041b818  li a0,0x1
0041b81c  lw t9,-0x7738(gp)
0041b820  nop
0041b824  jalr t9
0041b828  _nop
0041b82c  lw t9,-0x7c24(gp)
0041b830  lui a0,0x5b
0041b834  addiu a0,a0,-0x4e1c
0041b838  jalr t9
0041b83c  _clear a1
0041b840  lw gp,0x20(sp)
0041b844  lui s0,0x61
0041b848  lw a2,0x3ce4(s0)
0041b84c  lw t9,-0x7c24(gp)
0041b850  lui a0,0x5b
0041b854  addiu a0,a0,-0x4e08
0041b858  jalr t9
0041b85c  _clear a1
0041b860  lw gp,0x20(sp)
0041b864  lui a0,0x5b
0041b868  lui a1,0x5b
0041b86c  lw t9,-0x7c24(gp)
0041b870  lui a2,0x5b
0041b874  addiu a0,a0,-0x4de0
0041b878  addiu a1,a1,-0x4dc4
0041b87c  jalr t9
0041b880  _addiu a2,a2,-0x4db8
0041b884  lui v0,0x61
0041b888  lw v0,0x3ce0(v0)
0041b88c  lw gp,0x20(sp)
0041b890  beq v0,zero,0x0041bdf0
0041b894  _addiu v0,sp,0x6c
0041b898  b 0x0041bb18
0041b89c  _li v1,0xa
0041b8a0  lw t9,-0x7244(gp)
0041b8a4  lw a0,-0x6ee4(gp)
0041b8a8  jalr t9
0041b8ac  _li a2,0x20
0041b8b0  lw gp,0x20(sp)
0041b8b4  lui a1,0x5b
0041b8b8  addiu a1,a1,-0x4dac
0041b8bc  lw t9,-0x5cb0(gp)
0041b8c0  lw a0,-0x6ee4(gp)
0041b8c4  li a2,0x1a
0041b8c8  jalr t9
0041b8cc  _addiu s0,sp,0xa8
0041b8d0  lw gp,0x20(sp)
0041b8d4  lui a1,0x5b
0041b8d8  addiu a1,a1,-0x4d68
0041b8dc  lw t9,-0x74f0(gp)
0041b8e0  move a0,s0
0041b8e4  jalr t9
0041b8e8  _move a2,s1
0041b8ec  lw gp,0x20(sp)
0041b8f0  li a1,0x1
0041b8f4  move a2,s0
0041b8f8  lw a0,-0x6ee4(gp)
0041b8fc  lui s3,0x5b
0041b900  jal 0x0041b050
0041b904  _addiu s3,s3,-0x4d7c
0041b908  lw gp,0x20(sp)
0041b90c  clear a1
0041b910  li a2,0x20
0041b914  lw t9,-0x7244(gp)
0041b918  lw a0,-0x6ee4(gp)
0041b91c  lui s2,0x5b
0041b920  jalr t9
0041b924  _addiu s2,s2,-0x313c
0041b928  lw gp,0x20(sp)
0041b92c  lui a1,0x5b
0041b930  li a2,0x13
0041b934  lw t9,-0x5cb0(gp)
0041b938  lw a0,-0x6ee4(gp)
0041b93c  jalr t9
0041b940  _addiu a1,a1,-0x4d90
0041b944  lw gp,0x20(sp)
0041b948  move a0,s0
0041b94c  lw t9,-0x7eb0(gp)
0041b950  nop
0041b954  jalr t9
0041b958  _move a1,s3
0041b95c  lw gp,0x20(sp)
0041b960  li a1,0x1
0041b964  lw a0,-0x6ee4(gp)
0041b968  jal 0x0041b050
0041b96c  _move a2,s0
0041b970  lw gp,0x20(sp)
0041b974  lui a1,0x5b
0041b978  addiu a1,a1,-0x4d70
0041b97c  lw t9,-0x74f0(gp)
0041b980  move a0,s0
0041b984  jalr t9
0041b988  _move a2,s1
0041b98c  lw gp,0x20(sp)
0041b990  move a2,s0
0041b994  lw a0,-0x6ee4(gp)
0041b998  jal 0x0041b050
0041b99c  _li a1,0x2
0041b9a0  lw gp,0x20(sp)
0041b9a4  lui a1,0x5b
0041b9a8  addiu a1,a1,-0x4d64
0041b9ac  lw t9,-0x7eb0(gp)
0041b9b0  nop
0041b9b4  jalr t9
0041b9b8  _move a0,s0
0041b9bc  lw gp,0x20(sp)
0041b9c0  move a2,s0
0041b9c4  lw a0,-0x6ee4(gp)
0041b9c8  jal 0x0041b050
0041b9cc  _li a1,0x2
0041b9d0  lw gp,0x20(sp)
0041b9d4  lui a1,0x5b
0041b9d8  addiu a1,a1,-0x4d50
0041b9dc  lw t9,-0x7eb0(gp)
0041b9e0  nop
0041b9e4  jalr t9
0041b9e8  _move a0,s0
0041b9ec  lw gp,0x20(sp)
0041b9f0  move a2,s0
0041b9f4  lw a0,-0x6ee4(gp)
0041b9f8  jal 0x0041b050
0041b9fc  _li a1,0x2
0041ba00  lw gp,0x20(sp)
0041ba04  move a0,s0
0041ba08  lw t9,-0x7eb0(gp)
0041ba0c  nop
0041ba10  jalr t9
0041ba14  _move a1,s2
0041ba18  lw gp,0x20(sp)
0041ba1c  li a1,0x2
0041ba20  lw a0,-0x6ee4(gp)
0041ba24  jal 0x0041b050
0041ba28  _move a2,s0
0041ba2c  lw gp,0x20(sp)
0041ba30  clear a1
0041ba34  lw t9,-0x7244(gp)
0041ba38  lw a0,-0x6ee4(gp)
0041ba3c  jalr t9
0041ba40  _li a2,0x20
0041ba44  lw gp,0x20(sp)
0041ba48  lui a1,0x5b
0041ba4c  li a2,0x18
0041ba50  lw t9,-0x5cb0(gp)
0041ba54  lw a0,-0x6ee4(gp)
0041ba58  jalr t9
0041ba5c  _addiu a1,a1,-0x4d48
0041ba60  lw gp,0x20(sp)
0041ba64  move a1,s3
0041ba68  lw t9,-0x7eb0(gp)
0041ba6c  nop
0041ba70  jalr t9
0041ba74  _move a0,s0
0041ba78  lw gp,0x20(sp)
0041ba7c  li a1,0x1
0041ba80  lw a0,-0x6ee4(gp)
0041ba84  jal 0x0041b050
0041ba88  _move a2,s0
0041ba8c  lw gp,0x20(sp)
0041ba90  lui a1,0x5b
0041ba94  addiu a1,a1,-0x4d2c
0041ba98  lw t9,-0x74f0(gp)
0041ba9c  move a0,s0
0041baa0  jalr t9
0041baa4  _move a2,s1
0041baa8  lw gp,0x20(sp)
0041baac  move a2,s0
0041bab0  lw a0,-0x6ee4(gp)
0041bab4  jal 0x0041b050
0041bab8  _li a1,0x2
0041babc  lw gp,0x20(sp)
0041bac0  move a1,s2
0041bac4  lw t9,-0x7eb0(gp)
0041bac8  nop
0041bacc  jalr t9
0041bad0  _move a0,s0
0041bad4  lw gp,0x20(sp)
0041bad8  li a1,0x2
0041badc  lw a0,-0x6ee4(gp)
0041bae0  jal 0x0041b050
0041bae4  _move a2,s0
0041bae8  lw gp,0x20(sp)
0041baec  lui a0,0x5b
0041baf0  addiu a0,a0,-0x4d1c
0041baf4  lw t9,-0x7c24(gp)
0041baf8  nop
0041bafc  jalr t9
0041bb00  _move a1,s1
0041bb04  lw gp,0x20(sp)
0041bb08  nop
0041bb0c  lw t9,-0x7738(gp)
0041bb10  b 0x0041b824
0041bb14  _clear a0
0041bb18  lw t9,-0x5cb0(gp)
0041bb1c  lw a1,-0x6f08(gp)
0041bb20  sw zero,0x6c(sp)
0041bb24  addiu a0,sp,0x74
0041bb28  sh v1,0x6c(sp)
0041bb2c  li a2,0x10
0041bb30  sw zero,0x18(v0)
0041bb34  sw zero,0x4(v0)
0041bb38  sw zero,0x8(v0)
0041bb3c  sw zero,0xc(v0)
0041bb40  sw zero,0x10(v0)
0041bb44  jalr t9
0041bb48  _sw zero,0x14(v0)
0041bb4c  lw gp,0x20(sp)
0041bb50  lw v0,0x0(s3)
0041bb54  lhu a0,0x6c(sp)
0041bb58  lw t9,-0x75d8(gp)
0041bb5c  sh v0,0x6e(sp)
0041bb60  li a1,0x2
0041bb64  jalr t9
0041bb68  _li a2,0x6
0041bb6c  lw gp,0x20(sp)
0041bb70  bne v0,s2,0x0041bb90
0041bb74  _move s0,v0
0041bb78  lw v0,-0x6b54(gp)
0041bb7c  lw t9,-0x7058(gp)
0041bb80  lui a0,0x5b
0041bb84  lw a1,0x0(v0)
0041bb88  jalr t9
0041bb8c  _addiu a0,a0,-0x4d08
0041bb90  move a0,s0
0041bb94  jal 0x0041b130
0041bb98  _li a1,0x1
0041bb9c  lw gp,0x20(sp)
0041bba0  li v0,0x4
0041bba4  lui a3,0x60
0041bba8  lw t9,-0x6918(gp)
0041bbac  sw v0,0x10(sp)
0041bbb0  addiu a3,a3,-0x4ac
0041bbb4  move a0,s0
0041bbb8  ori a1,zero,0xffff
0041bbbc  jalr t9
0041bbc0  _li a2,0x4
0041bbc4  li v1,-0x1
0041bbc8  lw gp,0x20(sp)
0041bbcc  bne v0,v1,0x0041bbf0
0041bbd0  _lui a0,0x5b
0041bbd4  lw v0,-0x6b54(gp)
0041bbd8  lw t9,-0x7058(gp)
0041bbdc  lw a1,0x0(v0)
0041bbe0  jalr t9
0041bbe4  _addiu a0,a0,-0x4cf0
0041bbe8  lw gp,0x20(sp)
0041bbec  nop
0041bbf0  lw t9,-0x6918(gp)
0041bbf4  li s2,0x8
0041bbf8  li v0,0x1
0041bbfc  move a0,s0
0041bc00  ori a1,zero,0xffff
0041bc04  li a2,0x80
0041bc08  addiu a3,sp,0x48
0041bc0c  sw v0,0x48(sp)
0041bc10  sw zero,0x4c(sp)
0041bc14  jalr t9
0041bc18  _sw s2,0x10(sp)
0041bc1c  lw gp,0x20(sp)
0041bc20  li s1,0x4
0041bc24  li v0,0x1000
0041bc28  lw t9,-0x6918(gp)
0041bc2c  move a0,s0
0041bc30  ori a1,zero,0xffff
0041bc34  li a2,0x1002
0041bc38  addiu a3,sp,0x2c
0041bc3c  sw v0,0x2c(sp)
0041bc40  jalr t9
0041bc44  _sw s1,0x10(sp)
0041bc48  lw gp,0x20(sp)
0041bc4c  li v0,0x5ee
0041bc50  move a0,s0
0041bc54  lw t9,-0x6918(gp)
0041bc58  ori a1,zero,0xffff
0041bc5c  li a2,0x1001
0041bc60  addiu a3,sp,0x30
0041bc64  sw v0,0x30(sp)
0041bc68  jalr t9
0041bc6c  _sw s1,0x10(sp)
0041bc70  lw gp,0x20(sp)
0041bc74  addiu s3,sp,0x50
0041bc78  li v0,0x1e
0041bc7c  lw t9,-0x6918(gp)
0041bc80  move a0,s0
0041bc84  ori a1,zero,0xffff
0041bc88  li a2,0x1005
0041bc8c  move a3,s3
0041bc90  sw v0,0x50(sp)
0041bc94  sw zero,0x54(sp)
0041bc98  jalr t9
0041bc9c  _sw s2,0x10(sp)
0041bca0  lw gp,0x20(sp)
0041bca4  move a3,s3
0041bca8  move a0,s0
0041bcac  lw t9,-0x6918(gp)
0041bcb0  ori a1,zero,0xffff
0041bcb4  li a2,0x1006
0041bcb8  jalr t9
0041bcbc  _sw s2,0x10(sp)
0041bcc0  lw gp,0x20(sp)
0041bcc4  lui a3,0x60
0041bcc8  addiu a3,a3,-0x4ac
0041bccc  lw t9,-0x6918(gp)
0041bcd0  move a0,s0
0041bcd4  ori a1,zero,0xffff
0041bcd8  li a2,0x8
0041bcdc  jalr t9
0041bce0  _sw s1,0x10(sp)
0041bce4  lw gp,0x20(sp)
0041bce8  li v0,0xa
0041bcec  move a0,s0
0041bcf0  lw t9,-0x6918(gp)
0041bcf4  li a1,0x6
0041bcf8  li a2,0x4
0041bcfc  addiu a3,sp,0x34
0041bd00  sw v0,0x34(sp)
0041bd04  jalr t9
0041bd08  _sw s1,0x10(sp)
0041bd0c  lw gp,0x20(sp)
0041bd10  li v0,0x14
0041bd14  move a0,s0
0041bd18  lw t9,-0x6918(gp)
0041bd1c  li a1,0x6
0041bd20  li a2,0x5
0041bd24  addiu a3,sp,0x38
0041bd28  sw v0,0x38(sp)
0041bd2c  jalr t9
0041bd30  _sw s1,0x10(sp)
0041bd34  lw gp,0x20(sp)
0041bd38  li v0,0x5
0041bd3c  move a0,s0
0041bd40  lw t9,-0x6918(gp)
0041bd44  li a1,0x6
0041bd48  li a2,0x6
0041bd4c  addiu a3,sp,0x3c
0041bd50  sw v0,0x3c(sp)
0041bd54  jalr t9
0041bd58  _sw s1,0x10(sp)
0041bd5c  lw gp,0x20(sp)
0041bd60  move a0,s0
0041bd64  addiu a1,sp,0x6c
0041bd68  lw t9,-0x5938(gp)
0041bd6c  nop
0041bd70  jalr t9
0041bd74  _li a2,0x1c
0041bd78  li v1,-0x1
0041bd7c  lw gp,0x20(sp)
0041bd80  bne v0,v1,0x0041bda8
0041bd84  _lui v0,0x60
0041bd88  lw v0,-0x6b54(gp)
0041bd8c  lw t9,-0x7058(gp)
0041bd90  lui a0,0x5b
0041bd94  lw a1,0x0(v0)
0041bd98  jalr t9
0041bd9c  _addiu a0,a0,-0x4ce4
0041bda0  lw gp,0x20(sp)
0041bda4  lui v0,0x60
0041bda8  lw t9,-0x7bec(gp)
0041bdac  lw a1,-0x4b0(v0)
0041bdb0  jalr t9
0041bdb4  _move a0,s0
0041bdb8  li v1,-0x1
0041bdbc  lw gp,0x20(sp)
0041bdc0  bne v0,v1,0x0041bde8
0041bdc4  _lui v0,0x61
0041bdc8  lw v0,-0x6b54(gp)
0041bdcc  lw t9,-0x7058(gp)
0041bdd0  lui a0,0x5b
0041bdd4  lw a1,0x0(v0)
0041bdd8  jalr t9
0041bddc  _addiu a0,a0,-0x4cd4
0041bde0  lw gp,0x20(sp)
0041bde4  lui v0,0x61
0041bde8  b 0x0041bdf4
0041bdec  _sw s0,0x3ce4(v0)
0041bdf0  sw zero,0x3ce4(s0)
0041bdf4  lw t9,-0x70b8(gp)
0041bdf8  nop
0041bdfc  jalr t9
0041be00  _lui s0,0x61
0041be04  lw gp,0x20(sp)
0041be08  lui a0,0x61
0041be0c  lw t9,-0x6470(gp)
0041be10  nop
0041be14  jalr t9
0041be18  _addiu a0,a0,0x3ce8
0041be1c  lw gp,0x20(sp)
0041be20  nop
0041be24  lw t9,-0x6828(gp)
0041be28  nop
0041be2c  jalr t9
0041be30  _nop
0041be34  lw gp,0x20(sp)
0041be38  nop
0041be3c  lw t9,-0x6aa4(gp)
0041be40  nop
0041be44  jalr t9
0041be48  _nop
0041be4c  lw gp,0x20(sp)
0041be50  nop
0041be54  lw t9,-0x6874(gp)
0041be58  nop
0041be5c  jalr t9
0041be60  _nop
0041be64  lw gp,0x20(sp)
0041be68  lw a0,0x3ce4(s0)
0041be6c  lw t9,-0x76c4(gp)
0041be70  nop
0041be74  jalr t9
0041be78  _nop
0041be7c  lw gp,0x20(sp)
0041be80  nop
0041be84  lw t9,-0x5e30(gp)
0041be88  nop
0041be8c  jalr t9
0041be90  _nop
0041be94  lw gp,0x20(sp)
0041be98  lw a0,0x3ce4(s0)
0041be9c  lw t9,-0x7f3c(gp)
0041bea0  nop
0041bea4  jalr t9
0041bea8  _li a1,0x1
0041beac  lw gp,0x20(sp)
0041beb0  nop
0041beb4  lw t9,-0x6c94(gp)
0041beb8  nop
0041bebc  jalr t9
0041bec0  _nop
0041bec4  lw gp,0x20(sp)
0041bec8  nop
0041becc  lw t9,-0x7988(gp)
0041bed0  nop
0041bed4  jalr t9
0041bed8  _nop
0041bedc  lw gp,0x20(sp)
0041bee0  nop
0041bee4  lw t9,-0x7190(gp)
0041bee8  nop
0041beec  jalr t9
0041bef0  _nop
0041bef4  lw gp,0x20(sp)
0041bef8  lui a0,0x5b
0041befc  lw t9,-0x7c24(gp)
0041bf00  nop
0041bf04  jalr t9
0041bf08  _addiu a0,a0,-0x4cc0
0041bf0c  lw ra,0x134(sp)
0041bf10  lw s8,0x130(sp)
0041bf14  lw s7,0x12c(sp)
0041bf18  lw s6,0x128(sp)
0041bf1c  lw s5,0x124(sp)
0041bf20  lw s4,0x120(sp)
0041bf24  lw s3,0x11c(sp)
0041bf28  lw s2,0x118(sp)
0041bf2c  lw s1,0x114(sp)
0041bf30  lw s0,0x110(sp)
0041bf34  clear v0
0041bf38  jr ra
0041bf3c  _addiu sp,sp,0x138
