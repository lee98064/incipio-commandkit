# normalize_bankmark @ 80407aa8
80407aa8  beq a0,zero,0x80407ac8
80407aac  _lui v0,0x8000
80407ab0  lw v0,0x8(a1)
80407ab4  nop
80407ab8  bltz v0,0x80407ac8
80407abc  _nop
80407ac0  lui v0,0x8000
80407ac4  ori v0,v0,0x1
80407ac8  jr ra
80407acc  _nop
