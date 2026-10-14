# FUN_0043827c @ 0043827c
0043827c  lui gp,0x1e
00438280  addiu gp,gp,0x2094
00438284  addu gp,gp,t9
00438288  addiu sp,sp,-0x20
0043828c  sw ra,0x1c(sp)
00438290  sw s8,0x18(sp)
00438294  move s8,sp
00438298  sw gp,0x10(sp)
0043829c  sw a0,0x20(s8)
004382a0  sw a1,0x24(s8)
004382a4  lw v0,0x20(s8)
004382a8  nop
004382ac  lw v0,0x18(v0)
004382b0  nop
004382b4  move a0,v0
004382b8  lw a1,0x24(s8)
004382bc  lw v0,-0x7818(gp)
004382c0  nop
004382c4  move t9,v0
004382c8  jalr t9
004382cc  _nop
004382d0  lw gp,0x10(s8)
004382d4  move sp,s8
004382d8  lw ra,0x1c(sp)
004382dc  lw s8,0x18(sp)
004382e0  addiu sp,sp,0x20
004382e4  jr ra
004382e8  _nop
