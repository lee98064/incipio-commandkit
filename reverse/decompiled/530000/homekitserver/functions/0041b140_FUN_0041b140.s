# FUN_0041b140 @ 0041b140
0041b140  addiu sp,sp,-0x228
0041b144  sw ra,0x224(sp)
0041b148  sw s2,0x220(sp)
0041b14c  sw s1,0x21c(sp)
0041b150  sw s0,0x218(sp)
0041b154  lui gp,0x62
0041b158  addiu gp,gp,-0x5cf0
0041b15c  sw gp,0x10(sp)
0041b160  li v0,0x1
0041b164  bne a1,v0,0x0041b178
0041b168  _move s1,a2
0041b16c  lw t9,-0x5b74(gp)
0041b170  b 0x0041b18c
0041b174  _li a1,0x302
0041b178  li v0,0x2
0041b17c  bne a1,v0,0x0041b1a4
0041b180  _clear s0
0041b184  lw t9,-0x5b74(gp)
0041b188  li a1,0xa
0041b18c  jalr t9
0041b190  _li a2,0x1b0
0041b194  move s0,v0
0041b198  lw gp,0x10(sp)
0041b19c  bltz s0,0x0041b208
0041b1a0  _clear v0
0041b1a4  lw t9,-0x7eac(gp)
0041b1a8  addiu s2,sp,0x18
0041b1ac  move a1,s1
0041b1b0  jalr t9
0041b1b4  _move a0,s2
0041b1b8  lw gp,0x10(sp)
0041b1bc  nop
0041b1c0  lw t9,-0x63c4(gp)
0041b1c4  nop
0041b1c8  jalr t9
0041b1cc  _move a0,s2
0041b1d0  lw gp,0x10(sp)
0041b1d4  move a1,s2
0041b1d8  move a2,v0
0041b1dc  lw t9,-0x6bdc(gp)
0041b1e0  nop
0041b1e4  jalr t9
0041b1e8  _move a0,s0
0041b1ec  lw gp,0x10(sp)
0041b1f0  nop
0041b1f4  lw t9,-0x6d0c(gp)
0041b1f8  nop
0041b1fc  jalr t9
0041b200  _move a0,s0
0041b204  li v0,0x1
0041b208  lw ra,0x224(sp)
0041b20c  lw s2,0x220(sp)
0041b210  lw s1,0x21c(sp)
0041b214  lw s0,0x218(sp)
0041b218  jr ra
0041b21c  _addiu sp,sp,0x228
