# get_wac_name @ 0040f6b8
0040f6b8  lui gp,0x43
0040f6bc  beq a0,zero,0x0040f6d8
0040f6c0  _addiu gp,gp,-0x4f70
0040f6c4  lw t9,-0x7d9c(gp)
0040f6c8  lui a1,0x41
0040f6cc  addiu a1,a1,0x21f0
0040f6d0  jr t9
0040f6d4  _nop
0040f6d8  jr ra
0040f6dc  _nop
