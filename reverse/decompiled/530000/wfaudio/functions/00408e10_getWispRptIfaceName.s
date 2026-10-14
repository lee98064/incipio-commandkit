# getWispRptIfaceName @ 00408e10
00408e10  addiu sp,sp,-0x48
00408e14  sw ra,0x44(sp)
00408e18  sw s2,0x40(sp)
00408e1c  sw s1,0x3c(sp)
00408e20  sw s0,0x38(sp)
00408e24  lui gp,0x43
00408e28  addiu gp,gp,-0x4c90
00408e2c  sw gp,0x10(sp)
00408e30  move s2,a1
00408e34  move s0,a0
00408e38  sw zero,0x18(sp)
00408e3c  sw zero,0x1c(sp)
00408e40  sw zero,0x20(sp)
00408e44  sw zero,0x24(sp)
00408e48  sw zero,0x28(sp)
00408e4c  sw zero,0x2c(sp)
00408e50  bne a1,zero,0x00408e64
00408e54  _sw zero,0x30(sp)
00408e58  lw t9,-0x7e24(gp)
00408e5c  b 0x00408e78
00408e60  _li a0,0xfa
00408e64  li v0,0x1
00408e68  bne a1,v0,0x00408fac
00408e6c  _li v0,-0x1
00408e70  lw t9,-0x7e24(gp)
00408e74  li a0,0xfc
00408e78  jalr t9
00408e7c  _addiu a1,sp,0x18
00408e80  lw gp,0x10(sp)
00408e84  li a0,0xc0
00408e88  lw t9,-0x7e24(gp)
00408e8c  nop
00408e90  jalr t9
00408e94  _addiu a1,sp,0x20
00408e98  lw v1,0x20(sp)
00408e9c  li v0,0x2
00408ea0  lw gp,0x10(sp)
00408ea4  bne v1,v0,0x00408fac
00408ea8  _li v0,-0x1
00408eac  lw t9,-0x7ea4(gp)
00408eb0  nop
00408eb4  jalr t9
00408eb8  _addiu s1,sp,0x24
00408ebc  lw gp,0x10(sp)
00408ec0  lui a1,0x41
00408ec4  addiu a1,a1,0x17f0
00408ec8  lw t9,-0x7f24(gp)
00408ecc  move a2,s2
00408ed0  jalr t9
00408ed4  _move a0,s1
00408ed8  lw gp,0x10(sp)
00408edc  nop
00408ee0  lw t9,-0x7df0(gp)
00408ee4  nop
00408ee8  jalr t9
00408eec  _move a0,s1
00408ef0  lw gp,0x10(sp)
00408ef4  li a0,0x3b
00408ef8  lw t9,-0x7e24(gp)
00408efc  nop
00408f00  jalr t9
00408f04  _addiu a1,sp,0x1c
00408f08  lw v0,0x1c(sp)
00408f0c  lw gp,0x10(sp)
00408f10  beq v0,zero,0x00408f20
00408f14  _li v1,0x3
00408f18  bne v0,v1,0x00408f68
00408f1c  _nop
00408f20  lw v0,0x18(sp)
00408f24  nop
00408f28  beq v0,zero,0x00408f68
00408f2c  _lui s1,0x41
00408f30  lw t9,-0x7e78(gp)
00408f34  move a0,s0
00408f38  jalr t9
00408f3c  _addiu a1,s1,0x17f8
00408f40  lw gp,0x10(sp)
00408f44  bne v0,zero,0x00408f98
00408f48  _move a0,s0
00408f4c  lw t9,-0x7e68(gp)
00408f50  nop
00408f54  jalr t9
00408f58  _addiu a1,s1,0x17f8
00408f5c  lw gp,0x10(sp)
00408f60  b 0x00408f98
00408f64  _nop
00408f68  lw t9,-0x7e78(gp)
00408f6c  lui a1,0x41
00408f70  move a0,s0
00408f74  jalr t9
00408f78  _addiu a1,a1,0x17f8
00408f7c  lw gp,0x10(sp)
00408f80  beq v0,zero,0x00408f98
00408f84  _nop
00408f88  sb zero,0x3(v0)
00408f8c  sb zero,0x0(v0)
00408f90  sb zero,0x1(v0)
00408f94  sb zero,0x2(v0)
00408f98  lw t9,-0x7e5c(gp)
00408f9c  nop
00408fa0  jalr t9
00408fa4  _nop
00408fa8  clear v0
00408fac  lw ra,0x44(sp)
00408fb0  lw s2,0x40(sp)
00408fb4  lw s1,0x3c(sp)
00408fb8  lw s0,0x38(sp)
00408fbc  jr ra
00408fc0  _addiu sp,sp,0x48
