# json_object_object_get_ex @ 00436a64
00436a64  lui gp,0x1e
00436a68  addiu gp,gp,0x38ac
00436a6c  addu gp,gp,t9
00436a70  addiu sp,sp,-0x20
00436a74  sw ra,0x1c(sp)
00436a78  sw s8,0x18(sp)
00436a7c  move s8,sp
00436a80  sw gp,0x10(sp)
00436a84  sw a0,0x20(s8)
00436a88  sw a1,0x24(s8)
00436a8c  sw a2,0x28(s8)
00436a90  lw v0,0x28(s8)
00436a94  nop
00436a98  beq v0,zero,0x00436aac
00436a9c  _nop
00436aa0  lw v0,0x28(s8)
00436aa4  nop
00436aa8  sw zero,0x0(v0)
00436aac  lw v0,0x20(s8)
00436ab0  nop
00436ab4  bne v0,zero,0x00436ac8
00436ab8  _nop
00436abc  clear v0
00436ac0  b 0x00436b3c
00436ac4  _nop
00436ac8  lw v0,0x20(s8)
00436acc  nop
00436ad0  lw v1,0x0(v0)
00436ad4  li v0,0x4
00436ad8  bne v1,v0,0x00436b1c
00436adc  _nop
00436ae0  lw v0,0x20(s8)
00436ae4  nop
00436ae8  lw v1,0x18(v0)
00436aec  lw v0,0x28(s8)
00436af0  move a0,v1
00436af4  lw a1,0x24(s8)
00436af8  move a2,v0
00436afc  lw v0,-0x6b64(gp)
00436b00  nop
00436b04  move t9,v0
00436b08  jalr t9
00436b0c  _nop
00436b10  lw gp,0x10(s8)
00436b14  b 0x00436b3c
00436b18  _nop
00436b1c  lw v0,0x28(s8)
00436b20  nop
00436b24  beq v0,zero,0x00436b38
00436b28  _nop
00436b2c  lw v0,0x28(s8)
00436b30  nop
00436b34  sw zero,0x0(v0)
00436b38  clear v0
00436b3c  move sp,s8
00436b40  lw ra,0x1c(sp)
00436b44  lw s8,0x18(sp)
00436b48  addiu sp,sp,0x20
00436b4c  jr ra
00436b50  _nop
