# pthread_list_remove_byID @ 0042d9a4
0042d9a4  addiu sp,sp,-0x20
0042d9a8  sw ra,0x1c(sp)
0042d9ac  sw s0,0x18(sp)
0042d9b0  lui gp,0x62
0042d9b4  addiu gp,gp,-0x6b80
0042d9b8  sw gp,0x10(sp)
0042d9bc  lw t9,-0x63f4(gp)
0042d9c0  move s0,a0
0042d9c4  lui a0,0x61
0042d9c8  jalr t9
0042d9cc  _addiu a0,a0,0x47d0
0042d9d0  lui v0,0x61
0042d9d4  lw v1,0x47e8(v0)
0042d9d8  addiu v0,v0,0x47e8
0042d9dc  lw gp,0x10(sp)
0042d9e0  beq v1,v0,0x0042da4c
0042d9e4  _lui a1,0x61
0042d9e8  lw v0,0x28(v0)
0042d9ec  nop
0042d9f0  lw v1,0x0(v0)
0042d9f4  b 0x0042da44
0042d9f8  _addiu a1,a1,0x4810
0042d9fc  lw a2,-0x28(v0)
0042da00  nop
0042da04  bne a2,s0,0x0042da3c
0042da08  _addiu a0,v0,-0x28
0042da0c  lw v1,0x4(v0)
0042da10  lw a1,0x0(v0)
0042da14  lw t9,-0x7aa4(gp)
0042da18  clear s0
0042da1c  sw v1,0x4(a1)
0042da20  sw a1,0x0(v1)
0042da24  sw v0,0x4(v0)
0042da28  jalr t9
0042da2c  _sw v0,0x0(v0)
0042da30  lw gp,0x10(sp)
0042da34  b 0x0042da50
0042da38  _nop
0042da3c  move v0,v1
0042da40  lw v1,0x0(v1)
0042da44  bne v0,a1,0x0042d9fc
0042da48  _nop
0042da4c  li s0,-0x1
0042da50  lw t9,-0x77f4(gp)
0042da54  lui a0,0x61
0042da58  jalr t9
0042da5c  _addiu a0,a0,0x47d0
0042da60  move v0,s0
0042da64  lw ra,0x1c(sp)
0042da68  lw s0,0x18(sp)
0042da6c  jr ra
0042da70  _addiu sp,sp,0x20
