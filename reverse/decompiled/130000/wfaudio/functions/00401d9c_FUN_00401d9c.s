# FUN_00401d9c @ 00401d9c
00401d9c  addiu sp,sp,-0x20
00401da0  sw ra,0x1c(sp)
00401da4  lui gp,0x43
00401da8  addiu gp,gp,-0x4f70
00401dac  sw gp,0x10(sp)
00401db0  lw t9,-0x7e20(gp)
00401db4  lui a0,0x41
00401db8  jalr t9
00401dbc  _addiu a0,a0,-0x23c
00401dc0  lw gp,0x10(sp)
00401dc4  lui a0,0x41
00401dc8  lw t9,-0x7e20(gp)
00401dcc  nop
00401dd0  jalr t9
00401dd4  _addiu a0,a0,-0x21c
00401dd8  lw gp,0x10(sp)
00401ddc  lw ra,0x1c(sp)
00401de0  lui a0,0x41
00401de4  lw t9,-0x7e20(gp)
00401de8  addiu a0,a0,-0x1f4
00401dec  jr t9
00401df0  _addiu sp,sp,0x20
