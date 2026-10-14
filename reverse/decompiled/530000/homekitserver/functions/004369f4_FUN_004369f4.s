# FUN_004369f4 @ 004369f4
004369f4  lui gp,0x1e
004369f8  addiu gp,gp,0x391c
004369fc  addu gp,gp,t9
00436a00  addiu sp,sp,-0x28
00436a04  sw ra,0x24(sp)
00436a08  sw s8,0x20(sp)
00436a0c  move s8,sp
00436a10  sw gp,0x10(sp)
00436a14  sw a0,0x28(s8)
00436a18  sw a1,0x2c(s8)
00436a1c  sw zero,0x18(s8)
00436a20  lw a0,0x28(s8)
00436a24  lw a1,0x2c(s8)
00436a28  addiu v0,s8,0x18
00436a2c  move a2,v0
00436a30  lw v0,-0x7d30(gp)
00436a34  nop
00436a38  move t9,v0
00436a3c  jalr t9
00436a40  _nop
00436a44  lw gp,0x10(s8)
00436a48  lw v0,0x18(s8)
00436a4c  move sp,s8
00436a50  lw ra,0x24(sp)
00436a54  lw s8,0x20(sp)
00436a58  addiu sp,sp,0x28
00436a5c  jr ra
00436a60  _nop
