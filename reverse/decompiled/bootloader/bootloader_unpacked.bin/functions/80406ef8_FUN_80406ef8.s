# FUN_80406ef8 @ 80406ef8
80406ef8  addiu sp,sp,-0x20
80406efc  sw ra,0x1c(sp)
80406f00  sw s1,0x18(sp)
80406f04  sw s0,0x14(sp)
80406f08  move s1,a0
80406f0c  lui s0,0x8041
80406f10  addiu s0,s0,-0x2b0
80406f14  move a0,s0
80406f18  clear a1
80406f1c  jal 0x80406a30
80406f20  _li a2,0x50
80406f24  lui a0,0x8041
80406f28  addiu a0,a0,-0x260
80406f2c  j 0x80406fac
80406f30  _li v1,0x20
80406f34  sw s1,0x0(s0)
80406f38  lb v0,0x0(s1)
80406f3c  nop
80406f40  beq v0,v1,0x80406f70
80406f44  _nop
80406f48  beq v0,zero,0x80406f70
80406f4c  _nop
80406f50  addiu s1,s1,0x1
80406f54  lb v0,0x0(s1)
80406f58  nop
80406f5c  beq v0,v1,0x80406f70
80406f60  _nop
80406f64  bne v0,zero,0x80406f54
80406f68  _addiu s1,s1,0x1
80406f6c  addiu s1,s1,-0x1
80406f70  sb zero,0x0(s1)
80406f74  addiu s1,s1,0x1
80406f78  lb v0,0x0(s1)
80406f7c  nop
80406f80  bne v0,v1,0x80406fa0
80406f84  _nop
80406f88  addiu s1,s1,0x1
80406f8c  lb v0,0x0(s1)
80406f90  nop
80406f94  beq v0,v1,0x80406f8c
80406f98  _addiu s1,s1,0x1
80406f9c  addiu s1,s1,-0x1
80406fa0  addiu s0,s0,0x4
80406fa4  beq s0,a0,0x80406fbc
80406fa8  _lui v0,0x8041
80406fac  lb v0,0x0(s1)
80406fb0  nop
80406fb4  bne v0,zero,0x80406f34
80406fb8  _lui v0,0x8041
80406fbc  addiu v0,v0,-0x2b0
80406fc0  lw ra,0x1c(sp)
80406fc4  lw s1,0x18(sp)
80406fc8  lw s0,0x14(sp)
80406fcc  jr ra
80406fd0  _addiu sp,sp,0x20
