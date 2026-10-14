# FUN_00434a3c @ 00434a3c
00434a3c  addiu sp,sp,-0xd8
00434a40  sw ra,0xd4(sp)
00434a44  sw s7,0xd0(sp)
00434a48  sw s6,0xcc(sp)
00434a4c  sw s5,0xc8(sp)
00434a50  sw s4,0xc4(sp)
00434a54  sw s3,0xc0(sp)
00434a58  sw s2,0xbc(sp)
00434a5c  sw s1,0xb8(sp)
00434a60  sw s0,0xb4(sp)
00434a64  lui gp,0x62
00434a68  addiu gp,gp,-0x5cf0
00434a6c  sw gp,0x18(sp)
00434a70  b 0x00434a88
00434a74  _nop
00434a78  lw t9,-0x5dc4(gp)
00434a7c  nop
00434a80  jalr t9
00434a84  _li a0,0x1
00434a88  jal 0x00433b3c
00434a8c  _nop
00434a90  lw gp,0x18(sp)
00434a94  beq v0,zero,0x00434a78
00434a98  _nop
00434a9c  jal 0x0043499c
00434aa0  _nop
00434aa4  lw gp,0x18(sp)
00434aa8  lui a0,0x5b
00434aac  addiu a0,a0,-0x41a0
00434ab0  lw t9,-0x6764(gp)
00434ab4  nop
00434ab8  jalr t9
00434abc  _li a1,0x4
00434ac0  lw gp,0x18(sp)
00434ac4  bgez v0,0x00434ae0
00434ac8  _nop
00434acc  lw t9,-0x6b0c(gp)
00434ad0  nop
00434ad4  jalr t9
00434ad8  _addiu a0,sp,0x20
00434adc  lw gp,0x18(sp)
00434ae0  lw v0,0x20(sp)
00434ae4  lui s7,0x5b
00434ae8  addiu s7,s7,-0x18c4
00434aec  sw v0,0x24(sp)
00434af0  addiu s0,sp,0x20
00434af4  clear v0
00434af8  lui s6,0x60
00434afc  li s5,0x1
00434b00  addiu s4,sp,0x30
00434b04  addiu s3,sp,0x28
00434b08  li s2,-0x1
00434b0c  b 0x00434b1c
00434b10  _addiu s1,sp,0x24
00434b14  sw zero,0x10(a0)
00434b18  addiu v0,v0,0x1
00434b1c  sll a0,v0,0x2
00434b20  sltiu v1,v0,0x20
00434b24  bne v1,zero,0x00434b14
00434b28  _addu a0,s0,a0
00434b2c  lw a0,0xb80(s6)
00434b30  lw v1,0x24(sp)
00434b34  lw a1,0x20(sp)
00434b38  srl v0,a0,0x5
00434b3c  sll a2,v0,0x2
00434b40  addiu a3,a1,0x5
00434b44  subu a1,v1,a1
00434b48  addu a2,s0,a2
00434b4c  sltiu a1,a1,0x5
00434b50  lw a2,0x10(a2)
00434b54  beq a1,zero,0x00434b64
00434b58  _subu v1,a3,v1
00434b5c  b 0x00434b68
00434b60  _sw v1,0x28(sp)
00434b64  sw zero,0x28(sp)
00434b68  lw t9,-0x664c(gp)
00434b6c  sllv v1,s5,a0
00434b70  sll v0,v0,0x2
00434b74  or v1,a2,v1
00434b78  addu v0,s0,v0
00434b7c  sw v1,0x10(v0)
00434b80  addiu a0,a0,0x1
00434b84  sw s3,0x10(sp)
00434b88  move a1,s4
00434b8c  clear a2
00434b90  jalr t9
00434b94  _clear a3
00434b98  lw gp,0x18(sp)
00434b9c  beq v0,s2,0x00434bcc
00434ba0  _nop
00434ba4  lw t9,-0x6b0c(gp)
00434ba8  bne v0,zero,0x00434bd8
00434bac  _move a0,s0
00434bb0  jalr t9
00434bb4  _nop
00434bb8  lw v0,0x20(sp)
00434bbc  jal 0x004345d4
00434bc0  _sw v0,0x24(sp)
00434bc4  b 0x00434bf8
00434bc8  _nop
00434bcc  lw t9,-0x7ca0(gp)
00434bd0  b 0x00434bf0
00434bd4  _move a0,s7
00434bd8  jal 0x004332fc
00434bdc  _nop
00434be0  lw gp,0x18(sp)
00434be4  move a0,s1
00434be8  lw t9,-0x6b0c(gp)
00434bec  nop
00434bf0  jalr t9
00434bf4  _nop
00434bf8  lw gp,0x18(sp)
00434bfc  b 0x00434b1c
00434c00  _clear v0
