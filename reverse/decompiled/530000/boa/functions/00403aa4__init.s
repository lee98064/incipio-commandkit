# _init @ 00403aa4
00403aa4  lui gp,0x7
00403aa8  addiu gp,gp,-0x1474
00403aac  addu gp,gp,t9
00403ab0  addiu sp,sp,-0x20
00403ab4  sw gp,0x10(sp)
00403ab8  sw ra,0x1c(sp)
00403abc  sw gp,0x18(sp)
00403ac0  bal 0x00403ac8
00403ac4  _nop
00403ac8  lui gp,0x7
00403acc  addiu gp,gp,-0x1498
00403ad0  addu gp,gp,ra
00403ad4  lw t9,-0x7fd8(gp)
00403ad8  nop
00403adc  addiu t9,t9,0x3c98
00403ae0  bal 0x00403c98
00403ae4  _nop
00403ae8  lw gp,0x10(sp)
00403aec  nop
00403af0  bal 0x00403af8
00403af4  _nop
00403af8  lui gp,0x7
00403afc  addiu gp,gp,-0x14c8
00403b00  addu gp,gp,ra
00403b04  lw t9,-0x7fdc(gp)
00403b08  nop
00403b0c  addiu t9,t9,-0x74b0
00403b10  jalr t9
00403b14  _nop
00403b18  lw gp,0x10(sp)
00403b1c  nop
00403b20  lw ra,0x1c(sp)
00403b24  nop
00403b28  jr ra
00403b2c  _addiu sp,sp,0x20
