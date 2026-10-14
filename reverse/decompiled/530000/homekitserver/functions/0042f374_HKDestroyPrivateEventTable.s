# HKDestroyPrivateEventTable @ 0042f374
0042f374  addiu sp,sp,-0x38
0042f378  sw ra,0x34(sp)
0042f37c  sw s6,0x30(sp)
0042f380  sw s5,0x2c(sp)
0042f384  sw s4,0x28(sp)
0042f388  sw s3,0x24(sp)
0042f38c  sw s2,0x20(sp)
0042f390  sw s1,0x1c(sp)
0042f394  sw s0,0x18(sp)
0042f398  lui gp,0x62
0042f39c  addiu gp,gp,-0x5cf0
0042f3a0  sw gp,0x10(sp)
0042f3a4  lw v0,0x0(a0)
0042f3a8  nop
0042f3ac  beq v0,a0,0x0042f448
0042f3b0  _addiu s6,a0,0x14
0042f3b4  lw s0,0x14(a0)
0042f3b8  li s5,0x4
0042f3bc  lw s2,0x0(s0)
0042f3c0  li s4,0x5
0042f3c4  b 0x0042f440
0042f3c8  _li s3,0x3
0042f3cc  lw v0,0xc(s1)
0042f3d0  nop
0042f3d4  beq v0,s5,0x0042f3ec
0042f3d8  _nop
0042f3dc  beq v0,s4,0x0042f3ec
0042f3e0  _nop
0042f3e4  bne v0,s3,0x0042f410
0042f3e8  _nop
0042f3ec  lw a0,0x8(s1)
0042f3f0  nop
0042f3f4  beq a0,zero,0x0042f410
0042f3f8  _nop
0042f3fc  lw t9,-0x7aa4(gp)
0042f400  nop
0042f404  jalr t9
0042f408  _nop
0042f40c  lw gp,0x10(sp)
0042f410  lw v0,0x4(s0)
0042f414  lw v1,0x0(s0)
0042f418  lw t9,-0x7aa4(gp)
0042f41c  move a0,s1
0042f420  sw v0,0x4(v1)
0042f424  sw v1,0x0(v0)
0042f428  sw s0,0x4(s0)
0042f42c  jalr t9
0042f430  _sw s0,0x0(s0)
0042f434  move s0,s2
0042f438  lw gp,0x10(sp)
0042f43c  lw s2,0x0(s2)
0042f440  bne s0,s6,0x0042f3cc
0042f444  _addiu s1,s0,-0x14
0042f448  lw ra,0x34(sp)
0042f44c  lw s6,0x30(sp)
0042f450  lw s5,0x2c(sp)
0042f454  lw s4,0x28(sp)
0042f458  lw s3,0x24(sp)
0042f45c  lw s2,0x20(sp)
0042f460  lw s1,0x1c(sp)
0042f464  lw s0,0x18(sp)
0042f468  clear v0
0042f46c  jr ra
0042f470  _addiu sp,sp,0x38
