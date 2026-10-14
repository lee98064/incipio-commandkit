# FUN_00408c10 @ 00408c10
00408c10  addiu sp,sp,-0x20
00408c14  sw ra,0x1c(sp)
00408c18  lui gp,0x47
00408c1c  addiu gp,gp,0x2630
00408c20  sw gp,0x10(sp)
00408c24  beq a0,zero,0x00408c3c
00408c28  _nop
00408c2c  lb v0,0x0(a0)
00408c30  nop
00408c34  bne v0,zero,0x00408c5c
00408c38  _lui a1,0x100
00408c3c  lw v0,-0x7e40(gp)
00408c40  lw t9,-0x7f4c(gp)
00408c44  lui a0,0x45
00408c48  lw a1,0x0(v0)
00408c4c  jalr t9
00408c50  _addiu a0,a0,-0x5db0
00408c54  b 0x00408c9c
00408c58  _clear v0
00408c5c  lui v0,0x811c
00408c60  ori v0,v0,0x9dc5
00408c64  ori a1,a1,0x193
00408c68  li v1,0x4
00408c6c  lb a2,0x0(a0)
00408c70  addiu a0,a0,0x1
00408c74  lb a3,0x0(a0)
00408c78  xor v0,v0,a2
00408c7c  mult v0,a1
00408c80  addiu a2,v1,-0x1
00408c84  beq a3,zero,0x00408c9c
00408c88  _mflo v0
00408c8c  beq v1,zero,0x00408c9c
00408c90  _sll v1,a2,0x10
00408c94  b 0x00408c6c
00408c98  _sra v1,v1,0x10
00408c9c  li v1,0x2f
00408ca0  divu v0,v1
00408ca4  bne v1,zero,0x00408cb0
00408ca8  _nop
00408cac  break 0x1c00
00408cb0  lw ra,0x1c(sp)
00408cb4  mfhi v0
00408cb8  jr ra
00408cbc  _addiu sp,sp,0x20
