# FUN_004360bc @ 004360bc
004360bc  lui gp,0x1e
004360c0  addiu gp,gp,0x33c4
004360c4  addu gp,gp,t9
004360c8  addiu sp,sp,-0x20
004360cc  sw ra,0x1c(sp)
004360d0  sw s8,0x18(sp)
004360d4  move s8,sp
004360d8  sw gp,0x10(sp)
004360dc  sw a0,0x20(s8)
004360e0  sw a1,0x24(s8)
004360e4  sw a2,0x28(s8)
004360e8  sw a3,0x2c(s8)
004360ec  lw v0,0x20(s8)
004360f0  nop
004360f4  lw v1,0x1c(v0)
004360f8  lw v0,0x18(v0)
004360fc  lw a0,0x24(s8)
00436100  lw a1,-0x7fd0(gp)
00436104  nop
00436108  addiu a1,a1,-0x2594
0043610c  move a3,v1
00436110  move a2,v0
00436114  lw v0,-0x6554(gp)
00436118  nop
0043611c  move t9,v0
00436120  jalr t9
00436124  _nop
00436128  lw gp,0x10(s8)
0043612c  move sp,s8
00436130  lw ra,0x1c(sp)
00436134  lw s8,0x18(sp)
00436138  addiu sp,sp,0x20
0043613c  jr ra
00436140  _nop
