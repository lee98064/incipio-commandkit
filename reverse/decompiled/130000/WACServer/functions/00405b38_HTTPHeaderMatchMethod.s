# HTTPHeaderMatchMethod @ 00405b38
00405b38  addiu sp,sp,-0x20
00405b3c  sw ra,0x1c(sp)
00405b40  lui gp,0x44
00405b44  addiu gp,gp,-0x4fc0
00405b48  sw gp,0x10(sp)
00405b4c  move a2,a1
00405b50  lw t9,-0x7f4c(gp)
00405b54  lw a1,0x810(a0)
00405b58  lw a0,0x80c(a0)
00405b5c  jalr t9
00405b60  _nop
00405b64  li v1,-0x1a47
00405b68  lw ra,0x1c(sp)
00405b6c  movz v1,zero,v0
00405b70  move v0,v1
00405b74  jr ra
00405b78  _addiu sp,sp,0x20
