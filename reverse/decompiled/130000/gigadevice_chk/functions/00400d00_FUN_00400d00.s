# FUN_00400d00 @ 00400d00
00400d00  lui gp,0x2
00400d04  addiu gp,gp,-0x7e30
00400d08  addu gp,gp,t9
00400d0c  addiu sp,sp,-0x28
00400d10  sw ra,0x24(sp)
00400d14  sw s1,0x20(sp)
00400d18  sw s0,0x1c(sp)
00400d1c  sw gp,0x10(sp)
00400d20  lw s0,-0x7fe8(gp)
00400d24  li s1,-0x1
00400d28  b 0x00400d38
00400d2c  _addiu s0,s0,0xea4
00400d30  jalr t9
00400d34  _nop
00400d38  lw t9,0x0(s0)
00400d3c  nop
00400d40  bne t9,s1,0x00400d30
00400d44  _addiu s0,s0,-0x4
00400d48  lw ra,0x24(sp)
00400d4c  lw s1,0x20(sp)
00400d50  lw s0,0x1c(sp)
00400d54  jr ra
00400d58  _addiu sp,sp,0x28
