# json_object_array_get_idx @ 0043843c
0043843c  lui gp,0x1e
00438440  addiu gp,gp,0x1ed4
00438444  addu gp,gp,t9
00438448  addiu sp,sp,-0x20
0043844c  sw ra,0x1c(sp)
00438450  sw s8,0x18(sp)
00438454  move s8,sp
00438458  sw gp,0x10(sp)
0043845c  sw a0,0x20(s8)
00438460  sw a1,0x24(s8)
00438464  lw v0,0x20(s8)
00438468  nop
0043846c  lw v0,0x18(v0)
00438470  nop
00438474  move a0,v0
00438478  lw a1,0x24(s8)
0043847c  lw v0,-0x685c(gp)
00438480  nop
00438484  move t9,v0
00438488  jalr t9
0043848c  _nop
00438490  lw gp,0x10(s8)
00438494  move sp,s8
00438498  lw ra,0x1c(sp)
0043849c  lw s8,0x18(sp)
004384a0  addiu sp,sp,0x20
004384a4  jr ra
004384a8  _nop
