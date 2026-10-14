# json_object_object_add @ 00435a84
00435a84  lui gp,0x1e
00435a88  addiu gp,gp,0x39fc
00435a8c  addu gp,gp,t9
00435a90  addiu sp,sp,-0x30
00435a94  sw ra,0x2c(sp)
00435a98  sw s8,0x28(sp)
00435a9c  sw s0,0x24(sp)
00435aa0  move s8,sp
00435aa4  sw gp,0x10(sp)
00435aa8  sw a0,0x30(s8)
00435aac  sw a1,0x34(s8)
00435ab0  sw a2,0x38(s8)
00435ab4  sw zero,0x1c(s8)
00435ab8  lw v0,0x30(s8)
00435abc  nop
00435ac0  lw v0,0x18(v0)
00435ac4  nop
00435ac8  move a0,v0
00435acc  lw a1,0x34(s8)
00435ad0  lw v0,-0x71e0(gp)
00435ad4  nop
00435ad8  move t9,v0
00435adc  jalr t9
00435ae0  _nop
00435ae4  lw gp,0x10(s8)
00435ae8  sw v0,0x18(s8)
00435aec  lw v0,0x18(s8)
00435af0  nop
00435af4  bne v0,zero,0x00435b50
00435af8  _nop
00435afc  lw v0,0x30(s8)
00435b00  nop
00435b04  lw s0,0x18(v0)
00435b08  lw a0,0x34(s8)
00435b0c  lw v0,-0x7c84(gp)
00435b10  nop
00435b14  move t9,v0
00435b18  jalr t9
00435b1c  _nop
00435b20  lw gp,0x10(s8)
00435b24  move a0,s0
00435b28  move a1,v0
00435b2c  lw a2,0x38(s8)
00435b30  lw v0,-0x5ad8(gp)
00435b34  nop
00435b38  move t9,v0
00435b3c  jalr t9
00435b40  _nop
00435b44  lw gp,0x10(s8)
00435b48  b 0x00435ba0
00435b4c  _nop
00435b50  lw v0,0x18(s8)
00435b54  nop
00435b58  lw v0,0x4(v0)
00435b5c  nop
00435b60  sw v0,0x1c(s8)
00435b64  lw v0,0x1c(s8)
00435b68  nop
00435b6c  beq v0,zero,0x00435b90
00435b70  _nop
00435b74  lw a0,0x1c(s8)
00435b78  lw v0,-0x7dec(gp)
00435b7c  nop
00435b80  move t9,v0
00435b84  jalr t9
00435b88  _nop
00435b8c  lw gp,0x10(s8)
00435b90  lw v0,0x18(s8)
00435b94  lw v1,0x38(s8)
00435b98  nop
00435b9c  sw v1,0x4(v0)
00435ba0  move sp,s8
00435ba4  lw ra,0x2c(sp)
00435ba8  lw s8,0x28(sp)
00435bac  lw s0,0x24(sp)
00435bb0  addiu sp,sp,0x30
00435bb4  jr ra
00435bb8  _nop
