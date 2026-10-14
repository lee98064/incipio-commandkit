# FUN_80409fa4 @ 80409fa4
80409fa4  addiu sp,sp,-0x20
80409fa8  sw ra,0x1c(sp)
80409fac  addiu a0,sp,0x10
80409fb0  li a1,0x2
80409fb4  jal 0x80406fd4
80409fb8  _li a2,0x1
80409fbc  lui a0,0x8041
80409fc0  jal 0x804077a4
80409fc4  _addiu a0,a0,-0x2120
80409fc8  lbu v0,0x10(sp)
80409fcc  li v1,0x59
80409fd0  bne v0,v1,0x80409fe0
80409fd4  _nop
80409fd8  j 0x80409fe8
80409fdc  _li v0,0x1
80409fe0  xori v0,v0,0x79
80409fe4  sltiu v0,v0,0x1
80409fe8  lw ra,0x1c(sp)
80409fec  nop
80409ff0  jr ra
80409ff4  _addiu sp,sp,0x20
