# http_ver_string @ 0040d310
0040d310  li v0,0x1
0040d314  beq a0,v0,0x0040d334
0040d318  _lui v0,0x45
0040d31c  li v0,0x3
0040d320  beq a0,v0,0x0040d33c
0040d324  _nop
0040d328  lui v0,0x45
0040d32c  jr ra
0040d330  _addiu v0,v0,-0x51b0
0040d334  jr ra
0040d338  _addiu v0,v0,-0x51a4
0040d33c  lui v0,0x45
0040d340  addiu v0,v0,-0x5198
0040d344  jr ra
0040d348  _nop
