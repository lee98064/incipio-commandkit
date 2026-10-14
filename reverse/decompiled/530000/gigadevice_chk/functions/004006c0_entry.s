# entry @ 004006c0
004006c0  move zero,ra
004006c4  bal 0x004006cc
004006c8  _nop
004006cc  lui gp,0x42
004006d0  addiu gp,gp,-0x7130
004006d4  clear ra
004006d8  lw a0,-0x7fb8(gp)
004006dc  lw a1,0x0(sp)
004006e0  addiu a2,sp,0x4
004006e4  li at,-0x8
004006e8  and sp,sp,at
004006ec  addiu sp,sp,-0x20
004006f0  lw a3,-0x7fa4(gp)
004006f4  lw t0,-0x7fc0(gp)
004006f8  nop
004006fc  sw t0,0x10(sp)
00400700  sw v0,0x14(sp)
00400704  sw sp,0x18(sp)
00400708  lw t9,-0x7fb4(gp)
0040070c  nop
00400710  jalr t9
00400714  _nop
00400718  b 0x00400718
0040071c  _nop
