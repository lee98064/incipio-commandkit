# HomekitSerialOpen @ 00431bc8
00431bc8  lui v0,0x61
00431bcc  lw t9,0x5e60(v0)
00431bd0  nop
00431bd4  bne t9,zero,0x00431be4
00431bd8  _li v0,-0x1
00431bdc  jr ra
00431be0  _nop
00431be4  jr t9
00431be8  _nop
