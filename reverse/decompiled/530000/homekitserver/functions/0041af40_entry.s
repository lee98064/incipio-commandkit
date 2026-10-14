# entry @ 0041af40
0041af40  move zero,ra
0041af44  bal 0x0041af4c
0041af48  _nop
0041af4c  lui gp,0x62
0041af50  addiu gp,gp,-0x5cf0
0041af54  clear ra
0041af58  lw a0,-0x7e94(gp)
0041af5c  lw a1,0x0(sp)
0041af60  addiu a2,sp,0x4
0041af64  li at,-0x8
0041af68  and sp,sp,at
0041af6c  addiu sp,sp,-0x20
0041af70  lw a3,-0x7ea8(gp)
0041af74  lw t0,-0x5f58(gp)
0041af78  nop
0041af7c  sw t0,0x10(sp)
0041af80  sw v0,0x14(sp)
0041af84  sw sp,0x18(sp)
0041af88  lw t9,-0x6280(gp)
0041af8c  nop
0041af90  jalr t9
0041af94  _nop
0041af98  b 0x0041af98
0041af9c  _nop
