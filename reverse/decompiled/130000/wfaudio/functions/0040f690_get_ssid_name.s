# get_ssid_name @ 0040f690
0040f690  lui gp,0x43
0040f694  beq a0,zero,0x0040f6b0
0040f698  _addiu gp,gp,-0x4f70
0040f69c  lw t9,-0x7d9c(gp)
0040f6a0  lui a1,0x41
0040f6a4  addiu a1,a1,0x21f0
0040f6a8  jr t9
0040f6ac  _nop
0040f6b0  jr ra
0040f6b4  _nop
