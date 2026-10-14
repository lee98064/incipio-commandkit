# update_result @ 00412db8
00412db8  addiu sp,sp,-0x430
00412dbc  sw ra,0x42c(sp)
00412dc0  sw s2,0x428(sp)
00412dc4  sw s1,0x424(sp)
00412dc8  sw s0,0x420(sp)
00412dcc  lui gp,0x58
00412dd0  addiu gp,gp,0x5140
00412dd4  sw gp,0x18(sp)
00412dd8  lw t9,-0x71e4(gp)
00412ddc  lui v0,0x58
00412de0  sw a0,-0x150c(v0)
00412de4  move s2,a0
00412de8  lui a1,0x55
00412dec  lui a0,0x53
00412df0  addiu a0,a0,0x29cc
00412df4  jalr t9
00412df8  _addiu a1,a1,-0x5ac4
00412dfc  lw gp,0x18(sp)
00412e00  beq v0,zero,0x00412edc
00412e04  _move s0,v0
00412e08  lw t9,-0x7348(gp)
00412e0c  move a0,v0
00412e10  jalr t9
00412e14  _addiu s1,sp,0x20
00412e18  lw gp,0x18(sp)
00412e1c  move a0,v0
00412e20  lw t9,-0x77d4(gp)
00412e24  nop
00412e28  jalr t9
00412e2c  _li a1,0x2
00412e30  lui v0,0x58
00412e34  lw gp,0x18(sp)
00412e38  lw v0,-0x1510(v0)
00412e3c  lui v1,0x58
00412e40  lw a3,-0x1508(v1)
00412e44  lw a2,0x0(v0)
00412e48  lw t9,-0x7930(gp)
00412e4c  lui a1,0x53
00412e50  addiu a1,a1,0x29dc
00412e54  move a0,s1
00412e58  jalr t9
00412e5c  _sw s2,0x10(sp)
00412e60  lw gp,0x18(sp)
00412e64  nop
00412e68  lw t9,-0x6e30(gp)
00412e6c  nop
00412e70  jalr t9
00412e74  _move a0,s1
00412e78  lw gp,0x18(sp)
00412e7c  move a2,v0
00412e80  move a3,s0
00412e84  lw t9,-0x6900(gp)
00412e88  li a1,0x1
00412e8c  jalr t9
00412e90  _move a0,s1
00412e94  lw gp,0x18(sp)
00412e98  nop
00412e9c  lw t9,-0x7348(gp)
00412ea0  nop
00412ea4  jalr t9
00412ea8  _move a0,s0
00412eac  lw gp,0x18(sp)
00412eb0  move a0,v0
00412eb4  lw t9,-0x77d4(gp)
00412eb8  nop
00412ebc  jalr t9
00412ec0  _li a1,0x8
00412ec4  lw gp,0x18(sp)
00412ec8  nop
00412ecc  lw t9,-0x7154(gp)
00412ed0  nop
00412ed4  jalr t9
00412ed8  _move a0,s0
00412edc  lw ra,0x42c(sp)
00412ee0  lw s2,0x428(sp)
00412ee4  lw s1,0x424(sp)
00412ee8  lw s0,0x420(sp)
00412eec  jr ra
00412ef0  _addiu sp,sp,0x430
