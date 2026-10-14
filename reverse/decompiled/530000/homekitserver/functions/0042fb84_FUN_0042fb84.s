# FUN_0042fb84 @ 0042fb84
0042fb84  addiu sp,sp,-0x50
0042fb88  sw ra,0x4c(sp)
0042fb8c  lui gp,0x62
0042fb90  addiu gp,gp,-0x5cf0
0042fb94  sw gp,0x40(sp)
0042fb98  lbu a1,0x0(a0)
0042fb9c  nop
0042fba0  addiu v0,a1,-0x30
0042fba4  andi v0,v0,0xff
0042fba8  sltiu v0,v0,0xa
0042fbac  beq v0,zero,0x0042fc98
0042fbb0  _move v1,a0
0042fbb4  lbu v0,0x1(a0)
0042fbb8  nop
0042fbbc  addiu v0,v0,-0x30
0042fbc0  andi v0,v0,0xff
0042fbc4  sltiu v0,v0,0xa
0042fbc8  beq v0,zero,0x0042fc98
0042fbcc  _nop
0042fbd0  lbu v0,0x2(a0)
0042fbd4  nop
0042fbd8  addiu v0,v0,-0x30
0042fbdc  andi v0,v0,0xff
0042fbe0  sltiu v0,v0,0xa
0042fbe4  beq v0,zero,0x0042fc98
0042fbe8  _nop
0042fbec  lb v0,0x3(a0)
0042fbf0  li a0,0x2d
0042fbf4  bne v0,a0,0x0042fc98
0042fbf8  _nop
0042fbfc  lbu a0,0x4(v1)
0042fc00  nop
0042fc04  addiu a0,a0,-0x30
0042fc08  andi a0,a0,0xff
0042fc0c  sltiu a0,a0,0xa
0042fc10  beq a0,zero,0x0042fc98
0042fc14  _nop
0042fc18  lbu a0,0x5(v1)
0042fc1c  nop
0042fc20  addiu a0,a0,-0x30
0042fc24  andi a0,a0,0xff
0042fc28  sltiu a0,a0,0xa
0042fc2c  beq a0,zero,0x0042fc98
0042fc30  _nop
0042fc34  lb a0,0x6(v1)
0042fc38  nop
0042fc3c  bne a0,v0,0x0042fc98
0042fc40  _nop
0042fc44  lbu v0,0x7(v1)
0042fc48  nop
0042fc4c  addiu v0,v0,-0x30
0042fc50  andi v0,v0,0xff
0042fc54  sltiu v0,v0,0xa
0042fc58  beq v0,zero,0x0042fc98
0042fc5c  _nop
0042fc60  lbu v0,0x8(v1)
0042fc64  nop
0042fc68  addiu v0,v0,-0x30
0042fc6c  andi v0,v0,0xff
0042fc70  sltiu v0,v0,0xa
0042fc74  beq v0,zero,0x0042fc98
0042fc78  _nop
0042fc7c  lbu a0,0x9(v1)
0042fc80  nop
0042fc84  addiu a0,a0,-0x30
0042fc88  andi a0,a0,0xff
0042fc8c  sltiu a0,a0,0xa
0042fc90  bne a0,zero,0x0042fd18
0042fc94  _li v0,0x1
0042fc98  lw a0,-0x6b48(gp)
0042fc9c  lbu a3,0x6(v1)
0042fca0  lbu a2,0x7(v1)
0042fca4  lbu v0,0x9(v1)
0042fca8  lbu t4,0x1(v1)
0042fcac  lbu t3,0x2(v1)
0042fcb0  lbu t2,0x3(v1)
0042fcb4  lbu t1,0x4(v1)
0042fcb8  lbu t0,0x5(v1)
0042fcbc  lbu v1,0x8(v1)
0042fcc0  lw a0,0x0(a0)
0042fcc4  lw t9,-0x73b4(gp)
0042fcc8  li t5,0x76
0042fccc  sw a1,0x14(sp)
0042fcd0  sw a3,0x2c(sp)
0042fcd4  sw a2,0x30(sp)
0042fcd8  lui a1,0x5b
0042fcdc  lui a2,0x5b
0042fce0  lui a3,0x5b
0042fce4  sw t5,0x10(sp)
0042fce8  sw t4,0x18(sp)
0042fcec  sw t3,0x1c(sp)
0042fcf0  sw t2,0x20(sp)
0042fcf4  sw t1,0x24(sp)
0042fcf8  sw t0,0x28(sp)
0042fcfc  sw v1,0x34(sp)
0042fd00  sw v0,0x38(sp)
0042fd04  addiu a1,a1,-0x28f0
0042fd08  addiu a2,a2,-0x289c
0042fd0c  jalr t9
0042fd10  _addiu a3,a3,-0x2820
0042fd14  clear v0
0042fd18  lw ra,0x4c(sp)
0042fd1c  nop
0042fd20  jr ra
0042fd24  _addiu sp,sp,0x50
