# memrlen @ 004065b0
004065b0  addu a0,a0,a1
004065b4  b 0x004065c0
004065b8  _move v0,a1
004065bc  addiu v0,v0,-0x1
004065c0  beq v0,zero,0x004065d8
004065c4  _nop
004065c8  lbu v1,-0x1(a0)
004065cc  nop
004065d0  beq v1,zero,0x004065bc
004065d4  _addiu a0,a0,-0x1
004065d8  jr ra
004065dc  _nop
