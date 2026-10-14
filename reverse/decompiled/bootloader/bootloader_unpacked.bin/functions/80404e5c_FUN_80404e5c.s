# FUN_80404e5c @ 80404e5c
80404e5c  andi a0,a0,0xff
80404e60  andi a1,a1,0xff
80404e64  sltu v0,a0,a1
80404e68  beq v0,zero,0x80404e78
80404e6c  _nop
80404e70  j 0x80404e80
80404e74  _subu v0,a1,a0
80404e78  subu a0,a1,a0
80404e7c  addiu v0,a0,0x100
80404e80  jr ra
80404e84  _andi v0,v0,0xff
