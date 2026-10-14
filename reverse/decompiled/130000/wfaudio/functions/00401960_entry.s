# entry @ 00401960
00401960  move zero,ra
00401964  bal 0x0040196c
00401968  _nop
0040196c  lui gp,0x43
00401970  addiu gp,gp,-0x4f70
00401974  clear ra
00401978  lw a0,-0x7eec(gp)
0040197c  lw a1,0x0(sp)
00401980  addiu a2,sp,0x4
00401984  li at,-0x8
00401988  and sp,sp,at
0040198c  addiu sp,sp,-0x20
00401990  lw a3,-0x7e40(gp)
00401994  lw t0,-0x7f28(gp)
00401998  nop
0040199c  sw t0,0x10(sp)
004019a0  sw v0,0x14(sp)
004019a4  sw sp,0x18(sp)
004019a8  lw t9,-0x7ed0(gp)
004019ac  nop
004019b0  jalr t9
004019b4  _nop
004019b8  b 0x004019b8
004019bc  _nop
