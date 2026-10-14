# json_object_get_string @ 00436dfc
00436dfc  lui gp,0x1e
00436e00  addiu gp,gp,0x2684
00436e04  addu gp,gp,t9
00436e08  addiu sp,sp,-0x20
00436e0c  sw ra,0x1c(sp)
00436e10  sw s8,0x18(sp)
00436e14  move s8,sp
00436e18  sw gp,0x10(sp)
00436e1c  sw a0,0x20(s8)
00436e20  lw v0,0x20(s8)
00436e24  nop
00436e28  bne v0,zero,0x00436e3c
00436e2c  _nop
00436e30  clear v0
00436e34  b 0x00436e84
00436e38  _nop
00436e3c  lw v0,0x20(s8)
00436e40  nop
00436e44  lw v1,0x0(v0)
00436e48  li v0,0x6
00436e4c  bne v1,v0,0x00436e68
00436e50  _nop
00436e54  lw v0,0x20(s8)
00436e58  nop
00436e5c  lw v0,0x18(v0)
00436e60  b 0x00436e84
00436e64  _nop
00436e68  lw a0,0x20(s8)
00436e6c  lw v0,-0x7ea0(gp)
00436e70  nop
00436e74  move t9,v0
00436e78  jalr t9
00436e7c  _nop
00436e80  lw gp,0x10(s8)
00436e84  move sp,s8
00436e88  lw ra,0x1c(sp)
00436e8c  lw s8,0x18(sp)
00436e90  addiu sp,sp,0x20
00436e94  jr ra
00436e98  _nop
