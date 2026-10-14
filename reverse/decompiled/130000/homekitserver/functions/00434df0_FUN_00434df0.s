# FUN_00434df0 @ 00434df0
00434df0  lui gp,0x1e
00434df4  addiu gp,gp,0x4690
00434df8  addu gp,gp,t9
00434dfc  addiu sp,sp,-0x28
00434e00  sw ra,0x24(sp)
00434e04  sw s8,0x20(sp)
00434e08  move s8,sp
00434e0c  sw gp,0x10(sp)
00434e10  sw a0,0x28(s8)
00434e14  li a0,0x28
00434e18  li a1,0x1
00434e1c  lw v0,-0x5a68(gp)
00434e20  nop
00434e24  move t9,v0
00434e28  jalr t9
00434e2c  _nop
00434e30  lw gp,0x10(s8)
00434e34  sw v0,0x18(s8)
00434e38  lw v0,0x18(s8)
00434e3c  nop
00434e40  bne v0,zero,0x00434e54
00434e44  _nop
00434e48  clear v0
00434e4c  b 0x00434e88
00434e50  _nop
00434e54  lw v0,0x18(s8)
00434e58  lw v1,0x28(s8)
00434e5c  nop
00434e60  sw v1,0x0(v0)
00434e64  lw v0,0x18(s8)
00434e68  li v1,0x1
00434e6c  sw v1,0xc(v0)
00434e70  lw v0,0x18(s8)
00434e74  lw v1,-0x7fcc(gp)
00434e78  nop
00434e7c  addiu v1,v1,0x4d6c
00434e80  sw v1,0x4(v0)
00434e84  lw v0,0x18(s8)
00434e88  move sp,s8
00434e8c  lw ra,0x24(sp)
00434e90  lw s8,0x20(sp)
00434e94  addiu sp,sp,0x28
00434e98  jr ra
00434e9c  _nop
