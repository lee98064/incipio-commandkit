# Create_script @ 00401cd0
00401cd0  addiu sp,sp,-0x98
00401cd4  sw ra,0x94(sp)
00401cd8  sw s3,0x90(sp)
00401cdc  sw s2,0x8c(sp)
00401ce0  sw s1,0x88(sp)
00401ce4  sw s0,0x84(sp)
00401ce8  lui gp,0x43
00401cec  addiu gp,gp,0x3060
00401cf0  sw gp,0x10(sp)
00401cf4  lw t9,-0x7fac(gp)
00401cf8  move s2,a1
00401cfc  move s0,a2
00401d00  li a1,0x302
00401d04  li a2,0x3f
00401d08  jalr t9
00401d0c  _move s3,a0
00401d10  lw gp,0x10(sp)
00401d14  bgez v0,0x00401d40
00401d18  _move s1,v0
00401d1c  lw v0,-0x7f7c(gp)
00401d20  lw t9,-0x7eec(gp)
00401d24  lui a1,0x41
00401d28  lw a0,0x0(v0)
00401d2c  addiu a1,a1,0x7890
00401d30  jalr t9
00401d34  _move a2,s3
00401d38  b 0x00401df8
00401d3c  _nop
00401d40  bne s0,zero,0x00401de8
00401d44  _addiu s0,sp,0x18
00401d48  lw t9,-0x7e58(gp)
00401d4c  lui a1,0x41
00401d50  addiu a1,a1,0x78a8
00401d54  jalr t9
00401d58  _move a0,s0
00401d5c  lw gp,0x10(sp)
00401d60  nop
00401d64  lw t9,-0x7fa4(gp)
00401d68  nop
00401d6c  jalr t9
00401d70  _move a0,s0
00401d74  lw gp,0x10(sp)
00401d78  move a2,v0
00401d7c  move a0,s1
00401d80  lw t9,-0x7ee8(gp)
00401d84  nop
00401d88  jalr t9
00401d8c  _move a1,s0
00401d90  lw gp,0x10(sp)
00401d94  lui a1,0x41
00401d98  addiu a1,a1,0x78b4
00401d9c  lw t9,-0x7f78(gp)
00401da0  move a2,s2
00401da4  jalr t9
00401da8  _move a0,s0
00401dac  lw gp,0x10(sp)
00401db0  nop
00401db4  lw t9,-0x7fa4(gp)
00401db8  nop
00401dbc  jalr t9
00401dc0  _move a0,s0
00401dc4  lw gp,0x10(sp)
00401dc8  move a1,s0
00401dcc  move a2,v0
00401dd0  lw t9,-0x7ee8(gp)
00401dd4  nop
00401dd8  jalr t9
00401ddc  _move a0,s1
00401de0  lw gp,0x10(sp)
00401de4  nop
00401de8  lw t9,-0x7fc8(gp)
00401dec  nop
00401df0  jalr t9
00401df4  _move a0,s1
00401df8  lw ra,0x94(sp)
00401dfc  lw s3,0x90(sp)
00401e00  lw s2,0x8c(sp)
00401e04  lw s1,0x88(sp)
00401e08  lw s0,0x84(sp)
00401e0c  jr ra
00401e10  _addiu sp,sp,0x98
