# lh_ptr_equal @ 0043f720
0043f720  addiu sp,sp,-0x8
0043f724  sw s8,0x4(sp)
0043f728  move s8,sp
0043f72c  sw a0,0x8(s8)
0043f730  sw a1,0xc(s8)
0043f734  lw v1,0x8(s8)
0043f738  lw v0,0xc(s8)
0043f73c  nop
0043f740  xor v0,v1,v0
0043f744  sltiu v0,v0,0x1
0043f748  move sp,s8
0043f74c  lw s8,0x4(sp)
0043f750  addiu sp,sp,0x8
0043f754  jr ra
0043f758  _nop
