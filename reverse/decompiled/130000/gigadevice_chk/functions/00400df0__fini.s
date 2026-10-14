# _fini @ 00400df0
00400df0  lui gp,0x2
00400df4  addiu gp,gp,-0x7f20
00400df8  addu gp,gp,t9
00400dfc  addiu sp,sp,-0x20
00400e00  sw gp,0x10(sp)
00400e04  sw ra,0x1c(sp)
00400e08  sw gp,0x18(sp)
00400e0c  bal 0x00400e14
00400e10  _nop
00400e14  lui gp,0x2
00400e18  addiu gp,gp,-0x7f44
00400e1c  addu gp,gp,ra
00400e20  lw t9,-0x7fdc(gp)
00400e24  nop
00400e28  addiu t9,t9,0x720
00400e2c  bal 0x00400720
00400e30  _nop
00400e34  lw gp,0x10(sp)
00400e38  nop
00400e3c  lw ra,0x1c(sp)
00400e40  nop
00400e44  jr ra
00400e48  _addiu sp,sp,0x20
