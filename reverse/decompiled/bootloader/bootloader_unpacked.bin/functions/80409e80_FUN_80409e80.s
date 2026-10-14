# FUN_80409e80 @ 80409e80
80409e80  addiu sp,sp,-0x30
80409e84  sw ra,0x2c(sp)
80409e88  sw s3,0x28(sp)
80409e8c  sw s2,0x24(sp)
80409e90  sw s1,0x20(sp)
80409e94  sw s0,0x1c(sp)
80409e98  bgtz a0,0x80409eb4
80409e9c  _move s1,a1
80409ea0  lui a0,0x8041
80409ea4  jal 0x804077a4
80409ea8  _addiu a0,a0,-0x1f10
80409eac  j 0x80409f88
80409eb0  _nop
80409eb4  lw a0,0x0(a1)
80409eb8  nop
80409ebc  beq a0,zero,0x80409ee4
80409ec0  _nop
80409ec4  clear a1
80409ec8  jal 0x80406c50
80409ecc  _li a2,0x10
80409ed0  bltz v0,0x80409ef8
80409ed4  _move s0,v0
80409ed8  lui v0,0x8000
80409edc  j 0x80409ef8
80409ee0  _or s0,s0,v0
80409ee4  lui a0,0x8041
80409ee8  jal 0x804077a4
80409eec  _addiu a0,a0,-0x1f10
80409ef0  j 0x80409f88
80409ef4  _nop
80409ef8  lw a0,0x4(s1)
80409efc  nop
80409f00  bne a0,zero,0x80409f10
80409f04  _clear a1
80409f08  j 0x80409f1c
80409f0c  _li s2,0x1
80409f10  jal 0x80406c50
80409f14  _li a2,0xa
80409f18  move s2,v0
80409f1c  andi v0,s0,0x3
80409f20  beq v0,zero,0x80409f3c
80409f24  _nop
80409f28  addiu s0,s0,0x1
80409f2c  andi v0,s0,0x3
80409f30  bne v0,zero,0x80409f2c
80409f34  _addiu s0,s0,0x1
80409f38  addiu s0,s0,-0x1
80409f3c  beq s2,zero,0x80409f88
80409f40  _clear s1
80409f44  lui s3,0x8041
80409f48  addiu s3,s3,-0x1ef4
80409f4c  lw a2,0x0(s0)
80409f50  lw a3,0x4(s0)
80409f54  lw v0,0x8(s0)
80409f58  nop
80409f5c  sw v0,0x10(sp)
80409f60  lw v0,0xc(s0)
80409f64  nop
80409f68  sw v0,0x14(sp)
80409f6c  move a0,s3
80409f70  jal 0x804077a4
80409f74  _move a1,s0
80409f78  addiu s1,s1,0x4
80409f7c  sltu v0,s1,s2
80409f80  bne v0,zero,0x80409f4c
80409f84  _addiu s0,s0,0x10
80409f88  lw ra,0x2c(sp)
80409f8c  lw s3,0x28(sp)
80409f90  lw s2,0x24(sp)
80409f94  lw s1,0x20(sp)
80409f98  lw s0,0x1c(sp)
80409f9c  jr ra
80409fa0  _addiu sp,sp,0x30
