# FUN_80407c84 @ 80407c84
80407c84  addiu sp,sp,-0x18
80407c88  sw ra,0x14(sp)
80407c8c  li v0,-0x8
80407c90  lui a1,0x8041
80407c94  addiu a1,a1,0xef4
80407c98  and a1,a1,v0
80407c9c  addiu a1,a1,0x8
80407ca0  move a0,a1
80407ca4  ori v0,zero,0xfff8
80407ca8  jal 0x804065e0
80407cac  _addu a1,a1,v0
80407cb0  mfc0 at,Status
80407cb4  ori at,at,0x1
80407cb8  xori at,at,0x1
80407cbc  mtc0 at,Status
80407cc0  nop
80407cc4  nop
80407cc8  nop
80407ccc  jal 0x80406454
80407cd0  _nop
80407cd4  lw ra,0x14(sp)
80407cd8  nop
80407cdc  jr ra
80407ce0  _addiu sp,sp,0x18
