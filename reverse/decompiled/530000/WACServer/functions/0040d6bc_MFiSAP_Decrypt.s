# MFiSAP_Decrypt @ 0040d6bc
0040d6bc  lbu v0,0x0(a0)
0040d6c0  lui gp,0x44
0040d6c4  li v1,0x4
0040d6c8  beq v0,v1,0x0040d6e4
0040d6cc  _addiu gp,gp,-0x4fc0
0040d6d0  li v1,0x6
0040d6d4  beq v0,v1,0x0040d6e4
0040d6d8  _li v0,-0x1a35
0040d6dc  jr ra
0040d6e0  _nop
0040d6e4  lw t9,-0x7d50(gp)
0040d6e8  addiu a0,a0,0x24
0040d6ec  jr t9
0040d6f0  _nop
