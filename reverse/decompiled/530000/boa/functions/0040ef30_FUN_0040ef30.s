# FUN_0040ef30 @ 0040ef30
0040ef30  addiu sp,sp,-0x20
0040ef34  sw ra,0x1c(sp)
0040ef38  sw s0,0x18(sp)
0040ef3c  lui gp,0x47
0040ef40  addiu gp,gp,0x2630
0040ef44  sw gp,0x10(sp)
0040ef48  lw v0,0x8(a0)
0040ef4c  li v1,0x2
0040ef50  sw v1,0x4(a0)
0040ef54  li v1,0x130
0040ef58  sw v1,0x10(a0)
0040ef5c  li v1,0x1
0040ef60  beq v0,v1,0x0040ef80
0040ef64  _move s0,a0
0040ef68  li v1,0x3
0040ef6c  beq v0,v1,0x0040ef8c
0040ef70  _nop
0040ef74  lui a1,0x45
0040ef78  b 0x0040ef94
0040ef7c  _addiu a1,a1,-0x51b0
0040ef80  lui a1,0x45
0040ef84  b 0x0040ef94
0040ef88  _addiu a1,a1,-0x51a4
0040ef8c  lui a1,0x45
0040ef90  addiu a1,a1,-0x5198
0040ef94  lw t9,-0x7a44(gp)
0040ef98  nop
0040ef9c  jalr t9
0040efa0  _move a0,s0
0040efa4  lw gp,0x10(sp)
0040efa8  lui a1,0x45
0040efac  addiu a1,a1,-0x45e4
0040efb0  lw t9,-0x7a44(gp)
0040efb4  nop
0040efb8  jalr t9
0040efbc  _move a0,s0
0040efc0  jal 0x0040d688
0040efc4  _move a0,s0
0040efc8  jal 0x0040ec18
0040efcc  _move a0,s0
0040efd0  lw gp,0x10(sp)
0040efd4  lui a1,0x45
0040efd8  move a0,s0
0040efdc  lw t9,-0x7a44(gp)
0040efe0  nop
0040efe4  jalr t9
0040efe8  _addiu a1,a1,-0x4c0c
0040efec  lw gp,0x10(sp)
0040eff0  move a0,s0
0040eff4  lw ra,0x1c(sp)
0040eff8  lw t9,-0x7f98(gp)
0040effc  lw s0,0x18(sp)
0040f000  jr t9
0040f004  _addiu sp,sp,0x20
