# FUN_00410b90 @ 00410b90
00410b90  lui gp,0x17
00410b94  addiu gp,gp,0x4480
00410b98  addu gp,gp,t9
00410b9c  addiu sp,sp,-0x28
00410ba0  sw ra,0x24(sp)
00410ba4  sw s2,0x20(sp)
00410ba8  sw s1,0x1c(sp)
00410bac  sw s0,0x18(sp)
00410bb0  sw gp,0x10(sp)
00410bb4  lw v0,-0x7fe8(gp)
00410bb8  nop
00410bbc  lbu v0,-0x1670(v0)
00410bc0  nop
00410bc4  bne v0,zero,0x00410c80
00410bc8  _nop
00410bcc  lw v0,-0x6c44(gp)
00410bd0  nop
00410bd4  beq v0,zero,0x00410bf8
00410bd8  _nop
00410bdc  lw v0,-0x7fe4(gp)
00410be0  lw t9,-0x6c44(gp)
00410be4  lw a0,0x0(v0)
00410be8  jalr t9
00410bec  _nop
00410bf0  lw gp,0x10(sp)
00410bf4  nop
00410bf8  lw s1,-0x7fdc(gp)
00410bfc  lw s2,-0x7fe0(gp)
00410c00  lw s0,-0x7fe8(gp)
00410c04  addiu s1,s1,-0x6834
00410c08  subu s2,s2,s1
00410c0c  sra s2,s2,0x2
00410c10  b 0x00410c2c
00410c14  _addiu s2,s2,-0x1
00410c18  lw t9,0x0(a0)
00410c1c  nop
00410c20  jalr t9
00410c24  _sw v1,-0x166c(s0)
00410c28  lw gp,0x10(sp)
00410c2c  lw v0,-0x166c(s0)
00410c30  nop
00410c34  addiu v1,v0,0x1
00410c38  sll a0,v1,0x2
00410c3c  sltu v0,v0,s2
00410c40  bne v0,zero,0x00410c18
00410c44  _addu a0,a0,s1
00410c48  lw v0,-0x6744(gp)
00410c4c  nop
00410c50  beq v0,zero,0x00410c74
00410c54  _nop
00410c58  lw a0,-0x7fd8(gp)
00410c5c  lw t9,-0x6744(gp)
00410c60  nop
00410c64  jalr t9
00410c68  _addiu a0,a0,-0x6840
00410c6c  lw gp,0x10(sp)
00410c70  nop
00410c74  lw v0,-0x7fe8(gp)
00410c78  li v1,0x1
00410c7c  sb v1,-0x1670(v0)
00410c80  lw ra,0x24(sp)
00410c84  lw s2,0x20(sp)
00410c88  lw s1,0x1c(sp)
00410c8c  lw s0,0x18(sp)
00410c90  jr ra
00410c94  _addiu sp,sp,0x28
