# RSA_verify @ 004e041c
004e041c  addiu sp,sp,-0x30
004e0420  sw ra,0x2c(sp)
004e0424  lw v0,0x44(sp)
004e0428  move t3,a0
004e042c  move t2,a1
004e0430  lw t4,0x3c(v0)
004e0434  move t1,a2
004e0438  andi t4,t4,0x40
004e043c  lw v1,0x40(sp)
004e0440  beq t4,zero,0x004e046c
004e0444  _move t0,a3
004e0448  lw t4,0x8(v0)
004e044c  nop
004e0450  lw t9,0x30(t4)
004e0454  nop
004e0458  beq t9,zero,0x004e046c
004e045c  _nop
004e0460  lw ra,0x2c(sp)
004e0464  jr t9
004e0468  _addiu sp,sp,0x30
004e046c  move a0,t3
004e0470  move a1,t2
004e0474  move a2,t1
004e0478  clear a3
004e047c  sw t0,0x14(sp)
004e0480  sw v1,0x18(sp)
004e0484  sw v0,0x1c(sp)
004e0488  jal 0x004dfe90
004e048c  _sw zero,0x10(sp)
004e0490  lw ra,0x2c(sp)
004e0494  nop
004e0498  jr ra
004e049c  _addiu sp,sp,0x30
