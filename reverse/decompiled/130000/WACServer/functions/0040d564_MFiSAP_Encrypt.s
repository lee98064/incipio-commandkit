# MFiSAP_Encrypt @ 0040d564
0040d564  lbu v0,0x0(a0)
0040d568  lui gp,0x44
0040d56c  li v1,0x4
0040d570  beq v0,v1,0x0040d58c
0040d574  _addiu gp,gp,-0x4fc0
0040d578  li v1,0x6
0040d57c  beq v0,v1,0x0040d58c
0040d580  _li v0,-0x1a35
0040d584  jr ra
0040d588  _nop
0040d58c  lw t9,-0x7d50(gp)
0040d590  addiu a0,a0,0x24
0040d594  jr t9
0040d598  _nop
