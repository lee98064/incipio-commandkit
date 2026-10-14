# FUN_00408e50 @ 00408e50
00408e50  addiu sp,sp,-0x40
00408e54  sw ra,0x3c(sp)
00408e58  sw s4,0x38(sp)
00408e5c  sw s3,0x34(sp)
00408e60  sw s2,0x30(sp)
00408e64  sw s1,0x2c(sp)
00408e68  sw s0,0x28(sp)
00408e6c  lui gp,0x47
00408e70  addiu gp,gp,0x2630
00408e74  sw gp,0x18(sp)
00408e78  move s0,a2
00408e7c  move s3,a0
00408e80  move s2,a1
00408e84  bne a2,zero,0x00408ea4
00408e88  _move s1,a3
00408e8c  lw v0,-0x7e40(gp)
00408e90  lui a0,0x45
00408e94  lw t9,-0x7f4c(gp)
00408e98  lw a1,0x0(v0)
00408e9c  b 0x00408ec4
00408ea0  _addiu a0,a0,-0x5cc4
00408ea4  lb v0,0x0(a2)
00408ea8  nop
00408eac  bne v0,zero,0x00408ed4
00408eb0  _lui a0,0x45
00408eb4  lw v0,-0x7e40(gp)
00408eb8  lw t9,-0x7f4c(gp)
00408ebc  lw a1,0x0(v0)
00408ec0  addiu a0,a0,-0x5c94
00408ec4  jalr t9
00408ec8  _clear s4
00408ecc  b 0x00409098
00408ed0  _move v0,s4
00408ed4  bne a3,zero,0x00408ef0
00408ed8  _lui a0,0x45
00408edc  lw v0,-0x7e40(gp)
00408ee0  lw t9,-0x7f4c(gp)
00408ee4  lw a1,0x0(v0)
00408ee8  b 0x00408ec4
00408eec  _addiu a0,a0,-0x5c60
00408ef0  lb v0,0x0(a3)
00408ef4  nop
00408ef8  bne v0,zero,0x00408f14
00408efc  _lui a0,0x45
00408f00  lw v0,-0x7e40(gp)
00408f04  lw t9,-0x7f4c(gp)
00408f08  lw a1,0x0(v0)
00408f0c  b 0x00408ec4
00408f10  _addiu a0,a0,-0x5c2c
00408f14  lw v0,-0x7a3c(gp)
00408f18  nop
00408f1c  lw v0,0x0(v0)
00408f20  nop
00408f24  andi v0,v0,0x2000
00408f28  beq v0,zero,0x00408f50
00408f2c  _nop
00408f30  lw v0,-0x7e40(gp)
00408f34  lw t9,-0x7c44(gp)
00408f38  lw a0,0x0(v0)
00408f3c  sw a1,0x10(sp)
00408f40  lui a1,0x45
00408f44  jalr t9
00408f48  _addiu a1,a1,-0x5bf4
00408f4c  lw gp,0x18(sp)
00408f50  sll s2,s2,0x2
00408f54  addu s3,s3,s2
00408f58  lw s4,0x0(s3)
00408f5c  nop
00408f60  beq s4,zero,0x00408f9c
00408f64  _nop
00408f68  lw t9,-0x7e0c(gp)
00408f6c  lw a0,0x0(s4)
00408f70  jalr t9
00408f74  _move a1,s0
00408f78  lw gp,0x18(sp)
00408f7c  beq v0,zero,0x00409098
00408f80  _move v0,s4
00408f84  lw v0,0x8(s4)
00408f88  nop
00408f8c  beq v0,zero,0x00408f9c
00408f90  _nop
00408f94  b 0x00408f68
00408f98  _move s4,v0
00408f9c  lw t9,-0x7b1c(gp)
00408fa0  nop
00408fa4  jalr t9
00408fa8  _li a0,0xc
00408fac  lw gp,0x18(sp)
00408fb0  bne v0,zero,0x00408fc0
00408fb4  _move s2,v0
00408fb8  b 0x00409094
00408fbc  _clear s4
00408fc0  lw t9,-0x7d8c(gp)
00408fc4  nop
00408fc8  jalr t9
00408fcc  _move a0,s0
00408fd0  lw gp,0x18(sp)
00408fd4  move a0,s1
00408fd8  lw t9,-0x7d8c(gp)
00408fdc  nop
00408fe0  jalr t9
00408fe4  _sw v0,0x0(s2)
00408fe8  lw a0,0x0(s2)
00408fec  lw gp,0x18(sp)
00408ff0  sw v0,0x4(s2)
00408ff4  beq a0,zero,0x00409004
00408ff8  _sw zero,0x8(s2)
00408ffc  bne v0,zero,0x0040907c
00409000  _nop
00409004  lw t9,-0x7ecc(gp)
00409008  nop
0040900c  jalr t9
00409010  _sw a0,0x20(sp)
00409014  lw a0,0x20(sp)
00409018  lw gp,0x18(sp)
0040901c  lw s1,0x0(v0)
00409020  beq a0,zero,0x0040903c
00409024  _move s0,v0
00409028  lw t9,-0x7fb0(gp)
0040902c  nop
00409030  jalr t9
00409034  _nop
00409038  lw gp,0x18(sp)
0040903c  lw a0,0x4(s2)
00409040  nop
00409044  beq a0,zero,0x00409064
00409048  _nop
0040904c  lw t9,-0x7fb0(gp)
00409050  nop
00409054  jalr t9
00409058  _nop
0040905c  lw gp,0x18(sp)
00409060  nop
00409064  lw t9,-0x7fb0(gp)
00409068  move a0,s2
0040906c  jalr t9
00409070  _clear s4
00409074  b 0x00409094
00409078  _sw s1,0x0(s0)
0040907c  bne s4,zero,0x0040908c
00409080  _nop
00409084  b 0x00409090
00409088  _sw s2,0x0(s3)
0040908c  sw s2,0x8(s4)
00409090  move s4,s2
00409094  move v0,s4
00409098  lw ra,0x3c(sp)
0040909c  lw s4,0x38(sp)
004090a0  lw s3,0x34(sp)
004090a4  lw s2,0x30(sp)
004090a8  lw s1,0x2c(sp)
004090ac  lw s0,0x28(sp)
004090b0  jr ra
004090b4  _addiu sp,sp,0x40
