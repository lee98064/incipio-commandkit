# HKSNewSecuritySession @ 00420850
00420850  addiu sp,sp,-0x20
00420854  sw ra,0x1c(sp)
00420858  lui gp,0x62
0042085c  addiu gp,gp,-0x5cf0
00420860  sw gp,0x10(sp)
00420864  lw t9,-0x5a50(gp)
00420868  li a0,0x1
0042086c  jalr t9
00420870  _li a1,0x68
00420874  sb zero,0x0(v0)
00420878  lw ra,0x1c(sp)
0042087c  nop
00420880  jr ra
00420884  _addiu sp,sp,0x20
