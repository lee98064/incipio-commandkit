# HKGetValueFromGlobalEventTable @ 0042f120
0042f120  lui v0,0x61
0042f124  lw v1,0x56f0(v0)
0042f128  addiu v0,v0,0x56f0
0042f12c  beq v1,v0,0x0042f1bc
0042f130  _nop
0042f134  lw v1,0xc(v0)
0042f138  lui a2,0x61
0042f13c  lw v0,0x0(v1)
0042f140  b 0x0042f1b4
0042f144  _addiu a2,a2,0x56fc
0042f148  lw a3,-0xc(v1)
0042f14c  nop
0042f150  bne a3,a0,0x0042f1ac
0042f154  _addiu v1,v1,-0xc
0042f158  lw a0,0x8(v1)
0042f15c  nop
0042f160  sltiu a2,a0,0x5
0042f164  beq a2,zero,0x0042f1c0
0042f168  _clear v0
0042f16c  lui v0,0x5b
0042f170  addiu v0,v0,-0x2940
0042f174  sll a0,a0,0x2
0042f178  addu a0,v0,a0
0042f17c  lw v0,0x0(a0)
0042f180  nop
0042f184  jr v0
0042f188  _nop
0042f18c  lw v1,0x4(v1)
0042f190  clear v0
0042f194  jr ra
0042f198  _sw v1,0x0(a1)
0042f19c  lw v1,0x4(v1)
0042f1a0  clear v0
0042f1a4  jr ra
0042f1a8  _sw v1,0x0(a1)
0042f1ac  move v1,v0
0042f1b0  lw v0,0x0(v0)
0042f1b4  bne v1,a2,0x0042f148
0042f1b8  _nop
0042f1bc  li v0,-0x1a49
0042f1c0  jr ra
0042f1c4  _nop
