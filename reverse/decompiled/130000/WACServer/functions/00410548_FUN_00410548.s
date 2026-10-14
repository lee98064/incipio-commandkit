# FUN_00410548 @ 00410548
00410548  addiu sp,sp,-0xc0
0041054c  sw ra,0xbc(sp)
00410550  sw s1,0xb8(sp)
00410554  sw s0,0xb4(sp)
00410558  lui gp,0x44
0041055c  addiu gp,gp,-0x4fc0
00410560  sw gp,0x10(sp)
00410564  addiu s0,sp,0x18
00410568  move s1,a0
0041056c  jal 0x0040dc80
00410570  _move a0,s0
00410574  jal 0x0040f314
00410578  _move a0,s0
0041057c  jal 0x0040f78c
00410580  _move a0,s0
00410584  lw gp,0x10(sp)
00410588  move a0,s1
0041058c  move a1,s0
00410590  lw t9,-0x7d98(gp)
00410594  nop
00410598  jalr t9
0041059c  _li a2,0x50
004105a0  lw ra,0xbc(sp)
004105a4  lw s1,0xb8(sp)
004105a8  lw s0,0xb4(sp)
004105ac  jr ra
004105b0  _addiu sp,sp,0xc0
