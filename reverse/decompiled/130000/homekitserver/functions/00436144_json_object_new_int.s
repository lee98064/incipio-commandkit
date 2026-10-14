# json_object_new_int @ 00436144
00436144  lui gp,0x1e
00436148  addiu gp,gp,0x333c
0043614c  addu gp,gp,t9
00436150  addiu sp,sp,-0x30
00436154  sw ra,0x2c(sp)
00436158  sw s8,0x28(sp)
0043615c  sw s1,0x24(sp)
00436160  sw s0,0x20(sp)
00436164  move s8,sp
00436168  sw gp,0x10(sp)
0043616c  sw a0,0x30(s8)
00436170  li a0,0x3
00436174  lw v0,-0x7fcc(gp)
00436178  nop
0043617c  addiu v0,v0,0x4df0
00436180  move t9,v0
00436184  jalr t9
00436188  _nop
0043618c  lw gp,0x10(s8)
00436190  sw v0,0x18(s8)
00436194  lw v0,0x18(s8)
00436198  nop
0043619c  bne v0,zero,0x004361b0
004361a0  _nop
004361a4  clear v0
004361a8  b 0x004361ec
004361ac  _nop
004361b0  lw v0,0x18(s8)
004361b4  lw v1,-0x7fcc(gp)
004361b8  nop
004361bc  addiu v1,v1,0x60bc
004361c0  sw v1,0x8(v0)
004361c4  lw s1,0x30(s8)
004361c8  lw v0,0x30(s8)
004361cc  nop
004361d0  sra v0,v0,0x1f
004361d4  move s0,v0
004361d8  lw v0,0x18(s8)
004361dc  nop
004361e0  sw s1,0x1c(v0)
004361e4  sw s0,0x18(v0)
004361e8  lw v0,0x18(s8)
004361ec  move sp,s8
004361f0  lw ra,0x2c(sp)
004361f4  lw s8,0x28(sp)
004361f8  lw s1,0x24(sp)
004361fc  lw s0,0x20(sp)
00436200  addiu sp,sp,0x30
00436204  jr ra
00436208  _nop
