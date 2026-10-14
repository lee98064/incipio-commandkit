# FUN_00408d80 @ 00408d80
00408d80  lui v0,0x42
00408d84  lw v0,0x3600(v0)
00408d88  lui gp,0x43
00408d8c  addiu v0,v0,-0x3
00408d90  sltiu v0,v0,0x2
00408d94  beq v0,zero,0x00408da8
00408d98  _addiu gp,gp,-0x4be0
00408d9c  lw t9,-0x7f80(gp)
00408da0  b 0x00408dac
00408da4  _nop
00408da8  lw t9,-0x7ea4(gp)
00408dac  nop
00408db0  jr t9
00408db4  _nop
