# lh_ptr_equal @ 0043e950
0043e950  addiu sp,sp,-0x8
0043e954  sw s8,0x4(sp)
0043e958  move s8,sp
0043e95c  sw a0,0x8(s8)
0043e960  sw a1,0xc(s8)
0043e964  lw v1,0x8(s8)
0043e968  lw v0,0xc(s8)
0043e96c  nop
0043e970  xor v0,v1,v0
0043e974  sltiu v0,v0,0x1
0043e978  move sp,s8
0043e97c  lw s8,0x4(sp)
0043e980  addiu sp,sp,0x8
0043e984  jr ra
0043e988  _nop
