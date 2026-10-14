# FUN_00401ce4 @ 00401ce4
00401ce4  addiu sp,sp,-0xb8
00401ce8  sw ra,0xb4(sp)
00401cec  sw s1,0xb0(sp)
00401cf0  sw s0,0xac(sp)
00401cf4  lui gp,0x43
00401cf8  addiu gp,gp,-0x4f70
00401cfc  sw gp,0x10(sp)
00401d00  lw t9,-0x7ee8(gp)
00401d04  addiu s1,sp,0x18
00401d08  move a0,s1
00401d0c  clear a1
00401d10  jalr t9
00401d14  _li a2,0x40
00401d18  lw gp,0x10(sp)
00401d1c  addiu s0,sp,0x58
00401d20  move a0,s0
00401d24  lw t9,-0x7ee8(gp)
00401d28  clear a1
00401d2c  jalr t9
00401d30  _li a2,0x50
00401d34  lw gp,0x10(sp)
00401d38  li a0,0x2b1
00401d3c  lw t9,-0x7e2c(gp)
00401d40  nop
00401d44  jalr t9
00401d48  _move a1,s1
00401d4c  lb v0,0x18(sp)
00401d50  lw gp,0x10(sp)
00401d54  beq v0,zero,0x00401d88
00401d58  _lui a1,0x41
00401d5c  lw t9,-0x7f2c(gp)
00401d60  addiu a1,a1,-0x24c
00401d64  move a2,s1
00401d68  jalr t9
00401d6c  _move a0,s0
00401d70  lw gp,0x10(sp)
00401d74  nop
00401d78  lw t9,-0x7e20(gp)
00401d7c  nop
00401d80  jalr t9
00401d84  _move a0,s0
00401d88  lw ra,0xb4(sp)
00401d8c  lw s1,0xb0(sp)
00401d90  lw s0,0xac(sp)
00401d94  jr ra
00401d98  _addiu sp,sp,0xb8
