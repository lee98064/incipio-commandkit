# json_object_new_object @ 00435934
00435934  lui gp,0x1e
00435938  addiu gp,gp,0x3b4c
0043593c  addu gp,gp,t9
00435940  addiu sp,sp,-0x28
00435944  sw ra,0x24(sp)
00435948  sw s8,0x20(sp)
0043594c  move s8,sp
00435950  sw gp,0x10(sp)
00435954  li a0,0x4
00435958  lw v0,-0x7fcc(gp)
0043595c  nop
00435960  addiu v0,v0,0x4df0
00435964  move t9,v0
00435968  jalr t9
0043596c  _nop
00435970  lw gp,0x10(s8)
00435974  sw v0,0x18(s8)
00435978  lw v0,0x18(s8)
0043597c  nop
00435980  bne v0,zero,0x00435994
00435984  _nop
00435988  clear v0
0043598c  b 0x004359fc
00435990  _nop
00435994  lw v0,0x18(s8)
00435998  lw v1,-0x7fcc(gp)
0043599c  nop
004359a0  addiu v1,v1,0x58ac
004359a4  sw v1,0x4(v0)
004359a8  lw v0,0x18(s8)
004359ac  lw v1,-0x7fcc(gp)
004359b0  nop
004359b4  addiu v1,v1,0x538c
004359b8  sw v1,0x8(v0)
004359bc  li a0,0x10
004359c0  clear a1
004359c4  lw v0,-0x7fcc(gp)
004359c8  nop
004359cc  addiu a2,v0,0x5818
004359d0  lw v0,-0x73a4(gp)
004359d4  nop
004359d8  move t9,v0
004359dc  jalr t9
004359e0  _nop
004359e4  lw gp,0x10(s8)
004359e8  move v1,v0
004359ec  lw v0,0x18(s8)
004359f0  nop
004359f4  sw v1,0x18(v0)
004359f8  lw v0,0x18(s8)
004359fc  move sp,s8
00435a00  lw ra,0x24(sp)
00435a04  lw s8,0x20(sp)
00435a08  addiu sp,sp,0x28
00435a0c  jr ra
00435a10  _nop
