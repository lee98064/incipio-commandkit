# FUN_0040ec18 @ 0040ec18
0040ec18  addiu sp,sp,-0x30
0040ec1c  sw ra,0x2c(sp)
0040ec20  sw s3,0x28(sp)
0040ec24  sw s2,0x24(sp)
0040ec28  sw s1,0x20(sp)
0040ec2c  sw s0,0x1c(sp)
0040ec30  lui gp,0x47
0040ec34  addiu gp,gp,0x2630
0040ec38  sw gp,0x10(sp)
0040ec3c  lw t9,-0x7eb4(gp)
0040ec40  addiu s1,a0,0x8d4
0040ec44  move s0,a0
0040ec48  jalr t9
0040ec4c  _move a0,s1
0040ec50  lw gp,0x10(sp)
0040ec54  beq v0,zero,0x0040edd0
0040ec58  _move s3,v0
0040ec5c  lw t9,-0x7a44(gp)
0040ec60  lui a1,0x45
0040ec64  addiu a1,a1,-0x4718
0040ec68  jalr t9
0040ec6c  _move a0,s0
0040ec70  lw gp,0x10(sp)
0040ec74  lui a1,0x45
0040ec78  addiu a1,a1,-0x6a14
0040ec7c  lw t9,-0x7e0c(gp)
0040ec80  nop
0040ec84  jalr t9
0040ec88  _move a0,s3
0040ec8c  lw gp,0x10(sp)
0040ec90  nop
0040ec94  lw t9,-0x7a44(gp)
0040ec98  bne v0,zero,0x0040ecac
0040ec9c  _lui a1,0x45
0040eca0  addiu a1,a1,-0x4708
0040eca4  b 0x0040ecb4
0040eca8  _move a0,s0
0040ecac  move a0,s0
0040ecb0  move a1,s3
0040ecb4  jalr t9
0040ecb8  _nop
0040ecbc  lw gp,0x10(sp)
0040ecc0  nop
0040ecc4  lw s2,-0x7ae8(gp)
0040ecc8  nop
0040eccc  lw v0,0x0(s2)
0040ecd0  nop
0040ecd4  beq v0,zero,0x0040ed30
0040ecd8  _move a0,s3
0040ecdc  lw t9,-0x7ba4(gp)
0040ece0  lui a1,0x45
0040ece4  addiu a1,a1,-0x46fc
0040ece8  jalr t9
0040ecec  _li a2,0x4
0040ecf0  lw gp,0x10(sp)
0040ecf4  bne v0,zero,0x0040ed30
0040ecf8  _nop
0040ecfc  lw t9,-0x7a44(gp)
0040ed00  lui a1,0x45
0040ed04  addiu a1,a1,-0x46f4
0040ed08  jalr t9
0040ed0c  _move a0,s0
0040ed10  lw gp,0x10(sp)
0040ed14  lw a1,0x0(s2)
0040ed18  lw t9,-0x7a44(gp)
0040ed1c  nop
0040ed20  jalr t9
0040ed24  _move a0,s0
0040ed28  lw gp,0x10(sp)
0040ed2c  nop
0040ed30  lw t9,-0x7a44(gp)
0040ed34  lui a1,0x45
0040ed38  addiu a1,a1,-0x4c0c
0040ed3c  jalr t9
0040ed40  _move a0,s0
0040ed44  lw gp,0x10(sp)
0040ed48  lw a0,0x1c(s0)
0040ed4c  lui a1,0x45
0040ed50  lw t9,-0x7cf0(gp)
0040ed54  nop
0040ed58  jalr t9
0040ed5c  _addiu a1,a1,-0x5f48
0040ed60  lw gp,0x10(sp)
0040ed64  beq v0,zero,0x0040ed88
0040ed68  _nop
0040ed6c  lw t9,-0x7a44(gp)
0040ed70  lui a1,0x45
0040ed74  addiu a1,a1,-0x46e8
0040ed78  jalr t9
0040ed7c  _move a0,s0
0040ed80  lw gp,0x10(sp)
0040ed84  nop
0040ed88  lw t9,-0x7e0c(gp)
0040ed8c  lui a1,0x45
0040ed90  move a0,s1
0040ed94  jalr t9
0040ed98  _addiu a1,a1,-0x46c4
0040ed9c  lw gp,0x10(sp)
0040eda0  bne v0,zero,0x0040edd0
0040eda4  _move a0,s0
0040eda8  lw t9,-0x7a44(gp)
0040edac  lw ra,0x2c(sp)
0040edb0  lw s3,0x28(sp)
0040edb4  lw s2,0x24(sp)
0040edb8  lw s1,0x20(sp)
0040edbc  lw s0,0x1c(sp)
0040edc0  lui a1,0x45
0040edc4  addiu a1,a1,-0x46e8
0040edc8  jr t9
0040edcc  _addiu sp,sp,0x30
0040edd0  lw ra,0x2c(sp)
0040edd4  lw s3,0x28(sp)
0040edd8  lw s2,0x24(sp)
0040eddc  lw s1,0x20(sp)
0040ede0  lw s0,0x1c(sp)
0040ede4  jr ra
0040ede8  _addiu sp,sp,0x30
