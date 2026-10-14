# HKUpdateEnableToPrivateEventTable @ 0042f1c8
0042f1c8  lw v0,0x0(a0)
0042f1cc  nop
0042f1d0  beq v0,a0,0x0042f210
0042f1d4  _andi a2,a2,0xff
0042f1d8  lw v0,0x14(a0)
0042f1dc  nop
0042f1e0  lw v1,0x0(v0)
0042f1e4  b 0x0042f208
0042f1e8  _addiu a0,a0,0x14
0042f1ec  lw t0,0x4(a3)
0042f1f0  nop
0042f1f4  bne t0,a1,0x0042f204
0042f1f8  _move v0,v1
0042f1fc  b 0x0042f210
0042f200  _sb a2,0x0(a3)
0042f204  lw v1,0x0(v1)
0042f208  bne v0,a0,0x0042f1ec
0042f20c  _addiu a3,v0,-0x14
0042f210  jr ra
0042f214  _clear v0
