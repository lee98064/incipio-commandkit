# main @ 00400cc0
00400cc0  addiu sp,sp,-0x20
00400cc4  sw ra,0x1c(sp)
00400cc8  sw s8,0x18(sp)
00400ccc  move s8,sp
00400cd0  sw a0,0x20(s8)
00400cd4  sw a1,0x24(s8)
00400cd8  lw a0,0x24(s8)
00400cdc  jal 0x004008c0
00400ce0  _nop
00400ce4  clear v0
00400ce8  move sp,s8
00400cec  lw ra,0x1c(sp)
00400cf0  lw s8,0x18(sp)
00400cf4  addiu sp,sp,0x20
00400cf8  jr ra
00400cfc  _nop
