# FUN_80407de0 @ 80407de0
80407de0  addiu sp,sp,-0x18
80407de4  sw ra,0x14(sp)
80407de8  jal 0x80409050
80407dec  _nop
80407df0  jal 0x80407ad0
80407df4  _li a0,0x1b
80407df8  li v1,0x1
80407dfc  beq v0,v1,0x80407e14
80407e00  _nop
80407e04  jal 0x80407d94
80407e08  _li a0,-0x1
80407e0c  slti v1,v0,0x0
80407e10  movn v0,zero,v1
80407e14  lw ra,0x14(sp)
80407e18  nop
80407e1c  jr ra
80407e20  _addiu sp,sp,0x18
