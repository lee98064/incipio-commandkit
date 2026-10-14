# HKReadCharacteristicValue @ 00431e04
00431e04  addiu sp,sp,-0x28
00431e08  sw ra,0x24(sp)
00431e0c  sw s2,0x20(sp)
00431e10  sw s1,0x1c(sp)
00431e14  sw s0,0x18(sp)
00431e18  lui gp,0x62
00431e1c  addiu gp,gp,-0x6b80
00431e20  sw gp,0x10(sp)
00431e24  addiu v0,a1,-0x2
00431e28  sltiu v1,v0,0x5
00431e2c  move s0,a1
00431e30  move s1,a2
00431e34  beq v1,zero,0x00431e8c
00431e38  _move s2,a3
00431e3c  lui v1,0x5b
00431e40  sll v0,v0,0x2
00431e44  addiu v1,v1,-0x2be0
00431e48  addu v0,v1,v0
00431e4c  lw v0,0x0(v0)
00431e50  nop
00431e54  jr v0
00431e58  _nop
00431e5c  b 0x00431ed4
00431e60  _sw a3,0x0(s1)
00431e64  b 0x00431e78
00431e68  _addiu v0,a3,0x40
00431e6c  b 0x00431e78
00431e70  _addiu v0,a3,0x80
00431e74  addiu v0,a3,0x9e
00431e78  b 0x00431ed4
00431e7c  _sw v0,0x0(s1)
00431e80  li v0,0x1
00431e84  b 0x00431ed4
00431e88  _sb v0,0x0(a2)
00431e8c  li v0,0x9
00431e90  beq a1,v0,0x00431ea8
00431e94  _li v0,0xa
00431e98  bne a1,v0,0x00431ed8
00431e9c  _li v0,0xe
00431ea0  b 0x00431eb4
00431ea4  _nop
00431ea8  lw t9,-0x6714(gp)
00431eac  b 0x00431ebc
00431eb0  _nop
00431eb4  lw t9,-0x66ac(gp)
00431eb8  nop
00431ebc  jalr t9
00431ec0  _nop
00431ec4  xori v1,v0,0x1
00431ec8  movn v0,zero,v1
00431ecc  b 0x00431f38
00431ed0  _sw v0,0x0(s1)
00431ed4  li v0,0xe
00431ed8  beq s0,v0,0x00431efc
00431edc  _li v0,0xf
00431ee0  beq s0,v0,0x00431f08
00431ee4  _li v0,0xd
00431ee8  bne s0,v0,0x00431f3c
00431eec  _li v0,0x13
00431ef0  lw t9,-0x7e2c(gp)
00431ef4  b 0x00431f10
00431ef8  _nop
00431efc  lw t9,-0x7960(gp)
00431f00  b 0x00431f10
00431f04  _nop
00431f08  lw t9,-0x7000(gp)
00431f0c  nop
00431f10  jalr t9
00431f14  _nop
00431f18  lw gp,0x10(sp)
00431f1c  nop
00431f20  lw t9,-0x6b68(gp)
00431f24  nop
00431f28  jalr t9
00431f2c  _sw v0,0x0(s1)
00431f30  b 0x00431f90
00431f34  _nop
00431f38  li v0,0x13
00431f3c  beq s0,v0,0x00431f68
00431f40  _li v0,0x14
00431f44  beq s0,v0,0x00431f7c
00431f48  _li v0,0x12
00431f4c  bne s0,v0,0x00431f90
00431f50  _nop
00431f54  lw v0,0x154(s2)
00431f58  nop
00431f5c  lw v0,0x808(v0)
00431f60  b 0x00431f90
00431f64  _sw v0,0x0(s1)
00431f68  lw v0,0x154(s2)
00431f6c  nop
00431f70  lw v0,0x80c(v0)
00431f74  b 0x00431f90
00431f78  _sw v0,0x0(s1)
00431f7c  lw v0,0x154(s2)
00431f80  nop
00431f84  lw v0,0x810(v0)
00431f88  nop
00431f8c  sw v0,0x0(s1)
00431f90  lw ra,0x24(sp)
00431f94  lw s2,0x20(sp)
00431f98  lw s1,0x1c(sp)
00431f9c  lw s0,0x18(sp)
00431fa0  clear v0
00431fa4  jr ra
00431fa8  _addiu sp,sp,0x28
