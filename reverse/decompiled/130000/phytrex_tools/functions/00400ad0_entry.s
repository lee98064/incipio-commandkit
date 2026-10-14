# entry @ 00400ad0
00400ad0  move zero,ra
00400ad4  bal 0x00400adc
00400ad8  _nop
00400adc  lui gp,0x42
00400ae0  addiu gp,gp,-0x21a0
00400ae4  clear ra
00400ae8  lw a0,-0x7f9c(gp)
00400aec  lw a1,0x0(sp)
00400af0  addiu a2,sp,0x4
00400af4  li at,-0x8
00400af8  and sp,sp,at
00400afc  addiu sp,sp,-0x20
00400b00  lw a3,-0x7f68(gp)
00400b04  lw t0,-0x7fa8(gp)
00400b08  nop
00400b0c  sw t0,0x10(sp)
00400b10  sw v0,0x14(sp)
00400b14  sw sp,0x18(sp)
00400b18  lw t9,-0x7f8c(gp)
00400b1c  nop
00400b20  jalr t9
00400b24  _nop
00400b28  b 0x00400b28
00400b2c  _nop
