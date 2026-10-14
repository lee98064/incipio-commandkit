# HKDestroyPrivateEventTable @ 0042ec14
0042ec14  addiu sp,sp,-0x38
0042ec18  sw ra,0x34(sp)
0042ec1c  sw s6,0x30(sp)
0042ec20  sw s5,0x2c(sp)
0042ec24  sw s4,0x28(sp)
0042ec28  sw s3,0x24(sp)
0042ec2c  sw s2,0x20(sp)
0042ec30  sw s1,0x1c(sp)
0042ec34  sw s0,0x18(sp)
0042ec38  lui gp,0x62
0042ec3c  addiu gp,gp,-0x6b80
0042ec40  sw gp,0x10(sp)
0042ec44  lw v0,0x0(a0)
0042ec48  nop
0042ec4c  beq v0,a0,0x0042ece8
0042ec50  _addiu s6,a0,0x14
0042ec54  lw s0,0x14(a0)
0042ec58  li s5,0x4
0042ec5c  lw s2,0x0(s0)
0042ec60  li s4,0x5
0042ec64  b 0x0042ece0
0042ec68  _li s3,0x3
0042ec6c  lw v0,0xc(s1)
0042ec70  nop
0042ec74  beq v0,s5,0x0042ec8c
0042ec78  _nop
0042ec7c  beq v0,s4,0x0042ec8c
0042ec80  _nop
0042ec84  bne v0,s3,0x0042ecb0
0042ec88  _nop
0042ec8c  lw a0,0x8(s1)
0042ec90  nop
0042ec94  beq a0,zero,0x0042ecb0
0042ec98  _nop
0042ec9c  lw t9,-0x7aa4(gp)
0042eca0  nop
0042eca4  jalr t9
0042eca8  _nop
0042ecac  lw gp,0x10(sp)
0042ecb0  lw v0,0x4(s0)
0042ecb4  lw v1,0x0(s0)
0042ecb8  lw t9,-0x7aa4(gp)
0042ecbc  move a0,s1
0042ecc0  sw v0,0x4(v1)
0042ecc4  sw v1,0x0(v0)
0042ecc8  sw s0,0x4(s0)
0042eccc  jalr t9
0042ecd0  _sw s0,0x0(s0)
0042ecd4  move s0,s2
0042ecd8  lw gp,0x10(sp)
0042ecdc  lw s2,0x0(s2)
0042ece0  bne s0,s6,0x0042ec6c
0042ece4  _addiu s1,s0,-0x14
0042ece8  lw ra,0x34(sp)
0042ecec  lw s6,0x30(sp)
0042ecf0  lw s5,0x2c(sp)
0042ecf4  lw s4,0x28(sp)
0042ecf8  lw s3,0x24(sp)
0042ecfc  lw s2,0x20(sp)
0042ed00  lw s1,0x1c(sp)
0042ed04  lw s0,0x18(sp)
0042ed08  clear v0
0042ed0c  jr ra
0042ed10  _addiu sp,sp,0x38
