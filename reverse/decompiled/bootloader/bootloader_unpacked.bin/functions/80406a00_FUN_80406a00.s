# FUN_80406a00 @ 80406a00
80406a00  lb v0,0x0(a0)
80406a04  nop
80406a08  beq v0,zero,0x80406a28
80406a0c  _move v0,a0
80406a10  addiu v0,v0,0x1
80406a14  lb v1,0x0(v0)
80406a18  nop
80406a1c  bne v1,zero,0x80406a14
80406a20  _addiu v0,v0,0x1
80406a24  addiu v0,v0,-0x1
80406a28  jr ra
80406a2c  _subu v0,v0,a0
