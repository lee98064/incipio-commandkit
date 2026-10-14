# FUN_80407d94 @ 80407d94
80407d94  addiu sp,sp,-0x18
80407d98  sw ra,0x14(sp)
80407d9c  li v1,-0x1
80407da0  beq a0,v1,0x80407db4
80407da4  _move v0,a0
80407da8  li v1,0x1
80407dac  bne a0,v1,0x80407dd0
80407db0  _nop
80407db4  jal 0x80408960
80407db8  _nop
80407dbc  beq v0,zero,0x80407dd0
80407dc0  _li v1,0x1
80407dc4  lui v0,0x8041
80407dc8  sw v1,-0x248(v0)
80407dcc  li v0,0x1
80407dd0  lw ra,0x14(sp)
80407dd4  nop
80407dd8  jr ra
80407ddc  _addiu sp,sp,0x18
