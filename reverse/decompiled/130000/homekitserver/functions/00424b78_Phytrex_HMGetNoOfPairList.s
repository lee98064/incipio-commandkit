# Phytrex_HMGetNoOfPairList @ 00424b78
00424b78  addiu sp,sp,-0x20
00424b7c  sw ra,0x1c(sp)
00424b80  sw s0,0x18(sp)
00424b84  lui gp,0x62
00424b88  addiu gp,gp,-0x6b80
00424b8c  sw gp,0x10(sp)
00424b90  lw t9,-0x63f4(gp)
00424b94  lui a0,0x61
00424b98  jalr t9
00424b9c  _addiu a0,a0,0x3d60
00424ba0  lw gp,0x10(sp)
00424ba4  lui v0,0x61
00424ba8  lui v1,0x61
00424bac  addiu v0,v0,0x3d78
00424bb0  addiu v1,v1,0x4788
00424bb4  clear s0
00424bb8  lb a0,0x0(v0)
00424bbc  nop
00424bc0  beq a0,zero,0x00424bd8
00424bc4  _nop
00424bc8  lbu a0,0x40(v0)
00424bcc  nop
00424bd0  sltu a0,zero,a0
00424bd4  addu s0,s0,a0
00424bd8  addiu v0,v0,0xa1
00424bdc  bne v0,v1,0x00424bb8
00424be0  _lui a0,0x61
00424be4  lw t9,-0x77f4(gp)
00424be8  nop
00424bec  jalr t9
00424bf0  _addiu a0,a0,0x3d60
00424bf4  move v0,s0
00424bf8  lw ra,0x1c(sp)
00424bfc  lw s0,0x18(sp)
00424c00  jr ra
00424c04  _addiu sp,sp,0x20
