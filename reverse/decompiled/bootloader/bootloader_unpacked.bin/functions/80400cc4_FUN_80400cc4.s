# FUN_80400cc4 @ 80400cc4
80400cc4  addiu sp,sp,-0x18
80400cc8  sw ra,0x14(sp)
80400ccc  sw s0,0x10(sp)
80400cd0  move s0,a0
80400cd4  sll v1,a0,0x2
80400cd8  lui v0,0x8041
80400cdc  addiu v0,v0,-0x117c
80400ce0  addu v0,v0,v1
80400ce4  lw v1,0x0(v0)
80400ce8  nop
80400cec  beq v1,zero,0x80400d14
80400cf0  _move a2,a1
80400cf4  lw v0,0x0(v1)
80400cf8  lw a1,0x10(v1)
80400cfc  jalr v0
80400d00  _nop
80400d04  lw ra,0x14(sp)
80400d08  lw s0,0x10(sp)
80400d0c  jr ra
80400d10  _addiu sp,sp,0x18
80400d14  mfc0 a1,Cause
80400d18  mfc0 a2,EPC
80400d1c  lui a0,0x8041
80400d20  jal 0x804079cc
80400d24  _addiu a0,a0,-0x2e00
80400d28  lui a0,0x8041
80400d2c  addiu a0,a0,-0x2de4
80400d30  jal 0x804079cc
80400d34  _move a1,s0
80400d38  j 0x80400d38
80400d3c  _nop
