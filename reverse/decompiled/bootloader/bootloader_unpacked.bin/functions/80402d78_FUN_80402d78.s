# FUN_80402d78 @ 80402d78
80402d78  addiu sp,sp,-0x18
80402d7c  sw ra,0x14(sp)
80402d80  sw s0,0x10(sp)
80402d84  move s0,a2
80402d88  sll a1,a1,0x10
80402d8c  sll a0,a0,0x18
80402d90  or a1,a1,a0
80402d94  lui v0,0xbb80
80402d98  ori v0,v0,0x4004
80402d9c  sw a1,0x0(v0)
80402da0  lui v0,0xb800
80402da4  ori v0,v0,0x3000
80402da8  lw v1,0x0(v0)
80402dac  nop
80402db0  ori v1,v1,0x100
80402db4  sw v1,0x0(v0)
80402db8  jal 0x80407318
80402dbc  _li a0,0xa
80402dc0  lui v1,0xbb80
80402dc4  ori v1,v1,0x4008
80402dc8  lw v0,0x0(v1)
80402dcc  nop
80402dd0  bltz v0,0x80402dc8
80402dd4  _andi v0,v0,0xffff
80402dd8  sw v0,0x0(s0)
80402ddc  clear v0
80402de0  lw ra,0x14(sp)
80402de4  lw s0,0x10(sp)
80402de8  jr ra
80402dec  _addiu sp,sp,0x18
