# pthread_list_remove_byID @ 0042e0f4
0042e0f4  addiu sp,sp,-0x20
0042e0f8  sw ra,0x1c(sp)
0042e0fc  sw s0,0x18(sp)
0042e100  lui gp,0x62
0042e104  addiu gp,gp,-0x5cf0
0042e108  sw gp,0x10(sp)
0042e10c  lw t9,-0x63ec(gp)
0042e110  move s0,a0
0042e114  lui a0,0x61
0042e118  jalr t9
0042e11c  _addiu a0,a0,0x5670
0042e120  lui v0,0x61
0042e124  lw v1,0x5688(v0)
0042e128  addiu v0,v0,0x5688
0042e12c  lw gp,0x10(sp)
0042e130  beq v1,v0,0x0042e19c
0042e134  _lui a1,0x61
0042e138  lw v0,0x28(v0)
0042e13c  nop
0042e140  lw v1,0x0(v0)
0042e144  b 0x0042e194
0042e148  _addiu a1,a1,0x56b0
0042e14c  lw a2,-0x28(v0)
0042e150  nop
0042e154  bne a2,s0,0x0042e18c
0042e158  _addiu a0,v0,-0x28
0042e15c  lw v1,0x4(v0)
0042e160  lw a1,0x0(v0)
0042e164  lw t9,-0x7aa4(gp)
0042e168  clear s0
0042e16c  sw v1,0x4(a1)
0042e170  sw a1,0x0(v1)
0042e174  sw v0,0x4(v0)
0042e178  jalr t9
0042e17c  _sw v0,0x0(v0)
0042e180  lw gp,0x10(sp)
0042e184  b 0x0042e1a0
0042e188  _nop
0042e18c  move v0,v1
0042e190  lw v1,0x0(v1)
0042e194  bne v0,a1,0x0042e14c
0042e198  _nop
0042e19c  li s0,-0x1
0042e1a0  lw t9,-0x77f4(gp)
0042e1a4  lui a0,0x61
0042e1a8  jalr t9
0042e1ac  _addiu a0,a0,0x5670
0042e1b0  move v0,s0
0042e1b4  lw ra,0x1c(sp)
0042e1b8  lw s0,0x18(sp)
0042e1bc  jr ra
0042e1c0  _addiu sp,sp,0x20
