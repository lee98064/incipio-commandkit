# RemoveWACBonjourService @ 00404ed0
00404ed0  addiu sp,sp,-0x20
00404ed4  sw ra,0x1c(sp)
00404ed8  sw s0,0x18(sp)
00404edc  lui gp,0x44
00404ee0  addiu gp,gp,-0x4fc0
00404ee4  sw gp,0x10(sp)
00404ee8  move s0,a0
00404eec  beq a0,zero,0x00404f1c
00404ef0  _li v0,-0x1a31
00404ef4  lw a0,0x38(a0)
00404ef8  nop
00404efc  beq a0,zero,0x00404f1c
00404f00  _clear v0
00404f04  lw t9,-0x7df0(gp)
00404f08  nop
00404f0c  jalr t9
00404f10  _nop
00404f14  sw zero,0x38(s0)
00404f18  clear v0
00404f1c  lw ra,0x1c(sp)
00404f20  lw s0,0x18(sp)
00404f24  jr ra
00404f28  _addiu sp,sp,0x20
