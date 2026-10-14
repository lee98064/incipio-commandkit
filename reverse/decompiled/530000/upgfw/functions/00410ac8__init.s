# _init @ 00410ac8
00410ac8  lui gp,0x17
00410acc  addiu gp,gp,0x4678
00410ad0  addu gp,gp,t9
00410ad4  addiu sp,sp,-0x20
00410ad8  sw gp,0x10(sp)
00410adc  sw ra,0x1c(sp)
00410ae0  sw gp,0x18(sp)
00410ae4  bal 0x00410aec
00410ae8  _nop
00410aec  lui gp,0x17
00410af0  addiu gp,gp,0x4654
00410af4  addu gp,gp,ra
00410af8  lw t9,-0x7fd4(gp)
00410afc  nop
00410b00  addiu t9,t9,0xcc8
00410b04  bal 0x00410cc8
00410b08  _nop
00410b0c  lw gp,0x10(sp)
00410b10  nop
00410b14  bal 0x00410b1c
00410b18  _nop
00410b1c  lui gp,0x17
00410b20  addiu gp,gp,0x4624
00410b24  addu gp,gp,ra
00410b28  lw t9,-0x7fd0(gp)
00410b2c  nop
00410b30  addiu t9,t9,0x1dc0
00410b34  jalr t9
00410b38  _nop
00410b3c  lw gp,0x10(sp)
00410b40  nop
00410b44  lw ra,0x1c(sp)
00410b48  nop
00410b4c  jr ra
00410b50  _addiu sp,sp,0x20
