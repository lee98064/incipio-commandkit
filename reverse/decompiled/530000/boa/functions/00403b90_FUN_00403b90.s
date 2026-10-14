# FUN_00403b90 @ 00403b90
00403b90  lui gp,0x7
00403b94  addiu gp,gp,-0x1560
00403b98  addu gp,gp,t9
00403b9c  addiu sp,sp,-0x28
00403ba0  sw ra,0x24(sp)
00403ba4  sw s2,0x20(sp)
00403ba8  sw s1,0x1c(sp)
00403bac  sw s0,0x18(sp)
00403bb0  sw gp,0x10(sp)
00403bb4  lw v0,-0x7fe8(gp)
00403bb8  nop
00403bbc  lbu v0,-0x52c0(v0)
00403bc0  nop
00403bc4  bne v0,zero,0x00403c80
00403bc8  _nop
00403bcc  lw v0,-0x7af8(gp)
00403bd0  nop
00403bd4  beq v0,zero,0x00403bf8
00403bd8  _nop
00403bdc  lw v0,-0x7fe4(gp)
00403be0  lw t9,-0x7af8(gp)
00403be4  lw a0,0x0(v0)
00403be8  jalr t9
00403bec  _nop
00403bf0  lw gp,0x10(sp)
00403bf4  nop
00403bf8  lw s1,-0x7fe8(gp)
00403bfc  lw s2,-0x7fe0(gp)
00403c00  lw s0,-0x7fe8(gp)
00403c04  addiu s1,s1,-0x7ff8
00403c08  subu s2,s2,s1
00403c0c  sra s2,s2,0x2
00403c10  b 0x00403c2c
00403c14  _addiu s2,s2,-0x1
00403c18  lw t9,0x0(a0)
00403c1c  nop
00403c20  jalr t9
00403c24  _sw v1,-0x52bc(s0)
00403c28  lw gp,0x10(sp)
00403c2c  lw v0,-0x52bc(s0)
00403c30  nop
00403c34  addiu v1,v0,0x1
00403c38  sll a0,v1,0x2
00403c3c  sltu v0,v0,s2
00403c40  bne v0,zero,0x00403c18
00403c44  _addu a0,a0,s1
00403c48  lw v0,-0x7c2c(gp)
00403c4c  nop
00403c50  beq v0,zero,0x00403c74
00403c54  _nop
00403c58  lw a0,-0x7fdc(gp)
00403c5c  lw t9,-0x7c2c(gp)
00403c60  nop
00403c64  jalr t9
00403c68  _addiu a0,a0,0x7b58
00403c6c  lw gp,0x10(sp)
00403c70  nop
00403c74  lw v0,-0x7fe8(gp)
00403c78  li v1,0x1
00403c7c  sb v1,-0x52c0(v0)
00403c80  lw ra,0x24(sp)
00403c84  lw s2,0x20(sp)
00403c88  lw s1,0x1c(sp)
00403c8c  lw s0,0x18(sp)
00403c90  jr ra
00403c94  _addiu sp,sp,0x28
