# _fini @ 0040fef0
0040fef0  lui gp,0x2
0040fef4  addiu gp,gp,-0x4b80
0040fef8  addu gp,gp,t9
0040fefc  addiu sp,sp,-0x20
0040ff00  sw gp,0x10(sp)
0040ff04  sw ra,0x1c(sp)
0040ff08  sw gp,0x18(sp)
0040ff0c  bal 0x0040ff14
0040ff10  _nop
0040ff14  lui gp,0x2
0040ff18  addiu gp,gp,-0x4ba4
0040ff1c  addu gp,gp,ra
0040ff20  lw t9,-0x7fd8(gp)
0040ff24  nop
0040ff28  addiu t9,t9,0x1a30
0040ff2c  bal 0x00401a30
0040ff30  _nop
0040ff34  lw gp,0x10(sp)
0040ff38  nop
0040ff3c  lw ra,0x1c(sp)
0040ff40  nop
0040ff44  jr ra
0040ff48  _addiu sp,sp,0x20
