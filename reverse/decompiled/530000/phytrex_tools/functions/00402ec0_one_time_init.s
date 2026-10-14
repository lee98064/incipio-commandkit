# one_time_init @ 00402ec0
00402ec0  addiu sp,sp,-0x68
00402ec4  sw ra,0x64(sp)
00402ec8  sw s8,0x60(sp)
00402ecc  sw s1,0x5c(sp)
00402ed0  sw s0,0x58(sp)
00402ed4  move s8,sp
00402ed8  lui gp,0x42
00402edc  addiu gp,gp,-0x1db0
00402ee0  sw gp,0x10(sp)
00402ee4  sw zero,0x18(s8)
00402ee8  lui v0,0x40
00402eec  addiu a0,v0,0x5ae0
00402ef0  lw v0,-0x7f58(gp)
00402ef4  nop
00402ef8  move t9,v0
00402efc  jalr t9
00402f00  _nop
00402f04  lw gp,0x10(s8)
00402f08  lui v0,0x40
00402f0c  addiu v1,v0,0x5b14
00402f10  lui v0,0x40
00402f14  addiu v0,v0,0x5b20
00402f18  move a0,v1
00402f1c  move a1,v0
00402f20  lw v0,-0x7f94(gp)
00402f24  nop
00402f28  move t9,v0
00402f2c  jalr t9
00402f30  _nop
00402f34  lw gp,0x10(s8)
00402f38  sw v0,0x1c(s8)
00402f3c  lw v0,0x1c(s8)
00402f40  nop
00402f44  beq v0,zero,0x0040309c
00402f48  _nop
00402f4c  addiu v0,s8,0x20
00402f50  move a0,v0
00402f54  li a1,0xa
00402f58  lw a2,0x1c(s8)
00402f5c  lw v0,-0x7f40(gp)
00402f60  nop
00402f64  move t9,v0
00402f68  jalr t9
00402f6c  _nop
00402f70  lw gp,0x10(s8)
00402f74  lb v1,0x20(s8)
00402f78  li v0,0x4f
00402f7c  bne v1,v0,0x00402f94
00402f80  _nop
00402f84  lb v1,0x21(s8)
00402f88  li v0,0x4b
00402f8c  beq v1,v0,0x00403038
00402f90  _nop
00402f94  lui v0,0x40
00402f98  addiu a0,v0,0x5b24
00402f9c  lw v0,-0x7f58(gp)
00402fa0  nop
00402fa4  move t9,v0
00402fa8  jalr t9
00402fac  _nop
00402fb0  lw gp,0x10(s8)
00402fb4  lui v0,0x40
00402fb8  addiu a0,v0,0x5b48
00402fbc  lw v0,-0x7f58(gp)
00402fc0  nop
00402fc4  move t9,v0
00402fc8  jalr t9
00402fcc  _nop
00402fd0  lw gp,0x10(s8)
00402fd4  lui v0,0x40
00402fd8  addiu a0,v0,0x5b70
00402fdc  lw v0,-0x7f58(gp)
00402fe0  nop
00402fe4  move t9,v0
00402fe8  jalr t9
00402fec  _nop
00402ff0  lw gp,0x10(s8)
00402ff4  lui v0,0x40
00402ff8  addiu v1,v0,0x5b90
00402ffc  lw v0,-0x7fb0(gp)
00403000  nop
00403004  lw v0,0x0(v0)
00403008  move a0,v1
0040300c  li a1,0x1
00403010  li a2,0x11
00403014  move a3,v0
00403018  lw v0,-0x7fb8(gp)
0040301c  nop
00403020  move t9,v0
00403024  jalr t9
00403028  _nop
0040302c  lw gp,0x10(s8)
00403030  b 0x00403058
00403034  _nop
00403038  lui v0,0x40
0040303c  addiu a0,v0,0x5ba4
00403040  lw v0,-0x7f50(gp)
00403044  nop
00403048  move t9,v0
0040304c  jalr t9
00403050  _nop
00403054  lw gp,0x10(s8)
00403058  lw a0,0x1c(s8)
0040305c  lw v0,-0x7fa0(gp)
00403060  nop
00403064  move t9,v0
00403068  jalr t9
0040306c  _nop
00403070  lw gp,0x10(s8)
00403074  lui v0,0x40
00403078  addiu a0,v0,0x5bb4
0040307c  lw v0,-0x7f58(gp)
00403080  nop
00403084  move t9,v0
00403088  jalr t9
0040308c  _nop
00403090  lw gp,0x10(s8)
00403094  b 0x00403110
00403098  _nop
0040309c  lw v0,-0x7fb0(gp)
004030a0  nop
004030a4  lw s1,0x0(v0)
004030a8  lui v0,0x40
004030ac  addiu s0,v0,0x5bc4
004030b0  lw v0,-0x7fbc(gp)
004030b4  nop
004030b8  move t9,v0
004030bc  jalr t9
004030c0  _nop
004030c4  lw gp,0x10(s8)
004030c8  lw v0,0x0(v0)
004030cc  nop
004030d0  move a0,v0
004030d4  lw v0,-0x7f38(gp)
004030d8  nop
004030dc  move t9,v0
004030e0  jalr t9
004030e4  _nop
004030e8  lw gp,0x10(s8)
004030ec  move a0,s1
004030f0  move a1,s0
004030f4  move a2,v0
004030f8  lw v0,-0x7f78(gp)
004030fc  nop
00403100  move t9,v0
00403104  jalr t9
00403108  _nop
0040310c  lw gp,0x10(s8)
00403110  move sp,s8
00403114  lw ra,0x64(sp)
00403118  lw s8,0x60(sp)
0040311c  lw s1,0x5c(sp)
00403120  lw s0,0x58(sp)
00403124  addiu sp,sp,0x68
00403128  jr ra
0040312c  _nop
