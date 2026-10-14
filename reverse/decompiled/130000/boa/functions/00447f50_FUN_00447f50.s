# FUN_00447f50 @ 00447f50
00447f50  addiu sp,sp,-0x20
00447f54  sw ra,0x1c(sp)
00447f58  lui gp,0x47
00447f5c  addiu gp,gp,0x2630
00447f60  sw gp,0x10(sp)
00447f64  lw t9,-0x7cf0(gp)
00447f68  lui a1,0x45
00447f6c  addiu a0,a0,0x8d4
00447f70  jalr t9
00447f74  _addiu a1,a1,-0x4060
00447f78  lw gp,0x10(sp)
00447f7c  beq v0,zero,0x00447fd4
00447f80  _addiu a0,v0,0x8
00447f84  lw v0,-0x7a70(gp)
00447f88  nop
00447f8c  lw a1,0x0(v0)
00447f90  move v1,a0
00447f94  lb v0,0x0(v1)
00447f98  nop
00447f9c  sll a2,v0,0x1
00447fa0  beq v0,zero,0x00447fc0
00447fa4  _addu a2,a1,a2
00447fa8  lhu v0,0x0(a2)
00447fac  nop
00447fb0  andi v0,v0,0x20
00447fb4  beq v0,zero,0x00447f94
00447fb8  _addiu v1,v1,0x1
00447fbc  addiu v1,v1,-0x1
00447fc0  sb zero,0x0(v1)
00447fc4  lw t9,-0x7c58(gp)
00447fc8  lw ra,0x1c(sp)
00447fcc  jr t9
00447fd0  _addiu sp,sp,0x20
00447fd4  lw ra,0x1c(sp)
00447fd8  nop
00447fdc  jr ra
00447fe0  _addiu sp,sp,0x20
