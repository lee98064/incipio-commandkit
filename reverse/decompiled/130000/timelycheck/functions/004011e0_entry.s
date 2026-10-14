# entry @ 004011e0
004011e0  move zero,ra
004011e4  bal 0x004011ec
004011e8  _nop
004011ec  lui gp,0x43
004011f0  addiu gp,gp,0x3060
004011f4  clear ra
004011f8  lw a0,-0x7f50(gp)
004011fc  lw a1,0x0(sp)
00401200  addiu a2,sp,0x4
00401204  li at,-0x8
00401208  and sp,sp,at
0040120c  addiu sp,sp,-0x20
00401210  lw a3,-0x7ecc(gp)
00401214  lw t0,-0x7f74(gp)
00401218  nop
0040121c  sw t0,0x10(sp)
00401220  sw v0,0x14(sp)
00401224  sw sp,0x18(sp)
00401228  lw t9,-0x7f3c(gp)
0040122c  nop
00401230  jalr t9
00401234  _nop
00401238  b 0x00401238
0040123c  _nop
