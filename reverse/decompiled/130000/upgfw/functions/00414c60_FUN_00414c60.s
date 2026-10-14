# FUN_00414c60 @ 00414c60
00414c60  addiu sp,sp,-0x128
00414c64  sw ra,0x124(sp)
00414c68  sw s2,0x120(sp)
00414c6c  sw s1,0x11c(sp)
00414c70  sw s0,0x118(sp)
00414c74  lui gp,0x58
00414c78  addiu gp,gp,0x5010
00414c7c  sw gp,0x10(sp)
00414c80  lw t9,-0x7764(gp)
00414c84  addiu s0,sp,0x18
00414c88  move a0,s0
00414c8c  clear a1
00414c90  jalr t9
00414c94  _li a2,0x100
00414c98  lw gp,0x10(sp)
00414c9c  lui s1,0x53
00414ca0  lui a1,0x53
00414ca4  lw t9,-0x7930(gp)
00414ca8  addiu a2,s1,0x2ec0
00414cac  addiu a1,a1,0x2ea0
00414cb0  jalr t9
00414cb4  _move a0,s0
00414cb8  lw gp,0x10(sp)
00414cbc  move a0,s0
00414cc0  lw t9,-0x6914(gp)
00414cc4  nop
00414cc8  jalr t9
00414ccc  _clear s2
00414cd0  lw gp,0x10(sp)
00414cd4  lui a1,0x53
00414cd8  addiu a0,s1,0x2ec0
00414cdc  lw t9,-0x71e4(gp)
00414ce0  nop
00414ce4  jalr t9
00414ce8  _addiu a1,a1,0x47fc
00414cec  lw gp,0x10(sp)
00414cf0  beq v0,zero,0x00414d5c
00414cf4  _move s1,v0
00414cf8  lw t9,-0x74ec(gp)
00414cfc  move a0,s0
00414d00  li a1,0x100
00414d04  jalr t9
00414d08  _move a2,v0
00414d0c  lw gp,0x10(sp)
00414d10  lui a1,0x53
00414d14  move a0,s0
00414d18  lw t9,-0x7b54(gp)
00414d1c  nop
00414d20  jalr t9
00414d24  _addiu a1,a1,0x2ed4
00414d28  lw gp,0x10(sp)
00414d2c  beq v0,zero,0x00414d4c
00414d30  _nop
00414d34  lw t9,-0x7cfc(gp)
00414d38  nop
00414d3c  jalr t9
00414d40  _addiu a0,v0,0x11
00414d44  lw gp,0x10(sp)
00414d48  move s2,v0
00414d4c  lw t9,-0x7158(gp)
00414d50  nop
00414d54  jalr t9
00414d58  _move a0,s1
00414d5c  move v0,s2
00414d60  lw ra,0x124(sp)
00414d64  lw s2,0x120(sp)
00414d68  lw s1,0x11c(sp)
00414d6c  lw s0,0x118(sp)
00414d70  jr ra
00414d74  _addiu sp,sp,0x128
