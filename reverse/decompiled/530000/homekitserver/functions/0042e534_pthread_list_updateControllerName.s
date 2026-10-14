# pthread_list_updateControllerName @ 0042e534
0042e534  addiu sp,sp,-0x28
0042e538  sw ra,0x24(sp)
0042e53c  sw s0,0x20(sp)
0042e540  lui gp,0x62
0042e544  addiu gp,gp,-0x5cf0
0042e548  sw gp,0x10(sp)
0042e54c  lw t9,-0x63ec(gp)
0042e550  move s0,a0
0042e554  lui a0,0x61
0042e558  sw a1,0x18(sp)
0042e55c  jalr t9
0042e560  _addiu a0,a0,0x5670
0042e564  lui v0,0x61
0042e568  lw v1,0x5688(v0)
0042e56c  addiu v0,v0,0x5688
0042e570  lw gp,0x10(sp)
0042e574  lw a1,0x18(sp)
0042e578  beq v1,v0,0x0042e5d0
0042e57c  _lui v1,0x61
0042e580  lw a0,0x28(v0)
0042e584  nop
0042e588  lw v0,0x0(a0)
0042e58c  b 0x0042e5c8
0042e590  _addiu v1,v1,0x56b0
0042e594  lw a2,-0x28(a0)
0042e598  nop
0042e59c  bne a2,s0,0x0042e5c0
0042e5a0  _addiu a0,a0,-0x24
0042e5a4  lw t9,-0x5c9c(gp)
0042e5a8  nop
0042e5ac  jalr t9
0042e5b0  _li a2,0x24
0042e5b4  lw gp,0x10(sp)
0042e5b8  b 0x0042e5d4
0042e5bc  _clear s0
0042e5c0  move a0,v0
0042e5c4  lw v0,0x0(v0)
0042e5c8  bne a0,v1,0x0042e594
0042e5cc  _nop
0042e5d0  li s0,-0x1
0042e5d4  lw t9,-0x77f4(gp)
0042e5d8  lui a0,0x61
0042e5dc  jalr t9
0042e5e0  _addiu a0,a0,0x5670
0042e5e4  move v0,s0
0042e5e8  lw ra,0x24(sp)
0042e5ec  lw s0,0x20(sp)
0042e5f0  jr ra
0042e5f4  _addiu sp,sp,0x28
