# lh_table_resize @ 0043fb24
0043fb24  lui gp,0x1e
0043fb28  addiu gp,gp,-0x5814
0043fb2c  addu gp,gp,t9
0043fb30  addiu sp,sp,-0x30
0043fb34  sw ra,0x2c(sp)
0043fb38  sw s8,0x28(sp)
0043fb3c  move s8,sp
0043fb40  sw gp,0x18(sp)
0043fb44  sw a0,0x30(s8)
0043fb48  sw a1,0x34(s8)
0043fb4c  lw v0,0x30(s8)
0043fb50  nop
0043fb54  lw v1,0x1c(v0)
0043fb58  lw v0,0x30(s8)
0043fb5c  nop
0043fb60  lw v0,0x30(v0)
0043fb64  lw a0,0x30(s8)
0043fb68  nop
0043fb6c  lw a0,0x34(a0)
0043fb70  nop
0043fb74  sw a0,0x10(sp)
0043fb78  lw a0,0x34(s8)
0043fb7c  move a1,v1
0043fb80  clear a2
0043fb84  move a3,v0
0043fb88  lw v0,-0x6c10(gp)
0043fb8c  nop
0043fb90  move t9,v0
0043fb94  jalr t9
0043fb98  _nop
0043fb9c  lw gp,0x18(s8)
0043fba0  sw v0,0x24(s8)
0043fba4  lw v0,0x30(s8)
0043fba8  nop
0043fbac  lw v0,0x20(v0)
0043fbb0  nop
0043fbb4  sw v0,0x20(s8)
0043fbb8  b 0x0043fc10
0043fbbc  _nop
0043fbc0  lw v0,0x20(s8)
0043fbc4  nop
0043fbc8  lw v1,0x0(v0)
0043fbcc  lw v0,0x20(s8)
0043fbd0  nop
0043fbd4  lw v0,0x4(v0)
0043fbd8  lw a0,0x24(s8)
0043fbdc  move a1,v1
0043fbe0  move a2,v0
0043fbe4  lw v0,-0x5ac0(gp)
0043fbe8  nop
0043fbec  move t9,v0
0043fbf0  jalr t9
0043fbf4  _nop
0043fbf8  lw gp,0x18(s8)
0043fbfc  lw v0,0x20(s8)
0043fc00  nop
0043fc04  lw v0,0x8(v0)
0043fc08  nop
0043fc0c  sw v0,0x20(s8)
0043fc10  lw v0,0x20(s8)
0043fc14  nop
0043fc18  bne v0,zero,0x0043fbc0
0043fc1c  _nop
0043fc20  lw v0,0x30(s8)
0043fc24  nop
0043fc28  lw v0,0x28(v0)
0043fc2c  nop
0043fc30  move a0,v0
0043fc34  lw v0,-0x7aa4(gp)
0043fc38  nop
0043fc3c  move t9,v0
0043fc40  jalr t9
0043fc44  _nop
0043fc48  lw gp,0x18(s8)
0043fc4c  lw v0,0x24(s8)
0043fc50  nop
0043fc54  lw v1,0x28(v0)
0043fc58  lw v0,0x30(s8)
0043fc5c  nop
0043fc60  sw v1,0x28(v0)
0043fc64  lw v0,0x30(s8)
0043fc68  lw v1,0x34(s8)
0043fc6c  nop
0043fc70  sw v1,0x0(v0)
0043fc74  lw v0,0x24(s8)
0043fc78  nop
0043fc7c  lw v1,0x20(v0)
0043fc80  lw v0,0x30(s8)
0043fc84  nop
0043fc88  sw v1,0x20(v0)
0043fc8c  lw v0,0x24(s8)
0043fc90  nop
0043fc94  lw v1,0x24(v0)
0043fc98  lw v0,0x30(s8)
0043fc9c  nop
0043fca0  sw v1,0x24(v0)
0043fca4  lw v0,0x30(s8)
0043fca8  nop
0043fcac  lw v0,0xc(v0)
0043fcb0  nop
0043fcb4  addiu v1,v0,0x1
0043fcb8  lw v0,0x30(s8)
0043fcbc  nop
0043fcc0  sw v1,0xc(v0)
0043fcc4  lw a0,0x24(s8)
0043fcc8  lw v0,-0x7aa4(gp)
0043fccc  nop
0043fcd0  move t9,v0
0043fcd4  jalr t9
0043fcd8  _nop
0043fcdc  lw gp,0x18(s8)
0043fce0  move sp,s8
0043fce4  lw ra,0x2c(sp)
0043fce8  lw s8,0x28(sp)
0043fcec  addiu sp,sp,0x30
0043fcf0  jr ra
0043fcf4  _nop
