# FUN_004019c0 @ 004019c0
004019c0  lui gp,0x3
004019c4  addiu gp,gp,-0x6930
004019c8  addu gp,gp,t9
004019cc  addiu sp,sp,-0x28
004019d0  sw ra,0x24(sp)
004019d4  sw s2,0x20(sp)
004019d8  sw s1,0x1c(sp)
004019dc  sw s0,0x18(sp)
004019e0  sw gp,0x10(sp)
004019e4  lw v0,-0x7fe8(gp)
004019e8  nop
004019ec  lbu v0,0x3320(v0)
004019f0  nop
004019f4  bne v0,zero,0x00401ab0
004019f8  _nop
004019fc  lw v0,-0x7e18(gp)
00401a00  nop
00401a04  beq v0,zero,0x00401a28
00401a08  _nop
00401a0c  lw v0,-0x7fe4(gp)
00401a10  lw t9,-0x7e18(gp)
00401a14  lw a0,0x0(v0)
00401a18  jalr t9
00401a1c  _nop
00401a20  lw gp,0x10(sp)
00401a24  nop
00401a28  lw s1,-0x7fe8(gp)
00401a2c  lw s2,-0x7fe0(gp)
00401a30  lw s0,-0x7fe8(gp)
00401a34  addiu s1,s1,0x220c
00401a38  subu s2,s2,s1
00401a3c  sra s2,s2,0x2
00401a40  b 0x00401a5c
00401a44  _addiu s2,s2,-0x1
00401a48  lw t9,0x0(a0)
00401a4c  nop
00401a50  jalr t9
00401a54  _sw v1,0x3324(s0)
00401a58  lw gp,0x10(sp)
00401a5c  lw v0,0x3324(s0)
00401a60  nop
00401a64  addiu v1,v0,0x1
00401a68  sll a0,v1,0x2
00401a6c  sltu v0,v0,s2
00401a70  bne v0,zero,0x00401a48
00401a74  _addu a0,a0,s1
00401a78  lw v0,-0x7e60(gp)
00401a7c  nop
00401a80  beq v0,zero,0x00401aa4
00401a84  _nop
00401a88  lw a0,-0x7fdc(gp)
00401a8c  lw t9,-0x7e60(gp)
00401a90  nop
00401a94  jalr t9
00401a98  _addiu a0,a0,0x2200
00401a9c  lw gp,0x10(sp)
00401aa0  nop
00401aa4  lw v0,-0x7fe8(gp)
00401aa8  li v1,0x1
00401aac  sb v1,0x3320(v0)
00401ab0  lw ra,0x24(sp)
00401ab4  lw s2,0x20(sp)
00401ab8  lw s1,0x1c(sp)
00401abc  lw s0,0x18(sp)
00401ac0  jr ra
00401ac4  _addiu sp,sp,0x28
