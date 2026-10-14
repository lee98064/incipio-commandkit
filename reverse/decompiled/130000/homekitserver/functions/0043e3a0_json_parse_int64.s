# json_parse_int64 @ 0043e3a0
0043e3a0  lui gp,0x1e
0043e3a4  addiu gp,gp,-0x4f20
0043e3a8  addu gp,gp,t9
0043e3ac  addiu sp,sp,-0xb0
0043e3b0  sw ra,0xac(sp)
0043e3b4  sw s8,0xa8(sp)
0043e3b8  move s8,sp
0043e3bc  sw gp,0x18(sp)
0043e3c0  sw a0,0xb0(s8)
0043e3c4  sw a1,0xb4(s8)
0043e3c8  lw v0,-0x7fe8(gp)
0043e3cc  nop
0043e3d0  lw v0,0x5064(v0)
0043e3d4  nop
0043e3d8  bne v0,zero,0x0043e42c
0043e3dc  _nop
0043e3e0  lw v0,-0x7fc4(gp)
0043e3e4  nop
0043e3e8  addiu v0,v0,-0x1dfc
0043e3ec  move t9,v0
0043e3f0  jalr t9
0043e3f4  _nop
0043e3f8  lw gp,0x18(s8)
0043e3fc  nop
0043e400  lw v0,-0x7fe8(gp)
0043e404  li v1,0x1
0043e408  sw v1,0x5064(v0)
0043e40c  b 0x0043e430
0043e410  _nop
0043e414  lw v0,0xb0(s8)
0043e418  nop
0043e41c  addiu v0,v0,0x1
0043e420  sw v0,0xb0(s8)
0043e424  b 0x0043e430
0043e428  _nop
0043e42c  nop
0043e430  lw v0,-0x71dc(gp)
0043e434  nop
0043e438  lw v1,0x0(v0)
0043e43c  lw v0,0xb0(s8)
0043e440  nop
0043e444  lb v0,0x0(v0)
0043e448  nop
0043e44c  sll v0,v0,0x1
0043e450  addu v0,v1,v0
0043e454  lhu v0,0x0(v0)
0043e458  nop
0043e45c  andi v0,v0,0x20
0043e460  beq v0,zero,0x0043e480
0043e464  _nop
0043e468  lw v0,0xb0(s8)
0043e46c  nop
0043e470  lb v0,0x0(v0)
0043e474  nop
0043e478  bne v0,zero,0x0043e414
0043e47c  _nop
0043e480  lw v0,-0x5b04(gp)
0043e484  nop
0043e488  move t9,v0
0043e48c  jalr t9
0043e490  _nop
0043e494  lw gp,0x18(s8)
0043e498  sw zero,0x0(v0)
0043e49c  addiu v0,s8,0x38
0043e4a0  lw a0,0xb0(s8)
0043e4a4  lw v1,-0x7fd0(gp)
0043e4a8  nop
0043e4ac  addiu a1,v1,-0x1f74
0043e4b0  move a2,v0
0043e4b4  lw v0,-0x6ea4(gp)
0043e4b8  nop
0043e4bc  move t9,v0
0043e4c0  jalr t9
0043e4c4  _nop
0043e4c8  lw gp,0x18(s8)
0043e4cc  move v1,v0
0043e4d0  li v0,0x1
0043e4d4  beq v1,v0,0x0043e4e8
0043e4d8  _nop
0043e4dc  li v0,0x1
0043e4e0  b 0x0043e7c0
0043e4e4  _nop
0043e4e8  lw v0,-0x5b04(gp)
0043e4ec  nop
0043e4f0  move t9,v0
0043e4f4  jalr t9
0043e4f8  _nop
0043e4fc  lw gp,0x18(s8)
0043e500  lw v0,0x0(v0)
0043e504  nop
0043e508  sw v0,0x2c(s8)
0043e50c  lw v0,0xb0(s8)
0043e510  nop
0043e514  sw v0,0x34(s8)
0043e518  sw zero,0x30(s8)
0043e51c  lw v0,0x34(s8)
0043e520  nop
0043e524  lb v1,0x0(v0)
0043e528  li v0,0x2d
0043e52c  bne v1,v0,0x0043e54c
0043e530  _nop
0043e534  lw v0,0x34(s8)
0043e538  nop
0043e53c  addiu v0,v0,0x1
0043e540  sw v0,0x34(s8)
0043e544  li v0,0x1
0043e548  sw v0,0x30(s8)
0043e54c  lw v0,-0x7fe8(gp)
0043e550  nop
0043e554  lw v0,0x5060(v0)
0043e558  nop
0043e55c  beq v0,zero,0x0043e74c
0043e560  _nop
0043e564  lw v1,0x2c(s8)
0043e568  li v0,0x22
0043e56c  beq v1,v0,0x0043e74c
0043e570  _nop
0043e574  addiu v0,s8,0x40
0043e578  sw v0,0x28(s8)
0043e57c  sw zero,0x24(s8)
0043e580  b 0x0043e598
0043e584  _nop
0043e588  lw v0,0x34(s8)
0043e58c  nop
0043e590  addiu v0,v0,0x1
0043e594  sw v0,0x34(s8)
0043e598  lw v0,0x34(s8)
0043e59c  nop
0043e5a0  lb v1,0x0(v0)
0043e5a4  li v0,0x30
0043e5a8  bne v1,v0,0x0043e5cc
0043e5ac  _nop
0043e5b0  lw v0,0x34(s8)
0043e5b4  nop
0043e5b8  addiu v0,v0,0x1
0043e5bc  lb v0,0x0(v0)
0043e5c0  nop
0043e5c4  bne v0,zero,0x0043e588
0043e5c8  _nop
0043e5cc  lw a1,0x3c(s8)
0043e5d0  lw a0,0x38(s8)
0043e5d4  nop
0043e5d8  move v0,a0
0043e5dc  or v0,v0,a1
0043e5e0  bne v0,zero,0x0043e5ec
0043e5e4  _nop
0043e5e8  sw zero,0x30(s8)
0043e5ec  lw v1,0x3c(s8)
0043e5f0  lw v0,0x38(s8)
0043e5f4  sw v1,0x14(sp)
0043e5f8  sw v0,0x10(sp)
0043e5fc  lw a0,0x28(s8)
0043e600  li a1,0x64
0043e604  lw v0,-0x7fd0(gp)
0043e608  nop
0043e60c  addiu a2,v0,-0x1f74
0043e610  lw v0,-0x64f4(gp)
0043e614  nop
0043e618  move t9,v0
0043e61c  jalr t9
0043e620  _nop
0043e624  lw gp,0x18(s8)
0043e628  lw v0,0x28(s8)
0043e62c  nop
0043e630  lb v1,0x0(v0)
0043e634  li v0,0x2d
0043e638  bne v1,v0,0x0043e658
0043e63c  _nop
0043e640  li v0,0x1
0043e644  sw v0,0x24(s8)
0043e648  lw v0,0x28(s8)
0043e64c  nop
0043e650  addiu v0,v0,0x1
0043e654  sw v0,0x28(s8)
0043e658  lw a0,0x28(s8)
0043e65c  lw v0,-0x63cc(gp)
0043e660  nop
0043e664  move t9,v0
0043e668  jalr t9
0043e66c  _nop
0043e670  lw gp,0x18(s8)
0043e674  sw v0,0x20(s8)
0043e678  lw v1,0x30(s8)
0043e67c  lw v0,0x24(s8)
0043e680  nop
0043e684  bne v1,v0,0x0043e744
0043e688  _nop
0043e68c  lw a0,0x28(s8)
0043e690  lw v0,-0x63cc(gp)
0043e694  nop
0043e698  move t9,v0
0043e69c  jalr t9
0043e6a0  _nop
0043e6a4  lw gp,0x18(s8)
0043e6a8  lw a0,0x34(s8)
0043e6ac  lw a1,0x28(s8)
0043e6b0  move a2,v0
0043e6b4  lw v0,-0x6254(gp)
0043e6b8  nop
0043e6bc  move t9,v0
0043e6c0  jalr t9
0043e6c4  _nop
0043e6c8  lw gp,0x18(s8)
0043e6cc  bne v0,zero,0x0043e744
0043e6d0  _nop
0043e6d4  lw a0,0x34(s8)
0043e6d8  lw v0,-0x63cc(gp)
0043e6dc  nop
0043e6e0  move t9,v0
0043e6e4  jalr t9
0043e6e8  _nop
0043e6ec  lw gp,0x18(s8)
0043e6f0  move v1,v0
0043e6f4  lw v0,0x20(s8)
0043e6f8  nop
0043e6fc  beq v1,v0,0x0043e74c
0043e700  _nop
0043e704  lw v0,-0x71dc(gp)
0043e708  nop
0043e70c  lw v1,0x0(v0)
0043e710  lw v0,0x20(s8)
0043e714  lw a0,0x34(s8)
0043e718  nop
0043e71c  addu v0,a0,v0
0043e720  lb v0,0x0(v0)
0043e724  nop
0043e728  sll v0,v0,0x1
0043e72c  addu v0,v1,v0
0043e730  lhu v0,0x0(v0)
0043e734  nop
0043e738  andi v0,v0,0x8
0043e73c  beq v0,zero,0x0043e74c
0043e740  _nop
0043e744  li v0,0x22
0043e748  sw v0,0x2c(s8)
0043e74c  lw v1,0x2c(s8)
0043e750  li v0,0x22
0043e754  bne v1,v0,0x0043e7a4
0043e758  _nop
0043e75c  lw v0,0x30(s8)
0043e760  nop
0043e764  beq v0,zero,0x0043e78c
0043e768  _nop
0043e76c  lw v0,-0x7fd0(gp)
0043e770  nop
0043e774  lw v1,-0x1ee4(v0)
0043e778  lw v0,-0x1ee8(v0)
0043e77c  sw v1,0x3c(s8)
0043e780  sw v0,0x38(s8)
0043e784  b 0x0043e7a4
0043e788  _nop
0043e78c  lw v0,-0x7fd0(gp)
0043e790  nop
0043e794  lw v1,-0x1edc(v0)
0043e798  lw v0,-0x1ee0(v0)
0043e79c  sw v1,0x3c(s8)
0043e7a0  sw v0,0x38(s8)
0043e7a4  lw v1,0x3c(s8)
0043e7a8  lw v0,0x38(s8)
0043e7ac  lw a0,0xb4(s8)
0043e7b0  nop
0043e7b4  sw v1,0x4(a0)
0043e7b8  sw v0,0x0(a0)
0043e7bc  clear v0
0043e7c0  move sp,s8
0043e7c4  lw ra,0xac(sp)
0043e7c8  lw s8,0xa8(sp)
0043e7cc  addiu sp,sp,0xb0
0043e7d0  jr ra
0043e7d4  _nop
