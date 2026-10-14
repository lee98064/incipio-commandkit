# getWACServerState @ 00402784
00402784  addiu sp,sp,-0xb0
00402788  sw ra,0xac(sp)
0040278c  sw s1,0xa8(sp)
00402790  sw s0,0xa4(sp)
00402794  lui gp,0x43
00402798  addiu gp,gp,-0x4c90
0040279c  sw gp,0x10(sp)
004027a0  lw t9,-0x7ee0(gp)
004027a4  li v0,-0x1
004027a8  addiu s1,sp,0x1c
004027ac  clear a1
004027b0  li a2,0x80
004027b4  move a0,s1
004027b8  jalr t9
004027bc  _sw v0,0x18(sp)
004027c0  lw gp,0x10(sp)
004027c4  nop
004027c8  lw t9,-0x7f64(gp)
004027cc  lw a0,-0x7e50(gp)
004027d0  jalr t9
004027d4  _nop
004027d8  lw gp,0x10(sp)
004027dc  lui v0,0x42
004027e0  lw s0,0x36c0(v0)
004027e4  lw t9,-0x7f10(gp)
004027e8  lw a0,-0x7e50(gp)
004027ec  jalr t9
004027f0  _nop
004027f4  lw gp,0x10(sp)
004027f8  beq s0,zero,0x004028e4
004027fc  _lui s0,0x41
00402800  lw t9,-0x7f58(gp)
00402804  addiu a0,s0,0x4a8
00402808  jalr t9
0040280c  _li a1,0x4
00402810  lw gp,0x10(sp)
00402814  bne v0,zero,0x004028e4
00402818  _lui a1,0x41
0040281c  lw t9,-0x7ed8(gp)
00402820  addiu a0,s0,0x4a8
00402824  jalr t9
00402828  _addiu a1,a1,0x1fe4
0040282c  lw gp,0x10(sp)
00402830  beq v0,zero,0x004028e4
00402834  _move s0,v0
00402838  lw t9,-0x7f80(gp)
0040283c  nop
00402840  jalr t9
00402844  _move a0,v0
00402848  lw gp,0x10(sp)
0040284c  move a0,v0
00402850  lw t9,-0x7e80(gp)
00402854  nop
00402858  jalr t9
0040285c  _li a1,0x2
00402860  lw gp,0x10(sp)
00402864  bne v0,zero,0x004028d4
00402868  _move a0,s1
0040286c  lw t9,-0x7de8(gp)
00402870  li a1,0x80
00402874  jalr t9
00402878  _move a2,s0
0040287c  lw gp,0x10(sp)
00402880  beq v0,zero,0x004028a4
00402884  _lui a1,0x41
00402888  lw t9,-0x7ebc(gp)
0040288c  move a0,s1
00402890  addiu a1,a1,0x17f4
00402894  jalr t9
00402898  _addiu a2,sp,0x18
0040289c  lw gp,0x10(sp)
004028a0  nop
004028a4  lw t9,-0x7f80(gp)
004028a8  nop
004028ac  jalr t9
004028b0  _move a0,s0
004028b4  lw gp,0x10(sp)
004028b8  move a0,v0
004028bc  lw t9,-0x7e80(gp)
004028c0  nop
004028c4  jalr t9
004028c8  _li a1,0x8
004028cc  lw gp,0x10(sp)
004028d0  nop
004028d4  lw t9,-0x7ef0(gp)
004028d8  nop
004028dc  jalr t9
004028e0  _move a0,s0
004028e4  lw v0,0x18(sp)
004028e8  lw ra,0xac(sp)
004028ec  lw s1,0xa8(sp)
004028f0  lw s0,0xa4(sp)
004028f4  jr ra
004028f8  _addiu sp,sp,0xb0
