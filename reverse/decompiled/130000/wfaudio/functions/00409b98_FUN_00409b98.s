# FUN_00409b98 @ 00409b98
00409b98  addiu sp,sp,-0xb0
00409b9c  sw ra,0xac(sp)
00409ba0  sw s1,0xa8(sp)
00409ba4  sw s0,0xa4(sp)
00409ba8  lui gp,0x43
00409bac  addiu gp,gp,-0x4f70
00409bb0  sw gp,0x18(sp)
00409bb4  lw t9,-0x7ee8(gp)
00409bb8  addiu s0,sp,0x20
00409bbc  li a2,0x80
00409bc0  move s1,a0
00409bc4  clear a1
00409bc8  jalr t9
00409bcc  _move a0,s0
00409bd0  li v0,0x1
00409bd4  lw gp,0x18(sp)
00409bd8  bne s1,v0,0x00409ce8
00409bdc  _lui a2,0x42
00409be0  lb v0,0x3818(a2)
00409be4  nop
00409be8  beq v0,zero,0x00409d30
00409bec  _nop
00409bf0  lui a3,0x42
00409bf4  lb v0,0x37bc(a3)
00409bf8  nop
00409bfc  beq v0,zero,0x00409c80
00409c00  _lui v1,0x42
00409c04  lb a0,0x3828(v1)
00409c08  nop
00409c0c  beq a0,zero,0x00409c44
00409c10  _lui v0,0x42
00409c14  lb a0,0x355c(v0)
00409c18  nop
00409c1c  beq a0,zero,0x00409d30
00409c20  _addiu v1,v1,0x3828
00409c24  addiu v0,v0,0x355c
00409c28  lui a1,0x41
00409c2c  lw t9,-0x7f2c(gp)
00409c30  sw v1,0x10(sp)
00409c34  sw v0,0x14(sp)
00409c38  move a0,s0
00409c3c  b 0x00409c68
00409c40  _addiu a1,a1,0x1724
00409c44  lb v1,0x355c(v0)
00409c48  nop
00409c4c  beq v1,zero,0x00409d30
00409c50  _addiu v0,v0,0x355c
00409c54  lw t9,-0x7f2c(gp)
00409c58  lui a1,0x41
00409c5c  sw v0,0x10(sp)
00409c60  move a0,s0
00409c64  addiu a1,a1,0x1730
00409c68  addiu a2,a2,0x3818
00409c6c  addiu a3,a3,0x37bc
00409c70  jalr t9
00409c74  _nop
00409c78  b 0x00409d28
00409c7c  _nop
00409c80  lb a0,0x3828(v1)
00409c84  nop
00409c88  beq a0,zero,0x00409cc0
00409c8c  _lui v0,0x42
00409c90  lb a0,0x355c(v0)
00409c94  nop
00409c98  beq a0,zero,0x00409d30
00409c9c  _addiu v0,v0,0x355c
00409ca0  lui a1,0x41
00409ca4  lw t9,-0x7f2c(gp)
00409ca8  sw v0,0x10(sp)
00409cac  move a0,s0
00409cb0  addiu a1,a1,0x1730
00409cb4  addiu a2,a2,0x3818
00409cb8  b 0x00409c70
00409cbc  _addiu a3,v1,0x3828
00409cc0  lb v1,0x355c(v0)
00409cc4  nop
00409cc8  beq v1,zero,0x00409d30
00409ccc  _lui a1,0x41
00409cd0  lw t9,-0x7f2c(gp)
00409cd4  move a0,s0
00409cd8  addiu a1,a1,0x173c
00409cdc  addiu a2,a2,0x3818
00409ce0  b 0x00409d20
00409ce4  _addiu a3,v0,0x355c
00409ce8  lb v0,0x3818(a2)
00409cec  nop
00409cf0  beq v0,zero,0x00409d30
00409cf4  _nop
00409cf8  lui a3,0x42
00409cfc  lb v0,0x355c(a3)
00409d00  nop
00409d04  beq v0,zero,0x00409d30
00409d08  _lui a1,0x41
00409d0c  lw t9,-0x7f2c(gp)
00409d10  move a0,s0
00409d14  addiu a1,a1,0x173c
00409d18  addiu a2,a2,0x3818
00409d1c  addiu a3,a3,0x355c
00409d20  jalr t9
00409d24  _nop
00409d28  lw gp,0x18(sp)
00409d2c  nop
00409d30  lw t9,-0x7f48(gp)
00409d34  lui a0,0x41
00409d38  lui a1,0x41
00409d3c  lui a2,0x41
00409d40  lui a3,0x41
00409d44  addiu a0,a0,0x1744
00409d48  addiu a1,a1,0x1550
00409d4c  addiu a2,a2,0x1750
00409d50  jalr t9
00409d54  _addiu a3,a3,0x9e4
00409d58  lb v0,0x20(sp)
00409d5c  lw gp,0x18(sp)
00409d60  beq v0,zero,0x00409d78
00409d64  _lui a0,0x41
00409d68  lw t9,-0x7db8(gp)
00409d6c  addiu a0,a0,0x1754
00409d70  jalr t9
00409d74  _addiu a1,sp,0x20
00409d78  lw ra,0xac(sp)
00409d7c  lw s1,0xa8(sp)
00409d80  lw s0,0xa4(sp)
00409d84  jr ra
00409d88  _addiu sp,sp,0xb0
