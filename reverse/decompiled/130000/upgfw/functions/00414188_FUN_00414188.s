# FUN_00414188 @ 00414188
00414188  addiu sp,sp,-0x30
0041418c  sw ra,0x2c(sp)
00414190  sw s4,0x28(sp)
00414194  sw s3,0x24(sp)
00414198  sw s2,0x20(sp)
0041419c  sw s1,0x1c(sp)
004141a0  sw s0,0x18(sp)
004141a4  lui gp,0x58
004141a8  addiu gp,gp,0x5010
004141ac  sw gp,0x10(sp)
004141b0  lw t9,-0x68c0(gp)
004141b4  move s2,a0
004141b8  lui a0,0x53
004141bc  move s3,a1
004141c0  addiu a0,a0,0x2cb0
004141c4  li a1,0x2
004141c8  jalr t9
004141cc  _move s1,a2
004141d0  move s0,v0
004141d4  li v0,-0x1
004141d8  lw gp,0x10(sp)
004141dc  beq s0,v0,0x00414248
004141e0  _clear s4
004141e4  lw t9,-0x6eb4(gp)
004141e8  move a1,s3
004141ec  move a0,s0
004141f0  jalr t9
004141f4  _clear a2
004141f8  lw gp,0x10(sp)
004141fc  move a2,s1
00414200  move a1,s2
00414204  lw t9,-0x735c(gp)
00414208  nop
0041420c  jalr t9
00414210  _move a0,s0
00414214  lw gp,0x10(sp)
00414218  move a0,s0
0041421c  xor s1,v0,s1
00414220  lw t9,-0x7414(gp)
00414224  nop
00414228  jalr t9
0041422c  _sltiu s4,s1,0x1
00414230  lw gp,0x10(sp)
00414234  nop
00414238  lw t9,-0x7728(gp)
0041423c  nop
00414240  jalr t9
00414244  _nop
00414248  move v0,s4
0041424c  lw ra,0x2c(sp)
00414250  lw s4,0x28(sp)
00414254  lw s3,0x24(sp)
00414258  lw s2,0x20(sp)
0041425c  lw s1,0x1c(sp)
00414260  lw s0,0x18(sp)
00414264  jr ra
00414268  _addiu sp,sp,0x30
