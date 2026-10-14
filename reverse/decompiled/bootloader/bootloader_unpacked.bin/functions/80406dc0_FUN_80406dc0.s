# FUN_80406dc0 @ 80406dc0
80406dc0  lb a1,0x0(a0)
80406dc4  nop
80406dc8  beq a1,zero,0x80406e04
80406dcc  _move v0,a0
80406dd0  move v1,a0
80406dd4  andi a1,a1,0xff
80406dd8  addiu a2,a1,-0x61
80406ddc  andi a2,a2,0xff
80406de0  sltiu a2,a2,0x1a
80406de4  beq a2,zero,0x80406df0
80406de8  _addiu a1,a1,-0x20
80406dec  sb a1,0x0(v1)
80406df0  addiu v1,v1,0x1
80406df4  lb a1,0x0(v1)
80406df8  nop
80406dfc  bne a1,zero,0x80406dd8
80406e00  _andi a1,a1,0xff
80406e04  jr ra
80406e08  _nop
