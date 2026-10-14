# json_object_put @ 00435a58
00435a58  addiu sp,sp,-0x20
00435a5c  sw ra,0x1c(sp)
00435a60  sw s8,0x18(sp)
00435a64  move s8,sp
00435a68  sw a0,0x20(s8)
00435a6c  lw v0,0x20(s8)
00435a70  nop
00435a74  beq v0,zero,0x00435b20
00435a78  _nop
00435a7c  lw v0,0x20(s8)
00435a80  nop
00435a84  lw v0,0xc(v0)
00435a88  nop
00435a8c  addiu v1,v0,-0x1
00435a90  lw v0,0x20(s8)
00435a94  nop
00435a98  sw v1,0xc(v0)
00435a9c  lw v0,0x20(s8)
00435aa0  nop
00435aa4  lw v0,0xc(v0)
00435aa8  nop
00435aac  bne v0,zero,0x00435b20
00435ab0  _nop
00435ab4  lw v0,0x20(s8)
00435ab8  nop
00435abc  lw v0,0x20(v0)
00435ac0  nop
00435ac4  beq v0,zero,0x00435af8
00435ac8  _nop
00435acc  lw v0,0x20(s8)
00435ad0  nop
00435ad4  lw v0,0x20(v0)
00435ad8  lw v1,0x20(s8)
00435adc  nop
00435ae0  lw v1,0x24(v1)
00435ae4  lw a0,0x20(s8)
00435ae8  move a1,v1
00435aec  move t9,v0
00435af0  jalr t9
00435af4  _nop
00435af8  lw v0,0x20(s8)
00435afc  nop
00435b00  lw v0,0x4(v0)
00435b04  lw a0,0x20(s8)
00435b08  move t9,v0
00435b0c  jalr t9
00435b10  _nop
00435b14  li v0,0x1
00435b18  b 0x00435b24
00435b1c  _nop
00435b20  clear v0
00435b24  move sp,s8
00435b28  lw ra,0x1c(sp)
00435b2c  lw s8,0x18(sp)
00435b30  addiu sp,sp,0x20
00435b34  jr ra
00435b38  _nop
