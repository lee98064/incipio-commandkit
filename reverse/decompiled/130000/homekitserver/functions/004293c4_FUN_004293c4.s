# FUN_004293c4 @ 004293c4
004293c4  addiu sp,sp,-0xb8
004293c8  sw ra,0xb4(sp)
004293cc  lui gp,0x62
004293d0  addiu gp,gp,-0x6b80
004293d4  sw gp,0x10(sp)
004293d8  lw t9,-0x6458(gp)
004293dc  nop
004293e0  jalr t9
004293e4  _addiu a1,sp,0x18
004293e8  lw ra,0xb4(sp)
004293ec  nor v0,zero,v0
004293f0  srl v0,v0,0x1f
004293f4  jr ra
004293f8  _addiu sp,sp,0xb8
