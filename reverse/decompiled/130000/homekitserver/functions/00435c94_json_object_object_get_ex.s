# json_object_object_get_ex @ 00435c94
00435c94  lui gp,0x1e
00435c98  addiu gp,gp,0x37ec
00435c9c  addu gp,gp,t9
00435ca0  addiu sp,sp,-0x20
00435ca4  sw ra,0x1c(sp)
00435ca8  sw s8,0x18(sp)
00435cac  move s8,sp
00435cb0  sw gp,0x10(sp)
00435cb4  sw a0,0x20(s8)
00435cb8  sw a1,0x24(s8)
00435cbc  sw a2,0x28(s8)
00435cc0  lw v0,0x28(s8)
00435cc4  nop
00435cc8  beq v0,zero,0x00435cdc
00435ccc  _nop
00435cd0  lw v0,0x28(s8)
00435cd4  nop
00435cd8  sw zero,0x0(v0)
00435cdc  lw v0,0x20(s8)
00435ce0  nop
00435ce4  bne v0,zero,0x00435cf8
00435ce8  _nop
00435cec  clear v0
00435cf0  b 0x00435d6c
00435cf4  _nop
00435cf8  lw v0,0x20(s8)
00435cfc  nop
00435d00  lw v1,0x0(v0)
00435d04  li v0,0x4
00435d08  bne v1,v0,0x00435d4c
00435d0c  _nop
00435d10  lw v0,0x20(s8)
00435d14  nop
00435d18  lw v1,0x18(v0)
00435d1c  lw v0,0x28(s8)
00435d20  move a0,v1
00435d24  lw a1,0x24(s8)
00435d28  move a2,v0
00435d2c  lw v0,-0x6b74(gp)
00435d30  nop
00435d34  move t9,v0
00435d38  jalr t9
00435d3c  _nop
00435d40  lw gp,0x10(s8)
00435d44  b 0x00435d6c
00435d48  _nop
00435d4c  lw v0,0x28(s8)
00435d50  nop
00435d54  beq v0,zero,0x00435d68
00435d58  _nop
00435d5c  lw v0,0x28(s8)
00435d60  nop
00435d64  sw zero,0x0(v0)
00435d68  clear v0
00435d6c  move sp,s8
00435d70  lw ra,0x1c(sp)
00435d74  lw s8,0x18(sp)
00435d78  addiu sp,sp,0x20
00435d7c  jr ra
00435d80  _nop
