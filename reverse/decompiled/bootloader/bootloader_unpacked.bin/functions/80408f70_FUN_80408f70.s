# FUN_80408f70 @ 80408f70
80408f70  addiu sp,sp,-0x20
80408f74  sw ra,0x1c(sp)
80408f78  lui v0,0xb800
80408f7c  ori v0,v0,0xc
80408f80  lw v1,0x0(v0)
80408f84  nop
80408f88  andi v1,v1,0xf
80408f8c  li v0,0xd
80408f90  bne v1,v0,0x80408ff4
80408f94  _lui v0,0x8041
80408f98  addiu v0,v0,-0x22cc
80408f9c  sw v0,0x10(sp)
80408fa0  lui v0,0x8041
80408fa4  addiu v0,v0,-0x2514
80408fa8  sw v0,0x14(sp)
80408fac  clear a0
80408fb0  clear a1
80408fb4  jal 0x80408c7c
80408fb8  _li a2,0x1
80408fbc  li a0,0x2
80408fc0  jal 0x804089c0
80408fc4  _addiu a1,sp,0x10
80408fc8  lui v0,0xb8b1
80408fcc  ori v0,v0,0x18
80408fd0  lw v1,0x0(v0)
80408fd4  lui v0,0x4fff
80408fd8  and v0,v1,v0
80408fdc  lui v1,0xb000
80408fe0  or v0,v0,v1
80408fe4  lui v1,0x8041
80408fe8  sw v0,-0x1184(v1)
80408fec  addiu v0,v0,0x44
80408ff0  sw zero,0x0(v0)
80408ff4  lw ra,0x1c(sp)
80408ff8  nop
80408ffc  jr ra
80409000  _addiu sp,sp,0x20
