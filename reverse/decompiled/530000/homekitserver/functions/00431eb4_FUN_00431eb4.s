# FUN_00431eb4 @ 00431eb4
00431eb4  addiu sp,sp,-0x58
00431eb8  sw ra,0x54(sp)
00431ebc  sw s8,0x50(sp)
00431ec0  sw s7,0x4c(sp)
00431ec4  sw s6,0x48(sp)
00431ec8  sw s5,0x44(sp)
00431ecc  sw s4,0x40(sp)
00431ed0  sw s3,0x3c(sp)
00431ed4  sw s2,0x38(sp)
00431ed8  sw s1,0x34(sp)
00431edc  sw s0,0x30(sp)
00431ee0  lui gp,0x62
00431ee4  addiu gp,gp,-0x5cf0
00431ee8  sw gp,0x10(sp)
00431eec  lw t9,-0x7e20(gp)
00431ef0  clear a0
00431ef4  jalr t9
00431ef8  _clear a1
00431efc  lw gp,0x10(sp)
00431f00  li a0,0x1
00431f04  clear a1
00431f08  lw t9,-0x58f4(gp)
00431f0c  lui s8,0x2fa
00431f10  jalr t9
00431f14  _lui s7,0x61
00431f18  lw gp,0x10(sp)
00431f1c  lui a1,0x43
00431f20  addiu a1,a1,0x2084
00431f24  lw t9,-0x6084(gp)
00431f28  addiu a0,sp,0x20
00431f2c  jalr t9
00431f30  _clear a2
00431f34  lw gp,0x10(sp)
00431f38  lui s1,0x61
00431f3c  lui s6,0x61
00431f40  ori s8,s8,0xf07f
00431f44  addiu s7,s7,0x5e8c
00431f48  addiu s1,s1,0x5e60
00431f4c  addiu s6,s6,0x5e9c
00431f50  addiu s2,sp,0x18
00431f54  li s5,-0x1
00431f58  li s4,0x4
00431f5c  lui s0,0x61
00431f60  li s3,0x91
00431f64  lw t9,-0x5b70(gp)
00431f68  clear a0
00431f6c  jalr t9
00431f70  _move a1,s2
00431f74  lw v0,0x1c(sp)
00431f78  lw gp,0x10(sp)
00431f7c  addu v0,v0,s8
00431f80  sw v0,0x1c(sp)
00431f84  lw t9,-0x6a10(gp)
00431f88  move a0,s7
00431f8c  jalr t9
00431f90  _move a1,s2
00431f94  lw gp,0x10(sp)
00431f98  nop
00431f9c  lw t9,-0x5aec(gp)
00431fa0  bne v0,s5,0x00431fc8
00431fa4  _nop
00431fa8  jalr t9
00431fac  _nop
00431fb0  lw v0,0x0(v0)
00431fb4  lw gp,0x10(sp)
00431fb8  bne v0,s4,0x00432074
00431fbc  _nop
00431fc0  b 0x00431f84
00431fc4  _nop
00431fc8  lw t9,0x4(s1)
00431fcc  nop
00431fd0  bne t9,zero,0x00432024
00431fd4  _nop
00431fd8  b 0x00432034
00431fdc  _nop
00431fe0  lw t9,0x8(s1)
00431fe4  nop
00431fe8  beq t9,zero,0x00432000
00431fec  _nop
00431ff0  lw a0,0x5eac(s0)
00431ff4  jalr t9
00431ff8  _nop
00431ffc  lw gp,0x10(sp)
00432000  lw t9,0x4(s1)
00432004  nop
00432008  beq t9,zero,0x00431f64
0043200c  _nop
00432010  lw a0,0x5eac(s0)
00432014  jalr t9
00432018  _nop
0043201c  b 0x00432068
00432020  _nop
00432024  lw a0,0x5eac(s0)
00432028  jalr t9
0043202c  _nop
00432030  lw gp,0x10(sp)
00432034  lw t9,0x8(s1)
00432038  nop
0043203c  beq t9,zero,0x00432058
00432040  _nop
00432044  lw a0,0x5eac(s0)
00432048  jalr t9
0043204c  _nop
00432050  lw gp,0x10(sp)
00432054  nop
00432058  lw t9,-0x7848(gp)
0043205c  nop
00432060  jalr t9
00432064  _move a0,s6
00432068  lw gp,0x10(sp)
0043206c  b 0x00431f64
00432070  _nop
00432074  bne v0,s3,0x00431f64
00432078  _nop
0043207c  b 0x00431fe0
00432080  _nop
