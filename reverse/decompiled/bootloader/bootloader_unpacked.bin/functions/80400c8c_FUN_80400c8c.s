# FUN_80400c8c @ 80400c8c
80400c8c  addiu sp,sp,-0x18
80400c90  sw ra,0x14(sp)
80400c94  move v0,a0
80400c98  mfc0 a1,Cause
80400c9c  mfc0 a2,EPC
80400ca0  lui a0,0x8041
80400ca4  lw a3,0x94(v0)
80400ca8  jal 0x804079cc
80400cac  _addiu a0,a0,-0x2e3c
80400cb0  lui a0,0x8041
80400cb4  jal 0x804079cc
80400cb8  _addiu a0,a0,-0x2e1c
80400cbc  j 0x80400cbc
80400cc0  _nop
