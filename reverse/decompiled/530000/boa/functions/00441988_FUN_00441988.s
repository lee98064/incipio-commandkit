# FUN_00441988 @ 00441988
00441988  addiu sp,sp,-0x20
0044198c  sw ra,0x1c(sp)
00441990  lui gp,0x47
00441994  addiu gp,gp,0x2630
00441998  sw gp,0x10(sp)
0044199c  lw t9,-0x7cf0(gp)
004419a0  lui a1,0x45
004419a4  addiu a0,a0,0x8d4
004419a8  jalr t9
004419ac  _addiu a1,a1,-0x4060
004419b0  lw gp,0x10(sp)
004419b4  beq v0,zero,0x00441a0c
004419b8  _addiu a0,v0,0x8
004419bc  lw v0,-0x7a70(gp)
004419c0  nop
004419c4  lw a1,0x0(v0)
004419c8  move v1,a0
004419cc  lb v0,0x0(v1)
004419d0  nop
004419d4  sll a2,v0,0x1
004419d8  beq v0,zero,0x004419f8
004419dc  _addu a2,a1,a2
004419e0  lhu v0,0x0(a2)
004419e4  nop
004419e8  andi v0,v0,0x20
004419ec  beq v0,zero,0x004419cc
004419f0  _addiu v1,v1,0x1
004419f4  addiu v1,v1,-0x1
004419f8  sb zero,0x0(v1)
004419fc  lw t9,-0x7c58(gp)
00441a00  lw ra,0x1c(sp)
00441a04  jr t9
00441a08  _addiu sp,sp,0x20
00441a0c  lw ra,0x1c(sp)
00441a10  nop
00441a14  jr ra
00441a18  _addiu sp,sp,0x20
