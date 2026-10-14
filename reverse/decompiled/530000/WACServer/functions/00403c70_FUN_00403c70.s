# FUN_00403c70 @ 00403c70
00403c70  addiu sp,sp,-0x28
00403c74  sw ra,0x24(sp)
00403c78  sw s1,0x20(sp)
00403c7c  sw s0,0x1c(sp)
00403c80  lui gp,0x44
00403c84  addiu gp,gp,-0x4fc0
00403c88  sw gp,0x10(sp)
00403c8c  move s0,a2
00403c90  andi a1,a1,0xff
00403c94  beq a2,zero,0x00403d28
00403c98  _move s1,a0
00403c9c  bne a1,zero,0x00403d0c
00403ca0  _nop
00403ca4  beq a0,zero,0x00403d28
00403ca8  _lui a1,0x42
00403cac  lw t9,-0x7e00(gp)
00403cb0  nop
00403cb4  jalr t9
00403cb8  _addiu a1,a1,-0x2c68
00403cbc  lw gp,0x10(sp)
00403cc0  bne v0,zero,0x00403d28
00403cc4  _nop
00403cc8  lw t9,-0x7dc0(gp)
00403ccc  sw s1,0x1c(s0)
00403cd0  jalr t9
00403cd4  _li a0,0x888
00403cd8  lw gp,0x10(sp)
00403cdc  beq v0,zero,0x00403d28
00403ce0  _sw v0,0x1c(s0)
00403ce4  lw t9,-0x7d98(gp)
00403ce8  move a0,v0
00403cec  move a1,s1
00403cf0  jalr t9
00403cf4  _li a2,0x888
00403cf8  lw gp,0x10(sp)
00403cfc  nop
00403d00  lw t9,-0x7dd0(gp)
00403d04  b 0x00403d14
00403d08  _addiu a0,s0,0x24
00403d0c  lw t9,-0x7dd0(gp)
00403d10  addiu a0,a2,0x8
00403d14  lw ra,0x24(sp)
00403d18  lw s1,0x20(sp)
00403d1c  lw s0,0x1c(sp)
00403d20  jr t9
00403d24  _addiu sp,sp,0x28
00403d28  lw ra,0x24(sp)
00403d2c  lw s1,0x20(sp)
00403d30  lw s0,0x1c(sp)
00403d34  jr ra
00403d38  _addiu sp,sp,0x28
