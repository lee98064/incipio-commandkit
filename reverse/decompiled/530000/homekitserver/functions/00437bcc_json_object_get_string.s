# json_object_get_string @ 00437bcc
00437bcc  lui gp,0x1e
00437bd0  addiu gp,gp,0x2744
00437bd4  addu gp,gp,t9
00437bd8  addiu sp,sp,-0x20
00437bdc  sw ra,0x1c(sp)
00437be0  sw s8,0x18(sp)
00437be4  move s8,sp
00437be8  sw gp,0x10(sp)
00437bec  sw a0,0x20(s8)
00437bf0  lw v0,0x20(s8)
00437bf4  nop
00437bf8  bne v0,zero,0x00437c0c
00437bfc  _nop
00437c00  clear v0
00437c04  b 0x00437c54
00437c08  _nop
00437c0c  lw v0,0x20(s8)
00437c10  nop
00437c14  lw v1,0x0(v0)
00437c18  li v0,0x6
00437c1c  bne v1,v0,0x00437c38
00437c20  _nop
00437c24  lw v0,0x20(s8)
00437c28  nop
00437c2c  lw v0,0x18(v0)
00437c30  b 0x00437c54
00437c34  _nop
00437c38  lw a0,0x20(s8)
00437c3c  lw v0,-0x7e9c(gp)
00437c40  nop
00437c44  move t9,v0
00437c48  jalr t9
00437c4c  _nop
00437c50  lw gp,0x10(s8)
00437c54  move sp,s8
00437c58  lw ra,0x1c(sp)
00437c5c  lw s8,0x18(sp)
00437c60  addiu sp,sp,0x20
00437c64  jr ra
00437c68  _nop
