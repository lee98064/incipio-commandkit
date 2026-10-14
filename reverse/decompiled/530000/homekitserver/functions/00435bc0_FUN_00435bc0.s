# FUN_00435bc0 @ 00435bc0
00435bc0  lui gp,0x1e
00435bc4  addiu gp,gp,0x4750
00435bc8  addu gp,gp,t9
00435bcc  addiu sp,sp,-0x28
00435bd0  sw ra,0x24(sp)
00435bd4  sw s8,0x20(sp)
00435bd8  move s8,sp
00435bdc  sw gp,0x10(sp)
00435be0  sw a0,0x28(s8)
00435be4  li a0,0x28
00435be8  li a1,0x1
00435bec  lw v0,-0x5a50(gp)
00435bf0  nop
00435bf4  move t9,v0
00435bf8  jalr t9
00435bfc  _nop
00435c00  lw gp,0x10(s8)
00435c04  sw v0,0x18(s8)
00435c08  lw v0,0x18(s8)
00435c0c  nop
00435c10  bne v0,zero,0x00435c24
00435c14  _nop
00435c18  clear v0
00435c1c  b 0x00435c58
00435c20  _nop
00435c24  lw v0,0x18(s8)
00435c28  lw v1,0x28(s8)
00435c2c  nop
00435c30  sw v1,0x0(v0)
00435c34  lw v0,0x18(s8)
00435c38  li v1,0x1
00435c3c  sw v1,0xc(v0)
00435c40  lw v0,0x18(s8)
00435c44  lw v1,-0x7fcc(gp)
00435c48  nop
00435c4c  addiu v1,v1,0x5b3c
00435c50  sw v1,0x4(v0)
00435c54  lw v0,0x18(s8)
00435c58  move sp,s8
00435c5c  lw ra,0x24(sp)
00435c60  lw s8,0x20(sp)
00435c64  addiu sp,sp,0x28
00435c68  jr ra
00435c6c  _nop
