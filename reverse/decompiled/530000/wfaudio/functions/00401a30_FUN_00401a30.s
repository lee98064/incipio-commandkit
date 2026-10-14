# FUN_00401a30 @ 00401a30
00401a30  lui gp,0x3
00401a34  addiu gp,gp,-0x66c0
00401a38  addu gp,gp,t9
00401a3c  addiu sp,sp,-0x28
00401a40  sw ra,0x24(sp)
00401a44  sw s2,0x20(sp)
00401a48  sw s1,0x1c(sp)
00401a4c  sw s0,0x18(sp)
00401a50  sw gp,0x10(sp)
00401a54  lw v0,-0x7fe8(gp)
00401a58  nop
00401a5c  lbu v0,0x3600(v0)
00401a60  nop
00401a64  bne v0,zero,0x00401b20
00401a68  _nop
00401a6c  lw v0,-0x7e10(gp)
00401a70  nop
00401a74  beq v0,zero,0x00401a98
00401a78  _nop
00401a7c  lw v0,-0x7fe4(gp)
00401a80  lw t9,-0x7e10(gp)
00401a84  lw a0,0x0(v0)
00401a88  jalr t9
00401a8c  _nop
00401a90  lw gp,0x10(sp)
00401a94  nop
00401a98  lw s1,-0x7fe8(gp)
00401a9c  lw s2,-0x7fe0(gp)
00401aa0  lw s0,-0x7fe8(gp)
00401aa4  addiu s1,s1,0x24ec
00401aa8  subu s2,s2,s1
00401aac  sra s2,s2,0x2
00401ab0  b 0x00401acc
00401ab4  _addiu s2,s2,-0x1
00401ab8  lw t9,0x0(a0)
00401abc  nop
00401ac0  jalr t9
00401ac4  _sw v1,0x3604(s0)
00401ac8  lw gp,0x10(sp)
00401acc  lw v0,0x3604(s0)
00401ad0  nop
00401ad4  addiu v1,v0,0x1
00401ad8  sll a0,v1,0x2
00401adc  sltu v0,v0,s2
00401ae0  bne v0,zero,0x00401ab8
00401ae4  _addu a0,a0,s1
00401ae8  lw v0,-0x7e58(gp)
00401aec  nop
00401af0  beq v0,zero,0x00401b14
00401af4  _nop
00401af8  lw a0,-0x7fdc(gp)
00401afc  lw t9,-0x7e58(gp)
00401b00  nop
00401b04  jalr t9
00401b08  _addiu a0,a0,0x24e0
00401b0c  lw gp,0x10(sp)
00401b10  nop
00401b14  lw v0,-0x7fe8(gp)
00401b18  li v1,0x1
00401b1c  sb v1,0x3600(v0)
00401b20  lw ra,0x24(sp)
00401b24  lw s2,0x20(sp)
00401b28  lw s1,0x1c(sp)
00401b2c  lw s0,0x18(sp)
00401b30  jr ra
00401b34  _addiu sp,sp,0x28
