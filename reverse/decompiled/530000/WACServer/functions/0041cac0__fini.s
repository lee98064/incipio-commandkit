# _fini @ 0041cac0
0041cac0  lui gp,0x2
0041cac4  addiu gp,gp,-0x1a80
0041cac8  addu gp,gp,t9
0041cacc  addiu sp,sp,-0x20
0041cad0  sw gp,0x10(sp)
0041cad4  sw ra,0x1c(sp)
0041cad8  sw gp,0x18(sp)
0041cadc  bal 0x0041cae4
0041cae0  _nop
0041cae4  lui gp,0x2
0041cae8  addiu gp,gp,-0x1aa4
0041caec  addu gp,gp,ra
0041caf0  lw t9,-0x7fd8(gp)
0041caf4  nop
0041caf8  addiu t9,t9,0x1db0
0041cafc  bal 0x00401db0
0041cb00  _nop
0041cb04  lw gp,0x10(sp)
0041cb08  nop
0041cb0c  lw ra,0x1c(sp)
0041cb10  nop
0041cb14  jr ra
0041cb18  _addiu sp,sp,0x20
