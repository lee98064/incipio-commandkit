# FUN_00414278 @ 00414278
00414278  addiu sp,sp,-0x30
0041427c  sw ra,0x2c(sp)
00414280  sw s4,0x28(sp)
00414284  sw s3,0x24(sp)
00414288  sw s2,0x20(sp)
0041428c  sw s1,0x1c(sp)
00414290  sw s0,0x18(sp)
00414294  lui gp,0x58
00414298  addiu gp,gp,0x5140
0041429c  sw gp,0x10(sp)
004142a0  lw t9,-0x68bc(gp)
004142a4  move s2,a0
004142a8  lui a0,0x53
004142ac  move s3,a1
004142b0  addiu a0,a0,0x2de4
004142b4  li a1,0x2
004142b8  jalr t9
004142bc  _move s1,a2
004142c0  move s0,v0
004142c4  li v0,-0x1
004142c8  lw gp,0x10(sp)
004142cc  beq s0,v0,0x00414338
004142d0  _clear s4
004142d4  lw t9,-0x6eb0(gp)
004142d8  move a1,s3
004142dc  move a0,s0
004142e0  jalr t9
004142e4  _clear a2
004142e8  lw gp,0x10(sp)
004142ec  move a2,s1
004142f0  move a1,s2
004142f4  lw t9,-0x735c(gp)
004142f8  nop
004142fc  jalr t9
00414300  _move a0,s0
00414304  lw gp,0x10(sp)
00414308  move a0,s0
0041430c  xor s1,v0,s1
00414310  lw t9,-0x7414(gp)
00414314  nop
00414318  jalr t9
0041431c  _sltiu s4,s1,0x1
00414320  lw gp,0x10(sp)
00414324  nop
00414328  lw t9,-0x7728(gp)
0041432c  nop
00414330  jalr t9
00414334  _nop
00414338  move v0,s4
0041433c  lw ra,0x2c(sp)
00414340  lw s4,0x28(sp)
00414344  lw s3,0x24(sp)
00414348  lw s2,0x20(sp)
0041434c  lw s1,0x1c(sp)
00414350  lw s0,0x18(sp)
00414354  jr ra
00414358  _addiu sp,sp,0x30
