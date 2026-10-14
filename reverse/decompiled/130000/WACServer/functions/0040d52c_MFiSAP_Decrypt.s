# MFiSAP_Decrypt @ 0040d52c
0040d52c  lbu v0,0x0(a0)
0040d530  lui gp,0x44
0040d534  li v1,0x4
0040d538  beq v0,v1,0x0040d554
0040d53c  _addiu gp,gp,-0x4fc0
0040d540  li v1,0x6
0040d544  beq v0,v1,0x0040d554
0040d548  _li v0,-0x1a35
0040d54c  jr ra
0040d550  _nop
0040d554  lw t9,-0x7d50(gp)
0040d558  addiu a0,a0,0x24
0040d55c  jr t9
0040d560  _nop
