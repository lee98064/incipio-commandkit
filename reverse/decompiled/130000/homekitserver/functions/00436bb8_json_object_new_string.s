# json_object_new_string @ 00436bb8
00436bb8  lui gp,0x1e
00436bbc  addiu gp,gp,0x28c8
00436bc0  addu gp,gp,t9
00436bc4  addiu sp,sp,-0x28
00436bc8  sw ra,0x24(sp)
00436bcc  sw s8,0x20(sp)
00436bd0  move s8,sp
00436bd4  sw gp,0x10(sp)
00436bd8  sw a0,0x28(s8)
00436bdc  li a0,0x6
00436be0  lw v0,-0x7fcc(gp)
00436be4  nop
00436be8  addiu v0,v0,0x4df0
00436bec  move t9,v0
00436bf0  jalr t9
00436bf4  _nop
00436bf8  lw gp,0x10(s8)
00436bfc  sw v0,0x18(s8)
00436c00  lw v0,0x18(s8)
00436c04  nop
00436c08  bne v0,zero,0x00436c1c
00436c0c  _nop
00436c10  clear v0
00436c14  b 0x00436ca0
00436c18  _nop
00436c1c  lw v0,0x18(s8)
00436c20  lw v1,-0x7fcc(gp)
00436c24  nop
00436c28  addiu v1,v1,0x6b30
00436c2c  sw v1,0x4(v0)
00436c30  lw v0,0x18(s8)
00436c34  lw v1,-0x7fcc(gp)
00436c38  nop
00436c3c  addiu v1,v1,0x6a54
00436c40  sw v1,0x8(v0)
00436c44  lw a0,0x28(s8)
00436c48  lw v0,-0x7c84(gp)
00436c4c  nop
00436c50  move t9,v0
00436c54  jalr t9
00436c58  _nop
00436c5c  lw gp,0x10(s8)
00436c60  move v1,v0
00436c64  lw v0,0x18(s8)
00436c68  nop
00436c6c  sw v1,0x18(v0)
00436c70  lw a0,0x28(s8)
00436c74  lw v0,-0x63cc(gp)
00436c78  nop
00436c7c  move t9,v0
00436c80  jalr t9
00436c84  _nop
00436c88  lw gp,0x10(s8)
00436c8c  move v1,v0
00436c90  lw v0,0x18(s8)
00436c94  nop
00436c98  sw v1,0x1c(v0)
00436c9c  lw v0,0x18(s8)
00436ca0  move sp,s8
00436ca4  lw ra,0x24(sp)
00436ca8  lw s8,0x20(sp)
00436cac  addiu sp,sp,0x28
00436cb0  jr ra
00436cb4  _nop
