# one_time_init @ 00402e40
00402e40  addiu sp,sp,-0x68
00402e44  sw ra,0x64(sp)
00402e48  sw s8,0x60(sp)
00402e4c  sw s1,0x5c(sp)
00402e50  sw s0,0x58(sp)
00402e54  move s8,sp
00402e58  lui gp,0x42
00402e5c  addiu gp,gp,-0x21a0
00402e60  sw gp,0x10(sp)
00402e64  sw zero,0x18(s8)
00402e68  lui v0,0x40
00402e6c  addiu a0,v0,0x5800
00402e70  lw v0,-0x7f58(gp)
00402e74  nop
00402e78  move t9,v0
00402e7c  jalr t9
00402e80  _nop
00402e84  lw gp,0x10(s8)
00402e88  lui v0,0x40
00402e8c  addiu v1,v0,0x5834
00402e90  lui v0,0x40
00402e94  addiu v0,v0,0x5840
00402e98  move a0,v1
00402e9c  move a1,v0
00402ea0  lw v0,-0x7f94(gp)
00402ea4  nop
00402ea8  move t9,v0
00402eac  jalr t9
00402eb0  _nop
00402eb4  lw gp,0x10(s8)
00402eb8  sw v0,0x1c(s8)
00402ebc  lw v0,0x1c(s8)
00402ec0  nop
00402ec4  beq v0,zero,0x00402ffc
00402ec8  _nop
00402ecc  addiu v0,s8,0x20
00402ed0  move a0,v0
00402ed4  li a1,0xa
00402ed8  lw a2,0x1c(s8)
00402edc  lw v0,-0x7f44(gp)
00402ee0  nop
00402ee4  move t9,v0
00402ee8  jalr t9
00402eec  _nop
00402ef0  lw gp,0x10(s8)
00402ef4  lb v1,0x20(s8)
00402ef8  li v0,0x4f
00402efc  bne v1,v0,0x00402f14
00402f00  _nop
00402f04  lb v1,0x21(s8)
00402f08  li v0,0x4b
00402f0c  beq v1,v0,0x00402fb8
00402f10  _nop
00402f14  lui v0,0x40
00402f18  addiu a0,v0,0x5844
00402f1c  lw v0,-0x7f58(gp)
00402f20  nop
00402f24  move t9,v0
00402f28  jalr t9
00402f2c  _nop
00402f30  lw gp,0x10(s8)
00402f34  lui v0,0x40
00402f38  addiu a0,v0,0x5868
00402f3c  lw v0,-0x7f58(gp)
00402f40  nop
00402f44  move t9,v0
00402f48  jalr t9
00402f4c  _nop
00402f50  lw gp,0x10(s8)
00402f54  lui v0,0x40
00402f58  addiu a0,v0,0x5890
00402f5c  lw v0,-0x7f58(gp)
00402f60  nop
00402f64  move t9,v0
00402f68  jalr t9
00402f6c  _nop
00402f70  lw gp,0x10(s8)
00402f74  lui v0,0x40
00402f78  addiu v1,v0,0x58b0
00402f7c  lw v0,-0x7fb0(gp)
00402f80  nop
00402f84  lw v0,0x0(v0)
00402f88  move a0,v1
00402f8c  li a1,0x1
00402f90  li a2,0x11
00402f94  move a3,v0
00402f98  lw v0,-0x7fb8(gp)
00402f9c  nop
00402fa0  move t9,v0
00402fa4  jalr t9
00402fa8  _nop
00402fac  lw gp,0x10(s8)
00402fb0  b 0x00402fd8
00402fb4  _nop
00402fb8  lui v0,0x40
00402fbc  addiu a0,v0,0x58c4
00402fc0  lw v0,-0x7f50(gp)
00402fc4  nop
00402fc8  move t9,v0
00402fcc  jalr t9
00402fd0  _nop
00402fd4  lw gp,0x10(s8)
00402fd8  lw a0,0x1c(s8)
00402fdc  lw v0,-0x7fa0(gp)
00402fe0  nop
00402fe4  move t9,v0
00402fe8  jalr t9
00402fec  _nop
00402ff0  lw gp,0x10(s8)
00402ff4  b 0x00403070
00402ff8  _nop
00402ffc  lw v0,-0x7fb0(gp)
00403000  nop
00403004  lw s1,0x0(v0)
00403008  lui v0,0x40
0040300c  addiu s0,v0,0x58d4
00403010  lw v0,-0x7fbc(gp)
00403014  nop
00403018  move t9,v0
0040301c  jalr t9
00403020  _nop
00403024  lw gp,0x10(s8)
00403028  lw v0,0x0(v0)
0040302c  nop
00403030  move a0,v0
00403034  lw v0,-0x7f3c(gp)
00403038  nop
0040303c  move t9,v0
00403040  jalr t9
00403044  _nop
00403048  lw gp,0x10(s8)
0040304c  move a0,s1
00403050  move a1,s0
00403054  move a2,v0
00403058  lw v0,-0x7f78(gp)
0040305c  nop
00403060  move t9,v0
00403064  jalr t9
00403068  _nop
0040306c  lw gp,0x10(s8)
00403070  move sp,s8
00403074  lw ra,0x64(sp)
00403078  lw s8,0x60(sp)
0040307c  lw s1,0x5c(sp)
00403080  lw s0,0x58(sp)
00403084  addiu sp,sp,0x68
00403088  jr ra
0040308c  _nop
