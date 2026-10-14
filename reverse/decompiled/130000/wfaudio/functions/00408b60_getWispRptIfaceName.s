# getWispRptIfaceName @ 00408b60
00408b60  addiu sp,sp,-0x48
00408b64  sw ra,0x44(sp)
00408b68  sw s2,0x40(sp)
00408b6c  sw s1,0x3c(sp)
00408b70  sw s0,0x38(sp)
00408b74  lui gp,0x43
00408b78  addiu gp,gp,-0x4f70
00408b7c  sw gp,0x10(sp)
00408b80  move s2,a1
00408b84  move s0,a0
00408b88  sw zero,0x18(sp)
00408b8c  sw zero,0x1c(sp)
00408b90  sw zero,0x20(sp)
00408b94  sw zero,0x24(sp)
00408b98  sw zero,0x28(sp)
00408b9c  sw zero,0x2c(sp)
00408ba0  bne a1,zero,0x00408bb4
00408ba4  _sw zero,0x30(sp)
00408ba8  lw t9,-0x7e2c(gp)
00408bac  b 0x00408bc8
00408bb0  _li a0,0xfa
00408bb4  li v0,0x1
00408bb8  bne a1,v0,0x00408cfc
00408bbc  _li v0,-0x1
00408bc0  lw t9,-0x7e2c(gp)
00408bc4  li a0,0xfc
00408bc8  jalr t9
00408bcc  _addiu a1,sp,0x18
00408bd0  lw gp,0x10(sp)
00408bd4  li a0,0xc0
00408bd8  lw t9,-0x7e2c(gp)
00408bdc  nop
00408be0  jalr t9
00408be4  _addiu a1,sp,0x20
00408be8  lw v1,0x20(sp)
00408bec  li v0,0x2
00408bf0  lw gp,0x10(sp)
00408bf4  bne v1,v0,0x00408cfc
00408bf8  _li v0,-0x1
00408bfc  lw t9,-0x7eac(gp)
00408c00  nop
00408c04  jalr t9
00408c08  _addiu s1,sp,0x24
00408c0c  lw gp,0x10(sp)
00408c10  lui a1,0x41
00408c14  addiu a1,a1,0x1510
00408c18  lw t9,-0x7f2c(gp)
00408c1c  move a2,s2
00408c20  jalr t9
00408c24  _move a0,s1
00408c28  lw gp,0x10(sp)
00408c2c  nop
00408c30  lw t9,-0x7df8(gp)
00408c34  nop
00408c38  jalr t9
00408c3c  _move a0,s1
00408c40  lw gp,0x10(sp)
00408c44  li a0,0x3b
00408c48  lw t9,-0x7e2c(gp)
00408c4c  nop
00408c50  jalr t9
00408c54  _addiu a1,sp,0x1c
00408c58  lw v0,0x1c(sp)
00408c5c  lw gp,0x10(sp)
00408c60  beq v0,zero,0x00408c70
00408c64  _li v1,0x3
00408c68  bne v0,v1,0x00408cb8
00408c6c  _nop
00408c70  lw v0,0x18(sp)
00408c74  nop
00408c78  beq v0,zero,0x00408cb8
00408c7c  _lui s1,0x41
00408c80  lw t9,-0x7e80(gp)
00408c84  move a0,s0
00408c88  jalr t9
00408c8c  _addiu a1,s1,0x1518
00408c90  lw gp,0x10(sp)
00408c94  bne v0,zero,0x00408ce8
00408c98  _move a0,s0
00408c9c  lw t9,-0x7e70(gp)
00408ca0  nop
00408ca4  jalr t9
00408ca8  _addiu a1,s1,0x1518
00408cac  lw gp,0x10(sp)
00408cb0  b 0x00408ce8
00408cb4  _nop
00408cb8  lw t9,-0x7e80(gp)
00408cbc  lui a1,0x41
00408cc0  move a0,s0
00408cc4  jalr t9
00408cc8  _addiu a1,a1,0x1518
00408ccc  lw gp,0x10(sp)
00408cd0  beq v0,zero,0x00408ce8
00408cd4  _nop
00408cd8  sb zero,0x3(v0)
00408cdc  sb zero,0x0(v0)
00408ce0  sb zero,0x1(v0)
00408ce4  sb zero,0x2(v0)
00408ce8  lw t9,-0x7e64(gp)
00408cec  nop
00408cf0  jalr t9
00408cf4  _nop
00408cf8  clear v0
00408cfc  lw ra,0x44(sp)
00408d00  lw s2,0x40(sp)
00408d04  lw s1,0x3c(sp)
00408d08  lw s0,0x38(sp)
00408d0c  jr ra
00408d10  _addiu sp,sp,0x48
