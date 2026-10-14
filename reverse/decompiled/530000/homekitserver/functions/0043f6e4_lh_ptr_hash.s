# lh_ptr_hash @ 0043f6e4
0043f6e4  addiu sp,sp,-0x8
0043f6e8  sw s8,0x4(sp)
0043f6ec  move s8,sp
0043f6f0  sw a0,0x8(s8)
0043f6f4  lw v1,0x8(s8)
0043f6f8  lui v0,0x9e37
0043f6fc  ori v0,v0,0x1
0043f700  mult v1,v0
0043f704  mflo v0
0043f708  srl v0,v0,0x4
0043f70c  move sp,s8
0043f710  lw s8,0x4(sp)
0043f714  addiu sp,sp,0x8
0043f718  jr ra
0043f71c  _nop
