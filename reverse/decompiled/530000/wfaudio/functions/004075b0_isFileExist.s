# isFileExist @ 004075b0
004075b0  addiu sp,sp,-0xb8
004075b4  sw ra,0xb4(sp)
004075b8  lui gp,0x43
004075bc  addiu gp,gp,-0x4c90
004075c0  sw gp,0x10(sp)
004075c4  lw t9,-0x7f4c(gp)
004075c8  nop
004075cc  jalr t9
004075d0  _addiu a1,sp,0x18
004075d4  lw ra,0xb4(sp)
004075d8  nor v0,zero,v0
004075dc  srl v0,v0,0x1f
004075e0  jr ra
004075e4  _addiu sp,sp,0xb8
