# json_object_array_get_idx @ 0043766c
0043766c  lui gp,0x1e
00437670  addiu gp,gp,0x1e14
00437674  addu gp,gp,t9
00437678  addiu sp,sp,-0x20
0043767c  sw ra,0x1c(sp)
00437680  sw s8,0x18(sp)
00437684  move s8,sp
00437688  sw gp,0x10(sp)
0043768c  sw a0,0x20(s8)
00437690  sw a1,0x24(s8)
00437694  lw v0,0x20(s8)
00437698  nop
0043769c  lw v0,0x18(v0)
004376a0  nop
004376a4  move a0,v0
004376a8  lw a1,0x24(s8)
004376ac  lw v0,-0x6868(gp)
004376b0  nop
004376b4  move t9,v0
004376b8  jalr t9
004376bc  _nop
004376c0  lw gp,0x10(s8)
004376c4  move sp,s8
004376c8  lw ra,0x1c(sp)
004376cc  lw s8,0x18(sp)
004376d0  addiu sp,sp,0x20
004376d4  jr ra
004376d8  _nop
