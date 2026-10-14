# FUN_00411c70 @ 00411c70
00411c70  lb v1,0x0(a1)
00411c74  nop
00411c78  beq v1,zero,0x00411ce8
00411c7c  _move v0,a0
00411c80  b 0x00411cdc
00411c84  _nop
00411c88  lb a0,0x0(v0)
00411c8c  addiu a2,a2,-0x1
00411c90  bne a0,v1,0x00411cd8
00411c94  _addiu t1,v0,0x1
00411c98  move a3,a2
00411c9c  b 0x00411cbc
00411ca0  _clear a0
00411ca4  beq a3,zero,0x00411ce4
00411ca8  _nop
00411cac  lb t2,0x1(t2)
00411cb0  nop
00411cb4  bne t2,t0,0x00411cd8
00411cb8  _addiu a3,a3,-0x1
00411cbc  addu t0,a1,a0
00411cc0  lb t0,0x1(t0)
00411cc4  addu t2,v0,a0
00411cc8  bne t0,zero,0x00411ca4
00411ccc  _addiu a0,a0,0x1
00411cd0  b 0x00411ce8
00411cd4  _nop
00411cd8  move v0,t1
00411cdc  bgtz a2,0x00411c88
00411ce0  _nop
00411ce4  clear v0
00411ce8  jr ra
00411cec  _nop
