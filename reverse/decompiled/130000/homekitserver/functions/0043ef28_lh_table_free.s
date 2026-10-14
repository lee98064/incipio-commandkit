# lh_table_free @ 0043ef28
0043ef28  lui gp,0x1e
0043ef2c  addiu gp,gp,-0x5aa8
0043ef30  addu gp,gp,t9
0043ef34  addiu sp,sp,-0x28
0043ef38  sw ra,0x24(sp)
0043ef3c  sw s8,0x20(sp)
0043ef40  move s8,sp
0043ef44  sw gp,0x10(sp)
0043ef48  sw a0,0x28(s8)
0043ef4c  lw v0,0x28(s8)
0043ef50  nop
0043ef54  lw v0,0x20(v0)
0043ef58  nop
0043ef5c  sw v0,0x18(s8)
0043ef60  b 0x0043efb4
0043ef64  _nop
0043ef68  lw v0,0x28(s8)
0043ef6c  nop
0043ef70  lw v0,0x2c(v0)
0043ef74  nop
0043ef78  beq v0,zero,0x0043efa0
0043ef7c  _nop
0043ef80  lw v0,0x28(s8)
0043ef84  nop
0043ef88  lw v0,0x2c(v0)
0043ef8c  lw a0,0x18(s8)
0043ef90  move t9,v0
0043ef94  jalr t9
0043ef98  _nop
0043ef9c  lw gp,0x10(s8)
0043efa0  lw v0,0x18(s8)
0043efa4  nop
0043efa8  lw v0,0x8(v0)
0043efac  nop
0043efb0  sw v0,0x18(s8)
0043efb4  lw v0,0x18(s8)
0043efb8  nop
0043efbc  bne v0,zero,0x0043ef68
0043efc0  _nop
0043efc4  lw v0,0x28(s8)
0043efc8  nop
0043efcc  lw v0,0x28(v0)
0043efd0  nop
0043efd4  move a0,v0
0043efd8  lw v0,-0x7aa4(gp)
0043efdc  nop
0043efe0  move t9,v0
0043efe4  jalr t9
0043efe8  _nop
0043efec  lw gp,0x10(s8)
0043eff0  lw a0,0x28(s8)
0043eff4  lw v0,-0x7aa4(gp)
0043eff8  nop
0043effc  move t9,v0
0043f000  jalr t9
0043f004  _nop
0043f008  lw gp,0x10(s8)
0043f00c  move sp,s8
0043f010  lw ra,0x24(sp)
0043f014  lw s8,0x20(sp)
0043f018  addiu sp,sp,0x28
0043f01c  jr ra
0043f020  _nop
