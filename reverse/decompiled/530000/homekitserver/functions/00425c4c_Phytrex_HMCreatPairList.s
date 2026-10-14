# Phytrex_HMCreatPairList @ 00425c4c
00425c4c  addiu sp,sp,-0x78
00425c50  sw ra,0x74(sp)
00425c54  sw s1,0x70(sp)
00425c58  sw s0,0x6c(sp)
00425c5c  lui gp,0x62
00425c60  addiu gp,gp,-0x5cf0
00425c64  sw gp,0x10(sp)
00425c68  lw t9,-0x63ec(gp)
00425c6c  lui a0,0x61
00425c70  jalr t9
00425c74  _addiu a0,a0,0x4c00
00425c78  lw gp,0x10(sp)
00425c7c  lui a0,0x5b
00425c80  addiu a0,a0,-0x373c
00425c84  lw t9,-0x5b74(gp)
00425c88  nop
00425c8c  jalr t9
00425c90  _clear a1
00425c94  move s0,v0
00425c98  li v0,-0x1
00425c9c  lw gp,0x10(sp)
00425ca0  bne s0,v0,0x00425cb8
00425ca4  _move a0,s0
00425ca8  jal 0x00425904
00425cac  _li a0,0x1
00425cb0  b 0x00425e9c
00425cb4  _nop
00425cb8  lw t9,-0x64a4(gp)
00425cbc  clear a1
00425cc0  jalr t9
00425cc4  _clear a2
00425cc8  lw gp,0x10(sp)
00425ccc  move a0,s0
00425cd0  addiu a1,sp,0x18
00425cd4  lw t9,-0x6588(gp)
00425cd8  nop
00425cdc  jalr t9
00425ce0  _li a2,0xc
00425ce4  lbu v1,0x18(sp)
00425ce8  li v0,0x50
00425cec  lw gp,0x10(sp)
00425cf0  bne v1,v0,0x00425d28
00425cf4  _li v0,0x48
00425cf8  lbu v1,0x19(sp)
00425cfc  nop
00425d00  bne v1,v0,0x00425d28
00425d04  _li v0,0x52
00425d08  lbu v1,0x1a(sp)
00425d0c  nop
00425d10  bne v1,v0,0x00425d28
00425d14  _li v0,0x58
00425d18  lbu v1,0x1b(sp)
00425d1c  nop
00425d20  beq v1,v0,0x00425e54
00425d24  _nop
00425d28  lw t9,-0x6d0c(gp)
00425d2c  move a0,s0
00425d30  jalr t9
00425d34  _addiu s1,sp,0x24
00425d38  lw gp,0x10(sp)
00425d3c  lui a0,0x5b
00425d40  addiu a0,a0,-0x373c
00425d44  lw t9,-0x5b74(gp)
00425d48  li a1,0x101
00425d4c  jalr t9
00425d50  _li a2,0x1b0
00425d54  lw gp,0x10(sp)
00425d58  move s0,v0
00425d5c  li v0,0x50
00425d60  sb v0,0x18(sp)
00425d64  li v0,0x48
00425d68  lw t9,-0x64a4(gp)
00425d6c  sb v0,0x19(sp)
00425d70  li v0,0x52
00425d74  sb v0,0x1a(sp)
00425d78  li v0,0x58
00425d7c  move a0,s0
00425d80  clear a1
00425d84  clear a2
00425d88  sb v0,0x1b(sp)
00425d8c  sw zero,0x1c(sp)
00425d90  jalr t9
00425d94  _sw zero,0x20(sp)
00425d98  lw gp,0x10(sp)
00425d9c  move a0,s0
00425da0  addiu a1,sp,0x18
00425da4  lw t9,-0x6bdc(gp)
00425da8  nop
00425dac  jalr t9
00425db0  _li a2,0xc
00425db4  lw gp,0x10(sp)
00425db8  move a0,s1
00425dbc  clear a1
00425dc0  lw t9,-0x7244(gp)
00425dc4  nop
00425dc8  jalr t9
00425dcc  _li a2,0x41
00425dd0  lw gp,0x10(sp)
00425dd4  move a0,s0
00425dd8  clear a1
00425ddc  lw t9,-0x64a4(gp)
00425de0  nop
00425de4  jalr t9
00425de8  _li a2,0xc
00425dec  lw gp,0x10(sp)
00425df0  move a1,s1
00425df4  move a0,s0
00425df8  lw t9,-0x6bdc(gp)
00425dfc  li a2,0x41
00425e00  jalr t9
00425e04  _lui s1,0x61
00425e08  lw gp,0x10(sp)
00425e0c  addiu s1,s1,0x4c18
00425e10  move a0,s1
00425e14  lw t9,-0x7244(gp)
00425e18  clear a1
00425e1c  jalr t9
00425e20  _li a2,0xa10
00425e24  lw gp,0x10(sp)
00425e28  clear a1
00425e2c  move a0,s0
00425e30  lw t9,-0x64a4(gp)
00425e34  nop
00425e38  jalr t9
00425e3c  _li a2,0x4d
00425e40  lw gp,0x10(sp)
00425e44  nop
00425e48  lw t9,-0x6bdc(gp)
00425e4c  b 0x00425e78
00425e50  _move a1,s1
00425e54  lw t9,-0x64a4(gp)
00425e58  li a1,0x4d
00425e5c  move a0,s0
00425e60  jalr t9
00425e64  _clear a2
00425e68  lw gp,0x10(sp)
00425e6c  lui a1,0x61
00425e70  addiu a1,a1,0x4c18
00425e74  lw t9,-0x6588(gp)
00425e78  move a0,s0
00425e7c  jalr t9
00425e80  _li a2,0xa10
00425e84  lw gp,0x10(sp)
00425e88  nop
00425e8c  lw t9,-0x6d0c(gp)
00425e90  nop
00425e94  jalr t9
00425e98  _move a0,s0
00425e9c  lw gp,0x10(sp)
00425ea0  lui a0,0x61
00425ea4  lw t9,-0x77f4(gp)
00425ea8  nop
00425eac  jalr t9
00425eb0  _addiu a0,a0,0x4c00
00425eb4  lw ra,0x74(sp)
00425eb8  lw s1,0x70(sp)
00425ebc  lw s0,0x6c(sp)
00425ec0  clear v0
00425ec4  jr ra
00425ec8  _addiu sp,sp,0x78
