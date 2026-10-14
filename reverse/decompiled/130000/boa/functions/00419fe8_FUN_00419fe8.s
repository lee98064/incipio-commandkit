# FUN_00419fe8 @ 00419fe8
00419fe8  addiu sp,sp,-0x20
00419fec  sw ra,0x1c(sp)
00419ff0  lui gp,0x47
00419ff4  addiu gp,gp,0x2630
00419ff8  sw gp,0x10(sp)
00419ffc  lw t9,-0x7cf0(gp)
0041a000  lui a1,0x45
0041a004  addiu a0,a0,0x8d4
0041a008  jalr t9
0041a00c  _addiu a1,a1,-0x4060
0041a010  lw gp,0x10(sp)
0041a014  beq v0,zero,0x0041a06c
0041a018  _addiu a0,v0,0x8
0041a01c  lw v0,-0x7a70(gp)
0041a020  nop
0041a024  lw a1,0x0(v0)
0041a028  move v1,a0
0041a02c  lb v0,0x0(v1)
0041a030  nop
0041a034  sll a2,v0,0x1
0041a038  beq v0,zero,0x0041a058
0041a03c  _addu a2,a1,a2
0041a040  lhu v0,0x0(a2)
0041a044  nop
0041a048  andi v0,v0,0x20
0041a04c  beq v0,zero,0x0041a02c
0041a050  _addiu v1,v1,0x1
0041a054  addiu v1,v1,-0x1
0041a058  sb zero,0x0(v1)
0041a05c  lw t9,-0x7c58(gp)
0041a060  lw ra,0x1c(sp)
0041a064  jr t9
0041a068  _addiu sp,sp,0x20
0041a06c  lw ra,0x1c(sp)
0041a070  nop
0041a074  jr ra
0041a078  _addiu sp,sp,0x20
