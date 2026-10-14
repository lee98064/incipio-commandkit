# _init @ 00410aa4
00410aa4  lui gp,0x17
00410aa8  addiu gp,gp,0x456c
00410aac  addu gp,gp,t9
00410ab0  addiu sp,sp,-0x20
00410ab4  sw gp,0x10(sp)
00410ab8  sw ra,0x1c(sp)
00410abc  sw gp,0x18(sp)
00410ac0  bal 0x00410ac8
00410ac4  _nop
00410ac8  lui gp,0x17
00410acc  addiu gp,gp,0x4548
00410ad0  addu gp,gp,ra
00410ad4  lw t9,-0x7fd4(gp)
00410ad8  nop
00410adc  addiu t9,t9,0xc98
00410ae0  bal 0x00410c98
00410ae4  _nop
00410ae8  lw gp,0x10(sp)
00410aec  nop
00410af0  bal 0x00410af8
00410af4  _nop
00410af8  lui gp,0x17
00410afc  addiu gp,gp,0x4518
00410b00  addu gp,gp,ra
00410b04  lw t9,-0x7fd0(gp)
00410b08  nop
00410b0c  addiu t9,t9,0x1cd0
00410b10  jalr t9
00410b14  _nop
00410b18  lw gp,0x10(sp)
00410b1c  nop
00410b20  lw ra,0x1c(sp)
00410b24  nop
00410b28  jr ra
00410b2c  _addiu sp,sp,0x20
