# json_object_array_add @ 00438354
00438354  lui gp,0x1e
00438358  addiu gp,gp,0x1fbc
0043835c  addu gp,gp,t9
00438360  addiu sp,sp,-0x20
00438364  sw ra,0x1c(sp)
00438368  sw s8,0x18(sp)
0043836c  move s8,sp
00438370  sw gp,0x10(sp)
00438374  sw a0,0x20(s8)
00438378  sw a1,0x24(s8)
0043837c  lw v0,0x20(s8)
00438380  nop
00438384  lw v0,0x18(v0)
00438388  nop
0043838c  move a0,v0
00438390  lw a1,0x24(s8)
00438394  lw v0,-0x7f48(gp)
00438398  nop
0043839c  move t9,v0
004383a0  jalr t9
004383a4  _nop
004383a8  lw gp,0x10(s8)
004383ac  move sp,s8
004383b0  lw ra,0x1c(sp)
004383b4  lw s8,0x18(sp)
004383b8  addiu sp,sp,0x20
004383bc  jr ra
004383c0  _nop
