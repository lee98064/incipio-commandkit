# FUN_00401ac8 @ 00401ac8
00401ac8  lui gp,0x3
00401acc  addiu gp,gp,-0x6a38
00401ad0  addu gp,gp,t9
00401ad4  addiu sp,sp,-0x20
00401ad8  sw ra,0x1c(sp)
00401adc  sw gp,0x10(sp)
00401ae0  lw v0,-0x7ddc(gp)
00401ae4  nop
00401ae8  beq v0,zero,0x00401b10
00401aec  _nop
00401af0  lw a0,-0x7fdc(gp)
00401af4  lw a1,-0x7fe8(gp)
00401af8  lw t9,-0x7ddc(gp)
00401afc  addiu a0,a0,0x2200
00401b00  jalr t9
00401b04  _addiu a1,a1,0x3328
00401b08  lw gp,0x10(sp)
00401b0c  nop
00401b10  lw a0,-0x7fe8(gp)
00401b14  nop
00401b18  lw v0,0x2214(a0)
00401b1c  nop
00401b20  beq v0,zero,0x00401b44
00401b24  _nop
00401b28  lw t9,-0x7fac(gp)
00401b2c  nop
00401b30  beq t9,zero,0x00401b44
00401b34  _addiu a0,a0,0x2214
00401b38  lw ra,0x1c(sp)
00401b3c  jr t9
00401b40  _addiu sp,sp,0x20
00401b44  lw ra,0x1c(sp)
00401b48  nop
00401b4c  jr ra
00401b50  _addiu sp,sp,0x20
