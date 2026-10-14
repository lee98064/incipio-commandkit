# lh_ptr_hash @ 0043e914
0043e914  addiu sp,sp,-0x8
0043e918  sw s8,0x4(sp)
0043e91c  move s8,sp
0043e920  sw a0,0x8(s8)
0043e924  lw v1,0x8(s8)
0043e928  lui v0,0x9e37
0043e92c  ori v0,v0,0x1
0043e930  mult v1,v0
0043e934  mflo v0
0043e938  srl v0,v0,0x4
0043e93c  move sp,s8
0043e940  lw s8,0x4(sp)
0043e944  addiu sp,sp,0x8
0043e948  jr ra
0043e94c  _nop
