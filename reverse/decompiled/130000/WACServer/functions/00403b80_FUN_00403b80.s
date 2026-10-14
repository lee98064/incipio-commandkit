# FUN_00403b80 @ 00403b80
00403b80  addiu sp,sp,-0x28
00403b84  sw ra,0x24(sp)
00403b88  sw s1,0x20(sp)
00403b8c  sw s0,0x1c(sp)
00403b90  lui gp,0x44
00403b94  addiu gp,gp,-0x4fc0
00403b98  sw gp,0x10(sp)
00403b9c  move s0,a2
00403ba0  andi a1,a1,0xff
00403ba4  beq a2,zero,0x00403c38
00403ba8  _move s1,a0
00403bac  bne a1,zero,0x00403c1c
00403bb0  _nop
00403bb4  beq a0,zero,0x00403c38
00403bb8  _lui a1,0x42
00403bbc  lw t9,-0x7e00(gp)
00403bc0  nop
00403bc4  jalr t9
00403bc8  _addiu a1,a1,-0x2e48
00403bcc  lw gp,0x10(sp)
00403bd0  bne v0,zero,0x00403c38
00403bd4  _nop
00403bd8  lw t9,-0x7dc0(gp)
00403bdc  sw s1,0x1c(s0)
00403be0  jalr t9
00403be4  _li a0,0x888
00403be8  lw gp,0x10(sp)
00403bec  beq v0,zero,0x00403c38
00403bf0  _sw v0,0x1c(s0)
00403bf4  lw t9,-0x7d98(gp)
00403bf8  move a0,v0
00403bfc  move a1,s1
00403c00  jalr t9
00403c04  _li a2,0x888
00403c08  lw gp,0x10(sp)
00403c0c  nop
00403c10  lw t9,-0x7dd0(gp)
00403c14  b 0x00403c24
00403c18  _addiu a0,s0,0x24
00403c1c  lw t9,-0x7dd0(gp)
00403c20  addiu a0,a2,0x8
00403c24  lw ra,0x24(sp)
00403c28  lw s1,0x20(sp)
00403c2c  lw s0,0x1c(sp)
00403c30  jr t9
00403c34  _addiu sp,sp,0x28
00403c38  lw ra,0x24(sp)
00403c3c  lw s1,0x20(sp)
00403c40  lw s0,0x1c(sp)
00403c44  jr ra
00403c48  _addiu sp,sp,0x28
