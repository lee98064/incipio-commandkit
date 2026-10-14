# HTTPHeaderMatchURL @ 00405af4
00405af4  addiu sp,sp,-0x20
00405af8  sw ra,0x1c(sp)
00405afc  lui gp,0x44
00405b00  addiu gp,gp,-0x4fc0
00405b04  sw gp,0x10(sp)
00405b08  move a2,a1
00405b0c  lw t9,-0x7f14(gp)
00405b10  lw a1,0x840(a0)
00405b14  lw a0,0x83c(a0)
00405b18  jalr t9
00405b1c  _nop
00405b20  li v1,-0x1a47
00405b24  lw ra,0x1c(sp)
00405b28  movz v1,zero,v0
00405b2c  move v0,v1
00405b30  jr ra
00405b34  _addiu sp,sp,0x20
