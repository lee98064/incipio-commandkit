# SocketReadHTTPBody @ 004063d0
004063d0  addiu sp,sp,-0xb8
004063d4  sw ra,0xb4(sp)
004063d8  sw s3,0xb0(sp)
004063dc  sw s2,0xac(sp)
004063e0  sw s1,0xa8(sp)
004063e4  sw s0,0xa4(sp)
004063e8  lui gp,0x44
004063ec  addiu gp,gp,-0x4fc0
004063f0  sw gp,0x18(sp)
004063f4  move s0,a1
004063f8  move s1,a0
004063fc  beq a1,zero,0x004064d4
00406400  _li v0,-0x1a31
00406404  addiu v0,sp,0x20
00406408  addiu v1,sp,0xa0
0040640c  sw zero,0x0(v0)
00406410  addiu v0,v0,0x4
00406414  bne v0,v1,0x0040640c
00406418  _addiu s3,sp,0x20
0040641c  srl v0,s1,0x5
00406420  sll v0,v0,0x2
00406424  addu v0,s3,v0
00406428  lw a0,0x0(v0)
0040642c  li v1,0x1
00406430  sllv v1,v1,s1
00406434  or v1,a0,v1
00406438  sw v1,0x0(v0)
0040643c  b 0x00406494
00406440  _addiu s2,s1,0x1
00406444  jalr t9
00406448  _sw zero,0x10(sp)
0040644c  lw gp,0x18(sp)
00406450  nop
00406454  lw t9,-0x7e6c(gp)
00406458  blez v0,0x004064d0
0040645c  _move a0,s1
00406460  lw v0,0x808(s0)
00406464  lw a1,0x804(s0)
00406468  lw a2,0x87c(s0)
0040646c  addu a1,a1,v0
00406470  jalr t9
00406474  _subu a2,a2,v0
00406478  lw gp,0x18(sp)
0040647c  bltz v0,0x004064d0
00406480  _nop
00406484  lw v1,0x808(s0)
00406488  nop
0040648c  addu v0,v1,v0
00406490  sw v0,0x808(s0)
00406494  lw v1,0x878(s0)
00406498  lw t9,-0x7ddc(gp)
0040649c  move a0,s2
004064a0  move a1,s3
004064a4  clear a2
004064a8  lw v0,0x808(s0)
004064ac  bne v1,zero,0x00406444
004064b0  _clear a3
004064b4  lw v1,0x87c(s0)
004064b8  nop
004064bc  sltu v0,v0,v1
004064c0  bne v0,zero,0x00406444
004064c4  _nop
004064c8  b 0x004064d4
004064cc  _nop
004064d0  li v0,-0x1a52
004064d4  lw ra,0xb4(sp)
004064d8  lw s3,0xb0(sp)
004064dc  lw s2,0xac(sp)
004064e0  lw s1,0xa8(sp)
004064e4  lw s0,0xa4(sp)
004064e8  jr ra
004064ec  _addiu sp,sp,0xb8
