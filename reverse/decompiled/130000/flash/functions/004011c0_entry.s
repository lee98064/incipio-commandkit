# entry @ 004011c0
004011c0  move zero,ra
004011c4  bal 0x004011cc
004011c8  _nop
004011cc  lui gp,0x43
004011d0  addiu gp,gp,-0x4be0
004011d4  clear ra
004011d8  lw a0,-0x7f48(gp)
004011dc  lw a1,0x0(sp)
004011e0  addiu a2,sp,0x4
004011e4  li at,-0x8
004011e8  and sp,sp,at
004011ec  addiu sp,sp,-0x20
004011f0  lw a3,-0x7ec0(gp)
004011f4  lw t0,-0x7f6c(gp)
004011f8  nop
004011fc  sw t0,0x10(sp)
00401200  sw v0,0x14(sp)
00401204  sw sp,0x18(sp)
00401208  lw t9,-0x7f30(gp)
0040120c  nop
00401210  jalr t9
00401214  _nop
00401218  b 0x00401218
0040121c  _nop
