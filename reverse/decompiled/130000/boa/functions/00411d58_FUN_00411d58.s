# FUN_00411d58 @ 00411d58
00411d58  addiu sp,sp,-0x28
00411d5c  sw ra,0x24(sp)
00411d60  sw s1,0x20(sp)
00411d64  sw s0,0x1c(sp)
00411d68  lui gp,0x47
00411d6c  addiu gp,gp,0x2630
00411d70  sw gp,0x10(sp)
00411d74  lw s0,-0x7ed8(gp)
00411d78  move s1,a0
00411d7c  lw v0,0x4(s0)
00411d80  nop
00411d84  beq v0,zero,0x00411d94
00411d88  _nop
00411d8c  b 0x00411d7c
00411d90  _move s0,v0
00411d94  lw t9,-0x7b1c(gp)
00411d98  nop
00411d9c  jalr t9
00411da0  _li a0,0x8
00411da4  beq v0,zero,0x00411dbc
00411da8  _li v1,-0x1
00411dac  sw s1,0x0(v0)
00411db0  sw zero,0x4(v0)
00411db4  clear v1
00411db8  sw v0,0x4(s0)
00411dbc  lw ra,0x24(sp)
00411dc0  lw s1,0x20(sp)
00411dc4  lw s0,0x1c(sp)
00411dc8  move v0,v1
00411dcc  jr ra
00411dd0  _addiu sp,sp,0x28
