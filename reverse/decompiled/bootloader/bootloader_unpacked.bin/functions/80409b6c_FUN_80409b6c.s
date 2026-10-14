# FUN_80409b6c @ 80409b6c
80409b6c  addiu sp,sp,-0x18
80409b70  sw ra,0x14(sp)
80409b74  lw a0,0x0(a1)
80409b78  clear a1
80409b7c  jal 0x80406c50
80409b80  _li a2,0x10
80409b84  lui v1,0x8041
80409b88  sw v0,-0x1a28(v1)
80409b8c  lui a0,0x8041
80409b90  addiu a0,a0,-0x1f54
80409b94  jal 0x804077a4
80409b98  _move a1,v0
80409b9c  lw ra,0x14(sp)
80409ba0  nop
80409ba4  jr ra
80409ba8  _addiu sp,sp,0x18
