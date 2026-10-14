# FUN_00402a6c @ 00402a6c
00402a6c  addiu sp,sp,-0x28
00402a70  sw ra,0x24(sp)
00402a74  lui gp,0x44
00402a78  addiu gp,gp,-0x4fc0
00402a7c  sw gp,0x10(sp)
00402a80  lbu v0,0x40(a0)
00402a84  nop
00402a88  beq v0,zero,0x00402ac0
00402a8c  _sltiu v0,a1,0x7
00402a90  lw t9,-0x7dac(gp)
00402a94  li v1,0x1
00402a98  lui v0,0x43
00402a9c  lui a0,0x42
00402aa0  sw a1,0x18(sp)
00402aa4  sb v1,0x357c(v0)
00402aa8  jalr t9
00402aac  _addiu a0,a0,-0x329c
00402ab0  lw gp,0x10(sp)
00402ab4  lw a1,0x18(sp)
00402ab8  nop
00402abc  sltiu v0,a1,0x7
00402ac0  beq v0,zero,0x00402b34
00402ac4  _lui v0,0x42
00402ac8  addiu v0,v0,-0x3270
00402acc  sll a1,a1,0x2
00402ad0  addu a1,v0,a1
00402ad4  lw v0,0x0(a1)
00402ad8  nop
00402adc  jr v0
00402ae0  _nop
00402ae4  b 0x00402b28
00402ae8  _clear a0
00402aec  b 0x00402b28
00402af0  _li a0,0x1
00402af4  b 0x00402b28
00402af8  _li a0,0x2
00402afc  b 0x00402b28
00402b00  _li a0,0x3
00402b04  b 0x00402b28
00402b08  _li a0,0x4
00402b0c  jal 0x004027e8
00402b10  _li a0,0x5
00402b14  li v1,0x1
00402b18  lui v0,0x43
00402b1c  b 0x00402b34
00402b20  _sb v1,0x357c(v0)
00402b24  li a0,0x6
00402b28  lw ra,0x24(sp)
00402b2c  j 0x004027e8
00402b30  _addiu sp,sp,0x28
00402b34  lw ra,0x24(sp)
00402b38  nop
00402b3c  jr ra
00402b40  _addiu sp,sp,0x28
