# FUN_00410bc0 @ 00410bc0
00410bc0  lui gp,0x17
00410bc4  addiu gp,gp,0x4580
00410bc8  addu gp,gp,t9
00410bcc  addiu sp,sp,-0x28
00410bd0  sw ra,0x24(sp)
00410bd4  sw s2,0x20(sp)
00410bd8  sw s1,0x1c(sp)
00410bdc  sw s0,0x18(sp)
00410be0  sw gp,0x10(sp)
00410be4  lw v0,-0x7fe8(gp)
00410be8  nop
00410bec  lbu v0,-0x1540(v0)
00410bf0  nop
00410bf4  bne v0,zero,0x00410cb0
00410bf8  _nop
00410bfc  lw v0,-0x6c40(gp)
00410c00  nop
00410c04  beq v0,zero,0x00410c28
00410c08  _nop
00410c0c  lw v0,-0x7fe4(gp)
00410c10  lw t9,-0x6c40(gp)
00410c14  lw a0,0x0(v0)
00410c18  jalr t9
00410c1c  _nop
00410c20  lw gp,0x10(sp)
00410c24  nop
00410c28  lw s1,-0x7fdc(gp)
00410c2c  lw s2,-0x7fe0(gp)
00410c30  lw s0,-0x7fe8(gp)
00410c34  addiu s1,s1,-0x6704
00410c38  subu s2,s2,s1
00410c3c  sra s2,s2,0x2
00410c40  b 0x00410c5c
00410c44  _addiu s2,s2,-0x1
00410c48  lw t9,0x0(a0)
00410c4c  nop
00410c50  jalr t9
00410c54  _sw v1,-0x153c(s0)
00410c58  lw gp,0x10(sp)
00410c5c  lw v0,-0x153c(s0)
00410c60  nop
00410c64  addiu v1,v0,0x1
00410c68  sll a0,v1,0x2
00410c6c  sltu v0,v0,s2
00410c70  bne v0,zero,0x00410c48
00410c74  _addu a0,a0,s1
00410c78  lw v0,-0x6740(gp)
00410c7c  nop
00410c80  beq v0,zero,0x00410ca4
00410c84  _nop
00410c88  lw a0,-0x7fd8(gp)
00410c8c  lw t9,-0x6740(gp)
00410c90  nop
00410c94  jalr t9
00410c98  _addiu a0,a0,-0x6710
00410c9c  lw gp,0x10(sp)
00410ca0  nop
00410ca4  lw v0,-0x7fe8(gp)
00410ca8  li v1,0x1
00410cac  sb v1,-0x1540(v0)
00410cb0  lw ra,0x24(sp)
00410cb4  lw s2,0x20(sp)
00410cb8  lw s1,0x1c(sp)
00410cbc  lw s0,0x18(sp)
00410cc0  jr ra
00410cc4  _addiu sp,sp,0x28
