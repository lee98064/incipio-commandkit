# FUN_80406a30 @ 80406a30
80406a30  beq a2,zero,0x80406a4c
80406a34  _move v0,a0
80406a38  move v1,a0
80406a3c  sb a1,0x0(v1)
80406a40  addiu a2,a2,-0x1
80406a44  bne a2,zero,0x80406a3c
80406a48  _addiu v1,v1,0x1
80406a4c  jr ra
80406a50  _nop
