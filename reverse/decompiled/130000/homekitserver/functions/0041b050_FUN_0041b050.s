# FUN_0041b050 @ 0041b050
0041b050  addiu sp,sp,-0x228
0041b054  sw ra,0x224(sp)
0041b058  sw s2,0x220(sp)
0041b05c  sw s1,0x21c(sp)
0041b060  sw s0,0x218(sp)
0041b064  lui gp,0x62
0041b068  addiu gp,gp,-0x6b80
0041b06c  sw gp,0x10(sp)
0041b070  li v0,0x1
0041b074  bne a1,v0,0x0041b088
0041b078  _move s1,a2
0041b07c  lw t9,-0x5b88(gp)
0041b080  b 0x0041b09c
0041b084  _li a1,0x302
0041b088  li v0,0x2
0041b08c  bne a1,v0,0x0041b0b4
0041b090  _clear s0
0041b094  lw t9,-0x5b88(gp)
0041b098  li a1,0xa
0041b09c  jalr t9
0041b0a0  _li a2,0x1b0
0041b0a4  move s0,v0
0041b0a8  lw gp,0x10(sp)
0041b0ac  bltz s0,0x0041b118
0041b0b0  _clear v0
0041b0b4  lw t9,-0x7eb0(gp)
0041b0b8  addiu s2,sp,0x18
0041b0bc  move a1,s1
0041b0c0  jalr t9
0041b0c4  _move a0,s2
0041b0c8  lw gp,0x10(sp)
0041b0cc  nop
0041b0d0  lw t9,-0x63cc(gp)
0041b0d4  nop
0041b0d8  jalr t9
0041b0dc  _move a0,s2
0041b0e0  lw gp,0x10(sp)
0041b0e4  move a1,s2
0041b0e8  move a2,v0
0041b0ec  lw t9,-0x6be8(gp)
0041b0f0  nop
0041b0f4  jalr t9
0041b0f8  _move a0,s0
0041b0fc  lw gp,0x10(sp)
0041b100  nop
0041b104  lw t9,-0x6d14(gp)
0041b108  nop
0041b10c  jalr t9
0041b110  _move a0,s0
0041b114  li v0,0x1
0041b118  lw ra,0x224(sp)
0041b11c  lw s2,0x220(sp)
0041b120  lw s1,0x21c(sp)
0041b124  lw s0,0x218(sp)
0041b128  jr ra
0041b12c  _addiu sp,sp,0x228
