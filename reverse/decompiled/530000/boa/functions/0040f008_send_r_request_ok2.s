# send_r_request_ok2 @ 0040f008
0040f008  addiu sp,sp,-0x28
0040f00c  sw ra,0x24(sp)
0040f010  sw s1,0x20(sp)
0040f014  sw s0,0x1c(sp)
0040f018  lui gp,0x47
0040f01c  addiu gp,gp,0x2630
0040f020  sw gp,0x10(sp)
0040f024  lw v0,0x8(a0)
0040f028  li v1,0xc8
0040f02c  sw v1,0x10(a0)
0040f030  li v1,0x1
0040f034  beq v0,v1,0x0040f17c
0040f038  _move s0,a0
0040f03c  li v1,0x3
0040f040  beq v0,v1,0x0040f054
0040f044  _nop
0040f048  lui a1,0x45
0040f04c  b 0x0040f05c
0040f050  _addiu a1,a1,-0x51b0
0040f054  lui a1,0x45
0040f058  addiu a1,a1,-0x5198
0040f05c  lw t9,-0x7a44(gp)
0040f060  move a0,s0
0040f064  jalr t9
0040f068  _lui s1,0x45
0040f06c  lw gp,0x10(sp)
0040f070  lui a1,0x45
0040f074  addiu a1,a1,-0x60cc
0040f078  lw t9,-0x7a44(gp)
0040f07c  nop
0040f080  jalr t9
0040f084  _move a0,s0
0040f088  jal 0x0040d688
0040f08c  _move a0,s0
0040f090  lw gp,0x10(sp)
0040f094  lui a1,0x45
0040f098  move a0,s0
0040f09c  lw t9,-0x7a44(gp)
0040f0a0  nop
0040f0a4  jalr t9
0040f0a8  _addiu a1,a1,-0x45d0
0040f0ac  lw gp,0x10(sp)
0040f0b0  lui a1,0x45
0040f0b4  addiu a1,a1,-0x45bc
0040f0b8  lw t9,-0x7a44(gp)
0040f0bc  nop
0040f0c0  jalr t9
0040f0c4  _move a0,s0
0040f0c8  jal 0x0040ebc4
0040f0cc  _move a0,s0
0040f0d0  jal 0x0040ec18
0040f0d4  _move a0,s0
0040f0d8  lw gp,0x10(sp)
0040f0dc  lui a1,0x45
0040f0e0  addiu a1,a1,-0x5128
0040f0e4  lw t9,-0x7a44(gp)
0040f0e8  nop
0040f0ec  jalr t9
0040f0f0  _move a0,s0
0040f0f4  lw gp,0x10(sp)
0040f0f8  lw a0,0x2c(s0)
0040f0fc  lw t9,-0x7c64(gp)
0040f100  nop
0040f104  jalr t9
0040f108  _nop
0040f10c  lw gp,0x10(sp)
0040f110  move a0,s0
0040f114  lw t9,-0x7a44(gp)
0040f118  nop
0040f11c  jalr t9
0040f120  _move a1,v0
0040f124  lw gp,0x10(sp)
0040f128  lui a1,0x45
0040f12c  move a0,s0
0040f130  lw t9,-0x7a44(gp)
0040f134  nop
0040f138  jalr t9
0040f13c  _addiu a1,a1,-0x45a0
0040f140  lw gp,0x10(sp)
0040f144  move a0,s0
0040f148  lw t9,-0x7a44(gp)
0040f14c  nop
0040f150  jalr t9
0040f154  _addiu a1,s1,-0x4c0c
0040f158  lw gp,0x10(sp)
0040f15c  move a0,s0
0040f160  addiu a1,s1,-0x4c0c
0040f164  lw t9,-0x7a44(gp)
0040f168  lw ra,0x24(sp)
0040f16c  lw s1,0x20(sp)
0040f170  lw s0,0x1c(sp)
0040f174  jr t9
0040f178  _addiu sp,sp,0x28
0040f17c  lw ra,0x24(sp)
0040f180  lw s1,0x20(sp)
0040f184  lw s0,0x1c(sp)
0040f188  jr ra
0040f18c  _addiu sp,sp,0x28
