# get_wac_name @ 0040f968
0040f968  lui gp,0x43
0040f96c  beq a0,zero,0x0040f988
0040f970  _addiu gp,gp,-0x4c90
0040f974  lw t9,-0x7d90(gp)
0040f978  lui a1,0x41
0040f97c  addiu a1,a1,0x24d0
0040f980  jr t9
0040f984  _nop
0040f988  jr ra
0040f98c  _nop
