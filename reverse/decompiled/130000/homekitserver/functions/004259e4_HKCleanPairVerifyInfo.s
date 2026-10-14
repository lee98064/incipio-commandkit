# HKCleanPairVerifyInfo @ 004259e4
004259e4  addiu sp,sp,-0x20
004259e8  sw ra,0x1c(sp)
004259ec  sw s0,0x18(sp)
004259f0  lui gp,0x62
004259f4  addiu gp,gp,-0x6b80
004259f8  sw gp,0x10(sp)
004259fc  lw v0,0x0(a0)
00425a00  nop
00425a04  beq v0,zero,0x00425b50
00425a08  _move s0,a0
00425a0c  lw a0,0xc(v0)
00425a10  nop
00425a14  beq a0,zero,0x00425a30
00425a18  _nop
00425a1c  lw t9,-0x7aa4(gp)
00425a20  nop
00425a24  jalr t9
00425a28  _nop
00425a2c  lw gp,0x10(sp)
00425a30  lw v0,0x0(s0)
00425a34  nop
00425a38  lw a0,0x10(v0)
00425a3c  nop
00425a40  beq a0,zero,0x00425a64
00425a44  _nop
00425a48  lw t9,-0x7aa4(gp)
00425a4c  nop
00425a50  jalr t9
00425a54  _nop
00425a58  lw gp,0x10(sp)
00425a5c  lw v0,0x0(s0)
00425a60  nop
00425a64  lw a0,0x14(v0)
00425a68  nop
00425a6c  beq a0,zero,0x00425a88
00425a70  _nop
00425a74  lw t9,-0x7aa4(gp)
00425a78  nop
00425a7c  jalr t9
00425a80  _nop
00425a84  lw gp,0x10(sp)
00425a88  lw v0,0x0(s0)
00425a8c  nop
00425a90  lw a0,0x18(v0)
00425a94  nop
00425a98  beq a0,zero,0x00425abc
00425a9c  _nop
00425aa0  lw t9,-0x7aa4(gp)
00425aa4  nop
00425aa8  jalr t9
00425aac  _nop
00425ab0  lw gp,0x10(sp)
00425ab4  lw v0,0x0(s0)
00425ab8  nop
00425abc  lw a0,0x1c(v0)
00425ac0  nop
00425ac4  beq a0,zero,0x00425ae0
00425ac8  _nop
00425acc  lw t9,-0x7aa4(gp)
00425ad0  nop
00425ad4  jalr t9
00425ad8  _nop
00425adc  lw gp,0x10(sp)
00425ae0  lw v0,0x0(s0)
00425ae4  nop
00425ae8  lw a0,0x20(v0)
00425aec  nop
00425af0  beq a0,zero,0x00425b14
00425af4  _nop
00425af8  lw t9,-0x7aa4(gp)
00425afc  nop
00425b00  jalr t9
00425b04  _nop
00425b08  lw gp,0x10(sp)
00425b0c  lw v0,0x0(s0)
00425b10  nop
00425b14  lw a0,0x24(v0)
00425b18  nop
00425b1c  beq a0,zero,0x00425b3c
00425b20  _nop
00425b24  lw t9,-0x7aa4(gp)
00425b28  nop
00425b2c  jalr t9
00425b30  _nop
00425b34  lw gp,0x10(sp)
00425b38  nop
00425b3c  lw t9,-0x7aa4(gp)
00425b40  lw a0,0x0(s0)
00425b44  jalr t9
00425b48  _nop
00425b4c  sw zero,0x0(s0)
00425b50  lw ra,0x1c(sp)
00425b54  lw s0,0x18(sp)
00425b58  jr ra
00425b5c  _addiu sp,sp,0x20
