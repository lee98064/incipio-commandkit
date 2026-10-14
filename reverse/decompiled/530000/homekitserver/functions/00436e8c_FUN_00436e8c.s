# FUN_00436e8c @ 00436e8c
00436e8c  lui gp,0x1e
00436e90  addiu gp,gp,0x3484
00436e94  addu gp,gp,t9
00436e98  addiu sp,sp,-0x20
00436e9c  sw ra,0x1c(sp)
00436ea0  sw s8,0x18(sp)
00436ea4  move s8,sp
00436ea8  sw gp,0x10(sp)
00436eac  sw a0,0x20(s8)
00436eb0  sw a1,0x24(s8)
00436eb4  sw a2,0x28(s8)
00436eb8  sw a3,0x2c(s8)
00436ebc  lw v0,0x20(s8)
00436ec0  nop
00436ec4  lw v1,0x1c(v0)
00436ec8  lw v0,0x18(v0)
00436ecc  lw a0,0x24(s8)
00436ed0  lw a1,-0x7fd0(gp)
00436ed4  nop
00436ed8  addiu a1,a1,-0x16f4
00436edc  move a3,v1
00436ee0  move a2,v0
00436ee4  lw v0,-0x654c(gp)
00436ee8  nop
00436eec  move t9,v0
00436ef0  jalr t9
00436ef4  _nop
00436ef8  lw gp,0x10(s8)
00436efc  move sp,s8
00436f00  lw ra,0x1c(sp)
00436f04  lw s8,0x18(sp)
00436f08  addiu sp,sp,0x20
00436f0c  jr ra
00436f10  _nop
