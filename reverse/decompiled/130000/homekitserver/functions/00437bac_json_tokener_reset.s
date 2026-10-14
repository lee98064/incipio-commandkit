# json_tokener_reset @ 00437bac
00437bac  lui gp,0x1e
00437bb0  addiu gp,gp,0x18d4
00437bb4  addu gp,gp,t9
00437bb8  addiu sp,sp,-0x28
00437bbc  sw ra,0x24(sp)
00437bc0  sw s8,0x20(sp)
00437bc4  move s8,sp
00437bc8  sw gp,0x10(sp)
00437bcc  sw a0,0x28(s8)
00437bd0  lw v0,0x28(s8)
00437bd4  nop
00437bd8  beq v0,zero,0x00437c60
00437bdc  _nop
00437be0  lw v0,0x28(s8)
00437be4  nop
00437be8  lw v0,0xc(v0)
00437bec  nop
00437bf0  sw v0,0x18(s8)
00437bf4  b 0x00437c30
00437bf8  _nop
00437bfc  lw a0,0x28(s8)
00437c00  lw a1,0x18(s8)
00437c04  lw v0,-0x7fcc(gp)
00437c08  nop
00437c0c  addiu v0,v0,0x7a38
00437c10  move t9,v0
00437c14  jalr t9
00437c18  _nop
00437c1c  lw gp,0x10(s8)
00437c20  lw v0,0x18(s8)
00437c24  nop
00437c28  addiu v0,v0,-0x1
00437c2c  sw v0,0x18(s8)
00437c30  lw v0,0x18(s8)
00437c34  nop
00437c38  bgez v0,0x00437bfc
00437c3c  _nop
00437c40  lw v0,0x28(s8)
00437c44  nop
00437c48  sw zero,0xc(v0)
00437c4c  lw v0,0x28(s8)
00437c50  nop
00437c54  sw zero,0x1c(v0)
00437c58  b 0x00437c64
00437c5c  _nop
00437c60  nop
00437c64  move sp,s8
00437c68  lw ra,0x24(sp)
00437c6c  lw s8,0x20(sp)
00437c70  addiu sp,sp,0x28
00437c74  jr ra
00437c78  _nop
