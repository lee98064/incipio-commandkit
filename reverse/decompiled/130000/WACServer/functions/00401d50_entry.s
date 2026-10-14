# entry @ 00401d50
00401d50  move zero,ra
00401d54  bal 0x00401d5c
00401d58  _nop
00401d5c  lui gp,0x44
00401d60  addiu gp,gp,-0x4fc0
00401d64  clear ra
00401d68  lw a0,-0x7eb4(gp)
00401d6c  lw a1,0x0(sp)
00401d70  addiu a2,sp,0x4
00401d74  li at,-0x8
00401d78  and sp,sp,at
00401d7c  addiu sp,sp,-0x20
00401d80  lw a3,-0x7e04(gp)
00401d84  lw t0,-0x7ef4(gp)
00401d88  nop
00401d8c  sw t0,0x10(sp)
00401d90  sw v0,0x14(sp)
00401d94  sw sp,0x18(sp)
00401d98  lw t9,-0x7ea0(gp)
00401d9c  nop
00401da0  jalr t9
00401da4  _nop
00401da8  b 0x00401da8
00401dac  _nop
