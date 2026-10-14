# RSA_verify @ 004df64c
004df64c  addiu sp,sp,-0x30
004df650  sw ra,0x2c(sp)
004df654  lw v0,0x44(sp)
004df658  move t3,a0
004df65c  move t2,a1
004df660  lw t4,0x3c(v0)
004df664  move t1,a2
004df668  andi t4,t4,0x40
004df66c  lw v1,0x40(sp)
004df670  beq t4,zero,0x004df69c
004df674  _move t0,a3
004df678  lw t4,0x8(v0)
004df67c  nop
004df680  lw t9,0x30(t4)
004df684  nop
004df688  beq t9,zero,0x004df69c
004df68c  _nop
004df690  lw ra,0x2c(sp)
004df694  jr t9
004df698  _addiu sp,sp,0x30
004df69c  move a0,t3
004df6a0  move a1,t2
004df6a4  move a2,t1
004df6a8  clear a3
004df6ac  sw t0,0x14(sp)
004df6b0  sw v1,0x18(sp)
004df6b4  sw v0,0x1c(sp)
004df6b8  jal 0x004df0c0
004df6bc  _sw zero,0x10(sp)
004df6c0  lw ra,0x2c(sp)
004df6c4  nop
004df6c8  jr ra
004df6cc  _addiu sp,sp,0x30
