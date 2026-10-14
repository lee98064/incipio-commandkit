# FUN_00428b70 @ 00428b70
00428b70  addiu sp,sp,-0x20
00428b74  sw ra,0x1c(sp)
00428b78  sw s0,0x18(sp)
00428b7c  lui gp,0x62
00428b80  addiu gp,gp,-0x6b80
00428b84  sw gp,0x10(sp)
00428b88  lui s0,0x61
00428b8c  lw a0,0x47c0(s0)
00428b90  nop
00428b94  beq a0,zero,0x00428bb0
00428b98  _nop
00428b9c  lw t9,-0x7aa4(gp)
00428ba0  nop
00428ba4  jalr t9
00428ba8  _nop
00428bac  sw zero,0x47c0(s0)
00428bb0  lw ra,0x1c(sp)
00428bb4  lw s0,0x18(sp)
00428bb8  lui v0,0x61
00428bbc  sw zero,0x47c4(v0)
00428bc0  jr ra
00428bc4  _addiu sp,sp,0x20
