# FUN_0042e390 @ 0042e390
0042e390  addiu sp,sp,-0x28
0042e394  sw ra,0x24(sp)
0042e398  sw s1,0x20(sp)
0042e39c  sw s0,0x1c(sp)
0042e3a0  lui gp,0x62
0042e3a4  addiu gp,gp,-0x5cf0
0042e3a8  sw gp,0x10(sp)
0042e3ac  lw t9,-0x63ec(gp)
0042e3b0  lui a0,0x61
0042e3b4  jalr t9
0042e3b8  _addiu a0,a0,0x5670
0042e3bc  lui v0,0x61
0042e3c0  lw v1,0x5688(v0)
0042e3c4  addiu v0,v0,0x5688
0042e3c8  lw gp,0x10(sp)
0042e3cc  beq v1,v0,0x0042e420
0042e3d0  _lui s1,0x61
0042e3d4  lw v0,0x28(v0)
0042e3d8  nop
0042e3dc  lw s0,0x0(v0)
0042e3e0  b 0x0042e414
0042e3e4  _addiu s1,s1,0x56b0
0042e3e8  lw v1,0x4(v0)
0042e3ec  lw a1,0x0(v0)
0042e3f0  nop
0042e3f4  sw v1,0x4(a1)
0042e3f8  sw a1,0x0(v1)
0042e3fc  sw v0,0x0(v0)
0042e400  jalr t9
0042e404  _sw v0,0x4(v0)
0042e408  move v0,s0
0042e40c  lw gp,0x10(sp)
0042e410  lw s0,0x0(s0)
0042e414  lw t9,-0x7aa4(gp)
0042e418  bne v0,s1,0x0042e3e8
0042e41c  _addiu a0,v0,-0x28
0042e420  lw t9,-0x77f4(gp)
0042e424  lui s0,0x61
0042e428  jalr t9
0042e42c  _addiu a0,s0,0x5670
0042e430  lw gp,0x10(sp)
0042e434  nop
0042e438  lw t9,-0x6828(gp)
0042e43c  nop
0042e440  jalr t9
0042e444  _addiu a0,s0,0x5670
0042e448  lw ra,0x24(sp)
0042e44c  lw s1,0x20(sp)
0042e450  lw s0,0x1c(sp)
0042e454  clear v0
0042e458  jr ra
0042e45c  _addiu sp,sp,0x28
