# FUN_00408db4 @ 00408db4
00408db4  lui v0,0x42
00408db8  lw v0,0x3630(v0)
00408dbc  lui gp,0x43
00408dc0  addiu v0,v0,-0x3
00408dc4  sltiu v0,v0,0x2
00408dc8  beq v0,zero,0x00408ddc
00408dcc  _addiu gp,gp,-0x4bb0
00408dd0  lw t9,-0x7f80(gp)
00408dd4  b 0x00408de0
00408dd8  _nop
00408ddc  lw t9,-0x7ea4(gp)
00408de0  nop
00408de4  jr t9
00408de8  _nop
