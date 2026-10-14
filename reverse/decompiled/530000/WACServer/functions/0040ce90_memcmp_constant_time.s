# memcmp_constant_time @ 0040ce90
0040ce90  clear v1
0040ce94  b 0x0040ceb4
0040ce98  _clear v0
0040ce9c  lbu t1,0x0(t1)
0040cea0  lbu a3,0x0(t0)
0040cea4  addiu v1,v1,0x1
0040cea8  xor a3,t1,a3
0040ceac  andi a3,a3,0xff
0040ceb0  or v0,v0,a3
0040ceb4  sltu a3,v1,a2
0040ceb8  addu t1,a1,v1
0040cebc  bne a3,zero,0x0040ce9c
0040cec0  _addu t0,a0,v1
0040cec4  jr ra
0040cec8  _nop
