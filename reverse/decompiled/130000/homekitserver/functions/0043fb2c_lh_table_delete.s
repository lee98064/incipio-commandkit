# lh_table_delete @ 0043fb2c
0043fb2c  lui gp,0x1e
0043fb30  addiu gp,gp,-0x66ac
0043fb34  addu gp,gp,t9
0043fb38  addiu sp,sp,-0x28
0043fb3c  sw ra,0x24(sp)
0043fb40  sw s8,0x20(sp)
0043fb44  move s8,sp
0043fb48  sw gp,0x10(sp)
0043fb4c  sw a0,0x28(s8)
0043fb50  sw a1,0x2c(s8)
0043fb54  lw a0,0x28(s8)
0043fb58  lw a1,0x2c(s8)
0043fb5c  lw v0,-0x71e0(gp)
0043fb60  nop
0043fb64  move t9,v0
0043fb68  jalr t9
0043fb6c  _nop
0043fb70  lw gp,0x10(s8)
0043fb74  sw v0,0x18(s8)
0043fb78  lw v0,0x18(s8)
0043fb7c  nop
0043fb80  bne v0,zero,0x0043fb94
0043fb84  _nop
0043fb88  li v0,-0x1
0043fb8c  b 0x0043fbb4
0043fb90  _nop
0043fb94  lw a0,0x28(s8)
0043fb98  lw a1,0x18(s8)
0043fb9c  lw v0,-0x73a0(gp)
0043fba0  nop
0043fba4  move t9,v0
0043fba8  jalr t9
0043fbac  _nop
0043fbb0  lw gp,0x10(s8)
0043fbb4  move sp,s8
0043fbb8  lw ra,0x24(sp)
0043fbbc  lw s8,0x20(sp)
0043fbc0  addiu sp,sp,0x28
0043fbc4  jr ra
0043fbc8  _nop
