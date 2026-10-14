# json_parse_int64 @ 0043f170
0043f170  lui gp,0x1e
0043f174  addiu gp,gp,-0x4e60
0043f178  addu gp,gp,t9
0043f17c  addiu sp,sp,-0xb0
0043f180  sw ra,0xac(sp)
0043f184  sw s8,0xa8(sp)
0043f188  move s8,sp
0043f18c  sw gp,0x18(sp)
0043f190  sw a0,0xb0(s8)
0043f194  sw a1,0xb4(s8)
0043f198  lw v0,-0x7fe8(gp)
0043f19c  nop
0043f1a0  lw v0,0x5f54(v0)
0043f1a4  nop
0043f1a8  bne v0,zero,0x0043f1fc
0043f1ac  _nop
0043f1b0  lw v0,-0x7fc8(gp)
0043f1b4  nop
0043f1b8  addiu v0,v0,-0x102c
0043f1bc  move t9,v0
0043f1c0  jalr t9
0043f1c4  _nop
0043f1c8  lw gp,0x18(s8)
0043f1cc  nop
0043f1d0  lw v0,-0x7fe8(gp)
0043f1d4  li v1,0x1
0043f1d8  sw v1,0x5f54(v0)
0043f1dc  b 0x0043f200
0043f1e0  _nop
0043f1e4  lw v0,0xb0(s8)
0043f1e8  nop
0043f1ec  addiu v0,v0,0x1
0043f1f0  sw v0,0xb0(s8)
0043f1f4  b 0x0043f200
0043f1f8  _nop
0043f1fc  nop
0043f200  lw v0,-0x71dc(gp)
0043f204  nop
0043f208  lw v1,0x0(v0)
0043f20c  lw v0,0xb0(s8)
0043f210  nop
0043f214  lb v0,0x0(v0)
0043f218  nop
0043f21c  sll v0,v0,0x1
0043f220  addu v0,v1,v0
0043f224  lhu v0,0x0(v0)
0043f228  nop
0043f22c  andi v0,v0,0x20
0043f230  beq v0,zero,0x0043f250
0043f234  _nop
0043f238  lw v0,0xb0(s8)
0043f23c  nop
0043f240  lb v0,0x0(v0)
0043f244  nop
0043f248  bne v0,zero,0x0043f1e4
0043f24c  _nop
0043f250  lw v0,-0x5aec(gp)
0043f254  nop
0043f258  move t9,v0
0043f25c  jalr t9
0043f260  _nop
0043f264  lw gp,0x18(s8)
0043f268  sw zero,0x0(v0)
0043f26c  addiu v0,s8,0x38
0043f270  lw a0,0xb0(s8)
0043f274  lw v1,-0x7fd0(gp)
0043f278  nop
0043f27c  addiu a1,v1,-0x10d4
0043f280  move a2,v0
0043f284  lw v0,-0x6ea0(gp)
0043f288  nop
0043f28c  move t9,v0
0043f290  jalr t9
0043f294  _nop
0043f298  lw gp,0x18(s8)
0043f29c  move v1,v0
0043f2a0  li v0,0x1
0043f2a4  beq v1,v0,0x0043f2b8
0043f2a8  _nop
0043f2ac  li v0,0x1
0043f2b0  b 0x0043f590
0043f2b4  _nop
0043f2b8  lw v0,-0x5aec(gp)
0043f2bc  nop
0043f2c0  move t9,v0
0043f2c4  jalr t9
0043f2c8  _nop
0043f2cc  lw gp,0x18(s8)
0043f2d0  lw v0,0x0(v0)
0043f2d4  nop
0043f2d8  sw v0,0x2c(s8)
0043f2dc  lw v0,0xb0(s8)
0043f2e0  nop
0043f2e4  sw v0,0x34(s8)
0043f2e8  sw zero,0x30(s8)
0043f2ec  lw v0,0x34(s8)
0043f2f0  nop
0043f2f4  lb v1,0x0(v0)
0043f2f8  li v0,0x2d
0043f2fc  bne v1,v0,0x0043f31c
0043f300  _nop
0043f304  lw v0,0x34(s8)
0043f308  nop
0043f30c  addiu v0,v0,0x1
0043f310  sw v0,0x34(s8)
0043f314  li v0,0x1
0043f318  sw v0,0x30(s8)
0043f31c  lw v0,-0x7fe8(gp)
0043f320  nop
0043f324  lw v0,0x5f50(v0)
0043f328  nop
0043f32c  beq v0,zero,0x0043f51c
0043f330  _nop
0043f334  lw v1,0x2c(s8)
0043f338  li v0,0x22
0043f33c  beq v1,v0,0x0043f51c
0043f340  _nop
0043f344  addiu v0,s8,0x40
0043f348  sw v0,0x28(s8)
0043f34c  sw zero,0x24(s8)
0043f350  b 0x0043f368
0043f354  _nop
0043f358  lw v0,0x34(s8)
0043f35c  nop
0043f360  addiu v0,v0,0x1
0043f364  sw v0,0x34(s8)
0043f368  lw v0,0x34(s8)
0043f36c  nop
0043f370  lb v1,0x0(v0)
0043f374  li v0,0x30
0043f378  bne v1,v0,0x0043f39c
0043f37c  _nop
0043f380  lw v0,0x34(s8)
0043f384  nop
0043f388  addiu v0,v0,0x1
0043f38c  lb v0,0x0(v0)
0043f390  nop
0043f394  bne v0,zero,0x0043f358
0043f398  _nop
0043f39c  lw a1,0x3c(s8)
0043f3a0  lw a0,0x38(s8)
0043f3a4  nop
0043f3a8  move v0,a0
0043f3ac  or v0,v0,a1
0043f3b0  bne v0,zero,0x0043f3bc
0043f3b4  _nop
0043f3b8  sw zero,0x30(s8)
0043f3bc  lw v1,0x3c(s8)
0043f3c0  lw v0,0x38(s8)
0043f3c4  sw v1,0x14(sp)
0043f3c8  sw v0,0x10(sp)
0043f3cc  lw a0,0x28(s8)
0043f3d0  li a1,0x64
0043f3d4  lw v0,-0x7fd0(gp)
0043f3d8  nop
0043f3dc  addiu a2,v0,-0x10d4
0043f3e0  lw v0,-0x64ec(gp)
0043f3e4  nop
0043f3e8  move t9,v0
0043f3ec  jalr t9
0043f3f0  _nop
0043f3f4  lw gp,0x18(s8)
0043f3f8  lw v0,0x28(s8)
0043f3fc  nop
0043f400  lb v1,0x0(v0)
0043f404  li v0,0x2d
0043f408  bne v1,v0,0x0043f428
0043f40c  _nop
0043f410  li v0,0x1
0043f414  sw v0,0x24(s8)
0043f418  lw v0,0x28(s8)
0043f41c  nop
0043f420  addiu v0,v0,0x1
0043f424  sw v0,0x28(s8)
0043f428  lw a0,0x28(s8)
0043f42c  lw v0,-0x63c4(gp)
0043f430  nop
0043f434  move t9,v0
0043f438  jalr t9
0043f43c  _nop
0043f440  lw gp,0x18(s8)
0043f444  sw v0,0x20(s8)
0043f448  lw v1,0x30(s8)
0043f44c  lw v0,0x24(s8)
0043f450  nop
0043f454  bne v1,v0,0x0043f514
0043f458  _nop
0043f45c  lw a0,0x28(s8)
0043f460  lw v0,-0x63c4(gp)
0043f464  nop
0043f468  move t9,v0
0043f46c  jalr t9
0043f470  _nop
0043f474  lw gp,0x18(s8)
0043f478  lw a0,0x34(s8)
0043f47c  lw a1,0x28(s8)
0043f480  move a2,v0
0043f484  lw v0,-0x6248(gp)
0043f488  nop
0043f48c  move t9,v0
0043f490  jalr t9
0043f494  _nop
0043f498  lw gp,0x18(s8)
0043f49c  bne v0,zero,0x0043f514
0043f4a0  _nop
0043f4a4  lw a0,0x34(s8)
0043f4a8  lw v0,-0x63c4(gp)
0043f4ac  nop
0043f4b0  move t9,v0
0043f4b4  jalr t9
0043f4b8  _nop
0043f4bc  lw gp,0x18(s8)
0043f4c0  move v1,v0
0043f4c4  lw v0,0x20(s8)
0043f4c8  nop
0043f4cc  beq v1,v0,0x0043f51c
0043f4d0  _nop
0043f4d4  lw v0,-0x71dc(gp)
0043f4d8  nop
0043f4dc  lw v1,0x0(v0)
0043f4e0  lw v0,0x20(s8)
0043f4e4  lw a0,0x34(s8)
0043f4e8  nop
0043f4ec  addu v0,a0,v0
0043f4f0  lb v0,0x0(v0)
0043f4f4  nop
0043f4f8  sll v0,v0,0x1
0043f4fc  addu v0,v1,v0
0043f500  lhu v0,0x0(v0)
0043f504  nop
0043f508  andi v0,v0,0x8
0043f50c  beq v0,zero,0x0043f51c
0043f510  _nop
0043f514  li v0,0x22
0043f518  sw v0,0x2c(s8)
0043f51c  lw v1,0x2c(s8)
0043f520  li v0,0x22
0043f524  bne v1,v0,0x0043f574
0043f528  _nop
0043f52c  lw v0,0x30(s8)
0043f530  nop
0043f534  beq v0,zero,0x0043f55c
0043f538  _nop
0043f53c  lw v0,-0x7fd0(gp)
0043f540  nop
0043f544  lw v1,-0x1044(v0)
0043f548  lw v0,-0x1048(v0)
0043f54c  sw v1,0x3c(s8)
0043f550  sw v0,0x38(s8)
0043f554  b 0x0043f574
0043f558  _nop
0043f55c  lw v0,-0x7fd0(gp)
0043f560  nop
0043f564  lw v1,-0x103c(v0)
0043f568  lw v0,-0x1040(v0)
0043f56c  sw v1,0x3c(s8)
0043f570  sw v0,0x38(s8)
0043f574  lw v1,0x3c(s8)
0043f578  lw v0,0x38(s8)
0043f57c  lw a0,0xb4(s8)
0043f580  nop
0043f584  sw v1,0x4(a0)
0043f588  sw v0,0x0(a0)
0043f58c  clear v0
0043f590  move sp,s8
0043f594  lw ra,0xac(sp)
0043f598  lw s8,0xa8(sp)
0043f59c  addiu sp,sp,0xb0
0043f5a0  jr ra
0043f5a4  _nop
