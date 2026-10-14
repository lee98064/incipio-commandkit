# FUN_0042ed14 @ 0042ed14
0042ed14  addiu sp,sp,-0x38
0042ed18  sw ra,0x34(sp)
0042ed1c  sw s6,0x30(sp)
0042ed20  sw s5,0x2c(sp)
0042ed24  sw s4,0x28(sp)
0042ed28  sw s3,0x24(sp)
0042ed2c  sw s2,0x20(sp)
0042ed30  sw s1,0x1c(sp)
0042ed34  sw s0,0x18(sp)
0042ed38  lui gp,0x62
0042ed3c  addiu gp,gp,-0x6b80
0042ed40  sw gp,0x10(sp)
0042ed44  lui v0,0x61
0042ed48  lw v1,0x4840(v0)
0042ed4c  addiu v0,v0,0x4840
0042ed50  beq v1,v0,0x0042edf0
0042ed54  _lui s6,0x61
0042ed58  lw s0,0xc(v0)
0042ed5c  addiu s6,s6,0x484c
0042ed60  lw s2,0x0(s0)
0042ed64  li s5,0x4
0042ed68  li s4,0x5
0042ed6c  b 0x0042ede8
0042ed70  _li s3,0x3
0042ed74  lw v0,0x8(s1)
0042ed78  nop
0042ed7c  beq v0,s5,0x0042ed94
0042ed80  _nop
0042ed84  beq v0,s4,0x0042ed94
0042ed88  _nop
0042ed8c  bne v0,s3,0x0042edb8
0042ed90  _nop
0042ed94  lw a0,0x4(s1)
0042ed98  nop
0042ed9c  beq a0,zero,0x0042edb8
0042eda0  _nop
0042eda4  lw t9,-0x7aa4(gp)
0042eda8  nop
0042edac  jalr t9
0042edb0  _nop
0042edb4  lw gp,0x10(sp)
0042edb8  lw v0,0x4(s0)
0042edbc  lw v1,0x0(s0)
0042edc0  lw t9,-0x7aa4(gp)
0042edc4  move a0,s1
0042edc8  sw v0,0x4(v1)
0042edcc  sw v1,0x0(v0)
0042edd0  sw s0,0x4(s0)
0042edd4  jalr t9
0042edd8  _sw s0,0x0(s0)
0042eddc  move s0,s2
0042ede0  lw gp,0x10(sp)
0042ede4  lw s2,0x0(s2)
0042ede8  bne s0,s6,0x0042ed74
0042edec  _addiu s1,s0,-0xc
0042edf0  lw ra,0x34(sp)
0042edf4  lw s6,0x30(sp)
0042edf8  lw s5,0x2c(sp)
0042edfc  lw s4,0x28(sp)
0042ee00  lw s3,0x24(sp)
0042ee04  lw s2,0x20(sp)
0042ee08  lw s1,0x1c(sp)
0042ee0c  lw s0,0x18(sp)
0042ee10  clear v0
0042ee14  jr ra
0042ee18  _addiu sp,sp,0x38
