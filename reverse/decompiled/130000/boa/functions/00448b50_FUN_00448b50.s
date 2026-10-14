# FUN_00448b50 @ 00448b50
00448b50  lui gp,0x3
00448b54  addiu gp,gp,-0x6520
00448b58  addu gp,gp,t9
00448b5c  addiu sp,sp,-0x28
00448b60  sw ra,0x24(sp)
00448b64  sw s1,0x20(sp)
00448b68  sw s0,0x1c(sp)
00448b6c  sw gp,0x10(sp)
00448b70  lw s0,-0x7fe8(gp)
00448b74  li s1,-0x1
00448b78  b 0x00448b88
00448b7c  _addiu s0,s0,-0x8000
00448b80  jalr t9
00448b84  _nop
00448b88  lw t9,0x0(s0)
00448b8c  nop
00448b90  bne t9,s1,0x00448b80
00448b94  _addiu s0,s0,-0x4
00448b98  lw ra,0x24(sp)
00448b9c  lw s1,0x20(sp)
00448ba0  lw s0,0x1c(sp)
00448ba4  jr ra
00448ba8  _addiu sp,sp,0x28
