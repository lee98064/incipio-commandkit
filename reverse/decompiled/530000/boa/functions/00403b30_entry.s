# entry @ 00403b30
00403b30  move zero,ra
00403b34  bal 0x00403b3c
00403b38  _nop
00403b3c  lui gp,0x47
00403b40  addiu gp,gp,0x2630
00403b44  clear ra
00403b48  lw a0,-0x7dc0(gp)
00403b4c  lw a1,0x0(sp)
00403b50  addiu a2,sp,0x4
00403b54  li at,-0x8
00403b58  and sp,sp,at
00403b5c  addiu sp,sp,-0x20
00403b60  lw a3,-0x7bd8(gp)
00403b64  lw t0,-0x7e24(gp)
00403b68  nop
00403b6c  sw t0,0x10(sp)
00403b70  sw v0,0x14(sp)
00403b74  sw sp,0x18(sp)
00403b78  lw t9,-0x7d88(gp)
00403b7c  nop
00403b80  jalr t9
00403b84  _nop
00403b88  b 0x00403b88
00403b8c  _nop
