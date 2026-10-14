# FUN_00408d14 @ 00408d14
00408d14  addiu sp,sp,-0x230
00408d18  sw ra,0x22c(sp)
00408d1c  sw s2,0x228(sp)
00408d20  sw s1,0x224(sp)
00408d24  sw s0,0x220(sp)
00408d28  lui gp,0x43
00408d2c  addiu gp,gp,-0x4f70
00408d30  sw gp,0x10(sp)
00408d34  lw t9,-0x7ee8(gp)
00408d38  li v0,-0x1
00408d3c  addiu s0,sp,0x1c
00408d40  clear a1
00408d44  li a2,0x200
00408d48  sw v0,0x18(sp)
00408d4c  move s1,a0
00408d50  jalr t9
00408d54  _move a0,s0
00408d58  lw gp,0x10(sp)
00408d5c  addiu a1,sp,0x18
00408d60  lw t9,-0x7e2c(gp)
00408d64  nop
00408d68  jalr t9
00408d6c  _li a0,0xc0
00408d70  lui a1,0x42
00408d74  lb v0,0x359c(a1)
00408d78  lw gp,0x10(sp)
00408d7c  beq v0,zero,0x00408db4
00408d80  _addiu a1,a1,0x359c
00408d84  lw t9,-0x7e70(gp)
00408d88  nop
00408d8c  jalr t9
00408d90  _move a0,s0
00408d94  lw gp,0x10(sp)
00408d98  lui a1,0x41
00408d9c  move a0,s0
00408da0  lw t9,-0x7e70(gp)
00408da4  nop
00408da8  jalr t9
00408dac  _addiu a1,a1,0x864
00408db0  lw gp,0x10(sp)
00408db4  lui a1,0x42
00408db8  lb v0,0x3818(a1)
00408dbc  nop
00408dc0  beq v0,zero,0x00408df8
00408dc4  _addiu s0,sp,0x1c
00408dc8  lw t9,-0x7e70(gp)
00408dcc  addiu a1,a1,0x3818
00408dd0  jalr t9
00408dd4  _move a0,s0
00408dd8  lw gp,0x10(sp)
00408ddc  lui a1,0x41
00408de0  move a0,s0
00408de4  lw t9,-0x7e70(gp)
00408de8  nop
00408dec  jalr t9
00408df0  _addiu a1,a1,0x864
00408df4  lw gp,0x10(sp)
00408df8  lui a1,0x42
00408dfc  lb v0,0x37bc(a1)
00408e00  nop
00408e04  beq v0,zero,0x00408e3c
00408e08  _addiu s0,sp,0x1c
00408e0c  lw t9,-0x7e70(gp)
00408e10  addiu a1,a1,0x37bc
00408e14  jalr t9
00408e18  _move a0,s0
00408e1c  lw gp,0x10(sp)
00408e20  lui a1,0x41
00408e24  move a0,s0
00408e28  lw t9,-0x7e70(gp)
00408e2c  nop
00408e30  jalr t9
00408e34  _addiu a1,a1,0x864
00408e38  lw gp,0x10(sp)
00408e3c  lui a1,0x42
00408e40  lb v0,0x3828(a1)
00408e44  nop
00408e48  beq v0,zero,0x00408e84
00408e4c  _addiu s0,sp,0x1c
00408e50  lw t9,-0x7e70(gp)
00408e54  addiu a1,a1,0x3828
00408e58  jalr t9
00408e5c  _move a0,s0
00408e60  lw gp,0x10(sp)
00408e64  lui a1,0x41
00408e68  move a0,s0
00408e6c  lw t9,-0x7e70(gp)
00408e70  nop
00408e74  jalr t9
00408e78  _addiu a1,a1,0x864
00408e7c  lw gp,0x10(sp)
00408e80  nop
00408e84  lw t9,-0x7e70(gp)
00408e88  addiu s0,sp,0x1c
00408e8c  lui a1,0x42
00408e90  addiu a1,a1,0x355c
00408e94  jalr t9
00408e98  _move a0,s0
00408e9c  lw gp,0x10(sp)
00408ea0  lui s2,0x41
00408ea4  addiu s2,s2,0x864
00408ea8  lw t9,-0x7e70(gp)
00408eac  move a0,s0
00408eb0  jalr t9
00408eb4  _move a1,s2
00408eb8  lw gp,0x10(sp)
00408ebc  lui a1,0x42
00408ec0  addiu a1,a1,0x356c
00408ec4  lw t9,-0x7e70(gp)
00408ec8  nop
00408ecc  jalr t9
00408ed0  _move a0,s0
00408ed4  lw v0,0x18(sp)
00408ed8  lw gp,0x10(sp)
00408edc  addiu v0,v0,-0x1
00408ee0  sltiu v0,v0,0x2
00408ee4  beq v0,zero,0x00408f20
00408ee8  _move a1,s2
00408eec  lw t9,-0x7e70(gp)
00408ef0  nop
00408ef4  jalr t9
00408ef8  _move a0,s0
00408efc  lw gp,0x10(sp)
00408f00  lui a1,0x42
00408f04  move a0,s0
00408f08  lw t9,-0x7e70(gp)
00408f0c  nop
00408f10  jalr t9
00408f14  _addiu a1,a1,0x357c
00408f18  lw gp,0x10(sp)
00408f1c  nop
00408f20  lw t9,-0x7dfc(gp)
00408f24  move a0,s1
00408f28  addiu a1,sp,0x1c
00408f2c  jalr t9
00408f30  _li a2,0x200
00408f34  lw ra,0x22c(sp)
00408f38  lw s2,0x228(sp)
00408f3c  lw s1,0x224(sp)
00408f40  lw s0,0x220(sp)
00408f44  jr ra
00408f48  _addiu sp,sp,0x230
