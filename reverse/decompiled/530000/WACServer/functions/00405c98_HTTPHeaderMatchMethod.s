# HTTPHeaderMatchMethod @ 00405c98
00405c98  addiu sp,sp,-0x20
00405c9c  sw ra,0x1c(sp)
00405ca0  lui gp,0x44
00405ca4  addiu gp,gp,-0x4fc0
00405ca8  sw gp,0x10(sp)
00405cac  move a2,a1
00405cb0  lw t9,-0x7f4c(gp)
00405cb4  lw a1,0x810(a0)
00405cb8  lw a0,0x80c(a0)
00405cbc  jalr t9
00405cc0  _nop
00405cc4  li v1,-0x1a47
00405cc8  lw ra,0x1c(sp)
00405ccc  movz v1,zero,v0
00405cd0  move v0,v1
00405cd4  jr ra
00405cd8  _addiu sp,sp,0x20
