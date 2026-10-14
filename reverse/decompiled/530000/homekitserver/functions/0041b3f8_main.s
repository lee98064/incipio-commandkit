# main @ 0041b3f8
0041b3f8  addiu sp,sp,-0x138
0041b3fc  sw ra,0x134(sp)
0041b400  sw s8,0x130(sp)
0041b404  sw s7,0x12c(sp)
0041b408  sw s6,0x128(sp)
0041b40c  sw s5,0x124(sp)
0041b410  sw s4,0x120(sp)
0041b414  sw s3,0x11c(sp)
0041b418  sw s2,0x118(sp)
0041b41c  sw s1,0x114(sp)
0041b420  sw s0,0x110(sp)
0041b424  lui gp,0x62
0041b428  addiu gp,gp,-0x5cf0
0041b42c  sw gp,0x20(sp)
0041b430  lw t9,-0x7244(gp)
0041b434  move s0,a0
0041b438  move s1,a1
0041b43c  addiu a0,sp,0xa8
0041b440  clear a1
0041b444  jalr t9
0041b448  _li a2,0x64
0041b44c  lw gp,0x20(sp)
0041b450  lui s4,0x5b
0041b454  lui s8,0x5b
0041b458  lui s7,0x5b
0041b45c  lui s6,0x5d
0041b460  sw zero,0x28(sp)
0041b464  addiu s4,s4,-0x41a0
0041b468  addiu s8,s8,-0x4140
0041b46c  addiu s7,s7,-0x4160
0041b470  addiu s6,s6,-0x5048
0041b474  addiu s3,sp,0x40
0041b478  addiu s5,sp,0x28
0041b47c  lw t9,-0x5dc4(gp)
0041b480  nop
0041b484  jalr t9
0041b488  _li a0,0x1
0041b48c  lw gp,0x20(sp)
0041b490  move a0,s4
0041b494  lw t9,-0x6764(gp)
0041b498  nop
0041b49c  jalr t9
0041b4a0  _li a1,0x4
0041b4a4  lw gp,0x20(sp)
0041b4a8  bne v0,zero,0x0041b5c0
0041b4ac  _nop
0041b4b0  lw t9,-0x7c28(gp)
0041b4b4  lui a0,0x5b
0041b4b8  jalr t9
0041b4bc  _addiu a0,a0,-0x4188
0041b4c0  lw gp,0x20(sp)
0041b4c4  lui a1,0x5b
0041b4c8  move a0,s4
0041b4cc  lw t9,-0x69b4(gp)
0041b4d0  nop
0041b4d4  jalr t9
0041b4d8  _addiu a1,a1,0x2988
0041b4dc  lw gp,0x20(sp)
0041b4e0  beq v0,zero,0x0041b594
0041b4e4  _move s2,v0
0041b4e8  lw t9,-0x6ba8(gp)
0041b4ec  nop
0041b4f0  jalr t9
0041b4f4  _move a0,v0
0041b4f8  lw gp,0x20(sp)
0041b4fc  move a0,v0
0041b500  lw t9,-0x72e4(gp)
0041b504  nop
0041b508  jalr t9
0041b50c  _li a1,0x2
0041b510  lw gp,0x20(sp)
0041b514  bne v0,zero,0x0041b580
0041b518  _move a0,s3
0041b51c  lw t9,-0x6e3c(gp)
0041b520  li a1,0x80
0041b524  jalr t9
0041b528  _move a2,s2
0041b52c  lw gp,0x20(sp)
0041b530  beq v0,zero,0x0041b550
0041b534  _move a1,s6
0041b538  lw t9,-0x6ea0(gp)
0041b53c  move a0,s3
0041b540  jalr t9
0041b544  _move a2,s5
0041b548  lw gp,0x20(sp)
0041b54c  nop
0041b550  lw t9,-0x6ba8(gp)
0041b554  nop
0041b558  jalr t9
0041b55c  _move a0,s2
0041b560  lw gp,0x20(sp)
0041b564  move a0,v0
0041b568  lw t9,-0x72e4(gp)
0041b56c  nop
0041b570  jalr t9
0041b574  _li a1,0x8
0041b578  lw gp,0x20(sp)
0041b57c  nop
0041b580  lw t9,-0x68d4(gp)
0041b584  nop
0041b588  jalr t9
0041b58c  _move a0,s2
0041b590  lw gp,0x20(sp)
0041b594  lw v0,0x28(sp)
0041b598  lw t9,-0x7ca0(gp)
0041b59c  slti v0,v0,0x2
0041b5a0  beq v0,zero,0x0041b5ac
0041b5a4  _move a0,s7
0041b5a8  move a0,s8
0041b5ac  jalr t9
0041b5b0  _nop
0041b5b4  lw gp,0x20(sp)
0041b5b8  b 0x0041b5d8
0041b5bc  _nop
0041b5c0  lw t9,-0x7ca0(gp)
0041b5c4  lui a0,0x5b
0041b5c8  jalr t9
0041b5cc  _addiu a0,a0,-0x411c
0041b5d0  lw gp,0x20(sp)
0041b5d4  sw zero,0x28(sp)
0041b5d8  lw v0,0x28(sp)
0041b5dc  nop
0041b5e0  slti v0,v0,0x2
0041b5e4  beq v0,zero,0x0041b47c
0041b5e8  _nop
0041b5ec  lw t9,-0x66fc(gp)
0041b5f0  nop
0041b5f4  jalr t9
0041b5f8  _lui s2,0x61
0041b5fc  lw gp,0x20(sp)
0041b600  addiu a1,s2,0x4b80
0041b604  lw t9,-0x689c(gp)
0041b608  nop
0041b60c  jalr t9
0041b610  _li a0,0x2b0
0041b614  lw gp,0x20(sp)
0041b618  lw a1,0x4b80(s2)
0041b61c  lw t9,-0x7c28(gp)
0041b620  beq a1,zero,0x0041b634
0041b624  _nop
0041b628  lui a0,0x5b
0041b62c  b 0x0041b640
0041b630  _addiu a0,a0,-0x40e8
0041b634  lui a0,0x5b
0041b638  addiu a0,a0,-0x40cc
0041b63c  clear a1
0041b640  jalr t9
0041b644  _addiu s2,sp,0xa8
0041b648  lw gp,0x20(sp)
0041b64c  move a1,s2
0041b650  lw t9,-0x689c(gp)
0041b654  nop
0041b658  jalr t9
0041b65c  _li a0,0x17
0041b660  lw gp,0x20(sp)
0041b664  lui a1,0x5b
0041b668  move a0,s2
0041b66c  lw t9,-0x74a4(gp)
0041b670  addiu a1,a1,-0x3e80
0041b674  jalr t9
0041b678  _li a2,0x6
0041b67c  lw gp,0x20(sp)
0041b680  beq v0,zero,0x0041b6c4
0041b684  _addiu s2,sp,0x58
0041b688  lbu a1,0xaa(sp)
0041b68c  lbu a0,0xab(sp)
0041b690  lbu v1,0xac(sp)
0041b694  lbu v0,0xad(sp)
0041b698  sw a1,0x10(sp)
0041b69c  lui a1,0x5b
0041b6a0  sw a0,0x14(sp)
0041b6a4  lbu a2,0xa8(sp)
0041b6a8  lbu a3,0xa9(sp)
0041b6ac  lw t9,-0x74f0(gp)
0041b6b0  sw v1,0x18(sp)
0041b6b4  sw v0,0x1c(sp)
0041b6b8  move a0,s2
0041b6bc  b 0x0041b774
0041b6c0  _addiu a1,a1,-0x40ac
0041b6c4  lw t9,-0x75d8(gp)
0041b6c8  li a0,0x2
0041b6cc  li a1,0x1
0041b6d0  jalr t9
0041b6d4  _clear a2
0041b6d8  lw gp,0x20(sp)
0041b6dc  li v1,0x2
0041b6e0  addiu s4,sp,0x88
0041b6e4  lw t9,-0x6efc(gp)
0041b6e8  lui a1,0x5b
0041b6ec  sh v1,0x98(sp)
0041b6f0  addiu a1,a1,-0x408c
0041b6f4  move a0,s4
0041b6f8  li a2,0xf
0041b6fc  jalr t9
0041b700  _move s3,v0
0041b704  lw gp,0x20(sp)
0041b708  move a2,s4
0041b70c  ori a1,zero,0x8927
0041b710  lw t9,-0x6378(gp)
0041b714  nop
0041b718  jalr t9
0041b71c  _move a0,s3
0041b720  lw gp,0x20(sp)
0041b724  nop
0041b728  lw t9,-0x6d0c(gp)
0041b72c  nop
0041b730  jalr t9
0041b734  _move a0,s3
0041b738  lw gp,0x20(sp)
0041b73c  lbu a1,0x9c(sp)
0041b740  lbu a0,0x9d(sp)
0041b744  lbu v1,0x9e(sp)
0041b748  lbu v0,0x9f(sp)
0041b74c  lbu a2,0x9a(sp)
0041b750  lbu a3,0x9b(sp)
0041b754  lw t9,-0x74f0(gp)
0041b758  sw a1,0x10(sp)
0041b75c  lui a1,0x5b
0041b760  sw a0,0x14(sp)
0041b764  sw v1,0x18(sp)
0041b768  sw v0,0x1c(sp)
0041b76c  move a0,s2
0041b770  addiu a1,a1,-0x4088
0041b774  jalr t9
0041b778  _nop
0041b77c  lw gp,0x20(sp)
0041b780  nop
0041b784  lw t9,-0x6ba0(gp)
0041b788  nop
0041b78c  jalr t9
0041b790  _addiu a0,sp,0x58
0041b794  lw gp,0x20(sp)
0041b798  nop
0041b79c  lw t9,-0x6e88(gp)
0041b7a0  nop
0041b7a4  jalr t9
0041b7a8  _li a0,0x3f
0041b7ac  lw gp,0x20(sp)
0041b7b0  nop
0041b7b4  lw a0,-0x5c60(gp)
0041b7b8  lw t9,-0x6b0c(gp)
0041b7bc  nop
0041b7c0  jalr t9
0041b7c4  _nop
0041b7c8  lw gp,0x20(sp)
0041b7cc  nop
0041b7d0  lw t9,-0x6d54(gp)
0041b7d4  nop
0041b7d8  jalr t9
0041b7dc  _nop
0041b7e0  lw gp,0x20(sp)
0041b7e4  lui a0,0x5b
0041b7e8  addiu a0,a0,-0x4068
0041b7ec  lw t9,-0x5b74(gp)
0041b7f0  nop
0041b7f4  jalr t9
0041b7f8  _clear a1
0041b7fc  move s2,v0
0041b800  li v0,-0x1
0041b804  lw gp,0x20(sp)
0041b808  bne s2,v0,0x0041b82c
0041b80c  _lui a0,0x5b
0041b810  lw v0,-0x6b48(gp)
0041b814  lw t9,-0x7054(gp)
0041b818  lw a1,0x0(v0)
0041b81c  jalr t9
0041b820  _addiu a0,a0,-0x405c
0041b824  lw gp,0x20(sp)
0041b828  nop
0041b82c  lw t9,-0x6538(gp)
0041b830  move a0,s2
0041b834  jalr t9
0041b838  _clear a1
0041b83c  li v1,-0x1
0041b840  lw gp,0x20(sp)
0041b844  bne v0,v1,0x0041b868
0041b848  _lui a0,0x5b
0041b84c  lw v0,-0x6b48(gp)
0041b850  lw t9,-0x7054(gp)
0041b854  lw a1,0x0(v0)
0041b858  jalr t9
0041b85c  _addiu a0,a0,-0x4044
0041b860  lw gp,0x20(sp)
0041b864  nop
0041b868  lw t9,-0x6d0c(gp)
0041b86c  move a0,s2
0041b870  jalr t9
0041b874  _lui s7,0x61
0041b878  lw gp,0x20(sp)
0041b87c  addiu a0,s7,0x4b88
0041b880  move s7,a0
0041b884  lw t9,-0x6ad8(gp)
0041b888  lui s6,0x5b
0041b88c  jalr t9
0041b890  _addiu s6,s6,-0x401c
0041b894  lw gp,0x20(sp)
0041b898  li s2,-0x1
0041b89c  li s5,0x63
0041b8a0  lw s3,-0x7e3c(gp)
0041b8a4  b 0x0041b8f0
0041b8a8  _li s4,0x66
0041b8ac  beq v0,s5,0x0041b8d8
0041b8b0  _nop
0041b8b4  bne v0,s4,0x0041b8f0
0041b8b8  _nop
0041b8bc  lw t9,-0x7eac(gp)
0041b8c0  lw a1,0x0(s3)
0041b8c4  jalr t9
0041b8c8  _move a0,s7
0041b8cc  lw gp,0x20(sp)
0041b8d0  b 0x0041b8f0
0041b8d4  _nop
0041b8d8  lw t9,-0x6118(gp)
0041b8dc  nop
0041b8e0  jalr t9
0041b8e4  _li a0,0x1
0041b8e8  b 0x0041bc88
0041b8ec  _nop
0041b8f0  lw t9,-0x791c(gp)
0041b8f4  move a0,s0
0041b8f8  move a1,s1
0041b8fc  jalr t9
0041b900  _move a2,s6
0041b904  lw gp,0x20(sp)
0041b908  bne v0,s2,0x0041b8ac
0041b90c  _nop
0041b910  lw t9,-0x78bc(gp)
0041b914  lw s3,-0x6e20(gp)
0041b918  jalr t9
0041b91c  _addiu a0,sp,0x58
0041b920  lw gp,0x20(sp)
0041b924  ori v0,zero,0xce03
0041b928  lw t9,-0x6f40(gp)
0041b92c  nop
0041b930  jalr t9
0041b934  _sw v0,0x0(s3)
0041b938  lw gp,0x20(sp)
0041b93c  nop
0041b940  lw t9,-0x7784(gp)
0041b944  nop
0041b948  jalr t9
0041b94c  _nop
0041b950  lw gp,0x20(sp)
0041b954  lui a0,0x5b
0041b958  move s1,v0
0041b95c  lw t9,-0x7ca0(gp)
0041b960  nop
0041b964  jalr t9
0041b968  _addiu a0,a0,-0x4014
0041b96c  lw gp,0x20(sp)
0041b970  beq s1,s2,0x0041b988
0041b974  _nop
0041b978  beq s1,zero,0x0041b9b0
0041b97c  _clear a1
0041b980  b 0x0041ba24
0041b984  _nop
0041b988  lw t9,-0x72b8(gp)
0041b98c  lui a0,0x5b
0041b990  jalr t9
0041b994  _addiu a0,a0,-0x4008
0041b998  lw gp,0x20(sp)
0041b99c  li a0,0x1
0041b9a0  lw t9,-0x7738(gp)
0041b9a4  nop
0041b9a8  jalr t9
0041b9ac  _nop
0041b9b0  lw t9,-0x7c28(gp)
0041b9b4  lui a0,0x5b
0041b9b8  addiu a0,a0,-0x3ffc
0041b9bc  jalr t9
0041b9c0  _clear a1
0041b9c4  lw gp,0x20(sp)
0041b9c8  lui s0,0x61
0041b9cc  lw a2,0x4b84(s0)
0041b9d0  lw t9,-0x7c28(gp)
0041b9d4  lui a0,0x5b
0041b9d8  addiu a0,a0,-0x3fe8
0041b9dc  jalr t9
0041b9e0  _clear a1
0041b9e4  lw gp,0x20(sp)
0041b9e8  lui a0,0x5b
0041b9ec  lui a1,0x5b
0041b9f0  lw t9,-0x7c28(gp)
0041b9f4  lui a2,0x5b
0041b9f8  addiu a0,a0,-0x3fc0
0041b9fc  addiu a1,a1,-0x3fa4
0041ba00  jalr t9
0041ba04  _addiu a2,a2,-0x3f98
0041ba08  lui v0,0x61
0041ba0c  lw v0,0x4b80(v0)
0041ba10  lw gp,0x20(sp)
0041ba14  beq v0,zero,0x0041bf74
0041ba18  _addiu v0,sp,0x6c
0041ba1c  b 0x0041bc9c
0041ba20  _li v1,0xa
0041ba24  lw t9,-0x7244(gp)
0041ba28  lw a0,-0x6ee0(gp)
0041ba2c  jalr t9
0041ba30  _li a2,0x20
0041ba34  lw gp,0x20(sp)
0041ba38  lui a1,0x5b
0041ba3c  addiu a1,a1,-0x3f8c
0041ba40  lw t9,-0x5c9c(gp)
0041ba44  lw a0,-0x6ee0(gp)
0041ba48  li a2,0x1a
0041ba4c  jalr t9
0041ba50  _addiu s0,sp,0xa8
0041ba54  lw gp,0x20(sp)
0041ba58  lui a1,0x5b
0041ba5c  addiu a1,a1,-0x3f48
0041ba60  lw t9,-0x74f0(gp)
0041ba64  move a0,s0
0041ba68  jalr t9
0041ba6c  _move a2,s1
0041ba70  lw gp,0x20(sp)
0041ba74  li a1,0x1
0041ba78  move a2,s0
0041ba7c  lw a0,-0x6ee0(gp)
0041ba80  lui s3,0x5b
0041ba84  jal 0x0041b140
0041ba88  _addiu s3,s3,-0x3f5c
0041ba8c  lw gp,0x20(sp)
0041ba90  clear a1
0041ba94  li a2,0x20
0041ba98  lw t9,-0x7244(gp)
0041ba9c  lw a0,-0x6ee0(gp)
0041baa0  lui s2,0x5b
0041baa4  jalr t9
0041baa8  _addiu s2,s2,-0x227c
0041baac  lw gp,0x20(sp)
0041bab0  lui a1,0x5b
0041bab4  li a2,0x13
0041bab8  lw t9,-0x5c9c(gp)
0041babc  lw a0,-0x6ee0(gp)
0041bac0  jalr t9
0041bac4  _addiu a1,a1,-0x3f70
0041bac8  lw gp,0x20(sp)
0041bacc  move a0,s0
0041bad0  lw t9,-0x7eac(gp)
0041bad4  nop
0041bad8  jalr t9
0041badc  _move a1,s3
0041bae0  lw gp,0x20(sp)
0041bae4  li a1,0x1
0041bae8  lw a0,-0x6ee0(gp)
0041baec  jal 0x0041b140
0041baf0  _move a2,s0
0041baf4  lw gp,0x20(sp)
0041baf8  lui a1,0x5b
0041bafc  addiu a1,a1,-0x3f50
0041bb00  lw t9,-0x74f0(gp)
0041bb04  move a0,s0
0041bb08  jalr t9
0041bb0c  _move a2,s1
0041bb10  lw gp,0x20(sp)
0041bb14  move a2,s0
0041bb18  lw a0,-0x6ee0(gp)
0041bb1c  jal 0x0041b140
0041bb20  _li a1,0x2
0041bb24  lw gp,0x20(sp)
0041bb28  lui a1,0x5b
0041bb2c  addiu a1,a1,-0x3f44
0041bb30  lw t9,-0x7eac(gp)
0041bb34  nop
0041bb38  jalr t9
0041bb3c  _move a0,s0
0041bb40  lw gp,0x20(sp)
0041bb44  move a2,s0
0041bb48  lw a0,-0x6ee0(gp)
0041bb4c  jal 0x0041b140
0041bb50  _li a1,0x2
0041bb54  lw gp,0x20(sp)
0041bb58  lui a1,0x5b
0041bb5c  addiu a1,a1,-0x3f30
0041bb60  lw t9,-0x7eac(gp)
0041bb64  nop
0041bb68  jalr t9
0041bb6c  _move a0,s0
0041bb70  lw gp,0x20(sp)
0041bb74  move a2,s0
0041bb78  lw a0,-0x6ee0(gp)
0041bb7c  jal 0x0041b140
0041bb80  _li a1,0x2
0041bb84  lw gp,0x20(sp)
0041bb88  move a0,s0
0041bb8c  lw t9,-0x7eac(gp)
0041bb90  nop
0041bb94  jalr t9
0041bb98  _move a1,s2
0041bb9c  lw gp,0x20(sp)
0041bba0  li a1,0x2
0041bba4  lw a0,-0x6ee0(gp)
0041bba8  jal 0x0041b140
0041bbac  _move a2,s0
0041bbb0  lw gp,0x20(sp)
0041bbb4  clear a1
0041bbb8  lw t9,-0x7244(gp)
0041bbbc  lw a0,-0x6ee0(gp)
0041bbc0  jalr t9
0041bbc4  _li a2,0x20
0041bbc8  lw gp,0x20(sp)
0041bbcc  lui a1,0x5b
0041bbd0  li a2,0x18
0041bbd4  lw t9,-0x5c9c(gp)
0041bbd8  lw a0,-0x6ee0(gp)
0041bbdc  jalr t9
0041bbe0  _addiu a1,a1,-0x3f28
0041bbe4  lw gp,0x20(sp)
0041bbe8  move a1,s3
0041bbec  lw t9,-0x7eac(gp)
0041bbf0  nop
0041bbf4  jalr t9
0041bbf8  _move a0,s0
0041bbfc  lw gp,0x20(sp)
0041bc00  li a1,0x1
0041bc04  lw a0,-0x6ee0(gp)
0041bc08  jal 0x0041b140
0041bc0c  _move a2,s0
0041bc10  lw gp,0x20(sp)
0041bc14  lui a1,0x5b
0041bc18  addiu a1,a1,-0x3f0c
0041bc1c  lw t9,-0x74f0(gp)
0041bc20  move a0,s0
0041bc24  jalr t9
0041bc28  _move a2,s1
0041bc2c  lw gp,0x20(sp)
0041bc30  move a2,s0
0041bc34  lw a0,-0x6ee0(gp)
0041bc38  jal 0x0041b140
0041bc3c  _li a1,0x2
0041bc40  lw gp,0x20(sp)
0041bc44  move a1,s2
0041bc48  lw t9,-0x7eac(gp)
0041bc4c  nop
0041bc50  jalr t9
0041bc54  _move a0,s0
0041bc58  lw gp,0x20(sp)
0041bc5c  li a1,0x2
0041bc60  lw a0,-0x6ee0(gp)
0041bc64  jal 0x0041b140
0041bc68  _move a2,s0
0041bc6c  lw gp,0x20(sp)
0041bc70  lui a0,0x5b
0041bc74  addiu a0,a0,-0x3efc
0041bc78  lw t9,-0x7c28(gp)
0041bc7c  nop
0041bc80  jalr t9
0041bc84  _move a1,s1
0041bc88  lw gp,0x20(sp)
0041bc8c  nop
0041bc90  lw t9,-0x7738(gp)
0041bc94  b 0x0041b9a8
0041bc98  _clear a0
0041bc9c  lw t9,-0x5c9c(gp)
0041bca0  lw a1,-0x6f04(gp)
0041bca4  sw zero,0x6c(sp)
0041bca8  addiu a0,sp,0x74
0041bcac  sh v1,0x6c(sp)
0041bcb0  li a2,0x10
0041bcb4  sw zero,0x18(v0)
0041bcb8  sw zero,0x4(v0)
0041bcbc  sw zero,0x8(v0)
0041bcc0  sw zero,0xc(v0)
0041bcc4  sw zero,0x10(v0)
0041bcc8  jalr t9
0041bccc  _sw zero,0x14(v0)
0041bcd0  lw gp,0x20(sp)
0041bcd4  lw v0,0x0(s3)
0041bcd8  lhu a0,0x6c(sp)
0041bcdc  lw t9,-0x75d8(gp)
0041bce0  sh v0,0x6e(sp)
0041bce4  li a1,0x2
0041bce8  jalr t9
0041bcec  _li a2,0x6
0041bcf0  lw gp,0x20(sp)
0041bcf4  bne v0,s2,0x0041bd14
0041bcf8  _move s0,v0
0041bcfc  lw v0,-0x6b48(gp)
0041bd00  lw t9,-0x7054(gp)
0041bd04  lui a0,0x5b
0041bd08  lw a1,0x0(v0)
0041bd0c  jalr t9
0041bd10  _addiu a0,a0,-0x3ee8
0041bd14  move a0,s0
0041bd18  jal 0x0041b220
0041bd1c  _li a1,0x1
0041bd20  lw gp,0x20(sp)
0041bd24  li v0,0x4
0041bd28  lui a3,0x60
0041bd2c  lw t9,-0x690c(gp)
0041bd30  sw v0,0x10(sp)
0041bd34  addiu a3,a3,0x9f4
0041bd38  move a0,s0
0041bd3c  ori a1,zero,0xffff
0041bd40  jalr t9
0041bd44  _li a2,0x4
0041bd48  li v1,-0x1
0041bd4c  lw gp,0x20(sp)
0041bd50  bne v0,v1,0x0041bd74
0041bd54  _lui a0,0x5b
0041bd58  lw v0,-0x6b48(gp)
0041bd5c  lw t9,-0x7054(gp)
0041bd60  lw a1,0x0(v0)
0041bd64  jalr t9
0041bd68  _addiu a0,a0,-0x3ed0
0041bd6c  lw gp,0x20(sp)
0041bd70  nop
0041bd74  lw t9,-0x690c(gp)
0041bd78  li s2,0x8
0041bd7c  li v0,0x1
0041bd80  move a0,s0
0041bd84  ori a1,zero,0xffff
0041bd88  li a2,0x80
0041bd8c  addiu a3,sp,0x48
0041bd90  sw v0,0x48(sp)
0041bd94  sw zero,0x4c(sp)
0041bd98  jalr t9
0041bd9c  _sw s2,0x10(sp)
0041bda0  lw gp,0x20(sp)
0041bda4  li s1,0x4
0041bda8  li v0,0x1000
0041bdac  lw t9,-0x690c(gp)
0041bdb0  move a0,s0
0041bdb4  ori a1,zero,0xffff
0041bdb8  li a2,0x1002
0041bdbc  addiu a3,sp,0x2c
0041bdc0  sw v0,0x2c(sp)
0041bdc4  jalr t9
0041bdc8  _sw s1,0x10(sp)
0041bdcc  lw gp,0x20(sp)
0041bdd0  li v0,0x5ee
0041bdd4  move a0,s0
0041bdd8  lw t9,-0x690c(gp)
0041bddc  ori a1,zero,0xffff
0041bde0  li a2,0x1001
0041bde4  addiu a3,sp,0x30
0041bde8  sw v0,0x30(sp)
0041bdec  jalr t9
0041bdf0  _sw s1,0x10(sp)
0041bdf4  lw gp,0x20(sp)
0041bdf8  addiu s3,sp,0x50
0041bdfc  li v0,0x1e
0041be00  lw t9,-0x690c(gp)
0041be04  move a0,s0
0041be08  ori a1,zero,0xffff
0041be0c  li a2,0x1005
0041be10  move a3,s3
0041be14  sw v0,0x50(sp)
0041be18  sw zero,0x54(sp)
0041be1c  jalr t9
0041be20  _sw s2,0x10(sp)
0041be24  lw gp,0x20(sp)
0041be28  move a3,s3
0041be2c  move a0,s0
0041be30  lw t9,-0x690c(gp)
0041be34  ori a1,zero,0xffff
0041be38  li a2,0x1006
0041be3c  jalr t9
0041be40  _sw s2,0x10(sp)
0041be44  lw gp,0x20(sp)
0041be48  lui a3,0x60
0041be4c  addiu a3,a3,0x9f4
0041be50  lw t9,-0x690c(gp)
0041be54  move a0,s0
0041be58  ori a1,zero,0xffff
0041be5c  li a2,0x8
0041be60  jalr t9
0041be64  _sw s1,0x10(sp)
0041be68  lw gp,0x20(sp)
0041be6c  li v0,0xa
0041be70  move a0,s0
0041be74  lw t9,-0x690c(gp)
0041be78  li a1,0x6
0041be7c  li a2,0x4
0041be80  addiu a3,sp,0x34
0041be84  sw v0,0x34(sp)
0041be88  jalr t9
0041be8c  _sw s1,0x10(sp)
0041be90  lw gp,0x20(sp)
0041be94  li v0,0x14
0041be98  move a0,s0
0041be9c  lw t9,-0x690c(gp)
0041bea0  li a1,0x6
0041bea4  li a2,0x5
0041bea8  addiu a3,sp,0x38
0041beac  sw v0,0x38(sp)
0041beb0  jalr t9
0041beb4  _sw s1,0x10(sp)
0041beb8  lw gp,0x20(sp)
0041bebc  li v0,0x5
0041bec0  move a0,s0
0041bec4  lw t9,-0x690c(gp)
0041bec8  li a1,0x6
0041becc  li a2,0x6
0041bed0  addiu a3,sp,0x3c
0041bed4  sw v0,0x3c(sp)
0041bed8  jalr t9
0041bedc  _sw s1,0x10(sp)
0041bee0  lw gp,0x20(sp)
0041bee4  move a0,s0
0041bee8  addiu a1,sp,0x6c
0041beec  lw t9,-0x5920(gp)
0041bef0  nop
0041bef4  jalr t9
0041bef8  _li a2,0x1c
0041befc  li v1,-0x1
0041bf00  lw gp,0x20(sp)
0041bf04  bne v0,v1,0x0041bf2c
0041bf08  _lui v0,0x60
0041bf0c  lw v0,-0x6b48(gp)
0041bf10  lw t9,-0x7054(gp)
0041bf14  lui a0,0x5b
0041bf18  lw a1,0x0(v0)
0041bf1c  jalr t9
0041bf20  _addiu a0,a0,-0x3ec4
0041bf24  lw gp,0x20(sp)
0041bf28  lui v0,0x60
0041bf2c  lw t9,-0x7bec(gp)
0041bf30  lw a1,0x9f0(v0)
0041bf34  jalr t9
0041bf38  _move a0,s0
0041bf3c  li v1,-0x1
0041bf40  lw gp,0x20(sp)
0041bf44  bne v0,v1,0x0041bf6c
0041bf48  _lui v0,0x61
0041bf4c  lw v0,-0x6b48(gp)
0041bf50  lw t9,-0x7054(gp)
0041bf54  lui a0,0x5b
0041bf58  lw a1,0x0(v0)
0041bf5c  jalr t9
0041bf60  _addiu a0,a0,-0x3eb4
0041bf64  lw gp,0x20(sp)
0041bf68  lui v0,0x61
0041bf6c  b 0x0041bf78
0041bf70  _sw s0,0x4b84(v0)
0041bf74  sw zero,0x4b84(s0)
0041bf78  lw t9,-0x70b4(gp)
0041bf7c  nop
0041bf80  jalr t9
0041bf84  _lui s0,0x61
0041bf88  lw gp,0x20(sp)
0041bf8c  lui a0,0x61
0041bf90  lw t9,-0x6468(gp)
0041bf94  nop
0041bf98  jalr t9
0041bf9c  _addiu a0,a0,0x4b88
0041bfa0  lw gp,0x20(sp)
0041bfa4  nop
0041bfa8  lw t9,-0x681c(gp)
0041bfac  nop
0041bfb0  jalr t9
0041bfb4  _nop
0041bfb8  lw gp,0x20(sp)
0041bfbc  nop
0041bfc0  lw t9,-0x6a98(gp)
0041bfc4  nop
0041bfc8  jalr t9
0041bfcc  _nop
0041bfd0  lw gp,0x20(sp)
0041bfd4  nop
0041bfd8  lw t9,-0x6868(gp)
0041bfdc  nop
0041bfe0  jalr t9
0041bfe4  _nop
0041bfe8  lw gp,0x20(sp)
0041bfec  lw a0,0x4b84(s0)
0041bff0  lw t9,-0x76c4(gp)
0041bff4  nop
0041bff8  jalr t9
0041bffc  _nop
0041c000  lw gp,0x20(sp)
0041c004  nop
0041c008  lw t9,-0x5e1c(gp)
0041c00c  nop
0041c010  jalr t9
0041c014  _nop
0041c018  lw gp,0x20(sp)
0041c01c  lw a0,0x4b84(s0)
0041c020  lw t9,-0x7f38(gp)
0041c024  nop
0041c028  jalr t9
0041c02c  _li a1,0x1
0041c030  lw gp,0x20(sp)
0041c034  nop
0041c038  lw t9,-0x6c8c(gp)
0041c03c  nop
0041c040  jalr t9
0041c044  _nop
0041c048  lw gp,0x20(sp)
0041c04c  nop
0041c050  lw t9,-0x7988(gp)
0041c054  nop
0041c058  jalr t9
0041c05c  _nop
0041c060  lw gp,0x20(sp)
0041c064  nop
0041c068  lw t9,-0x7190(gp)
0041c06c  nop
0041c070  jalr t9
0041c074  _nop
0041c078  lw gp,0x20(sp)
0041c07c  lui a0,0x5b
0041c080  lw t9,-0x7c28(gp)
0041c084  nop
0041c088  jalr t9
0041c08c  _addiu a0,a0,-0x3ea0
0041c090  lw ra,0x134(sp)
0041c094  lw s8,0x130(sp)
0041c098  lw s7,0x12c(sp)
0041c09c  lw s6,0x128(sp)
0041c0a0  lw s5,0x124(sp)
0041c0a4  lw s4,0x120(sp)
0041c0a8  lw s3,0x11c(sp)
0041c0ac  lw s2,0x118(sp)
0041c0b0  lw s1,0x114(sp)
0041c0b4  lw s0,0x110(sp)
0041c0b8  clear v0
0041c0bc  jr ra
0041c0c0  _addiu sp,sp,0x138
