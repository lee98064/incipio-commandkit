# FUN_80402a84 @ 80402a84
80402a84  lui v0,0xb800
80402a88  ori v0,v0,0x8
80402a8c  lw v1,0x0(v0)
80402a90  nop
80402a94  andi v0,v1,0x40
80402a98  srl v0,v0,0x6
80402a9c  sll v0,v0,0x1
80402aa0  andi v1,v1,0x80
80402aa4  srl v1,v1,0x7
80402aa8  addu v0,v0,v1
80402aac  jr ra
80402ab0  _andi v0,v0,0x3
