# FUN_00435df4 @ 00435df4
00435df4  lui gp,0x1e
00435df8  addiu gp,gp,0x368c
00435dfc  addu gp,gp,t9
00435e00  addiu sp,sp,-0x20
00435e04  sw ra,0x1c(sp)
00435e08  sw s8,0x18(sp)
00435e0c  move s8,sp
00435e10  sw gp,0x10(sp)
00435e14  sw a0,0x20(s8)
00435e18  sw a1,0x24(s8)
00435e1c  sw a2,0x28(s8)
00435e20  sw a3,0x2c(s8)
00435e24  lw v0,0x20(s8)
00435e28  nop
00435e2c  lw v0,0x18(v0)
00435e30  nop
00435e34  beq v0,zero,0x00435e6c
00435e38  _nop
00435e3c  lw a0,0x24(s8)
00435e40  lw v0,-0x7fd0(gp)
00435e44  nop
00435e48  addiu a1,v0,-0x25a4
00435e4c  lw v0,-0x6554(gp)
00435e50  nop
00435e54  move t9,v0
00435e58  jalr t9
00435e5c  _nop
00435e60  lw gp,0x10(s8)
00435e64  b 0x00435e94
00435e68  _nop
00435e6c  lw a0,0x24(s8)
00435e70  lw v0,-0x7fd0(gp)
00435e74  nop
00435e78  addiu a1,v0,-0x259c
00435e7c  lw v0,-0x6554(gp)
00435e80  nop
00435e84  move t9,v0
00435e88  jalr t9
00435e8c  _nop
00435e90  lw gp,0x10(s8)
00435e94  move sp,s8
00435e98  lw ra,0x1c(sp)
00435e9c  lw s8,0x18(sp)
00435ea0  addiu sp,sp,0x20
00435ea4  jr ra
00435ea8  _nop
