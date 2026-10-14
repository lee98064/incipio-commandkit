# FUN_00444b88 @ 00444b88
00444b88  addiu sp,sp,-0x100
00444b8c  sw ra,0xfc(sp)
00444b90  sw s4,0xf8(sp)
00444b94  sw s3,0xf4(sp)
00444b98  sw s2,0xf0(sp)
00444b9c  sw s1,0xec(sp)
00444ba0  sw s0,0xe8(sp)
00444ba4  lui gp,0x47
00444ba8  addiu gp,gp,0x2630
00444bac  sw gp,0x10(sp)
00444bb0  lw t9,-0x7fbc(gp)
00444bb4  lui s2,0x45
00444bb8  lui a1,0x45
00444bbc  addiu a1,a1,-0x3b10
00444bc0  addiu a2,s2,-0x4cd4
00444bc4  jalr t9
00444bc8  _move s0,a0
00444bcc  lw gp,0x10(sp)
00444bd0  lui a1,0x45
00444bd4  addiu a1,a1,0x7024
00444bd8  lw t9,-0x7fbc(gp)
00444bdc  move a0,s0
00444be0  addiu a2,s2,-0x4cd4
00444be4  jalr t9
00444be8  _move s1,v0
00444bec  move s4,v0
00444bf0  lb v0,0x0(v0)
00444bf4  lw gp,0x10(sp)
00444bf8  beq v0,zero,0x00444d44
00444bfc  _lui a1,0x45
00444c00  lw t9,-0x7e0c(gp)
00444c04  addiu a1,a1,-0x384
00444c08  jalr t9
00444c0c  _move a0,s4
00444c10  lw gp,0x10(sp)
00444c14  bne v0,zero,0x00444c48
00444c18  _lui s3,0x45
00444c1c  lw t9,-0x7fbc(gp)
00444c20  lui a1,0x45
00444c24  addiu a1,a1,0x702c
00444c28  addiu a2,s2,-0x4cd4
00444c2c  jalr t9
00444c30  _move a0,s0
00444c34  lb a0,0x0(v0)
00444c38  jal 0x00444378
00444c3c  _sltu a0,zero,a0
00444c40  b 0x00444d44
00444c44  _nop
00444c48  lw t9,-0x7e0c(gp)
00444c4c  move a0,s4
00444c50  jalr t9
00444c54  _addiu a1,s3,-0x408c
00444c58  bne v0,zero,0x00444d44
00444c5c  _nop
00444c60  jal 0x004442e0
00444c64  _lui s2,0x45
00444c68  lw gp,0x10(sp)
00444c6c  addiu a2,sp,0x18
00444c70  lw t9,-0x79d0(gp)
00444c74  bne v0,zero,0x00444cec
00444c78  _lui s1,0x45
00444c7c  lui a1,0x45
00444c80  move a0,a2
00444c84  sw a2,0xe0(sp)
00444c88  jalr t9
00444c8c  _addiu a1,a1,0x7034
00444c90  jal 0x00441988
00444c94  _move a0,s0
00444c98  lw gp,0x10(sp)
00444c9c  lw a2,0xe0(sp)
00444ca0  addiu a1,s2,-0x271c
00444ca4  lw t9,-0x7cd4(gp)
00444ca8  nop
00444cac  jalr t9
00444cb0  _move a0,s0
00444cb4  lw gp,0x10(sp)
00444cb8  move a0,s0
00444cbc  lw t9,-0x7cd4(gp)
00444cc0  nop
00444cc4  jalr t9
00444cc8  _addiu a1,s1,-0x2050
00444ccc  lw gp,0x10(sp)
00444cd0  nop
00444cd4  lw t9,-0x7b18(gp)
00444cd8  nop
00444cdc  jalr t9
00444ce0  _addiu a0,s3,-0x408c
00444ce4  b 0x00444e5c
00444ce8  _nop
00444cec  lui a1,0x45
00444cf0  move a0,a2
00444cf4  sw a2,0xe0(sp)
00444cf8  jalr t9
00444cfc  _addiu a1,a1,0x7060
00444d00  jal 0x00441988
00444d04  _move a0,s0
00444d08  lw gp,0x10(sp)
00444d0c  lw a2,0xe0(sp)
00444d10  addiu a1,s2,-0x271c
00444d14  lw t9,-0x7cd4(gp)
00444d18  nop
00444d1c  jalr t9
00444d20  _move a0,s0
00444d24  lw gp,0x10(sp)
00444d28  move a0,s0
00444d2c  lw t9,-0x7cd4(gp)
00444d30  nop
00444d34  jalr t9
00444d38  _addiu a1,s1,-0x2050
00444d3c  b 0x00444e5c
00444d40  _nop
00444d44  jal 0x00444434
00444d48  _nop
00444d4c  lw gp,0x10(sp)
00444d50  lui a0,0x45
00444d54  lw t9,-0x7dec(gp)
00444d58  nop
00444d5c  jalr t9
00444d60  _addiu a0,a0,-0x260c
00444d64  lw gp,0x10(sp)
00444d68  li v1,0x1
00444d6c  lw v0,-0x7c7c(gp)
00444d70  nop
00444d74  sw v1,0x0(v0)
00444d78  lb v0,0x0(s1)
00444d7c  nop
00444d80  bne v0,zero,0x00444da4
00444d84  _nop
00444d88  lw t9,-0x79d0(gp)
00444d8c  lui a1,0x45
00444d90  addiu a1,a1,-0x22a8
00444d94  jalr t9
00444d98  _move a0,s1
00444d9c  lw gp,0x10(sp)
00444da0  nop
00444da4  lw t9,-0x7cd4(gp)
00444da8  lui a1,0x45
00444dac  addiu a1,a1,-0x229c
00444db0  jalr t9
00444db4  _move a0,s0
00444db8  lw gp,0x10(sp)
00444dbc  lui a1,0x45
00444dc0  addiu a1,a1,-0x21b0
00444dc4  lw t9,-0x7cd4(gp)
00444dc8  nop
00444dcc  jalr t9
00444dd0  _move a0,s0
00444dd4  lw gp,0x10(sp)
00444dd8  lui a1,0x45
00444ddc  move a2,s1
00444de0  lw t9,-0x7cd4(gp)
00444de4  addiu a1,a1,-0x216c
00444de8  jalr t9
00444dec  _move a0,s0
00444df0  lw gp,0x10(sp)
00444df4  lui a1,0x45
00444df8  addiu a1,a1,-0x2138
00444dfc  lw t9,-0x7cd4(gp)
00444e00  nop
00444e04  jalr t9
00444e08  _move a0,s0
00444e0c  lw gp,0x10(sp)
00444e10  lui a1,0x45
00444e14  move a2,s1
00444e18  lw t9,-0x7cd4(gp)
00444e1c  addiu a1,a1,-0x20d8
00444e20  jalr t9
00444e24  _move a0,s0
00444e28  lw gp,0x10(sp)
00444e2c  lui a1,0x45
00444e30  move a0,s0
00444e34  lw t9,-0x7cd4(gp)
00444e38  nop
00444e3c  jalr t9
00444e40  _addiu a1,a1,-0x2074
00444e44  lw gp,0x10(sp)
00444e48  lui a0,0x45
00444e4c  lw t9,-0x7c58(gp)
00444e50  nop
00444e54  jalr t9
00444e58  _addiu a0,a0,-0x3bd8
00444e5c  lw ra,0xfc(sp)
00444e60  lw s4,0xf8(sp)
00444e64  lw s3,0xf4(sp)
00444e68  lw s2,0xf0(sp)
00444e6c  lw s1,0xec(sp)
00444e70  lw s0,0xe8(sp)
00444e74  jr ra
00444e78  _addiu sp,sp,0x100
