# FUN_0043727c @ 0043727c
0043727c  lui gp,0x1e
00437280  addiu gp,gp,0x2204
00437284  addu gp,gp,t9
00437288  addiu sp,sp,-0x20
0043728c  sw ra,0x1c(sp)
00437290  sw s8,0x18(sp)
00437294  move s8,sp
00437298  sw gp,0x10(sp)
0043729c  sw a0,0x20(s8)
004372a0  lw v0,0x20(s8)
004372a4  nop
004372a8  move a0,v0
004372ac  lw v0,-0x7dec(gp)
004372b0  nop
004372b4  move t9,v0
004372b8  jalr t9
004372bc  _nop
004372c0  lw gp,0x10(s8)
004372c4  move sp,s8
004372c8  lw ra,0x1c(sp)
004372cc  lw s8,0x18(sp)
004372d0  addiu sp,sp,0x20
004372d4  jr ra
004372d8  _nop
