# shared_ServerWriteDetach @ 00434268
00434268  addiu sp,sp,-0x28
0043426c  sw ra,0x24(sp)
00434270  sw s1,0x20(sp)
00434274  sw s0,0x1c(sp)
00434278  lui gp,0x62
0043427c  addiu gp,gp,-0x6b80
00434280  sw gp,0x10(sp)
00434284  lui s0,0x60
00434288  lw a0,-0x2f4(s0)
0043428c  li s1,-0x1
00434290  beq a0,s1,0x004342d4
00434294  _li v1,-0x1
00434298  lw t9,-0x7c48(gp)
0043429c  nop
004342a0  jalr t9
004342a4  _nop
004342a8  lw gp,0x10(sp)
004342ac  bne v0,zero,0x004342d4
004342b0  _li v1,-0x1
004342b4  lw t9,-0x61f4(gp)
004342b8  lui a0,0x5b
004342bc  sw s1,-0x2f4(s0)
004342c0  jalr t9
004342c4  _addiu a0,a0,-0x2654
004342c8  beq v0,zero,0x004342d4
004342cc  _clear v1
004342d0  li v1,-0x1
004342d4  lw ra,0x24(sp)
004342d8  lw s1,0x20(sp)
004342dc  lw s0,0x1c(sp)
004342e0  move v0,v1
004342e4  jr ra
004342e8  _addiu sp,sp,0x28
