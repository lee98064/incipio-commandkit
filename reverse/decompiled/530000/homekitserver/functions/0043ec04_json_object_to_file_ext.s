# json_object_to_file_ext @ 0043ec04
0043ec04  lui gp,0x1e
0043ec08  addiu gp,gp,-0x48f4
0043ec0c  addu gp,gp,t9
0043ec10  addiu sp,sp,-0x38
0043ec14  sw ra,0x34(sp)
0043ec18  sw s8,0x30(sp)
0043ec1c  move s8,sp
0043ec20  sw gp,0x10(sp)
0043ec24  sw a0,0x38(s8)
0043ec28  sw a1,0x3c(s8)
0043ec2c  sw a2,0x40(s8)
0043ec30  lw v0,0x3c(s8)
0043ec34  nop
0043ec38  bne v0,zero,0x0043ec70
0043ec3c  _nop
0043ec40  lw v0,-0x7fd0(gp)
0043ec44  nop
0043ec48  addiu a0,v0,-0x1180
0043ec4c  lw v0,-0x6108(gp)
0043ec50  nop
0043ec54  move t9,v0
0043ec58  jalr t9
0043ec5c  _nop
0043ec60  lw gp,0x10(s8)
0043ec64  li v0,-0x1
0043ec68  b 0x0043eee4
0043ec6c  _nop
0043ec70  lw a0,0x38(s8)
0043ec74  li a1,0x301
0043ec78  li a2,0x1a4
0043ec7c  lw v0,-0x5b74(gp)
0043ec80  nop
0043ec84  move t9,v0
0043ec88  jalr t9
0043ec8c  _nop
0043ec90  lw gp,0x10(s8)
0043ec94  sw v0,0x24(s8)
0043ec98  lw v0,0x24(s8)
0043ec9c  nop
0043eca0  bgez v0,0x0043ed20
0043eca4  _nop
0043eca8  lw v0,-0x5aec(gp)
0043ecac  nop
0043ecb0  move t9,v0
0043ecb4  jalr t9
0043ecb8  _nop
0043ecbc  lw gp,0x10(s8)
0043ecc0  lw v0,0x0(v0)
0043ecc4  nop
0043ecc8  move a0,v0
0043eccc  lw v0,-0x7bc8(gp)
0043ecd0  nop
0043ecd4  move t9,v0
0043ecd8  jalr t9
0043ecdc  _nop
0043ece0  lw gp,0x10(s8)
0043ece4  nop
0043ece8  lw v1,-0x7fd0(gp)
0043ecec  nop
0043ecf0  addiu a0,v1,-0x1158
0043ecf4  lw a1,0x38(s8)
0043ecf8  move a2,v0
0043ecfc  lw v0,-0x6108(gp)
0043ed00  nop
0043ed04  move t9,v0
0043ed08  jalr t9
0043ed0c  _nop
0043ed10  lw gp,0x10(s8)
0043ed14  li v0,-0x1
0043ed18  b 0x0043eee4
0043ed1c  _nop
0043ed20  lw a0,0x3c(s8)
0043ed24  lw a1,0x40(s8)
0043ed28  lw v0,-0x5f38(gp)
0043ed2c  nop
0043ed30  move t9,v0
0043ed34  jalr t9
0043ed38  _nop
0043ed3c  lw gp,0x10(s8)
0043ed40  sw v0,0x28(s8)
0043ed44  lw v0,0x28(s8)
0043ed48  nop
0043ed4c  bne v0,zero,0x0043ed7c
0043ed50  _nop
0043ed54  lw a0,0x24(s8)
0043ed58  lw v0,-0x6d0c(gp)
0043ed5c  nop
0043ed60  move t9,v0
0043ed64  jalr t9
0043ed68  _nop
0043ed6c  lw gp,0x10(s8)
0043ed70  li v0,-0x1
0043ed74  b 0x0043eee4
0043ed78  _nop
0043ed7c  lw a0,0x28(s8)
0043ed80  lw v0,-0x63c4(gp)
0043ed84  nop
0043ed88  move t9,v0
0043ed8c  jalr t9
0043ed90  _nop
0043ed94  lw gp,0x10(s8)
0043ed98  sw v0,0x18(s8)
0043ed9c  sw zero,0x1c(s8)
0043eda0  b 0x0043eeac
0043eda4  _nop
0043eda8  lw v1,0x28(s8)
0043edac  lw v0,0x1c(s8)
0043edb0  nop
0043edb4  addu v1,v1,v0
0043edb8  lw a0,0x18(s8)
0043edbc  lw v0,0x1c(s8)
0043edc0  nop
0043edc4  subu v0,a0,v0
0043edc8  lw a0,0x24(s8)
0043edcc  move a1,v1
0043edd0  move a2,v0
0043edd4  lw v0,-0x6bdc(gp)
0043edd8  nop
0043eddc  move t9,v0
0043ede0  jalr t9
0043ede4  _nop
0043ede8  lw gp,0x10(s8)
0043edec  sw v0,0x20(s8)
0043edf0  lw v0,0x20(s8)
0043edf4  nop
0043edf8  bgez v0,0x0043ee98
0043edfc  _nop
0043ee00  lw a0,0x24(s8)
0043ee04  lw v0,-0x6d0c(gp)
0043ee08  nop
0043ee0c  move t9,v0
0043ee10  jalr t9
0043ee14  _nop
0043ee18  lw gp,0x10(s8)
0043ee1c  nop
0043ee20  lw v0,-0x5aec(gp)
0043ee24  nop
0043ee28  move t9,v0
0043ee2c  jalr t9
0043ee30  _nop
0043ee34  lw gp,0x10(s8)
0043ee38  lw v0,0x0(v0)
0043ee3c  nop
0043ee40  move a0,v0
0043ee44  lw v0,-0x7bc8(gp)
0043ee48  nop
0043ee4c  move t9,v0
0043ee50  jalr t9
0043ee54  _nop
0043ee58  lw gp,0x10(s8)
0043ee5c  nop
0043ee60  lw v1,-0x7fd0(gp)
0043ee64  nop
0043ee68  addiu a0,v1,-0x1128
0043ee6c  lw a1,0x38(s8)
0043ee70  move a2,v0
0043ee74  lw v0,-0x6108(gp)
0043ee78  nop
0043ee7c  move t9,v0
0043ee80  jalr t9
0043ee84  _nop
0043ee88  lw gp,0x10(s8)
0043ee8c  li v0,-0x1
0043ee90  b 0x0043eee4
0043ee94  _nop
0043ee98  lw v0,0x20(s8)
0043ee9c  lw v1,0x1c(s8)
0043eea0  nop
0043eea4  addu v0,v1,v0
0043eea8  sw v0,0x1c(s8)
0043eeac  lw v1,0x1c(s8)
0043eeb0  lw v0,0x18(s8)
0043eeb4  nop
0043eeb8  sltu v0,v1,v0
0043eebc  bne v0,zero,0x0043eda8
0043eec0  _nop
0043eec4  lw a0,0x24(s8)
0043eec8  lw v0,-0x6d0c(gp)
0043eecc  nop
0043eed0  move t9,v0
0043eed4  jalr t9
0043eed8  _nop
0043eedc  lw gp,0x10(s8)
0043eee0  clear v0
0043eee4  move sp,s8
0043eee8  lw ra,0x34(sp)
0043eeec  lw s8,0x30(sp)
0043eef0  addiu sp,sp,0x38
0043eef4  jr ra
0043eef8  _nop
