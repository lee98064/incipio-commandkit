# get_ssid_name @ 0040f940
0040f940  lui gp,0x43
0040f944  beq a0,zero,0x0040f960
0040f948  _addiu gp,gp,-0x4c90
0040f94c  lw t9,-0x7d90(gp)
0040f950  lui a1,0x41
0040f954  addiu a1,a1,0x24d0
0040f958  jr t9
0040f95c  _nop
0040f960  jr ra
0040f964  _nop
