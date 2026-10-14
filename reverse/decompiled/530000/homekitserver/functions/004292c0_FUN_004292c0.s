# FUN_004292c0 @ 004292c0
004292c0  addiu sp,sp,-0x20
004292c4  sw ra,0x1c(sp)
004292c8  sw s0,0x18(sp)
004292cc  lui gp,0x62
004292d0  addiu gp,gp,-0x5cf0
004292d4  sw gp,0x10(sp)
004292d8  lui s0,0x61
004292dc  lw a0,0x5660(s0)
004292e0  nop
004292e4  beq a0,zero,0x00429300
004292e8  _nop
004292ec  lw t9,-0x7aa4(gp)
004292f0  nop
004292f4  jalr t9
004292f8  _nop
004292fc  sw zero,0x5660(s0)
00429300  lw ra,0x1c(sp)
00429304  lw s0,0x18(sp)
00429308  lui v0,0x61
0042930c  sw zero,0x5664(v0)
00429310  jr ra
00429314  _addiu sp,sp,0x20
