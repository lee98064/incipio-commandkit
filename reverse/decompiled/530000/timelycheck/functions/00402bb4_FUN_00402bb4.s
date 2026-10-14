# FUN_00402bb4 @ 00402bb4
00402bb4  addiu sp,sp,-0x30
00402bb8  sw ra,0x2c(sp)
00402bbc  lui gp,0x43
00402bc0  addiu gp,gp,0x3060
00402bc4  sw gp,0x10(sp)
00402bc8  lw t9,-0x7ec0(gp)
00402bcc  sw zero,0x18(sp)
00402bd0  sw zero,0x1c(sp)
00402bd4  sw zero,0x20(sp)
00402bd8  li a0,0xc0
00402bdc  jalr t9
00402be0  _addiu a1,sp,0x20
00402be4  lw v1,0x20(sp)
00402be8  li v0,0x1
00402bec  lw gp,0x10(sp)
00402bf0  beq v1,v0,0x00402c3c
00402bf4  _li a0,0xc1
00402bf8  lw t9,-0x7ec0(gp)
00402bfc  nop
00402c00  jalr t9
00402c04  _addiu a1,sp,0x18
00402c08  lw gp,0x10(sp)
00402c0c  li a0,0x68
00402c10  lw t9,-0x7ec0(gp)
00402c14  nop
00402c18  jalr t9
00402c1c  _addiu a1,sp,0x1c
00402c20  lw gp,0x10(sp)
00402c24  lw a0,0x20(sp)
00402c28  lw a1,0x1c(sp)
00402c2c  lw t9,-0x7f34(gp)
00402c30  lw a2,0x18(sp)
00402c34  jalr t9
00402c38  _nop
00402c3c  lw ra,0x2c(sp)
00402c40  nop
00402c44  jr ra
00402c48  _addiu sp,sp,0x30
