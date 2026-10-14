# FUN_80404c88 @ 80404c88
80404c88  addiu sp,sp,-0x28
80404c8c  sw ra,0x24(sp)
80404c90  sw s3,0x20(sp)
80404c94  sw s2,0x1c(sp)
80404c98  sw s1,0x18(sp)
80404c9c  sw s0,0x14(sp)
80404ca0  move s0,a1
80404ca4  move s3,a2
80404ca8  move s2,a3
80404cac  jal 0x80404c30
80404cb0  _andi s1,a0,0xff
80404cb4  divu v0,s0
80404cb8  bne s0,zero,0x80404cc4
80404cbc  _nop
80404cc0  break 0x1c00
80404cc4  mfhi v1
80404cc8  mflo s0
80404ccc  addiu a0,s0,0x1
80404cd0  movn s0,a0,v1
80404cd4  andi a0,s0,0x1
80404cd8  addiu v1,s0,0x1
80404cdc  movn s0,v1,a0
80404ce0  sll v1,s1,0x3
80404ce4  sll s1,s1,0x6
80404ce8  addu s1,v1,s1
80404cec  lui v1,0x8041
80404cf0  addiu v1,v1,0xe64
80404cf4  addu s1,s1,v1
80404cf8  divu v0,s0
80404cfc  bne s0,zero,0x80404d08
80404d00  _nop
80404d04  break 0x1c00
80404d08  mflo v0
80404d0c  sw v0,0x28(s1)
80404d10  lui a0,0xb800
80404d14  ori a0,a0,0x1208
80404d18  lui v1,0x800
80404d1c  lw v0,0x0(a0)
80404d20  nop
80404d24  and v0,v0,v1
80404d28  beq v0,zero,0x80404d1c
80404d2c  _nop
80404d30  sll s2,s2,0x1b
80404d34  sll s3,s3,0x1c
80404d38  or s2,s2,s3
80404d3c  lw v0,0x38(sp)
80404d40  nop
80404d44  sll v0,v0,0x16
80404d48  or s2,s2,v0
80404d4c  addiu s0,s0,-0x2
80404d50  srl s0,s0,0x1
80404d54  sll s0,s0,0x1d
80404d58  or s0,s2,s0
80404d5c  lui v0,0xb800
80404d60  ori v0,v0,0x1200
80404d64  sw s0,0x0(v0)
80404d68  lw ra,0x24(sp)
80404d6c  lw s3,0x20(sp)
80404d70  lw s2,0x1c(sp)
80404d74  lw s1,0x18(sp)
80404d78  lw s0,0x14(sp)
80404d7c  jr ra
80404d80  _addiu sp,sp,0x28
