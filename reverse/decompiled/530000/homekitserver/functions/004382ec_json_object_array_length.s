# json_object_array_length @ 004382ec
004382ec  lui gp,0x1e
004382f0  addiu gp,gp,0x2024
004382f4  addu gp,gp,t9
004382f8  addiu sp,sp,-0x20
004382fc  sw ra,0x1c(sp)
00438300  sw s8,0x18(sp)
00438304  move s8,sp
00438308  sw gp,0x10(sp)
0043830c  sw a0,0x20(s8)
00438310  lw v0,0x20(s8)
00438314  nop
00438318  lw v0,0x18(v0)
0043831c  nop
00438320  move a0,v0
00438324  lw v0,-0x7884(gp)
00438328  nop
0043832c  move t9,v0
00438330  jalr t9
00438334  _nop
00438338  lw gp,0x10(s8)
0043833c  move sp,s8
00438340  lw ra,0x1c(sp)
00438344  lw s8,0x18(sp)
00438348  addiu sp,sp,0x20
0043834c  jr ra
00438350  _nop
