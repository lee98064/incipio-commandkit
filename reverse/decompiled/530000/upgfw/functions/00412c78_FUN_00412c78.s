# FUN_00412c78 @ 00412c78
00412c78  addiu sp,sp,-0x430
00412c7c  sw ra,0x42c(sp)
00412c80  sw s2,0x428(sp)
00412c84  sw s1,0x424(sp)
00412c88  sw s0,0x420(sp)
00412c8c  lui gp,0x58
00412c90  addiu gp,gp,0x5140
00412c94  sw gp,0x18(sp)
00412c98  lui s2,0x58
00412c9c  lw v0,-0x1510(s2)
00412ca0  lw t9,-0x71e4(gp)
00412ca4  lui a1,0x55
00412ca8  sw a0,0x0(v0)
00412cac  lui a0,0x53
00412cb0  addiu a1,a1,-0x5ac4
00412cb4  jalr t9
00412cb8  _addiu a0,a0,0x29cc
00412cbc  lw gp,0x18(sp)
00412cc0  beq v0,zero,0x00412da0
00412cc4  _move s0,v0
00412cc8  lw t9,-0x7348(gp)
00412ccc  move a0,v0
00412cd0  jalr t9
00412cd4  _addiu s1,sp,0x20
00412cd8  lw gp,0x18(sp)
00412cdc  move a0,v0
00412ce0  lw t9,-0x77d4(gp)
00412ce4  nop
00412ce8  jalr t9
00412cec  _li a1,0x2
00412cf0  lw v0,-0x1510(s2)
00412cf4  lw gp,0x18(sp)
00412cf8  lui a1,0x53
00412cfc  lw a2,0x0(v0)
00412d00  lui v0,0x58
00412d04  lw a3,-0x1508(v0)
00412d08  lui v0,0x58
00412d0c  lw v0,-0x150c(v0)
00412d10  lw t9,-0x7930(gp)
00412d14  addiu a1,a1,0x29dc
00412d18  move a0,s1
00412d1c  jalr t9
00412d20  _sw v0,0x10(sp)
00412d24  lw gp,0x18(sp)
00412d28  nop
00412d2c  lw t9,-0x6e30(gp)
00412d30  nop
00412d34  jalr t9
00412d38  _move a0,s1
00412d3c  lw gp,0x18(sp)
00412d40  move a2,v0
00412d44  move a3,s0
00412d48  lw t9,-0x6900(gp)
00412d4c  li a1,0x1
00412d50  jalr t9
00412d54  _move a0,s1
00412d58  lw gp,0x18(sp)
00412d5c  nop
00412d60  lw t9,-0x7348(gp)
00412d64  nop
00412d68  jalr t9
00412d6c  _move a0,s0
00412d70  lw gp,0x18(sp)
00412d74  move a0,v0
00412d78  lw t9,-0x77d4(gp)
00412d7c  nop
00412d80  jalr t9
00412d84  _li a1,0x8
00412d88  lw gp,0x18(sp)
00412d8c  nop
00412d90  lw t9,-0x7154(gp)
00412d94  nop
00412d98  jalr t9
00412d9c  _move a0,s0
00412da0  lw ra,0x42c(sp)
00412da4  lw s2,0x428(sp)
00412da8  lw s1,0x424(sp)
00412dac  lw s0,0x420(sp)
00412db0  jr ra
00412db4  _addiu sp,sp,0x430
