# entry @ 004019d0
004019d0  move zero,ra
004019d4  bal 0x004019dc
004019d8  _nop
004019dc  lui gp,0x43
004019e0  addiu gp,gp,-0x4c90
004019e4  clear ra
004019e8  lw a0,-0x7ee4(gp)
004019ec  lw a1,0x0(sp)
004019f0  addiu a2,sp,0x4
004019f4  li at,-0x8
004019f8  and sp,sp,at
004019fc  addiu sp,sp,-0x20
00401a00  lw a3,-0x7e38(gp)
00401a04  lw t0,-0x7f20(gp)
00401a08  nop
00401a0c  sw t0,0x10(sp)
00401a10  sw v0,0x14(sp)
00401a14  sw sp,0x18(sp)
00401a18  lw t9,-0x7ec8(gp)
00401a1c  nop
00401a20  jalr t9
00401a24  _nop
00401a28  b 0x00401a28
00401a2c  _nop
