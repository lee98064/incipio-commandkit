# FUN_00436bc4 @ 00436bc4
00436bc4  lui gp,0x1e
00436bc8  addiu gp,gp,0x374c
00436bcc  addu gp,gp,t9
00436bd0  addiu sp,sp,-0x20
00436bd4  sw ra,0x1c(sp)
00436bd8  sw s8,0x18(sp)
00436bdc  move s8,sp
00436be0  sw gp,0x10(sp)
00436be4  sw a0,0x20(s8)
00436be8  sw a1,0x24(s8)
00436bec  sw a2,0x28(s8)
00436bf0  sw a3,0x2c(s8)
00436bf4  lw v0,0x20(s8)
00436bf8  nop
00436bfc  lw v0,0x18(v0)
00436c00  nop
00436c04  beq v0,zero,0x00436c3c
00436c08  _nop
00436c0c  lw a0,0x24(s8)
00436c10  lw v0,-0x7fd0(gp)
00436c14  nop
00436c18  addiu a1,v0,-0x1704
00436c1c  lw v0,-0x654c(gp)
00436c20  nop
00436c24  move t9,v0
00436c28  jalr t9
00436c2c  _nop
00436c30  lw gp,0x10(s8)
00436c34  b 0x00436c64
00436c38  _nop
00436c3c  lw a0,0x24(s8)
00436c40  lw v0,-0x7fd0(gp)
00436c44  nop
00436c48  addiu a1,v0,-0x16fc
00436c4c  lw v0,-0x654c(gp)
00436c50  nop
00436c54  move t9,v0
00436c58  jalr t9
00436c5c  _nop
00436c60  lw gp,0x10(s8)
00436c64  move sp,s8
00436c68  lw ra,0x1c(sp)
00436c6c  lw s8,0x18(sp)
00436c70  addiu sp,sp,0x20
00436c74  jr ra
00436c78  _nop
