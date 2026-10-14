# write_line_to_file @ 0041e0ec
0041e0ec  addiu sp,sp,-0x228
0041e0f0  sw ra,0x224(sp)
0041e0f4  sw s2,0x220(sp)
0041e0f8  sw s1,0x21c(sp)
0041e0fc  sw s0,0x218(sp)
0041e100  lui gp,0x47
0041e104  addiu gp,gp,0x2630
0041e108  sw gp,0x10(sp)
0041e10c  li v0,0x1
0041e110  move s2,a2
0041e114  bne a1,v0,0x0041e128
0041e118  _move s1,a0
0041e11c  lw t9,-0x7f20(gp)
0041e120  b 0x0041e13c
0041e124  _li a1,0x302
0041e128  li v0,0x2
0041e12c  bne a1,v0,0x0041e174
0041e130  _clear s0
0041e134  lw t9,-0x7f20(gp)
0041e138  li a1,0xa
0041e13c  jalr t9
0041e140  _nop
0041e144  lw gp,0x10(sp)
0041e148  bgez v0,0x0041e174
0041e14c  _move s0,v0
0041e150  lw v0,-0x7e40(gp)
0041e154  lw t9,-0x7c44(gp)
0041e158  lui a1,0x45
0041e15c  lw a0,0x0(v0)
0041e160  addiu a1,a1,0x160
0041e164  jalr t9
0041e168  _move a2,s1
0041e16c  b 0x0041e1d8
0041e170  _clear v0
0041e174  lw t9,-0x79d0(gp)
0041e178  addiu s1,sp,0x18
0041e17c  move a1,s2
0041e180  jalr t9
0041e184  _move a0,s1
0041e188  lw gp,0x10(sp)
0041e18c  nop
0041e190  lw t9,-0x7f1c(gp)
0041e194  nop
0041e198  jalr t9
0041e19c  _move a0,s1
0041e1a0  lw gp,0x10(sp)
0041e1a4  move a1,s1
0041e1a8  move a2,v0
0041e1ac  lw t9,-0x7c34(gp)
0041e1b0  nop
0041e1b4  jalr t9
0041e1b8  _move a0,s0
0041e1bc  lw gp,0x10(sp)
0041e1c0  nop
0041e1c4  lw t9,-0x7f9c(gp)
0041e1c8  nop
0041e1cc  jalr t9
0041e1d0  _move a0,s0
0041e1d4  li v0,0x1
0041e1d8  lw ra,0x224(sp)
0041e1dc  lw s2,0x220(sp)
0041e1e0  lw s1,0x21c(sp)
0041e1e4  lw s0,0x218(sp)
0041e1e8  jr ra
0041e1ec  _addiu sp,sp,0x228
