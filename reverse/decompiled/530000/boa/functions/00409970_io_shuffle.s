# io_shuffle @ 00409970
00409970  addiu sp,sp,-0x30
00409974  sw ra,0x2c(sp)
00409978  sw s4,0x28(sp)
0040997c  sw s3,0x24(sp)
00409980  sw s2,0x20(sp)
00409984  sw s1,0x1c(sp)
00409988  sw s0,0x18(sp)
0040998c  lui gp,0x47
00409990  addiu gp,gp,0x2630
00409994  sw gp,0x10(sp)
00409998  lw v1,0xc(a0)
0040999c  li v0,0x2
004099a0  bne v1,v0,0x004099b4
004099a4  _move s0,a0
004099a8  lw t9,-0x7dcc(gp)
004099ac  b 0x00409b18
004099b0  _nop
004099b4  lw v1,0x20(a0)
004099b8  lw v0,0x50(a0)
004099bc  lw s1,0x4(v1)
004099c0  lw a1,0x0(v1)
004099c4  li v1,0x1f00
004099c8  addiu s1,s1,0x1
004099cc  subu v0,v1,v0
004099d0  subu s1,s1,a1
004099d4  slt v1,v0,s1
004099d8  movn s1,v0,v1
004099dc  blez s1,0x00409b38
004099e0  _nop
004099e4  lw a0,0x28(a0)
004099e8  nop
004099ec  beq a0,zero,0x00409b38
004099f0  _nop
004099f4  lw t9,-0x7b94(gp)
004099f8  nop
004099fc  jalr t9
00409a00  _clear a2
00409a04  lw gp,0x10(sp)
00409a08  bgez v0,0x00409a28
00409a0c  _li s3,-0x1
00409a10  li v0,0xc
00409a14  lui a0,0x45
00409a18  lw t9,-0x7aec(gp)
00409a1c  sw v0,0x0(s0)
00409a20  b 0x00409bd8
00409a24  _addiu a0,a0,-0x5a80
00409a28  li s2,0x4
00409a2c  lw a1,0x8d0(s0)
00409a30  lw v0,0x50(s0)
00409a34  lw t9,-0x7cfc(gp)
00409a38  lw a0,0x28(s0)
00409a3c  addu a1,a1,v0
00409a40  jalr t9
00409a44  _move a2,s1
00409a48  lw gp,0x10(sp)
00409a4c  nop
00409a50  lw t9,-0x7ecc(gp)
00409a54  bne v0,s3,0x00409aac
00409a58  _nop
00409a5c  jalr t9
00409a60  _nop
00409a64  lw v0,0x0(v0)
00409a68  lw gp,0x10(sp)
00409a6c  beq v0,s2,0x00409a2c
00409a70  _li v1,0xb
00409a74  bne v0,v1,0x00409a98
00409a78  _li v0,0xc
00409a7c  lw v1,0x50(s0)
00409a80  lw v0,0x4c(s0)
00409a84  nop
00409a88  bne v1,v0,0x00409b38
00409a8c  _li v0,-0x1
00409a90  b 0x00409c18
00409a94  _nop
00409a98  lui a0,0x45
00409a9c  lw t9,-0x7aec(gp)
00409aa0  sw v0,0x0(s0)
00409aa4  b 0x00409bd8
00409aa8  _addiu a0,a0,-0x5a70
00409aac  bne v0,zero,0x00409ad0
00409ab0  _nop
00409ab4  lw t9,-0x7f9c(gp)
00409ab8  lw a0,0x28(s0)
00409abc  jalr t9
00409ac0  _nop
00409ac4  lw gp,0x10(sp)
00409ac8  b 0x00409b38
00409acc  _sw zero,0x28(s0)
00409ad0  lw a0,0x50(s0)
00409ad4  lw v1,0x20(s0)
00409ad8  addu a0,a0,v0
00409adc  sw a0,0x50(s0)
00409ae0  lw a0,0x0(v1)
00409ae4  nop
00409ae8  addu v0,a0,v0
00409aec  sw v0,0x0(v1)
00409af0  lw v0,0x20(s0)
00409af4  nop
00409af8  lw v1,0x0(v0)
00409afc  lw v0,0x4(v0)
00409b00  nop
00409b04  subu v1,v0,v1
00409b08  li v0,-0x1
00409b0c  bne v1,v0,0x00409b38
00409b10  _move a0,s0
00409b14  lw t9,-0x7dcc(gp)
00409b18  lw ra,0x2c(sp)
00409b1c  lw s4,0x28(sp)
00409b20  lw s3,0x24(sp)
00409b24  lw s2,0x20(sp)
00409b28  lw s1,0x1c(sp)
00409b2c  lw s0,0x18(sp)
00409b30  jr t9
00409b34  _addiu sp,sp,0x30
00409b38  lw s1,0x50(s0)
00409b3c  lw v0,0x4c(s0)
00409b40  nop
00409b44  subu s1,s1,v0
00409b48  bne s1,zero,0x00409b70
00409b4c  _li s4,-0x1
00409b50  lw v1,0x28(s0)
00409b54  nop
00409b58  beq v1,zero,0x00409c18
00409b5c  _clear v0
00409b60  sw zero,0x50(s0)
00409b64  sw zero,0x4c(s0)
00409b68  b 0x00409c18
00409b6c  _li v0,0x1
00409b70  li s3,0xb
00409b74  li s2,0x4
00409b78  lw a1,0x8d0(s0)
00409b7c  lw v0,0x4c(s0)
00409b80  lw t9,-0x7c34(gp)
00409b84  lw a0,0xb4(s0)
00409b88  addu a1,a1,v0
00409b8c  jalr t9
00409b90  _move a2,s1
00409b94  lw gp,0x10(sp)
00409b98  nop
00409b9c  lw t9,-0x7ecc(gp)
00409ba0  bne v0,s4,0x00409be8
00409ba4  _move v1,v0
00409ba8  jalr t9
00409bac  _nop
00409bb0  lw v0,0x0(v0)
00409bb4  lw gp,0x10(sp)
00409bb8  beq v0,s3,0x00409c14
00409bbc  _nop
00409bc0  beq v0,s2,0x00409b78
00409bc4  _li v0,0xc
00409bc8  lw t9,-0x7aec(gp)
00409bcc  lui a0,0x45
00409bd0  sw v0,0x0(s0)
00409bd4  addiu a0,a0,-0x5a60
00409bd8  jalr t9
00409bdc  _nop
00409be0  b 0x00409c18
00409be4  _clear v0
00409be8  lw a1,0x4c(s0)
00409bec  lw a0,0x34(s0)
00409bf0  li v0,0x1
00409bf4  addu a1,a1,v1
00409bf8  addu a0,a0,v1
00409bfc  sw a1,0x4c(s0)
00409c00  bne s1,v1,0x00409c18
00409c04  _sw a0,0x34(s0)
00409c08  sw zero,0x50(s0)
00409c0c  b 0x00409c18
00409c10  _sw zero,0x4c(s0)
00409c14  li v0,-0x1
00409c18  lw ra,0x2c(sp)
00409c1c  lw s4,0x28(sp)
00409c20  lw s3,0x24(sp)
00409c24  lw s2,0x20(sp)
00409c28  lw s1,0x1c(sp)
00409c2c  lw s0,0x18(sp)
00409c30  jr ra
00409c34  _addiu sp,sp,0x30
