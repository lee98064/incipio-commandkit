# FUN_0042db9c @ 0042db9c
0042db9c  addiu sp,sp,-0x28
0042dba0  sw ra,0x24(sp)
0042dba4  sw s1,0x20(sp)
0042dba8  sw s0,0x1c(sp)
0042dbac  lui gp,0x62
0042dbb0  addiu gp,gp,-0x6b80
0042dbb4  sw gp,0x10(sp)
0042dbb8  lw t9,-0x63f4(gp)
0042dbbc  lui a0,0x61
0042dbc0  jalr t9
0042dbc4  _addiu a0,a0,0x47d0
0042dbc8  lui v0,0x61
0042dbcc  lw v1,0x47e8(v0)
0042dbd0  addiu v0,v0,0x47e8
0042dbd4  lw gp,0x10(sp)
0042dbd8  beq v1,v0,0x0042dc2c
0042dbdc  _lui s1,0x61
0042dbe0  lw v0,0x28(v0)
0042dbe4  nop
0042dbe8  lw s0,0x0(v0)
0042dbec  b 0x0042dc20
0042dbf0  _addiu s1,s1,0x4810
0042dbf4  lw v1,0x4(v0)
0042dbf8  lw a1,0x0(v0)
0042dbfc  nop
0042dc00  sw v1,0x4(a1)
0042dc04  sw a1,0x0(v1)
0042dc08  sw v0,0x0(v0)
0042dc0c  jalr t9
0042dc10  _sw v0,0x4(v0)
0042dc14  move v0,s0
0042dc18  lw gp,0x10(sp)
0042dc1c  lw s0,0x0(s0)
0042dc20  lw t9,-0x7aa4(gp)
0042dc24  bne v0,s1,0x0042dbf4
0042dc28  _addiu a0,v0,-0x28
0042dc2c  lw t9,-0x77f4(gp)
0042dc30  lui s0,0x61
0042dc34  jalr t9
0042dc38  _addiu a0,s0,0x47d0
0042dc3c  lw gp,0x10(sp)
0042dc40  nop
0042dc44  lw t9,-0x6834(gp)
0042dc48  nop
0042dc4c  jalr t9
0042dc50  _addiu a0,s0,0x47d0
0042dc54  lw ra,0x24(sp)
0042dc58  lw s1,0x20(sp)
0042dc5c  lw s0,0x1c(sp)
0042dc60  clear v0
0042dc64  jr ra
0042dc68  _addiu sp,sp,0x28
