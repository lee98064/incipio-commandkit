# FUN_00435c24 @ 00435c24
00435c24  lui gp,0x1e
00435c28  addiu gp,gp,0x385c
00435c2c  addu gp,gp,t9
00435c30  addiu sp,sp,-0x28
00435c34  sw ra,0x24(sp)
00435c38  sw s8,0x20(sp)
00435c3c  move s8,sp
00435c40  sw gp,0x10(sp)
00435c44  sw a0,0x28(s8)
00435c48  sw a1,0x2c(s8)
00435c4c  sw zero,0x18(s8)
00435c50  lw a0,0x28(s8)
00435c54  lw a1,0x2c(s8)
00435c58  addiu v0,s8,0x18
00435c5c  move a2,v0
00435c60  lw v0,-0x7d30(gp)
00435c64  nop
00435c68  move t9,v0
00435c6c  jalr t9
00435c70  _nop
00435c74  lw gp,0x10(s8)
00435c78  lw v0,0x18(s8)
00435c7c  move sp,s8
00435c80  lw ra,0x24(sp)
00435c84  lw s8,0x20(sp)
00435c88  addiu sp,sp,0x28
00435c8c  jr ra
00435c90  _nop
