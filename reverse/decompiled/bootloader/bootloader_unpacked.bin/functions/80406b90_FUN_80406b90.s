# FUN_80406b90 @ 80406b90
80406b90  addiu sp,sp,-0x28
80406b94  sw ra,0x24(sp)
80406b98  sw s3,0x20(sp)
80406b9c  sw s2,0x1c(sp)
80406ba0  sw s1,0x18(sp)
80406ba4  sw s0,0x14(sp)
80406ba8  move s0,a0
80406bac  move s2,a1
80406bb0  move s3,a2
80406bb4  lb s1,0x0(s0)
80406bb8  jal 0x8040691c
80406bbc  _move a0,s1
80406bc0  bne v0,zero,0x80406bb4
80406bc4  _addiu s0,s0,0x1
80406bc8  addiu s0,s0,-0x1
80406bcc  li v0,0x2d
80406bd0  bne s1,v0,0x80406be0
80406bd4  _clear s1
80406bd8  addiu s0,s0,0x1
80406bdc  li s1,-0x1
80406be0  move a0,s0
80406be4  move a1,s2
80406be8  jal 0x80406c50
80406bec  _move a2,s3
80406bf0  bgez v0,0x80406c24
80406bf4  _subu v1,zero,v0
80406bf8  lui a0,0x8000
80406bfc  bne v0,a0,0x80406c14
80406c00  _nop
80406c04  beq s1,zero,0x80406c2c
80406c08  _nop
80406c0c  j 0x80406c34
80406c10  _nop
80406c14  beq s1,zero,0x80406c2c
80406c18  _lui v0,0x8000
80406c1c  j 0x80406c34
80406c20  _nop
80406c24  j 0x80406c34
80406c28  _movn v0,v1,s1
80406c2c  lui v0,0x7fff
80406c30  ori v0,v0,0xffff
80406c34  lw ra,0x24(sp)
80406c38  lw s3,0x20(sp)
80406c3c  lw s2,0x1c(sp)
80406c40  lw s1,0x18(sp)
80406c44  lw s0,0x14(sp)
80406c48  jr ra
80406c4c  _addiu sp,sp,0x28
