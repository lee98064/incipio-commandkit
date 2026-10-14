# entry @ 00410b60
00410b60  move zero,ra
00410b64  bal 0x00410b6c
00410b68  _nop
00410b6c  lui gp,0x58
00410b70  addiu gp,gp,0x5140
00410b74  clear ra
00410b78  lw a0,-0x7f2c(gp)
00410b7c  lw a1,0x0(sp)
00410b80  addiu a2,sp,0x4
00410b84  li at,-0x8
00410b88  and sp,sp,at
00410b8c  addiu sp,sp,-0x20
00410b90  lw a3,-0x7f38(gp)
00410b94  lw t0,-0x6b3c(gp)
00410b98  nop
00410b9c  sw t0,0x10(sp)
00410ba0  sw v0,0x14(sp)
00410ba4  sw sp,0x18(sp)
00410ba8  lw t9,-0x6d4c(gp)
00410bac  nop
00410bb0  jalr t9
00410bb4  _nop
00410bb8  b 0x00410bb8
00410bbc  _nop
