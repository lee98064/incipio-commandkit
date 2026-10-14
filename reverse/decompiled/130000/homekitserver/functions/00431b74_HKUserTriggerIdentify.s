# HKUserTriggerIdentify @ 00431b74
00431b74  addiu sp,sp,-0x28
00431b78  sw ra,0x24(sp)
00431b7c  sw s1,0x20(sp)
00431b80  sw s0,0x1c(sp)
00431b84  lui gp,0x62
00431b88  addiu gp,gp,-0x6b80
00431b8c  sw gp,0x10(sp)
00431b90  clear s0
00431b94  li s1,0x3
00431b98  lw t9,-0x5dd8(gp)
00431b9c  li a0,0x1
00431ba0  jalr t9
00431ba4  _addiu s0,s0,0x1
00431ba8  lw gp,0x10(sp)
00431bac  nop
00431bb0  lw t9,-0x7c18(gp)
00431bb4  nop
00431bb8  jalr t9
00431bbc  _li a0,0x1
00431bc0  lw gp,0x10(sp)
00431bc4  nop
00431bc8  lw t9,-0x5dd8(gp)
00431bcc  nop
00431bd0  jalr t9
00431bd4  _li a0,0x1
00431bd8  lw gp,0x10(sp)
00431bdc  nop
00431be0  lw t9,-0x7c18(gp)
00431be4  nop
00431be8  jalr t9
00431bec  _clear a0
00431bf0  lw gp,0x10(sp)
00431bf4  bne s0,s1,0x00431b98
00431bf8  _nop
00431bfc  lw ra,0x24(sp)
00431c00  lw s1,0x20(sp)
00431c04  lw s0,0x1c(sp)
00431c08  jr ra
00431c0c  _addiu sp,sp,0x28
