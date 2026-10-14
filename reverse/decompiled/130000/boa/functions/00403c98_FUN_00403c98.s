# FUN_00403c98 @ 00403c98
00403c98  lui gp,0x7
00403c9c  addiu gp,gp,-0x1668
00403ca0  addu gp,gp,t9
00403ca4  addiu sp,sp,-0x20
00403ca8  sw ra,0x1c(sp)
00403cac  sw gp,0x10(sp)
00403cb0  lw v0,-0x7a84(gp)
00403cb4  nop
00403cb8  beq v0,zero,0x00403ce0
00403cbc  _nop
00403cc0  lw a0,-0x7fdc(gp)
00403cc4  lw a1,-0x7fe8(gp)
00403cc8  lw t9,-0x7a84(gp)
00403ccc  addiu a0,a0,0x7b58
00403cd0  jalr t9
00403cd4  _addiu a1,a1,-0x52b8
00403cd8  lw gp,0x10(sp)
00403cdc  nop
00403ce0  lw a0,-0x7fe8(gp)
00403ce4  nop
00403ce8  lw v0,-0x7ff0(a0)
00403cec  nop
00403cf0  beq v0,zero,0x00403d14
00403cf4  _nop
00403cf8  lw t9,-0x7f5c(gp)
00403cfc  nop
00403d00  beq t9,zero,0x00403d14
00403d04  _addiu a0,a0,-0x7ff0
00403d08  lw ra,0x1c(sp)
00403d0c  jr t9
00403d10  _addiu sp,sp,0x20
00403d14  lw ra,0x1c(sp)
00403d18  nop
00403d1c  jr ra
00403d20  _addiu sp,sp,0x20
