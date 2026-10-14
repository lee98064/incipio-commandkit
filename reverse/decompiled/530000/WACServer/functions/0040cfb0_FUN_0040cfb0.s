# FUN_0040cfb0 @ 0040cfb0
0040cfb0  addiu sp,sp,-0x30
0040cfb4  sw ra,0x2c(sp)
0040cfb8  sw s2,0x28(sp)
0040cfbc  sw s1,0x24(sp)
0040cfc0  sw s0,0x20(sp)
0040cfc4  lui gp,0x44
0040cfc8  addiu gp,gp,-0x4fc0
0040cfcc  sw gp,0x10(sp)
0040cfd0  lw s1,0x104(a0)
0040cfd4  move s0,a0
0040cfd8  move v0,a3
0040cfdc  bne s1,zero,0x0040d078
0040cfe0  _andi s2,a1,0xff
0040cfe4  li v1,-0x1
0040cfe8  bne a3,v1,0x0040d004
0040cfec  _move a0,a2
0040cff0  lw t9,-0x7f74(gp)
0040cff4  nop
0040cff8  jalr t9
0040cffc  _sw a2,0x18(sp)
0040d000  lw a2,0x18(sp)
0040d004  lw v1,0x100(s0)
0040d008  nop
0040d00c  addiu a0,v1,0x2
0040d010  addu a1,a0,v0
0040d014  sltiu a1,a1,0x100
0040d018  bne a1,zero,0x0040d028
0040d01c  _addu a1,s0,v1
0040d020  b 0x0040d064
0040d024  _li s1,-0x1a57
0040d028  sb v0,0x1(a1)
0040d02c  sb s2,0x0(a1)
0040d030  addu v0,a2,v0
0040d034  b 0x0040d058
0040d038  _sw a0,0x100(s0)
0040d03c  lw v1,0x100(s0)
0040d040  lbu a1,0x0(a2)
0040d044  addiu a2,a2,0x1
0040d048  addiu a0,v1,0x1
0040d04c  addu v1,s0,v1
0040d050  sb a1,0x0(v1)
0040d054  sw a0,0x100(s0)
0040d058  sltu v1,a2,v0
0040d05c  bne v1,zero,0x0040d03c
0040d060  _nop
0040d064  lw v0,0x104(s0)
0040d068  nop
0040d06c  bne v0,zero,0x0040d07c
0040d070  _move v0,s1
0040d074  sw s1,0x104(s0)
0040d078  move v0,s1
0040d07c  lw ra,0x2c(sp)
0040d080  lw s2,0x28(sp)
0040d084  lw s1,0x24(sp)
0040d088  lw s0,0x20(sp)
0040d08c  jr ra
0040d090  _addiu sp,sp,0x30
