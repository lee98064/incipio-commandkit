# lh_table_insert @ 0043f024
0043f024  lui gp,0x1e
0043f028  addiu gp,gp,-0x5ba4
0043f02c  addu gp,gp,t9
0043f030  addiu sp,sp,-0x38
0043f034  sw ra,0x34(sp)
0043f038  sw s8,0x30(sp)
0043f03c  sw s2,0x2c(sp)
0043f040  sw s1,0x28(sp)
0043f044  sw s0,0x24(sp)
0043f048  move s8,sp
0043f04c  sw gp,0x10(sp)
0043f050  sw a0,0x38(s8)
0043f054  sw a1,0x3c(s8)
0043f058  sw a2,0x40(s8)
0043f05c  lw v0,0x38(s8)
0043f060  nop
0043f064  lw v0,0x14(v0)
0043f068  nop
0043f06c  addiu v1,v0,0x1
0043f070  lw v0,0x38(s8)
0043f074  nop
0043f078  sw v1,0x14(v0)
0043f07c  lw v0,0x38(s8)
0043f080  nop
0043f084  lw v1,0x4(v0)
0043f088  lw v0,-0x6b78(gp)
0043f08c  move a0,v1
0043f090  move t9,v0
0043f094  jalr t9
0043f098  _nop
0043f09c  lw gp,0x10(s8)
0043f0a0  move s1,v1
0043f0a4  move s0,v0
0043f0a8  lw v0,0x38(s8)
0043f0ac  nop
0043f0b0  lw v1,0x0(v0)
0043f0b4  lw v0,-0x6b78(gp)
0043f0b8  move a0,v1
0043f0bc  move t9,v0
0043f0c0  jalr t9
0043f0c4  _nop
0043f0c8  lw gp,0x10(s8)
0043f0cc  nop
0043f0d0  lw a2,-0x7fd0(gp)
0043f0d4  lw t0,-0x6c2c(gp)
0043f0d8  move a1,v1
0043f0dc  move a0,v0
0043f0e0  lw a3,-0x1eac(a2)
0043f0e4  lw a2,-0x1eb0(a2)
0043f0e8  move t9,t0
0043f0ec  jalr t9
0043f0f0  _nop
0043f0f4  lw gp,0x10(s8)
0043f0f8  clear s2
0043f0fc  lw t0,-0x7540(gp)
0043f100  move a1,s1
0043f104  move a0,s0
0043f108  move a3,v1
0043f10c  move a2,v0
0043f110  move t9,t0
0043f114  jalr t9
0043f118  _nop
0043f11c  lw gp,0x10(s8)
0043f120  bltz v0,0x0043f12c
0043f124  _nop
0043f128  li s2,0x1
0043f12c  andi v0,s2,0xff
0043f130  beq v0,zero,0x0043f16c
0043f134  _nop
0043f138  lw v0,0x38(s8)
0043f13c  nop
0043f140  lw v0,0x0(v0)
0043f144  nop
0043f148  sll v0,v0,0x1
0043f14c  lw a0,0x38(s8)
0043f150  move a1,v0
0043f154  lw v0,-0x63c8(gp)
0043f158  nop
0043f15c  move t9,v0
0043f160  jalr t9
0043f164  _nop
0043f168  lw gp,0x10(s8)
0043f16c  lw v0,0x38(s8)
0043f170  nop
0043f174  lw v0,0x30(v0)
0043f178  lw a0,0x3c(s8)
0043f17c  move t9,v0
0043f180  jalr t9
0043f184  _nop
0043f188  lw gp,0x10(s8)
0043f18c  sw v0,0x1c(s8)
0043f190  lw v0,0x38(s8)
0043f194  nop
0043f198  lw v0,0x0(v0)
0043f19c  lw v1,0x1c(s8)
0043f1a0  nop
0043f1a4  divu v1,v0
0043f1a8  bne v0,zero,0x0043f1b4
0043f1ac  _nop
0043f1b0  break 0x1c00
0043f1b4  mfhi v0
0043f1b8  sw v0,0x18(s8)
0043f1bc  b 0x0043f1c8
0043f1c0  _nop
0043f1c4  nop
0043f1c8  lw v0,0x38(s8)
0043f1cc  nop
0043f1d0  lw v1,0x28(v0)
0043f1d4  lw v0,0x18(s8)
0043f1d8  nop
0043f1dc  sll v0,v0,0x4
0043f1e0  addu v0,v1,v0
0043f1e4  lw v1,0x0(v0)
0043f1e8  li v0,-0x1
0043f1ec  beq v1,v0,0x0043f278
0043f1f0  _nop
0043f1f4  lw v0,0x38(s8)
0043f1f8  nop
0043f1fc  lw v1,0x28(v0)
0043f200  lw v0,0x18(s8)
0043f204  nop
0043f208  sll v0,v0,0x4
0043f20c  addu v0,v1,v0
0043f210  lw v1,0x0(v0)
0043f214  li v0,-0x2
0043f218  beq v1,v0,0x0043f278
0043f21c  _nop
0043f220  lw v0,0x38(s8)
0043f224  nop
0043f228  lw v0,0x8(v0)
0043f22c  nop
0043f230  addiu v1,v0,0x1
0043f234  lw v0,0x38(s8)
0043f238  nop
0043f23c  sw v1,0x8(v0)
0043f240  lw v0,0x18(s8)
0043f244  nop
0043f248  addiu v0,v0,0x1
0043f24c  sw v0,0x18(s8)
0043f250  lw v1,0x18(s8)
0043f254  lw v0,0x38(s8)
0043f258  nop
0043f25c  lw v0,0x0(v0)
0043f260  nop
0043f264  bne v1,v0,0x0043f1c4
0043f268  _nop
0043f26c  sw zero,0x18(s8)
0043f270  b 0x0043f1c8
0043f274  _nop
0043f278  lw v0,0x38(s8)
0043f27c  nop
0043f280  lw v1,0x28(v0)
0043f284  lw v0,0x18(s8)
0043f288  nop
0043f28c  sll v0,v0,0x4
0043f290  addu v0,v1,v0
0043f294  lw v1,0x3c(s8)
0043f298  nop
0043f29c  sw v1,0x0(v0)
0043f2a0  lw v0,0x38(s8)
0043f2a4  nop
0043f2a8  lw v1,0x28(v0)
0043f2ac  lw v0,0x18(s8)
0043f2b0  nop
0043f2b4  sll v0,v0,0x4
0043f2b8  addu v0,v1,v0
0043f2bc  lw v1,0x40(s8)
0043f2c0  nop
0043f2c4  sw v1,0x4(v0)
0043f2c8  lw v0,0x38(s8)
0043f2cc  nop
0043f2d0  lw v0,0x4(v0)
0043f2d4  nop
0043f2d8  addiu v1,v0,0x1
0043f2dc  lw v0,0x38(s8)
0043f2e0  nop
0043f2e4  sw v1,0x4(v0)
0043f2e8  lw v0,0x38(s8)
0043f2ec  nop
0043f2f0  lw v0,0x20(v0)
0043f2f4  nop
0043f2f8  bne v0,zero,0x0043f390
0043f2fc  _nop
0043f300  lw v0,0x38(s8)
0043f304  nop
0043f308  lw v1,0x28(v0)
0043f30c  lw v0,0x18(s8)
0043f310  nop
0043f314  sll v0,v0,0x4
0043f318  addu v1,v1,v0
0043f31c  lw v0,0x38(s8)
0043f320  nop
0043f324  sw v1,0x24(v0)
0043f328  lw v0,0x38(s8)
0043f32c  nop
0043f330  lw v1,0x24(v0)
0043f334  lw v0,0x38(s8)
0043f338  nop
0043f33c  sw v1,0x20(v0)
0043f340  lw v0,0x38(s8)
0043f344  nop
0043f348  lw v1,0x28(v0)
0043f34c  lw v0,0x18(s8)
0043f350  nop
0043f354  sll v0,v0,0x4
0043f358  addu v1,v1,v0
0043f35c  lw v0,0x38(s8)
0043f360  nop
0043f364  lw a0,0x28(v0)
0043f368  lw v0,0x18(s8)
0043f36c  nop
0043f370  sll v0,v0,0x4
0043f374  addu v0,a0,v0
0043f378  sw zero,0xc(v0)
0043f37c  lw v0,0xc(v0)
0043f380  nop
0043f384  sw v0,0x8(v1)
0043f388  b 0x0043f434
0043f38c  _nop
0043f390  lw v0,0x38(s8)
0043f394  nop
0043f398  lw v0,0x24(v0)
0043f39c  lw v1,0x38(s8)
0043f3a0  nop
0043f3a4  lw a0,0x28(v1)
0043f3a8  lw v1,0x18(s8)
0043f3ac  nop
0043f3b0  sll v1,v1,0x4
0043f3b4  addu v1,a0,v1
0043f3b8  sw v1,0x8(v0)
0043f3bc  lw v0,0x38(s8)
0043f3c0  nop
0043f3c4  lw v1,0x28(v0)
0043f3c8  lw v0,0x18(s8)
0043f3cc  nop
0043f3d0  sll v0,v0,0x4
0043f3d4  addu v0,v1,v0
0043f3d8  lw v1,0x38(s8)
0043f3dc  nop
0043f3e0  lw v1,0x24(v1)
0043f3e4  nop
0043f3e8  sw v1,0xc(v0)
0043f3ec  lw v0,0x38(s8)
0043f3f0  nop
0043f3f4  lw v1,0x28(v0)
0043f3f8  lw v0,0x18(s8)
0043f3fc  nop
0043f400  sll v0,v0,0x4
0043f404  addu v0,v1,v0
0043f408  sw zero,0x8(v0)
0043f40c  lw v0,0x38(s8)
0043f410  nop
0043f414  lw v1,0x28(v0)
0043f418  lw v0,0x18(s8)
0043f41c  nop
0043f420  sll v0,v0,0x4
0043f424  addu v1,v1,v0
0043f428  lw v0,0x38(s8)
0043f42c  nop
0043f430  sw v1,0x24(v0)
0043f434  clear v0
0043f438  move sp,s8
0043f43c  lw ra,0x34(sp)
0043f440  lw s8,0x30(sp)
0043f444  lw s2,0x2c(sp)
0043f448  lw s1,0x28(sp)
0043f44c  lw s0,0x24(sp)
0043f450  addiu sp,sp,0x38
0043f454  jr ra
0043f458  _nop
