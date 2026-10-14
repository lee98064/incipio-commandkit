# writeHomeKitSetupCode @ 00404a10
00404a10  addiu sp,sp,-0x40
00404a14  sw ra,0x3c(sp)
00404a18  sw s8,0x38(sp)
00404a1c  move s8,sp
00404a20  lui gp,0x42
00404a24  addiu gp,gp,-0x21a0
00404a28  sw gp,0x10(sp)
00404a2c  sw a0,0x40(s8)
00404a30  sw zero,0x18(s8)
00404a34  addiu v0,s8,0x20
00404a38  move a0,v0
00404a3c  lui v0,0x40
00404a40  addiu a1,v0,0x5d50
00404a44  li a2,0x5
00404a48  lw v0,-0x7f4c(gp)
00404a4c  nop
00404a50  move t9,v0
00404a54  jalr t9
00404a58  _nop
00404a5c  lw gp,0x10(s8)
00404a60  lw a0,0x40(s8)
00404a64  lw v0,-0x7fc0(gp)
00404a68  nop
00404a6c  move t9,v0
00404a70  jalr t9
00404a74  _nop
00404a78  lw gp,0x10(s8)
00404a7c  lw a0,0x40(s8)
00404a80  move a1,v0
00404a84  jal 0x00404448
00404a88  _nop
00404a8c  lw gp,0x10(s8)
00404a90  addiu v1,s8,0x20
00404a94  addiu v1,v1,0x4
00404a98  move a0,v1
00404a9c  move a1,v0
00404aa0  lw v0,-0x7f28(gp)
00404aa4  nop
00404aa8  move t9,v0
00404aac  jalr t9
00404ab0  _nop
00404ab4  lw gp,0x10(s8)
00404ab8  sb zero,0x35(s8)
00404abc  lui v0,0x40
00404ac0  addiu a0,v0,0x5d58
00404ac4  li a1,0x2
00404ac8  lw v0,-0x7fc4(gp)
00404acc  nop
00404ad0  move t9,v0
00404ad4  jalr t9
00404ad8  _nop
00404adc  lw gp,0x10(s8)
00404ae0  sw v0,0x18(s8)
00404ae4  lw v0,0x18(s8)
00404ae8  nop
00404aec  beq v0,zero,0x00404bc4
00404af0  _nop
00404af4  lw a0,0x18(s8)
00404af8  lui a1,0x1
00404afc  clear a2
00404b00  lw v0,-0x7f64(gp)
00404b04  nop
00404b08  move t9,v0
00404b0c  jalr t9
00404b10  _nop
00404b14  lw gp,0x10(s8)
00404b18  move v1,v0
00404b1c  li v0,-0x1
00404b20  beq v1,v0,0x00404c14
00404b24  _nop
00404b28  addiu v0,s8,0x20
00404b2c  lw a0,0x18(s8)
00404b30  move a1,v0
00404b34  li a2,0x18
00404b38  lw v0,-0x7f74(gp)
00404b3c  nop
00404b40  move t9,v0
00404b44  jalr t9
00404b48  _nop
00404b4c  lw gp,0x10(s8)
00404b50  move v1,v0
00404b54  li v0,-0x1
00404b58  bne v1,v0,0x00404b88
00404b5c  _nop
00404b60  lui v0,0x40
00404b64  addiu a0,v0,0x5d68
00404b68  lw v0,-0x7f50(gp)
00404b6c  nop
00404b70  move t9,v0
00404b74  jalr t9
00404b78  _nop
00404b7c  lw gp,0x10(s8)
00404b80  b 0x00404c18
00404b84  _nop
00404b88  lui v0,0x40
00404b8c  addiu a0,v0,0x5d7c
00404b90  lw v0,-0x7f50(gp)
00404b94  nop
00404b98  move t9,v0
00404b9c  jalr t9
00404ba0  _nop
00404ba4  lw gp,0x10(s8)
00404ba8  nop
00404bac  lw v0,0x18(s8)
00404bb0  nop
00404bb4  beq v0,zero,0x00404c08
00404bb8  _nop
00404bbc  b 0x00404bec
00404bc0  _nop
00404bc4  lui v0,0x40
00404bc8  addiu a0,v0,0x5da8
00404bcc  lw v0,-0x7f50(gp)
00404bd0  nop
00404bd4  move t9,v0
00404bd8  jalr t9
00404bdc  _nop
00404be0  lw gp,0x10(s8)
00404be4  b 0x00404c18
00404be8  _nop
00404bec  lw a0,0x18(s8)
00404bf0  lw v0,-0x7fcc(gp)
00404bf4  nop
00404bf8  move t9,v0
00404bfc  jalr t9
00404c00  _nop
00404c04  lw gp,0x10(s8)
00404c08  li v0,0x1
00404c0c  b 0x00404c48
00404c10  _nop
00404c14  nop
00404c18  lw v0,0x18(s8)
00404c1c  nop
00404c20  beq v0,zero,0x00404c44
00404c24  _nop
00404c28  lw a0,0x18(s8)
00404c2c  lw v0,-0x7fcc(gp)
00404c30  nop
00404c34  move t9,v0
00404c38  jalr t9
00404c3c  _nop
00404c40  lw gp,0x10(s8)
00404c44  clear v0
00404c48  move sp,s8
00404c4c  lw ra,0x3c(sp)
00404c50  lw s8,0x38(sp)
00404c54  addiu sp,sp,0x40
00404c58  jr ra
00404c5c  _nop
