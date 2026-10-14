# FUN_80406a54 @ 80406a54
80406a54  beq a2,zero,0x80406a78
80406a58  _move v0,a0
80406a5c  clear v1
80406a60  addu a0,v0,v1
80406a64  addu a3,a1,v1
80406a68  lbu a3,0x0(a3)
80406a6c  addiu v1,v1,0x1
80406a70  bne v1,a2,0x80406a60
80406a74  _sb a3,0x0(a0)
80406a78  jr ra
80406a7c  _nop
