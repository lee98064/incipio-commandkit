# FUN_00435bbc @ 00435bbc
00435bbc  lui gp,0x1e
00435bc0  addiu gp,gp,0x38c4
00435bc4  addu gp,gp,t9
00435bc8  addiu sp,sp,-0x20
00435bcc  sw ra,0x1c(sp)
00435bd0  sw s8,0x18(sp)
00435bd4  move s8,sp
00435bd8  sw gp,0x10(sp)
00435bdc  sw a0,0x20(s8)
00435be0  lw v0,0x20(s8)
00435be4  nop
00435be8  lw v0,0x18(v0)
00435bec  nop
00435bf0  move a0,v0
00435bf4  lw v0,-0x58b0(gp)
00435bf8  nop
00435bfc  move t9,v0
00435c00  jalr t9
00435c04  _nop
00435c08  lw gp,0x10(s8)
00435c0c  move sp,s8
00435c10  lw ra,0x1c(sp)
00435c14  lw s8,0x18(sp)
00435c18  addiu sp,sp,0x20
00435c1c  jr ra
00435c20  _nop
