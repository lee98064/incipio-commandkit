# send_r_unauthorized @ 0040e2e8
0040e2e8  addiu sp,sp,-0x28
0040e2ec  sw ra,0x24(sp)
0040e2f0  sw s1,0x20(sp)
0040e2f4  sw s0,0x1c(sp)
0040e2f8  lui gp,0x47
0040e2fc  addiu gp,gp,0x2630
0040e300  sw gp,0x10(sp)
0040e304  lw v0,0x8(a0)
0040e308  li v1,0x2
0040e30c  sw v1,0x4(a0)
0040e310  li v1,0x191
0040e314  sw v1,0x10(a0)
0040e318  li v1,0x1
0040e31c  move s0,a0
0040e320  beq v0,v1,0x0040e3e8
0040e324  _move s1,a1
0040e328  li v1,0x3
0040e32c  beq v0,v1,0x0040e33c
0040e330  _lui a1,0x45
0040e334  b 0x0040e344
0040e338  _addiu a1,a1,-0x51b0
0040e33c  lui a1,0x45
0040e340  addiu a1,a1,-0x5198
0040e344  lw t9,-0x7a44(gp)
0040e348  nop
0040e34c  jalr t9
0040e350  _move a0,s0
0040e354  lw gp,0x10(sp)
0040e358  lui a1,0x45
0040e35c  addiu a1,a1,-0x4a38
0040e360  lw t9,-0x7a44(gp)
0040e364  nop
0040e368  jalr t9
0040e36c  _move a0,s0
0040e370  jal 0x0040d688
0040e374  _move a0,s0
0040e378  lw gp,0x10(sp)
0040e37c  lui a1,0x45
0040e380  addiu a1,a1,-0x4a24
0040e384  lw t9,-0x7a44(gp)
0040e388  nop
0040e38c  jalr t9
0040e390  _move a0,s0
0040e394  lw gp,0x10(sp)
0040e398  move a1,s1
0040e39c  lw t9,-0x7a44(gp)
0040e3a0  nop
0040e3a4  jalr t9
0040e3a8  _move a0,s0
0040e3ac  lw gp,0x10(sp)
0040e3b0  lui a1,0x45
0040e3b4  addiu a1,a1,-0x4c0c
0040e3b8  lw t9,-0x7a44(gp)
0040e3bc  nop
0040e3c0  jalr t9
0040e3c4  _move a0,s0
0040e3c8  lw gp,0x10(sp)
0040e3cc  lui a1,0x45
0040e3d0  addiu a1,a1,-0x50d8
0040e3d4  lw t9,-0x7a44(gp)
0040e3d8  nop
0040e3dc  jalr t9
0040e3e0  _move a0,s0
0040e3e4  lw gp,0x10(sp)
0040e3e8  lw v1,0xc(s0)
0040e3ec  li v0,0x2
0040e3f0  beq v1,v0,0x0040e440
0040e3f4  _lui a1,0x45
0040e3f8  lw t9,-0x7a44(gp)
0040e3fc  addiu a1,a1,-0x4a00
0040e400  jalr t9
0040e404  _move a0,s0
0040e408  lw gp,0x10(sp)
0040e40c  move a0,s0
0040e410  lw t9,-0x7ef8(gp)
0040e414  nop
0040e418  jalr t9
0040e41c  _addiu a1,s0,0x8d4
0040e420  lw gp,0x10(sp)
0040e424  lui a1,0x45
0040e428  addiu a1,a1,-0x4a5c
0040e42c  lw t9,-0x7a44(gp)
0040e430  nop
0040e434  jalr t9
0040e438  _move a0,s0
0040e43c  lw gp,0x10(sp)
0040e440  move a0,s0
0040e444  lw t9,-0x7f98(gp)
0040e448  lw ra,0x24(sp)
0040e44c  lw s1,0x20(sp)
0040e450  lw s0,0x1c(sp)
0040e454  jr t9
0040e458  _addiu sp,sp,0x28
