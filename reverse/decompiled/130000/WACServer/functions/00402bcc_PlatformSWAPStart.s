# PlatformSWAPStart @ 00402bcc
00402bcc  addiu sp,sp,-0x30
00402bd0  sw ra,0x2c(sp)
00402bd4  sw s4,0x28(sp)
00402bd8  sw s3,0x24(sp)
00402bdc  sw s2,0x20(sp)
00402be0  sw s1,0x1c(sp)
00402be4  sw s0,0x18(sp)
00402be8  lui gp,0x44
00402bec  addiu gp,gp,-0x4fc0
00402bf0  sw gp,0x10(sp)
00402bf4  move s3,a1
00402bf8  beq a1,zero,0x00402d34
00402bfc  _move s2,a0
00402c00  lw t9,-0x7d5c(gp)
00402c04  lui a0,0x42
00402c08  jalr t9
00402c0c  _addiu a0,a0,-0x31fc
00402c10  lw gp,0x10(sp)
00402c14  beq s2,zero,0x00402d18
00402c18  _lui s1,0x42
00402c1c  lw t9,-0x7eac(gp)
00402c20  lui a1,0x42
00402c24  addiu a1,a1,-0x340c
00402c28  jalr t9
00402c2c  _addiu a0,s1,-0x31cc
00402c30  lw gp,0x10(sp)
00402c34  beq v0,zero,0x00402cfc
00402c38  _move s0,v0
00402c3c  lw t9,-0x7f68(gp)
00402c40  nop
00402c44  jalr t9
00402c48  _move a0,v0
00402c4c  lw gp,0x10(sp)
00402c50  move a0,v0
00402c54  lw t9,-0x7e64(gp)
00402c58  nop
00402c5c  jalr t9
00402c60  _li a1,0x2
00402c64  lw gp,0x10(sp)
00402c68  bne v0,zero,0x00402cf0
00402c6c  _addiu a1,s1,-0x31cc
00402c70  lw t9,-0x7d5c(gp)
00402c74  lui a0,0x42
00402c78  addiu a0,a0,-0x31b4
00402c7c  jalr t9
00402c80  _lui s4,0x42
00402c84  lw gp,0x10(sp)
00402c88  addiu s4,s4,-0x3184
00402c8c  b 0x00402cb0
00402c90  _clear s1
00402c94  lbu a2,0x0(s2)
00402c98  move a0,s0
00402c9c  jalr t9
00402ca0  _move a1,s4
00402ca4  lw gp,0x10(sp)
00402ca8  addiu s1,s1,0x1
00402cac  addiu s2,s2,0x1
00402cb0  slt v0,s1,s3
00402cb4  lw t9,-0x7e2c(gp)
00402cb8  bne v0,zero,0x00402c94
00402cbc  _nop
00402cc0  lw t9,-0x7f68(gp)
00402cc4  nop
00402cc8  jalr t9
00402ccc  _move a0,s0
00402cd0  lw gp,0x10(sp)
00402cd4  move a0,v0
00402cd8  lw t9,-0x7e64(gp)
00402cdc  nop
00402ce0  jalr t9
00402ce4  _li a1,0x8
00402ce8  lw gp,0x10(sp)
00402cec  nop
00402cf0  lw t9,-0x7ec8(gp)
00402cf4  b 0x00402d24
00402cf8  _move a0,s0
00402cfc  lw t9,-0x7d5c(gp)
00402d00  lui a0,0x42
00402d04  addiu a0,a0,-0x317c
00402d08  jalr t9
00402d0c  _addiu a1,s1,-0x31cc
00402d10  b 0x00402d2c
00402d14  _nop
00402d18  lw t9,-0x7dac(gp)
00402d1c  lui a0,0x42
00402d20  addiu a0,a0,-0x3144
00402d24  jalr t9
00402d28  _nop
00402d2c  lw gp,0x10(sp)
00402d30  nop
00402d34  lw t9,-0x7dbc(gp)
00402d38  lui a0,0x42
00402d3c  jalr t9
00402d40  _addiu a0,a0,-0x3128
00402d44  lw ra,0x2c(sp)
00402d48  lw s4,0x28(sp)
00402d4c  lw s3,0x24(sp)
00402d50  lw s2,0x20(sp)
00402d54  lw s1,0x1c(sp)
00402d58  lw s0,0x18(sp)
00402d5c  clear v0
00402d60  jr ra
00402d64  _addiu sp,sp,0x30
