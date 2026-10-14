# FUN_8040a478 @ 8040a478
8040a478  addiu sp,sp,-0x20
8040a47c  sw ra,0x1c(sp)
8040a480  sw s0,0x18(sp)
8040a484  blez a0,0x8040a4b4
8040a488  _lui a0,0x8041
8040a48c  lw a0,0x0(a1)
8040a490  jal 0x80406e68
8040a494  _addiu a1,sp,0x10
8040a498  bne v0,zero,0x8040a4b0
8040a49c  _lui a0,0x8041
8040a4a0  jal 0x804077a4
8040a4a4  _addiu a0,a0,-0x1d8c
8040a4a8  j 0x8040a584
8040a4ac  _clear v0
8040a4b0  lui a0,0x8041
8040a4b4  lw a1,0x10(sp)
8040a4b8  jal 0x804077a4
8040a4bc  _addiu a0,a0,-0x1d6c
8040a4c0  lw s0,0x10(sp)
8040a4c4  lui v1,0xb800
8040a4c8  clear v0
8040a4cc  sw v0,0x3000(v1)
8040a4d0  mfc0 at,Status
8040a4d4  ori at,at,0x1
8040a4d8  xori at,at,0x1
8040a4dc  mtc0 at,Status
8040a4e0  nop
8040a4e4  nop
8040a4e8  nop
8040a4ec  lui v0,0xbfc0
8040a4f0  lw v1,0x10(sp)
8040a4f4  nop
8040a4f8  bne v1,v0,0x8040a510
8040a4fc  _lui v0,0xb800
8040a500  ori v0,v0,0x311c
8040a504  sw zero,0x0(v0)
8040a508  j 0x8040a508
8040a50c  _nop
8040a510  lui v1,0xbb80
8040a514  ori a0,v1,0x4104
8040a518  lw a1,0x0(a0)
8040a51c  li v0,-0x2
8040a520  and a1,a1,v0
8040a524  sw a1,0x0(a0)
8040a528  ori a0,v1,0x4108
8040a52c  lw a1,0x0(a0)
8040a530  nop
8040a534  and a1,a1,v0
8040a538  sw a1,0x0(a0)
8040a53c  ori a0,v1,0x410c
8040a540  lw a1,0x0(a0)
8040a544  nop
8040a548  and a1,a1,v0
8040a54c  sw a1,0x0(a0)
8040a550  ori a0,v1,0x4110
8040a554  lw a1,0x0(a0)
8040a558  nop
8040a55c  and a1,a1,v0
8040a560  sw a1,0x0(a0)
8040a564  ori v1,v1,0x4114
8040a568  lw a0,0x0(v1)
8040a56c  nop
8040a570  and v0,a0,v0
8040a574  jal 0x80406454
8040a578  _sw v0,0x0(v1)
8040a57c  jalr s0
8040a580  _nop
8040a584  lw ra,0x1c(sp)
8040a588  lw s0,0x18(sp)
8040a58c  jr ra
8040a590  _addiu sp,sp,0x20
