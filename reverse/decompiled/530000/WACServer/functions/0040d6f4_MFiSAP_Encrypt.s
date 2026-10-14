# MFiSAP_Encrypt @ 0040d6f4
0040d6f4  lbu v0,0x0(a0)
0040d6f8  lui gp,0x44
0040d6fc  li v1,0x4
0040d700  beq v0,v1,0x0040d71c
0040d704  _addiu gp,gp,-0x4fc0
0040d708  li v1,0x6
0040d70c  beq v0,v1,0x0040d71c
0040d710  _li v0,-0x1a35
0040d714  jr ra
0040d718  _nop
0040d71c  lw t9,-0x7d50(gp)
0040d720  addiu a0,a0,0x24
0040d724  jr t9
0040d728  _nop
