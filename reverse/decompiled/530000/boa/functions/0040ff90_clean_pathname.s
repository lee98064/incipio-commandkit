# clean_pathname @ 0040ff90
0040ff90  move v0,a0
0040ff94  li v1,0x2f
0040ff98  b 0x00410008
0040ff9c  _li a2,0x2e
0040ffa0  bne a1,v1,0x00410000
0040ffa4  _addiu a0,a0,0x1
0040ffa8  lb a3,0x0(a0)
0040ffac  nop
0040ffb0  bne a3,v1,0x0040ffc0
0040ffb4  _nop
0040ffb8  b 0x0040ffa8
0040ffbc  _addiu a0,a0,0x1
0040ffc0  bne a3,a2,0x00410000
0040ffc4  _nop
0040ffc8  lb a3,0x1(a0)
0040ffcc  nop
0040ffd0  bne a3,v1,0x0040ffe0
0040ffd4  _nop
0040ffd8  b 0x0040ffa8
0040ffdc  _addiu a0,a0,0x2
0040ffe0  bne a3,a2,0x00410000
0040ffe4  _nop
0040ffe8  lb a3,0x2(a0)
0040ffec  nop
0040fff0  bne a3,v1,0x00410000
0040fff4  _nop
0040fff8  b 0x0040ffa8
0040fffc  _addiu a0,a0,0x3
00410000  sb a1,0x0(v0)
00410004  addiu v0,v0,0x1
00410008  lb a1,0x0(a0)
0041000c  nop
00410010  bne a1,zero,0x0040ffa0
00410014  _nop
00410018  jr ra
0041001c  _sb zero,0x0(v0)
