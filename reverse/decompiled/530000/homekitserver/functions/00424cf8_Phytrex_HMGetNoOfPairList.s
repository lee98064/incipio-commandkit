# Phytrex_HMGetNoOfPairList @ 00424cf8
00424cf8  addiu sp,sp,-0x20
00424cfc  sw ra,0x1c(sp)
00424d00  sw s0,0x18(sp)
00424d04  lui gp,0x62
00424d08  addiu gp,gp,-0x5cf0
00424d0c  sw gp,0x10(sp)
00424d10  lw t9,-0x63ec(gp)
00424d14  lui a0,0x61
00424d18  jalr t9
00424d1c  _addiu a0,a0,0x4c00
00424d20  lw gp,0x10(sp)
00424d24  lui v0,0x61
00424d28  lui v1,0x61
00424d2c  addiu v0,v0,0x4c18
00424d30  addiu v1,v1,0x5628
00424d34  clear s0
00424d38  lb a0,0x0(v0)
00424d3c  nop
00424d40  beq a0,zero,0x00424d58
00424d44  _nop
00424d48  lbu a0,0x40(v0)
00424d4c  nop
00424d50  sltu a0,zero,a0
00424d54  addu s0,s0,a0
00424d58  addiu v0,v0,0xa1
00424d5c  bne v0,v1,0x00424d38
00424d60  _lui a0,0x61
00424d64  lw t9,-0x77f4(gp)
00424d68  nop
00424d6c  jalr t9
00424d70  _addiu a0,a0,0x4c00
00424d74  move v0,s0
00424d78  lw ra,0x1c(sp)
00424d7c  lw s0,0x18(sp)
00424d80  jr ra
00424d84  _addiu sp,sp,0x20
