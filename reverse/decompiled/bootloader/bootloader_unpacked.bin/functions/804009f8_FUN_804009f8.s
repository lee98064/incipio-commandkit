# FUN_804009f8 @ 804009f8
804009f8  mfc0 v0,Status
804009fc  ori at,v0,0x1
80400a00  xori at,at,0x1
80400a04  mtc0 at,Status
80400a08  nop
80400a0c  nop
80400a10  nop
80400a14  sll a0,a0,0x2
80400a18  lui v1,0x8041
80400a1c  addiu v1,v1,-0x117c
80400a20  addu a0,v1,a0
80400a24  sw a1,0x0(a0)
80400a28  mfc0 at,Status
80400a2c  andi v0,v0,0x1
80400a30  ori at,at,0x1
80400a34  xori at,at,0x1
80400a38  or v0,v0,at
80400a3c  mtc0 v0,Status
80400a40  nop
80400a44  nop
80400a48  nop
80400a4c  jr ra
80400a50  _clear v0
