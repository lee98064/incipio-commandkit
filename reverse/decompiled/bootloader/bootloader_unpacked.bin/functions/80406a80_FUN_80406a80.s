# FUN_80406a80 @ 80406a80
80406a80  beq a2,zero,0x80406ae0
80406a84  _clear v0
80406a88  lbu v1,0x0(a0)
80406a8c  lbu v0,0x0(a1)
80406a90  nop
80406a94  subu v0,v1,v0
80406a98  sll v0,v0,0x18
80406a9c  sra v0,v0,0x18
80406aa0  bne v0,zero,0x80406ae0
80406aa4  _clear v1
80406aa8  j 0x80406ad8
80406aac  _addiu a2,a2,-0x1
80406ab0  addu v0,a1,v1
80406ab4  lbu a3,0x1(a3)
80406ab8  lbu v0,0x1(v0)
80406abc  nop
80406ac0  subu v0,a3,v0
80406ac4  sll v0,v0,0x18
80406ac8  sra v0,v0,0x18
80406acc  bne v0,zero,0x80406ae0
80406ad0  _addiu v1,v1,0x1
80406ad4  addiu a2,a2,-0x1
80406ad8  bne a2,zero,0x80406ab0
80406adc  _addu a3,a0,v1
80406ae0  jr ra
80406ae4  _nop
