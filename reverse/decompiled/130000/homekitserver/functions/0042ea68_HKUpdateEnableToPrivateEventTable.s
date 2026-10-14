# HKUpdateEnableToPrivateEventTable @ 0042ea68
0042ea68  lw v0,0x0(a0)
0042ea6c  nop
0042ea70  beq v0,a0,0x0042eab0
0042ea74  _andi a2,a2,0xff
0042ea78  lw v0,0x14(a0)
0042ea7c  nop
0042ea80  lw v1,0x0(v0)
0042ea84  b 0x0042eaa8
0042ea88  _addiu a0,a0,0x14
0042ea8c  lw t0,0x4(a3)
0042ea90  nop
0042ea94  bne t0,a1,0x0042eaa4
0042ea98  _move v0,v1
0042ea9c  b 0x0042eab0
0042eaa0  _sb a2,0x0(a3)
0042eaa4  lw v1,0x0(v1)
0042eaa8  bne v0,a0,0x0042ea8c
0042eaac  _addiu a3,v0,-0x14
0042eab0  jr ra
0042eab4  _clear v0
