# FUN_0043da70 @ 0043da70
0043da70  addiu sp,sp,-0x128
0043da74  sw ra,0x124(sp)
0043da78  sw s1,0x120(sp)
0043da7c  sw s0,0x11c(sp)
0043da80  lui gp,0x47
0043da84  addiu gp,gp,0x2630
0043da88  sw gp,0x10(sp)
0043da8c  lw t9,-0x7db4(gp)
0043da90  addiu s1,sp,0x18
0043da94  move s0,a0
0043da98  clear a1
0043da9c  move a0,s1
0043daa0  jalr t9
0043daa4  _li a2,0x100
0043daa8  lw gp,0x10(sp)
0043daac  move a0,s0
0043dab0  lw v0,-0x7cf4(gp)
0043dab4  nop
0043dab8  lw a2,0x0(v0)
0043dabc  jal 0x00435420
0043dac0  _move a1,s1
0043dac4  bltz v0,0x0043dc04
0043dac8  _nop
0043dacc  jal 0x0043c750
0043dad0  _nop
0043dad4  lui a0,0x45
0043dad8  jal 0x0043c378
0043dadc  _addiu a0,a0,-0x1d2c
0043dae0  lw gp,0x10(sp)
0043dae4  lui a1,0x45
0043dae8  lui a2,0x45
0043daec  lw t9,-0x7fbc(gp)
0043daf0  addiu a1,a1,-0x3b10
0043daf4  addiu a2,a2,-0x4cd4
0043daf8  jalr t9
0043dafc  _move a0,s0
0043db00  lw gp,0x10(sp)
0043db04  move s1,v0
0043db08  li v1,0x1
0043db0c  lw v0,-0x7c7c(gp)
0043db10  nop
0043db14  sw v1,0x0(v0)
0043db18  lb v0,0x0(s1)
0043db1c  nop
0043db20  bne v0,zero,0x0043db44
0043db24  _nop
0043db28  lw t9,-0x79d0(gp)
0043db2c  lui a1,0x45
0043db30  addiu a1,a1,-0x22a8
0043db34  jalr t9
0043db38  _move a0,s1
0043db3c  lw gp,0x10(sp)
0043db40  nop
0043db44  lw t9,-0x7cd4(gp)
0043db48  lui a1,0x45
0043db4c  move a0,s0
0043db50  jalr t9
0043db54  _addiu a1,a1,-0x229c
0043db58  lw gp,0x10(sp)
0043db5c  lui a1,0x45
0043db60  move a0,s0
0043db64  lw t9,-0x7cd4(gp)
0043db68  nop
0043db6c  jalr t9
0043db70  _addiu a1,a1,-0x21b0
0043db74  lw gp,0x10(sp)
0043db78  lui a1,0x45
0043db7c  move a2,s1
0043db80  lw t9,-0x7cd4(gp)
0043db84  move a0,s0
0043db88  jalr t9
0043db8c  _addiu a1,a1,-0x216c
0043db90  lw gp,0x10(sp)
0043db94  lui a1,0x45
0043db98  move a0,s0
0043db9c  lw t9,-0x7cd4(gp)
0043dba0  nop
0043dba4  jalr t9
0043dba8  _addiu a1,a1,-0x2138
0043dbac  lw gp,0x10(sp)
0043dbb0  lui a1,0x45
0043dbb4  move a2,s1
0043dbb8  lw t9,-0x7cd4(gp)
0043dbbc  move a0,s0
0043dbc0  jalr t9
0043dbc4  _addiu a1,a1,-0x20d8
0043dbc8  lw gp,0x10(sp)
0043dbcc  lui a1,0x45
0043dbd0  move a0,s0
0043dbd4  lw t9,-0x7cd4(gp)
0043dbd8  nop
0043dbdc  jalr t9
0043dbe0  _addiu a1,a1,-0x2074
0043dbe4  lw gp,0x10(sp)
0043dbe8  lui a0,0x45
0043dbec  lw t9,-0x7c58(gp)
0043dbf0  nop
0043dbf4  jalr t9
0043dbf8  _addiu a0,a0,-0x3bd8
0043dbfc  b 0x0043dc44
0043dc00  _nop
0043dc04  jal 0x004340e4
0043dc08  _move a0,s0
0043dc0c  lw gp,0x10(sp)
0043dc10  lui a1,0x45
0043dc14  addiu a1,a1,-0x271c
0043dc18  lw t9,-0x7cd4(gp)
0043dc1c  move a0,s0
0043dc20  jalr t9
0043dc24  _move a2,s1
0043dc28  lw gp,0x10(sp)
0043dc2c  lui a1,0x45
0043dc30  move a0,s0
0043dc34  lw t9,-0x7cd4(gp)
0043dc38  nop
0043dc3c  jalr t9
0043dc40  _addiu a1,a1,-0x2050
0043dc44  lw ra,0x124(sp)
0043dc48  lw s1,0x120(sp)
0043dc4c  lw s0,0x11c(sp)
0043dc50  jr ra
0043dc54  _addiu sp,sp,0x128
