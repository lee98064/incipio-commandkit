# FUN_00401db0 @ 00401db0
00401db0  lui gp,0x4
00401db4  addiu gp,gp,-0x6d70
00401db8  addu gp,gp,t9
00401dbc  addiu sp,sp,-0x28
00401dc0  sw ra,0x24(sp)
00401dc4  sw s2,0x20(sp)
00401dc8  sw s1,0x1c(sp)
00401dcc  sw s0,0x18(sp)
00401dd0  sw gp,0x10(sp)
00401dd4  lw v0,-0x7fe8(gp)
00401dd8  nop
00401ddc  lbu v0,0x3320(v0)
00401de0  nop
00401de4  bne v0,zero,0x00401ea0
00401de8  _nop
00401dec  lw v0,-0x7db0(gp)
00401df0  nop
00401df4  beq v0,zero,0x00401e18
00401df8  _nop
00401dfc  lw v0,-0x7fe4(gp)
00401e00  lw t9,-0x7db0(gp)
00401e04  lw a0,0x0(v0)
00401e08  jalr t9
00401e0c  _nop
00401e10  lw gp,0x10(sp)
00401e14  nop
00401e18  lw s1,-0x7fe8(gp)
00401e1c  lw s2,-0x7fe0(gp)
00401e20  lw s0,-0x7fe8(gp)
00401e24  addiu s1,s1,0x3008
00401e28  subu s2,s2,s1
00401e2c  sra s2,s2,0x2
00401e30  b 0x00401e4c
00401e34  _addiu s2,s2,-0x1
00401e38  lw t9,0x0(a0)
00401e3c  nop
00401e40  jalr t9
00401e44  _sw v1,0x3324(s0)
00401e48  lw gp,0x10(sp)
00401e4c  lw v0,0x3324(s0)
00401e50  nop
00401e54  addiu v1,v0,0x1
00401e58  sll a0,v1,0x2
00401e5c  sltu v0,v0,s2
00401e60  bne v0,zero,0x00401e38
00401e64  _addu a0,a0,s1
00401e68  lw v0,-0x7e20(gp)
00401e6c  nop
00401e70  beq v0,zero,0x00401e94
00401e74  _nop
00401e78  lw a0,-0x7fdc(gp)
00401e7c  lw t9,-0x7e20(gp)
00401e80  nop
00401e84  jalr t9
00401e88  _addiu a0,a0,0x2b00
00401e8c  lw gp,0x10(sp)
00401e90  nop
00401e94  lw v0,-0x7fe8(gp)
00401e98  li v1,0x1
00401e9c  sb v1,0x3320(v0)
00401ea0  lw ra,0x24(sp)
00401ea4  lw s2,0x20(sp)
00401ea8  lw s1,0x1c(sp)
00401eac  lw s0,0x18(sp)
00401eb0  jr ra
00401eb4  _addiu sp,sp,0x28
