# productInfoDel_handler @ 00403ad0
00403ad0  addiu sp,sp,-0x20
00403ad4  sw ra,0x1c(sp)
00403ad8  sw s8,0x18(sp)
00403adc  move s8,sp
00403ae0  lui gp,0x42
00403ae4  addiu gp,gp,-0x21a0
00403ae8  sw gp,0x10(sp)
00403aec  sw a0,0x20(s8)
00403af0  lw v0,0x20(s8)
00403af4  nop
00403af8  addiu v0,v0,0x8
00403afc  lw v0,0x0(v0)
00403b00  nop
00403b04  bne v0,zero,0x00403b34
00403b08  _nop
00403b0c  lui v0,0x40
00403b10  addiu a0,v0,0x5c40
00403b14  lw v0,-0x7f50(gp)
00403b18  nop
00403b1c  move t9,v0
00403b20  jalr t9
00403b24  _nop
00403b28  lw gp,0x10(s8)
00403b2c  b 0x00403c1c
00403b30  _nop
00403b34  lw v0,0x20(s8)
00403b38  nop
00403b3c  addiu v0,v0,0x8
00403b40  lw v0,0x0(v0)
00403b44  nop
00403b48  move a0,v0
00403b4c  lui v0,0x40
00403b50  addiu a1,v0,0x5c50
00403b54  lw v0,-0x7fa4(gp)
00403b58  nop
00403b5c  move t9,v0
00403b60  jalr t9
00403b64  _nop
00403b68  lw gp,0x10(s8)
00403b6c  bne v0,zero,0x00403b98
00403b70  _nop
00403b74  lw a0,0x20(s8)
00403b78  lw v0,-0x7f60(gp)
00403b7c  nop
00403b80  move t9,v0
00403b84  jalr t9
00403b88  _nop
00403b8c  lw gp,0x10(s8)
00403b90  b 0x00403c1c
00403b94  _nop
00403b98  lw v0,0x20(s8)
00403b9c  nop
00403ba0  addiu v0,v0,0x8
00403ba4  lw v0,0x0(v0)
00403ba8  nop
00403bac  move a0,v0
00403bb0  lui v0,0x40
00403bb4  addiu a1,v0,0x5c58
00403bb8  lw v0,-0x7fa4(gp)
00403bbc  nop
00403bc0  move t9,v0
00403bc4  jalr t9
00403bc8  _nop
00403bcc  lw gp,0x10(s8)
00403bd0  bne v0,zero,0x00403bfc
00403bd4  _nop
00403bd8  lw a0,0x20(s8)
00403bdc  lw v0,-0x7f24(gp)
00403be0  nop
00403be4  move t9,v0
00403be8  jalr t9
00403bec  _nop
00403bf0  lw gp,0x10(s8)
00403bf4  b 0x00403c1c
00403bf8  _nop
00403bfc  lui v0,0x40
00403c00  addiu a0,v0,0x5c60
00403c04  lw v0,-0x7f50(gp)
00403c08  nop
00403c0c  move t9,v0
00403c10  jalr t9
00403c14  _nop
00403c18  lw gp,0x10(s8)
00403c1c  move sp,s8
00403c20  lw ra,0x1c(sp)
00403c24  lw s8,0x18(sp)
00403c28  addiu sp,sp,0x20
00403c2c  jr ra
00403c30  _nop
