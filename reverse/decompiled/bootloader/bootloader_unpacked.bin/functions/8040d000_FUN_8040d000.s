# FUN_8040d000 @ 8040d000
8040d000  addiu sp,sp,-0x18
8040d004  sw ra,0x14(sp)
8040d008  mfc0 v1,Status
8040d00c  lui v0,0xffff
8040d010  ori v0,v0,0xff
8040d014  and v0,v1,v0
8040d018  mtc0 v0,Status
8040d01c  nop
8040d020  clear a0
8040d024  lui a1,0x8040
8040d028  jal 0x80400ae4
8040d02c  _addiu a1,a1,0x5c0
8040d030  mfc0 v1,Status
8040d034  lui v0,0xffff
8040d038  ori v0,v0,0xff
8040d03c  and v0,v1,v0
8040d040  ori v0,v0,0xfc00
8040d044  mtc0 v0,Status
8040d048  nop
8040d04c  lw ra,0x14(sp)
8040d050  nop
8040d054  jr ra
8040d058  _addiu sp,sp,0x18
