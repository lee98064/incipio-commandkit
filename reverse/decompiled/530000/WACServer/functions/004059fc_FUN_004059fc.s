# FUN_004059fc @ 004059fc
004059fc  addiu sp,sp,-0x20
00405a00  sw ra,0x1c(sp)
00405a04  lui gp,0x44
00405a08  addiu gp,gp,-0x4fc0
00405a0c  sw gp,0x10(sp)
00405a10  lw t9,-0x7d48(gp)
00405a14  lw a1,0x808(a0)
00405a18  lw a0,0x804(a0)
00405a1c  jalr t9
00405a20  _nop
00405a24  lw gp,0x10(sp)
00405a28  beq v0,zero,0x00405a40
00405a2c  _move a0,v0
00405a30  lw t9,-0x7fb8(gp)
00405a34  lw ra,0x1c(sp)
00405a38  jr t9
00405a3c  _addiu sp,sp,0x20
00405a40  lw ra,0x1c(sp)
00405a44  nop
00405a48  jr ra
00405a4c  _addiu sp,sp,0x20
