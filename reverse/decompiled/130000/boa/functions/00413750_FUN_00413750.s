# FUN_00413750 @ 00413750
00413750  addiu sp,sp,-0x20
00413754  sw ra,0x1c(sp)
00413758  lui gp,0x47
0041375c  addiu gp,gp,0x2630
00413760  sw gp,0x10(sp)
00413764  lw t9,-0x7cf0(gp)
00413768  lui a1,0x45
0041376c  addiu a0,a0,0x8d4
00413770  jalr t9
00413774  _addiu a1,a1,-0x4060
00413778  lw gp,0x10(sp)
0041377c  beq v0,zero,0x004137d4
00413780  _addiu a0,v0,0x8
00413784  lw v0,-0x7a70(gp)
00413788  nop
0041378c  lw a1,0x0(v0)
00413790  move v1,a0
00413794  lb v0,0x0(v1)
00413798  nop
0041379c  sll a2,v0,0x1
004137a0  beq v0,zero,0x004137c0
004137a4  _addu a2,a1,a2
004137a8  lhu v0,0x0(a2)
004137ac  nop
004137b0  andi v0,v0,0x20
004137b4  beq v0,zero,0x00413794
004137b8  _addiu v1,v1,0x1
004137bc  addiu v1,v1,-0x1
004137c0  sb zero,0x0(v1)
004137c4  lw t9,-0x7c58(gp)
004137c8  lw ra,0x1c(sp)
004137cc  jr t9
004137d0  _addiu sp,sp,0x20
004137d4  lw ra,0x1c(sp)
004137d8  nop
004137dc  jr ra
004137e0  _addiu sp,sp,0x20
