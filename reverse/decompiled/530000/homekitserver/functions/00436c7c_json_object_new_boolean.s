# json_object_new_boolean @ 00436c7c
00436c7c  lui gp,0x1e
00436c80  addiu gp,gp,0x3694
00436c84  addu gp,gp,t9
00436c88  addiu sp,sp,-0x28
00436c8c  sw ra,0x24(sp)
00436c90  sw s8,0x20(sp)
00436c94  move s8,sp
00436c98  sw gp,0x10(sp)
00436c9c  sw a0,0x28(s8)
00436ca0  li a0,0x1
00436ca4  lw v0,-0x7fcc(gp)
00436ca8  nop
00436cac  addiu v0,v0,0x5bc0
00436cb0  move t9,v0
00436cb4  jalr t9
00436cb8  _nop
00436cbc  lw gp,0x10(s8)
00436cc0  sw v0,0x18(s8)
00436cc4  lw v0,0x18(s8)
00436cc8  nop
00436ccc  bne v0,zero,0x00436ce0
00436cd0  _nop
00436cd4  clear v0
00436cd8  b 0x00436d08
00436cdc  _nop
00436ce0  lw v0,0x18(s8)
00436ce4  lw v1,-0x7fcc(gp)
00436ce8  nop
00436cec  addiu v1,v1,0x6bc4
00436cf0  sw v1,0x8(v0)
00436cf4  lw v0,0x18(s8)
00436cf8  lw v1,0x28(s8)
00436cfc  nop
00436d00  sw v1,0x18(v0)
00436d04  lw v0,0x18(s8)
00436d08  move sp,s8
00436d0c  lw ra,0x24(sp)
00436d10  lw s8,0x20(sp)
00436d14  addiu sp,sp,0x28
00436d18  jr ra
00436d1c  _nop
