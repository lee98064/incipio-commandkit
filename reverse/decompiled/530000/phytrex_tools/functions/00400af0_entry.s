# entry @ 00400af0
00400af0  move zero,ra
00400af4  bal 0x00400afc
00400af8  _nop
00400afc  lui gp,0x42
00400b00  addiu gp,gp,-0x1db0
00400b04  clear ra
00400b08  lw a0,-0x7f9c(gp)
00400b0c  lw a1,0x0(sp)
00400b10  addiu a2,sp,0x4
00400b14  li at,-0x8
00400b18  and sp,sp,at
00400b1c  addiu sp,sp,-0x20
00400b20  lw a3,-0x7f68(gp)
00400b24  lw t0,-0x7fa8(gp)
00400b28  nop
00400b2c  sw t0,0x10(sp)
00400b30  sw v0,0x14(sp)
00400b34  sw sp,0x18(sp)
00400b38  lw t9,-0x7f8c(gp)
00400b3c  nop
00400b40  jalr t9
00400b44  _nop
00400b48  b 0x00400b48
00400b4c  _nop
