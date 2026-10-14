# ranges_reset @ 0040a2b0
0040a2b0  lui v0,0x47
0040a2b4  lw v1,-0x2050(v0)
0040a2b8  lw v0,0x20(a0)
0040a2bc  b 0x0040a2d4
0040a2c0  _nop
0040a2c4  lw a1,0x8(v0)
0040a2c8  sw v1,0x8(v0)
0040a2cc  move v1,v0
0040a2d0  move v0,a1
0040a2d4  bne v0,zero,0x0040a2c4
0040a2d8  _nop
0040a2dc  lui v0,0x47
0040a2e0  sw v1,-0x2050(v0)
0040a2e4  jr ra
0040a2e8  _sw zero,0x20(a0)
