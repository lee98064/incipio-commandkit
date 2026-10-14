# FUN_00403c40 @ 00403c40
00403c40  addiu sp,sp,-0x28
00403c44  sw ra,0x24(sp)
00403c48  sw s8,0x20(sp)
00403c4c  move s8,sp
00403c50  lui gp,0x42
00403c54  addiu gp,gp,-0x21a0
00403c58  sw gp,0x10(sp)
00403c5c  li v0,0x64
00403c60  sw v0,0x1c(s8)
00403c64  lui v0,0x40
00403c68  addiu a0,v0,0x5c80
00403c6c  li a1,0x2
00403c70  lw v0,-0x7fc4(gp)
00403c74  nop
00403c78  move t9,v0
00403c7c  jalr t9
00403c80  _nop
00403c84  lw gp,0x10(s8)
00403c88  sw v0,0x18(s8)
00403c8c  lw v0,0x18(s8)
00403c90  nop
00403c94  blez v0,0x00403d40
00403c98  _nop
00403c9c  lw a0,0x18(s8)
00403ca0  lui a1,0x1
00403ca4  clear a2
00403ca8  lw v0,-0x7f64(gp)
00403cac  nop
00403cb0  move t9,v0
00403cb4  jalr t9
00403cb8  _nop
00403cbc  lw gp,0x10(s8)
00403cc0  addiu v0,s8,0x1c
00403cc4  lw a0,0x18(s8)
00403cc8  move a1,v0
00403ccc  li a2,0x4
00403cd0  lw v0,-0x7f74(gp)
00403cd4  nop
00403cd8  move t9,v0
00403cdc  jalr t9
00403ce0  _nop
00403ce4  lw gp,0x10(s8)
00403ce8  move v1,v0
00403cec  li v0,-0x1
00403cf0  bne v1,v0,0x00403d18
00403cf4  _nop
00403cf8  lui v0,0x40
00403cfc  addiu a0,v0,0x5c90
00403d00  lw v0,-0x7f50(gp)
00403d04  nop
00403d08  move t9,v0
00403d0c  jalr t9
00403d10  _nop
00403d14  lw gp,0x10(s8)
00403d18  lui v0,0x40
00403d1c  addiu a0,v0,0x5cbc
00403d20  lw v0,-0x7f50(gp)
00403d24  nop
00403d28  move t9,v0
00403d2c  jalr t9
00403d30  _nop
00403d34  lw gp,0x10(s8)
00403d38  b 0x00403d60
00403d3c  _nop
00403d40  lui v0,0x40
00403d44  addiu a0,v0,0x5cd8
00403d48  lw v0,-0x7f50(gp)
00403d4c  nop
00403d50  move t9,v0
00403d54  jalr t9
00403d58  _nop
00403d5c  lw gp,0x10(s8)
00403d60  lw a0,0x18(s8)
00403d64  lw v0,-0x7fcc(gp)
00403d68  nop
00403d6c  move t9,v0
00403d70  jalr t9
00403d74  _nop
00403d78  lw gp,0x10(s8)
00403d7c  move sp,s8
00403d80  lw ra,0x24(sp)
00403d84  lw s8,0x20(sp)
00403d88  addiu sp,sp,0x28
00403d8c  jr ra
00403d90  _nop
