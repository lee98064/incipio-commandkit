# FUN_0040de3c @ 0040de3c
0040de3c  addiu sp,sp,-0xd8
0040de40  sw ra,0xd4(sp)
0040de44  sw s1,0xd0(sp)
0040de48  sw s0,0xcc(sp)
0040de4c  lui gp,0x47
0040de50  addiu gp,gp,0x2630
0040de54  sw gp,0x10(sp)
0040de58  lw t9,-0x7ad4(gp)
0040de5c  lui a1,0x45
0040de60  move s0,a0
0040de64  addiu a1,a1,-0x4cd0
0040de68  addiu a0,sp,0x18
0040de6c  jalr t9
0040de70  _li a2,0xaa
0040de74  lw v0,0x8(s0)
0040de78  li v1,0x19e
0040de7c  lw gp,0x10(sp)
0040de80  sw v1,0x10(s0)
0040de84  li v1,0x1
0040de88  beq v0,v1,0x0040df88
0040de8c  _li v1,0x3
0040de90  beq v0,v1,0x0040dea0
0040de94  _lui a1,0x45
0040de98  b 0x0040dea8
0040de9c  _addiu a1,a1,-0x51b0
0040dea0  lui a1,0x45
0040dea4  addiu a1,a1,-0x5198
0040dea8  lw t9,-0x7a44(gp)
0040deac  move a0,s0
0040deb0  jalr t9
0040deb4  _lui s1,0x47
0040deb8  lw gp,0x10(sp)
0040debc  lui a1,0x45
0040dec0  addiu a1,a1,-0x4d24
0040dec4  lw t9,-0x7a44(gp)
0040dec8  nop
0040decc  jalr t9
0040ded0  _move a0,s0
0040ded4  jal 0x0040d688
0040ded8  _move a0,s0
0040dedc  lw gp,0x10(sp)
0040dee0  lui a1,0x45
0040dee4  addiu a1,a1,-0x4d08
0040dee8  lw t9,-0x7a44(gp)
0040deec  nop
0040def0  jalr t9
0040def4  _move a0,s0
0040def8  lw gp,0x10(sp)
0040defc  lui a1,0x45
0040df00  addiu a1,a1,-0x5128
0040df04  lw t9,-0x7a44(gp)
0040df08  nop
0040df0c  jalr t9
0040df10  _move a0,s0
0040df14  lw v0,-0x2014(s1)
0040df18  lw gp,0x10(sp)
0040df1c  bne v0,zero,0x0040df40
0040df20  _lui v0,0x47
0040df24  lw t9,-0x7f1c(gp)
0040df28  nop
0040df2c  jalr t9
0040df30  _addiu a0,sp,0x18
0040df34  lw gp,0x10(sp)
0040df38  sw v0,-0x2014(s1)
0040df3c  lui v0,0x47
0040df40  lw t9,-0x7c64(gp)
0040df44  lw a0,-0x2014(v0)
0040df48  jalr t9
0040df4c  _nop
0040df50  lw gp,0x10(sp)
0040df54  move a1,v0
0040df58  lw t9,-0x7a44(gp)
0040df5c  nop
0040df60  jalr t9
0040df64  _move a0,s0
0040df68  lw gp,0x10(sp)
0040df6c  lui a1,0x45
0040df70  addiu a1,a1,-0x4cd8
0040df74  lw t9,-0x7a44(gp)
0040df78  nop
0040df7c  jalr t9
0040df80  _move a0,s0
0040df84  lw gp,0x10(sp)
0040df88  lw v1,0xc(s0)
0040df8c  li v0,0x2
0040df90  beq v1,v0,0x0040dfb0
0040df94  _move a0,s0
0040df98  lw t9,-0x7a44(gp)
0040df9c  nop
0040dfa0  jalr t9
0040dfa4  _addiu a1,sp,0x18
0040dfa8  lw gp,0x10(sp)
0040dfac  nop
0040dfb0  lw t9,-0x7f98(gp)
0040dfb4  nop
0040dfb8  jalr t9
0040dfbc  _move a0,s0
0040dfc0  lw ra,0xd4(sp)
0040dfc4  lw s1,0xd0(sp)
0040dfc8  lw s0,0xcc(sp)
0040dfcc  jr ra
0040dfd0  _addiu sp,sp,0xd8
