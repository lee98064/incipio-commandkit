# HTTPServerShutdownSocket @ 0040534c
0040534c  lui gp,0x44
00405350  bne a0,zero,0x00405360
00405354  _addiu gp,gp,-0x4fc0
00405358  jr ra
0040535c  _li v0,-0x1a31
00405360  lw a0,0x10(a0)
00405364  lw t9,-0x7fa8(gp)
00405368  nop
0040536c  jr t9
00405370  _nop
