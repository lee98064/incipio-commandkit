# FUN_804063b0 @ 804063b0
804063b0  addiu sp,sp,-0x18
804063b4  sw ra,0x14(sp)
804063b8  mfc0 v1,Status
804063bc  lui v0,0x1fff
804063c0  ori v0,v0,0xff3f
804063c4  and v0,v1,v0
804063c8  lui v1,0x1000
804063cc  or v0,v0,v1
804063d0  mtc0 v0,Status
804063d4  nop
804063d8  jal 0x80406534
804063dc  _mfc0 v0,Status
804063e0  lw ra,0x14(sp)
804063e4  nop
804063e8  jr ra
804063ec  _addiu sp,sp,0x18
