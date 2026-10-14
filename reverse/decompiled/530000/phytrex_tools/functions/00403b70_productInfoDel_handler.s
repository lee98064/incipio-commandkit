# productInfoDel_handler @ 00403b70
00403b70  addiu sp,sp,-0x20
00403b74  sw ra,0x1c(sp)
00403b78  sw s8,0x18(sp)
00403b7c  move s8,sp
00403b80  lui gp,0x42
00403b84  addiu gp,gp,-0x1db0
00403b88  sw gp,0x10(sp)
00403b8c  sw a0,0x20(s8)
00403b90  lw v0,0x20(s8)
00403b94  nop
00403b98  addiu v0,v0,0x8
00403b9c  lw v0,0x0(v0)
00403ba0  nop
00403ba4  bne v0,zero,0x00403bd4
00403ba8  _nop
00403bac  lui v0,0x40
00403bb0  addiu a0,v0,0x5f30
00403bb4  lw v0,-0x7f50(gp)
00403bb8  nop
00403bbc  move t9,v0
00403bc0  jalr t9
00403bc4  _nop
00403bc8  lw gp,0x10(s8)
00403bcc  b 0x00403cbc
00403bd0  _nop
00403bd4  lw v0,0x20(s8)
00403bd8  nop
00403bdc  addiu v0,v0,0x8
00403be0  lw v0,0x0(v0)
00403be4  nop
00403be8  move a0,v0
00403bec  lui v0,0x40
00403bf0  addiu a1,v0,0x5f40
00403bf4  lw v0,-0x7fa4(gp)
00403bf8  nop
00403bfc  move t9,v0
00403c00  jalr t9
00403c04  _nop
00403c08  lw gp,0x10(s8)
00403c0c  bne v0,zero,0x00403c38
00403c10  _nop
00403c14  lw a0,0x20(s8)
00403c18  lw v0,-0x7f60(gp)
00403c1c  nop
00403c20  move t9,v0
00403c24  jalr t9
00403c28  _nop
00403c2c  lw gp,0x10(s8)
00403c30  b 0x00403cbc
00403c34  _nop
00403c38  lw v0,0x20(s8)
00403c3c  nop
00403c40  addiu v0,v0,0x8
00403c44  lw v0,0x0(v0)
00403c48  nop
00403c4c  move a0,v0
00403c50  lui v0,0x40
00403c54  addiu a1,v0,0x5f48
00403c58  lw v0,-0x7fa4(gp)
00403c5c  nop
00403c60  move t9,v0
00403c64  jalr t9
00403c68  _nop
00403c6c  lw gp,0x10(s8)
00403c70  bne v0,zero,0x00403c9c
00403c74  _nop
00403c78  lw a0,0x20(s8)
00403c7c  lw v0,-0x7f20(gp)
00403c80  nop
00403c84  move t9,v0
00403c88  jalr t9
00403c8c  _nop
00403c90  lw gp,0x10(s8)
00403c94  b 0x00403cbc
00403c98  _nop
00403c9c  lui v0,0x40
00403ca0  addiu a0,v0,0x5f50
00403ca4  lw v0,-0x7f50(gp)
00403ca8  nop
00403cac  move t9,v0
00403cb0  jalr t9
00403cb4  _nop
00403cb8  lw gp,0x10(s8)
00403cbc  move sp,s8
00403cc0  lw ra,0x1c(sp)
00403cc4  lw s8,0x18(sp)
00403cc8  addiu sp,sp,0x20
00403ccc  jr ra
00403cd0  _nop
