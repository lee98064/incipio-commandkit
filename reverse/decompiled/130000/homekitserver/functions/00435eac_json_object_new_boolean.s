# json_object_new_boolean @ 00435eac
00435eac  lui gp,0x1e
00435eb0  addiu gp,gp,0x35d4
00435eb4  addu gp,gp,t9
00435eb8  addiu sp,sp,-0x28
00435ebc  sw ra,0x24(sp)
00435ec0  sw s8,0x20(sp)
00435ec4  move s8,sp
00435ec8  sw gp,0x10(sp)
00435ecc  sw a0,0x28(s8)
00435ed0  li a0,0x1
00435ed4  lw v0,-0x7fcc(gp)
00435ed8  nop
00435edc  addiu v0,v0,0x4df0
00435ee0  move t9,v0
00435ee4  jalr t9
00435ee8  _nop
00435eec  lw gp,0x10(s8)
00435ef0  sw v0,0x18(s8)
00435ef4  lw v0,0x18(s8)
00435ef8  nop
00435efc  bne v0,zero,0x00435f10
00435f00  _nop
00435f04  clear v0
00435f08  b 0x00435f38
00435f0c  _nop
00435f10  lw v0,0x18(s8)
00435f14  lw v1,-0x7fcc(gp)
00435f18  nop
00435f1c  addiu v1,v1,0x5df4
00435f20  sw v1,0x8(v0)
00435f24  lw v0,0x18(s8)
00435f28  lw v1,0x28(s8)
00435f2c  nop
00435f30  sw v1,0x18(v0)
00435f34  lw v0,0x18(s8)
00435f38  move sp,s8
00435f3c  lw ra,0x24(sp)
00435f40  lw s8,0x20(sp)
00435f44  addiu sp,sp,0x28
00435f48  jr ra
00435f4c  _nop
