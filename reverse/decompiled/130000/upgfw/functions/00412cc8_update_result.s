# update_result @ 00412cc8
00412cc8  addiu sp,sp,-0x430
00412ccc  sw ra,0x42c(sp)
00412cd0  sw s2,0x428(sp)
00412cd4  sw s1,0x424(sp)
00412cd8  sw s0,0x420(sp)
00412cdc  lui gp,0x58
00412ce0  addiu gp,gp,0x5010
00412ce4  sw gp,0x18(sp)
00412ce8  lw t9,-0x71e4(gp)
00412cec  lui v0,0x58
00412cf0  sw a0,-0x163c(v0)
00412cf4  move s2,a0
00412cf8  lui a1,0x55
00412cfc  lui a0,0x53
00412d00  addiu a0,a0,0x2898
00412d04  jalr t9
00412d08  _addiu a1,a1,-0x5bf4
00412d0c  lw gp,0x18(sp)
00412d10  beq v0,zero,0x00412dec
00412d14  _move s0,v0
00412d18  lw t9,-0x7348(gp)
00412d1c  move a0,v0
00412d20  jalr t9
00412d24  _addiu s1,sp,0x20
00412d28  lw gp,0x18(sp)
00412d2c  move a0,v0
00412d30  lw t9,-0x77d4(gp)
00412d34  nop
00412d38  jalr t9
00412d3c  _li a1,0x2
00412d40  lui v0,0x58
00412d44  lw gp,0x18(sp)
00412d48  lw v0,-0x1640(v0)
00412d4c  lui v1,0x58
00412d50  lw a3,-0x1638(v1)
00412d54  lw a2,0x0(v0)
00412d58  lw t9,-0x7930(gp)
00412d5c  lui a1,0x53
00412d60  addiu a1,a1,0x28a8
00412d64  move a0,s1
00412d68  jalr t9
00412d6c  _sw s2,0x10(sp)
00412d70  lw gp,0x18(sp)
00412d74  nop
00412d78  lw t9,-0x6e34(gp)
00412d7c  nop
00412d80  jalr t9
00412d84  _move a0,s1
00412d88  lw gp,0x18(sp)
00412d8c  move a2,v0
00412d90  move a3,s0
00412d94  lw t9,-0x6904(gp)
00412d98  li a1,0x1
00412d9c  jalr t9
00412da0  _move a0,s1
00412da4  lw gp,0x18(sp)
00412da8  nop
00412dac  lw t9,-0x7348(gp)
00412db0  nop
00412db4  jalr t9
00412db8  _move a0,s0
00412dbc  lw gp,0x18(sp)
00412dc0  move a0,v0
00412dc4  lw t9,-0x77d4(gp)
00412dc8  nop
00412dcc  jalr t9
00412dd0  _li a1,0x8
00412dd4  lw gp,0x18(sp)
00412dd8  nop
00412ddc  lw t9,-0x7158(gp)
00412de0  nop
00412de4  jalr t9
00412de8  _move a0,s0
00412dec  lw ra,0x42c(sp)
00412df0  lw s2,0x428(sp)
00412df4  lw s1,0x424(sp)
00412df8  lw s0,0x420(sp)
00412dfc  jr ra
00412e00  _addiu sp,sp,0x430
