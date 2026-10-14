# FUN_80407ad0 @ 80407ad0
80407ad0  lui v0,0xb800
80407ad4  ori v0,v0,0x2014
80407ad8  lw v1,0x0(v0)
80407adc  lui v0,0x100
80407ae0  and v0,v1,v0
80407ae4  beq v0,zero,0x80407b18
80407ae8  _nop
80407aec  lui v0,0xb800
80407af0  ori v0,v0,0x2000
80407af4  lw v1,0x0(v0)
80407af8  lw v0,0x0(v0)
80407afc  srl v0,v1,0x18
80407b00  bne v0,a0,0x80407b18
80407b04  _li v1,0x1
80407b08  lui v0,0x8041
80407b0c  sw v1,-0x248(v0)
80407b10  jr ra
80407b14  _li v0,0x1
80407b18  jr ra
80407b1c  _clear v0
