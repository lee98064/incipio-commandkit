# StartThreadForWFAudioNetlink @ 00405570
00405570  addiu sp,sp,-0x28
00405574  sw ra,0x24(sp)
00405578  lui gp,0x43
0040557c  addiu gp,gp,-0x4f70
00405580  sw gp,0x10(sp)
00405584  lw t9,-0x7dc4(gp)
00405588  lui a2,0x40
0040558c  addiu a2,a2,0x5be0
00405590  addiu a0,sp,0x18
00405594  clear a1
00405598  jalr t9
0040559c  _clear a3
004055a0  lw gp,0x10(sp)
004055a4  beq v0,zero,0x004055d8
004055a8  _lui a1,0x41
004055ac  lw v0,-0x7f30(gp)
004055b0  lw t9,-0x7e6c(gp)
004055b4  lw a0,0x0(v0)
004055b8  lui a2,0x41
004055bc  lui a3,0x41
004055c0  addiu a1,a1,0xc90
004055c4  addiu a2,a2,0xcbc
004055c8  jalr t9
004055cc  _addiu a3,a3,0xeb0
004055d0  b 0x004055ec
004055d4  _clear v0
004055d8  lw t9,-0x7e3c(gp)
004055dc  lw a0,0x18(sp)
004055e0  jalr t9
004055e4  _nop
004055e8  li v0,0x1
004055ec  lw ra,0x24(sp)
004055f0  nop
004055f4  jr ra
004055f8  _addiu sp,sp,0x28
