# entry @ 00410b30
00410b30  move zero,ra
00410b34  bal 0x00410b3c
00410b38  _nop
00410b3c  lui gp,0x58
00410b40  addiu gp,gp,0x5010
00410b44  clear ra
00410b48  lw a0,-0x7f2c(gp)
00410b4c  lw a1,0x0(sp)
00410b50  addiu a2,sp,0x4
00410b54  li at,-0x8
00410b58  and sp,sp,at
00410b5c  addiu sp,sp,-0x20
00410b60  lw a3,-0x7f38(gp)
00410b64  lw t0,-0x6b40(gp)
00410b68  nop
00410b6c  sw t0,0x10(sp)
00410b70  sw v0,0x14(sp)
00410b74  sw sp,0x18(sp)
00410b78  lw t9,-0x6d50(gp)
00410b7c  nop
00410b80  jalr t9
00410b84  _nop
00410b88  b 0x00410b88
00410b8c  _nop
