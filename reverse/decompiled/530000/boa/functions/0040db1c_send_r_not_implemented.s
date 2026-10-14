# send_r_not_implemented @ 0040db1c
0040db1c  addiu sp,sp,-0x20
0040db20  sw ra,0x1c(sp)
0040db24  sw s0,0x18(sp)
0040db28  lui gp,0x47
0040db2c  addiu gp,gp,0x2630
0040db30  sw gp,0x10(sp)
0040db34  lw v0,0x8(a0)
0040db38  li v1,0x2
0040db3c  sw v1,0x4(a0)
0040db40  li v1,0x1f5
0040db44  sw v1,0x10(a0)
0040db48  li v1,0x1
0040db4c  beq v0,v1,0x0040dbcc
0040db50  _move s0,a0
0040db54  li v1,0x3
0040db58  beq v0,v1,0x0040db6c
0040db5c  _nop
0040db60  lui a1,0x45
0040db64  b 0x0040db74
0040db68  _addiu a1,a1,-0x51b0
0040db6c  lui a1,0x45
0040db70  addiu a1,a1,-0x5198
0040db74  lw t9,-0x7a44(gp)
0040db78  nop
0040db7c  jalr t9
0040db80  _move a0,s0
0040db84  lw gp,0x10(sp)
0040db88  lui a1,0x45
0040db8c  addiu a1,a1,-0x4ee8
0040db90  lw t9,-0x7a44(gp)
0040db94  nop
0040db98  jalr t9
0040db9c  _move a0,s0
0040dba0  jal 0x0040d688
0040dba4  _move a0,s0
0040dba8  lw gp,0x10(sp)
0040dbac  lui a1,0x45
0040dbb0  addiu a1,a1,-0x50d8
0040dbb4  lw t9,-0x7a44(gp)
0040dbb8  nop
0040dbbc  jalr t9
0040dbc0  _move a0,s0
0040dbc4  lw gp,0x10(sp)
0040dbc8  nop
0040dbcc  lw t9,-0x7a44(gp)
0040dbd0  lui a1,0x45
0040dbd4  move a0,s0
0040dbd8  jalr t9
0040dbdc  _addiu a1,a1,-0x4ed0
0040dbe0  lw gp,0x10(sp)
0040dbe4  move a0,s0
0040dbe8  lw ra,0x1c(sp)
0040dbec  lw t9,-0x7f98(gp)
0040dbf0  lw s0,0x18(sp)
0040dbf4  jr t9
0040dbf8  _addiu sp,sp,0x20
