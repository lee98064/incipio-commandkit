# entry @ 0041ae50
0041ae50  move zero,ra
0041ae54  bal 0x0041ae5c
0041ae58  _nop
0041ae5c  lui gp,0x62
0041ae60  addiu gp,gp,-0x6b80
0041ae64  clear ra
0041ae68  lw a0,-0x7e98(gp)
0041ae6c  lw a1,0x0(sp)
0041ae70  addiu a2,sp,0x4
0041ae74  li at,-0x8
0041ae78  and sp,sp,at
0041ae7c  addiu sp,sp,-0x20
0041ae80  lw a3,-0x7eac(gp)
0041ae84  lw t0,-0x5f6c(gp)
0041ae88  nop
0041ae8c  sw t0,0x10(sp)
0041ae90  sw v0,0x14(sp)
0041ae94  sw sp,0x18(sp)
0041ae98  lw t9,-0x628c(gp)
0041ae9c  nop
0041aea0  jalr t9
0041aea4  _nop
0041aea8  b 0x0041aea8
0041aeac  _nop
