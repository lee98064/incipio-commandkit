# init_form @ 00408b98
00408b98  addiu sp,sp,-0x20
00408b9c  sw ra,0x1c(sp)
00408ba0  sw s0,0x18(sp)
00408ba4  lui gp,0x47
00408ba8  addiu gp,gp,0x2630
00408bac  sw gp,0x10(sp)
00408bb0  lw t9,-0x7ce4(gp)
00408bb4  li v0,0x2
00408bb8  move s0,a0
00408bbc  jalr t9
00408bc0  _sw v0,0x4(a0)
00408bc4  lw v1,0xc(s0)
00408bc8  li v0,0x4
00408bcc  lw gp,0x10(sp)
00408bd0  bne v1,v0,0x00408be4
00408bd4  _nop
00408bd8  lw v0,0x78(s0)
00408bdc  nop
00408be0  sw v0,0x7c(s0)
00408be4  lw t9,-0x79fc(gp)
00408be8  nop
00408bec  jalr t9
00408bf0  _move a0,s0
00408bf4  lw ra,0x1c(sp)
00408bf8  lw s0,0x18(sp)
00408bfc  clear v0
00408c00  jr ra
00408c04  _addiu sp,sp,0x20
