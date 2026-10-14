# FUN_004372dc @ 004372dc
004372dc  lui gp,0x1e
004372e0  addiu gp,gp,0x21a4
004372e4  addu gp,gp,t9
004372e8  addiu sp,sp,-0x20
004372ec  sw ra,0x1c(sp)
004372f0  sw s8,0x18(sp)
004372f4  move s8,sp
004372f8  sw gp,0x10(sp)
004372fc  sw a0,0x20(s8)
00437300  lw v0,0x20(s8)
00437304  nop
00437308  lw v0,0x18(v0)
0043730c  nop
00437310  move a0,v0
00437314  lw v0,-0x6578(gp)
00437318  nop
0043731c  move t9,v0
00437320  jalr t9
00437324  _nop
00437328  lw gp,0x10(s8)
0043732c  lw a0,0x20(s8)
00437330  lw v0,-0x7fcc(gp)
00437334  nop
00437338  addiu v0,v0,0x4d6c
0043733c  move t9,v0
00437340  jalr t9
00437344  _nop
00437348  lw gp,0x10(s8)
0043734c  move sp,s8
00437350  lw ra,0x1c(sp)
00437354  lw s8,0x18(sp)
00437358  addiu sp,sp,0x20
0043735c  jr ra
00437360  _nop
