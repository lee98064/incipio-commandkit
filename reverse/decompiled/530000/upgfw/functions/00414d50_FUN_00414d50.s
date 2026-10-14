# FUN_00414d50 @ 00414d50
00414d50  addiu sp,sp,-0x128
00414d54  sw ra,0x124(sp)
00414d58  sw s2,0x120(sp)
00414d5c  sw s1,0x11c(sp)
00414d60  sw s0,0x118(sp)
00414d64  lui gp,0x58
00414d68  addiu gp,gp,0x5140
00414d6c  sw gp,0x10(sp)
00414d70  lw t9,-0x7764(gp)
00414d74  addiu s0,sp,0x18
00414d78  move a0,s0
00414d7c  clear a1
00414d80  jalr t9
00414d84  _li a2,0x100
00414d88  lw gp,0x10(sp)
00414d8c  lui s1,0x53
00414d90  lui a1,0x53
00414d94  lw t9,-0x7930(gp)
00414d98  addiu a2,s1,0x2ff4
00414d9c  addiu a1,a1,0x2fd4
00414da0  jalr t9
00414da4  _move a0,s0
00414da8  lw gp,0x10(sp)
00414dac  move a0,s0
00414db0  lw t9,-0x6910(gp)
00414db4  nop
00414db8  jalr t9
00414dbc  _clear s2
00414dc0  lw gp,0x10(sp)
00414dc4  lui a1,0x53
00414dc8  addiu a0,s1,0x2ff4
00414dcc  lw t9,-0x71e4(gp)
00414dd0  nop
00414dd4  jalr t9
00414dd8  _addiu a1,a1,0x492c
00414ddc  lw gp,0x10(sp)
00414de0  beq v0,zero,0x00414e4c
00414de4  _move s1,v0
00414de8  lw t9,-0x74ec(gp)
00414dec  move a0,s0
00414df0  li a1,0x100
00414df4  jalr t9
00414df8  _move a2,v0
00414dfc  lw gp,0x10(sp)
00414e00  lui a1,0x53
00414e04  move a0,s0
00414e08  lw t9,-0x7b54(gp)
00414e0c  nop
00414e10  jalr t9
00414e14  _addiu a1,a1,0x3008
00414e18  lw gp,0x10(sp)
00414e1c  beq v0,zero,0x00414e3c
00414e20  _nop
00414e24  lw t9,-0x7cfc(gp)
00414e28  nop
00414e2c  jalr t9
00414e30  _addiu a0,v0,0x11
00414e34  lw gp,0x10(sp)
00414e38  move s2,v0
00414e3c  lw t9,-0x7154(gp)
00414e40  nop
00414e44  jalr t9
00414e48  _move a0,s1
00414e4c  move v0,s2
00414e50  lw ra,0x124(sp)
00414e54  lw s2,0x120(sp)
00414e58  lw s1,0x11c(sp)
00414e5c  lw s0,0x118(sp)
00414e60  jr ra
00414e64  _addiu sp,sp,0x128
