# FUN_80403e2c @ 80403e2c
80403e2c  addiu sp,sp,-0x20
80403e30  sw ra,0x1c(sp)
80403e34  sw s2,0x18(sp)
80403e38  sw s1,0x14(sp)
80403e3c  sw s0,0x10(sp)
80403e40  move v0,a0
80403e44  lui v1,0x8041
80403e48  lw s0,-0x2d0(v1)
80403e4c  nop
80403e50  addiu s0,s0,0x1
80403e54  lui v1,0x8041
80403e58  lw v1,-0x2ec(v1)
80403e5c  nop
80403e60  xor v1,s0,v1
80403e64  movz s0,zero,v1
80403e68  lui v1,0x8041
80403e6c  lw v1,-0x2cc(v1)
80403e70  nop
80403e74  bne s0,v1,0x80403e90
80403e78  _move s1,a1
80403e7c  lui a0,0x8041
80403e80  jal 0x804077a4
80403e84  _addiu a0,a0,-0x2834
80403e88  j 0x80403fcc
80403e8c  _li v0,-0x1
80403e90  lui v1,0x5fff
80403e94  ori v1,v1,0xfffc
80403e98  lui s2,0x8041
80403e9c  addiu s2,s2,0x664
80403ea0  and s2,s2,v1
80403ea4  lui v1,0xa000
80403ea8  or s2,s2,v1
80403eac  move a0,s2
80403eb0  move a1,v0
80403eb4  jal 0x80406a54
80403eb8  _move a2,s1
80403ebc  lui v0,0x8041
80403ec0  lw v1,-0x2d0(v0)
80403ec4  nop
80403ec8  sll v1,v1,0x2
80403ecc  lui v0,0x8041
80403ed0  lw v0,-0x2fc(v0)
80403ed4  nop
80403ed8  addu v0,v0,v1
80403edc  lw v0,0x0(v0)
80403ee0  nop
80403ee4  andi a0,v0,0x1
80403ee8  beq a0,zero,0x80403f00
80403eec  _lui a0,0x8041
80403ef0  jal 0x804077a4
80403ef4  _addiu a0,a0,-0x284c
80403ef8  j 0x80403ef8
80403efc  _nop
80403f00  li a0,-0x4
80403f04  and v0,v0,a0
80403f08  sltiu a0,s1,0x3c
80403f0c  beq a0,zero,0x80403f20
80403f10  _addiu s1,s1,0x4
80403f14  li a0,0x40
80403f18  j 0x80403f24
80403f1c  _sh a0,0x4(v0)
80403f20  sh s1,0x4(v0)
80403f24  lw a0,0x0(v0)
80403f28  lhu a1,0x4(v0)
80403f2c  nop
80403f30  sh a1,0x8(a0)
80403f34  lw a0,0x0(v0)
80403f38  lhu a1,0x4(v0)
80403f3c  nop
80403f40  sh a1,0x14(a0)
80403f44  lw a0,0x0(v0)
80403f48  nop
80403f4c  sw s2,0xc(a0)
80403f50  lw a0,0x0(v0)
80403f54  nop
80403f58  sw s2,0x10(a0)
80403f5c  lw a1,0x14(v0)
80403f60  lui a0,0xfeff
80403f64  ori a0,a0,0xffff
80403f68  and a0,a1,a0
80403f6c  sw a0,0x14(v0)
80403f70  li a0,0x3f
80403f74  sb a0,0xf(v0)
80403f78  lui v0,0x8041
80403f7c  lw v0,-0x2fc(v0)
80403f80  nop
80403f84  addu v0,v0,v1
80403f88  lw v1,0x0(v0)
80403f8c  nop
80403f90  ori v1,v1,0x1
80403f94  sw v1,0x0(v0)
80403f98  lui v0,0xb801
80403f9c  lw a0,0x0(v0)
80403fa0  lui v1,0x80
80403fa4  or v1,a0,v1
80403fa8  sw v1,0x0(v0)
80403fac  lui v0,0x8041
80403fb0  lw v1,-0x2c4(v0)
80403fb4  nop
80403fb8  addiu v1,v1,0x1
80403fbc  sw v1,-0x2c4(v0)
80403fc0  lui v0,0x8041
80403fc4  sw s0,-0x2d0(v0)
80403fc8  clear v0
80403fcc  lw ra,0x1c(sp)
80403fd0  lw s2,0x18(sp)
80403fd4  lw s1,0x14(sp)
80403fd8  lw s0,0x10(sp)
80403fdc  jr ra
80403fe0  _addiu sp,sp,0x20
