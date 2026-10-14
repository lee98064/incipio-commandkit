# setInAddr @ 00406f28
00406f28  addiu sp,sp,-0x78
00406f2c  sw ra,0x74(sp)
00406f30  sw s7,0x70(sp)
00406f34  sw s6,0x6c(sp)
00406f38  sw s5,0x68(sp)
00406f3c  sw s4,0x64(sp)
00406f40  sw s3,0x60(sp)
00406f44  sw s2,0x5c(sp)
00406f48  sw s1,0x58(sp)
00406f4c  sw s0,0x54(sp)
00406f50  lui gp,0x43
00406f54  addiu gp,gp,-0x4c90
00406f58  sw gp,0x10(sp)
00406f5c  lw t9,-0x7e28(gp)
00406f60  move s1,a0
00406f64  move s0,a1
00406f68  move s2,a2
00406f6c  li a0,0x2
00406f70  li a1,0x1
00406f74  clear a2
00406f78  lw s7,0x88(sp)
00406f7c  jalr t9
00406f80  _move s6,a3
00406f84  move s3,v0
00406f88  li v1,-0x1
00406f8c  lw gp,0x10(sp)
00406f90  beq s3,v1,0x004071a4
00406f94  _li v0,-0x1
00406f98  lw t9,-0x7d90(gp)
00406f9c  addiu s4,sp,0x30
00406fa0  move a0,s4
00406fa4  jalr t9
00406fa8  _move a1,s1
00406fac  lw gp,0x10(sp)
00406fb0  move a0,s3
00406fb4  ori a1,zero,0x8913
00406fb8  lw t9,-0x7da0(gp)
00406fbc  nop
00406fc0  jalr t9
00406fc4  _move a2,s4
00406fc8  lw gp,0x10(sp)
00406fcc  bgez v0,0x00406fec
00406fd0  _andi s5,s7,0xf
00406fd4  lw t9,-0x7fc4(gp)
00406fd8  nop
00406fdc  jalr t9
00406fe0  _move a0,s3
00406fe4  b 0x004071a4
00406fe8  _li v0,-0x1
00406fec  li v1,0x1
00406ff0  beq s5,v1,0x004071a4
00406ff4  _clear v0
00406ff8  li v0,0x1043
00406ffc  andi s7,s7,0x2
00407000  beq s7,zero,0x00407054
00407004  _sh v0,0x40(sp)
00407008  beq s0,zero,0x00407054
0040700c  _move a0,s0
00407010  lw t9,-0x7ecc(gp)
00407014  nop
00407018  jalr t9
0040701c  _addiu a1,sp,0x18
00407020  lw gp,0x10(sp)
00407024  lw v0,0x18(sp)
00407028  move a2,s4
0040702c  lw t9,-0x7da0(gp)
00407030  sw v0,0x14(s4)
00407034  li v0,0x2
00407038  sh v0,0x40(sp)
0040703c  move a0,s3
00407040  jalr t9
00407044  _ori a1,zero,0x8916
00407048  lw gp,0x10(sp)
0040704c  bltz v0,0x00407178
00407050  _nop
00407054  andi v0,s5,0x4
00407058  beq v0,zero,0x004070f0
0040705c  _nop
00407060  beq s0,zero,0x004070f0
00407064  _nop
00407068  beq s2,zero,0x004070f0
0040706c  _move a0,s2
00407070  lw t9,-0x7ecc(gp)
00407074  nop
00407078  jalr t9
0040707c  _addiu a1,sp,0x1c
00407080  lw gp,0x10(sp)
00407084  lw v0,0x1c(sp)
00407088  addiu s0,sp,0x30
0040708c  lw t9,-0x7da0(gp)
00407090  li s2,0x2
00407094  sw v0,0x14(s0)
00407098  move a0,s3
0040709c  sh s2,0x40(sp)
004070a0  ori a1,zero,0x891c
004070a4  jalr t9
004070a8  _move a2,s0
004070ac  lw gp,0x10(sp)
004070b0  bltz v0,0x00407178
004070b4  _move a2,s0
004070b8  lw v0,0x1c(sp)
004070bc  lw a0,0x18(sp)
004070c0  lw t9,-0x7da0(gp)
004070c4  nor v1,zero,v0
004070c8  and v0,v0,a0
004070cc  or v0,v1,v0
004070d0  sw v0,0x14(s0)
004070d4  sh s2,0x40(sp)
004070d8  move a0,s3
004070dc  jalr t9
004070e0  _ori a1,zero,0x891a
004070e4  lw gp,0x10(sp)
004070e8  bltz v0,0x00407178
004070ec  _nop
004070f0  andi s5,s5,0x8
004070f4  beq s5,zero,0x00407160
004070f8  _nop
004070fc  beq s6,zero,0x00407160
00407100  _move a1,s6
00407104  lw t9,-0x7df4(gp)
00407108  li v0,0x1
0040710c  addiu a0,sp,0x22
00407110  li a2,0x6
00407114  jalr t9
00407118  _sh v0,0x20(sp)
0040711c  lw gp,0x10(sp)
00407120  addiu a1,sp,0x20
00407124  addiu a0,sp,0x40
00407128  lw t9,-0x7df4(gp)
0040712c  nop
00407130  jalr t9
00407134  _li a2,0x10
00407138  lw gp,0x10(sp)
0040713c  addiu a2,sp,0x30
00407140  move a0,s3
00407144  lw t9,-0x7da0(gp)
00407148  nop
0040714c  jalr t9
00407150  _ori a1,zero,0x8924
00407154  lw gp,0x10(sp)
00407158  bltz v0,0x00407178
0040715c  _nop
00407160  lw t9,-0x7fc4(gp)
00407164  nop
00407168  jalr t9
0040716c  _move a0,s3
00407170  b 0x004071a4
00407174  _clear v0
00407178  lw t9,-0x7fc4(gp)
0040717c  nop
00407180  jalr t9
00407184  _move a0,s3
00407188  lw gp,0x10(sp)
0040718c  nop
00407190  lw t9,-0x7e04(gp)
00407194  nop
00407198  jalr t9
0040719c  _move a0,s1
004071a0  li v0,-0x1
004071a4  lw ra,0x74(sp)
004071a8  lw s7,0x70(sp)
004071ac  lw s6,0x6c(sp)
004071b0  lw s5,0x68(sp)
004071b4  lw s4,0x64(sp)
004071b8  lw s3,0x60(sp)
004071bc  lw s2,0x5c(sp)
004071c0  lw s1,0x58(sp)
004071c4  lw s0,0x54(sp)
004071c8  jr ra
004071cc  _addiu sp,sp,0x78
