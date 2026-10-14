# req_write @ 00405b20
00405b20  addiu sp,sp,-0x30
00405b24  sw ra,0x2c(sp)
00405b28  sw s1,0x28(sp)
00405b2c  sw s0,0x24(sp)
00405b30  lui gp,0x47
00405b34  addiu gp,gp,0x2630
00405b38  sw gp,0x10(sp)
00405b3c  lw t9,-0x7f1c(gp)
00405b40  sw a1,0x18(sp)
00405b44  move s0,a0
00405b48  jalr t9
00405b4c  _move a0,a1
00405b50  lw gp,0x10(sp)
00405b54  lw a1,0x18(sp)
00405b58  beq v0,zero,0x00405b74
00405b5c  _move s1,v0
00405b60  lw v0,0x0(s0)
00405b64  nop
00405b68  sltiu v0,v0,0xb
00405b6c  bne v0,zero,0x00405b80
00405b70  _nop
00405b74  lw v0,0x50(s0)
00405b78  b 0x00405bf0
00405b7c  _nop
00405b80  lw v0,0x50(s0)
00405b84  nop
00405b88  addu v1,s1,v0
00405b8c  sltiu v1,v1,0x2001
00405b90  bne v1,zero,0x00405bcc
00405b94  _move a2,s1
00405b98  lw v1,-0x7e40(gp)
00405b9c  lw t9,-0x7c44(gp)
00405ba0  li a3,0x2000
00405ba4  lw a0,0x0(v1)
00405ba8  lui a1,0x45
00405bac  subu a3,a3,v0
00405bb0  addiu a1,a1,-0x6780
00405bb4  jalr t9
00405bb8  _move a2,s1
00405bbc  li v0,0xc
00405bc0  sw v0,0x0(s0)
00405bc4  b 0x00405bf0
00405bc8  _li v0,-0x1
00405bcc  lw a0,0x8d0(s0)
00405bd0  lw t9,-0x7ad4(gp)
00405bd4  nop
00405bd8  jalr t9
00405bdc  _addu a0,a0,v0
00405be0  lw v0,0x50(s0)
00405be4  nop
00405be8  addu v0,s1,v0
00405bec  sw v0,0x50(s0)
00405bf0  lw ra,0x2c(sp)
00405bf4  lw s1,0x28(sp)
00405bf8  lw s0,0x24(sp)
00405bfc  jr ra
00405c00  _addiu sp,sp,0x30
