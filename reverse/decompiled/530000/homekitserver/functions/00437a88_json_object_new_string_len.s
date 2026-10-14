# json_object_new_string_len @ 00437a88
00437a88  lui gp,0x1e
00437a8c  addiu gp,gp,0x2888
00437a90  addu gp,gp,t9
00437a94  addiu sp,sp,-0x28
00437a98  sw ra,0x24(sp)
00437a9c  sw s8,0x20(sp)
00437aa0  move s8,sp
00437aa4  sw gp,0x10(sp)
00437aa8  sw a0,0x28(s8)
00437aac  sw a1,0x2c(s8)
00437ab0  li a0,0x6
00437ab4  lw v0,-0x7fcc(gp)
00437ab8  nop
00437abc  addiu v0,v0,0x5bc0
00437ac0  move t9,v0
00437ac4  jalr t9
00437ac8  _nop
00437acc  lw gp,0x10(s8)
00437ad0  sw v0,0x18(s8)
00437ad4  lw v0,0x18(s8)
00437ad8  nop
00437adc  bne v0,zero,0x00437af0
00437ae0  _nop
00437ae4  clear v0
00437ae8  b 0x00437bb4
00437aec  _nop
00437af0  lw v0,0x18(s8)
00437af4  lw v1,-0x7fcc(gp)
00437af8  nop
00437afc  addiu v1,v1,0x7900
00437b00  sw v1,0x4(v0)
00437b04  lw v0,0x18(s8)
00437b08  lw v1,-0x7fcc(gp)
00437b0c  nop
00437b10  addiu v1,v1,0x7824
00437b14  sw v1,0x8(v0)
00437b18  lw v0,0x2c(s8)
00437b1c  nop
00437b20  addiu v0,v0,0x1
00437b24  move a0,v0
00437b28  lw v0,-0x619c(gp)
00437b2c  nop
00437b30  move t9,v0
00437b34  jalr t9
00437b38  _nop
00437b3c  lw gp,0x10(s8)
00437b40  move v1,v0
00437b44  lw v0,0x18(s8)
00437b48  nop
00437b4c  sw v1,0x18(v0)
00437b50  lw v0,0x18(s8)
00437b54  nop
00437b58  lw v1,0x18(v0)
00437b5c  lw v0,0x2c(s8)
00437b60  move a0,v1
00437b64  lw a1,0x28(s8)
00437b68  move a2,v0
00437b6c  lw v0,-0x5c9c(gp)
00437b70  nop
00437b74  move t9,v0
00437b78  jalr t9
00437b7c  _nop
00437b80  lw gp,0x10(s8)
00437b84  lw v0,0x18(s8)
00437b88  nop
00437b8c  lw v1,0x18(v0)
00437b90  lw v0,0x2c(s8)
00437b94  nop
00437b98  addu v0,v1,v0
00437b9c  sb zero,0x0(v0)
00437ba0  lw v0,0x18(s8)
00437ba4  lw v1,0x2c(s8)
00437ba8  nop
00437bac  sw v1,0x1c(v0)
00437bb0  lw v0,0x18(s8)
00437bb4  move sp,s8
00437bb8  lw ra,0x24(sp)
00437bbc  lw s8,0x20(sp)
00437bc0  addiu sp,sp,0x28
00437bc4  jr ra
00437bc8  _nop
