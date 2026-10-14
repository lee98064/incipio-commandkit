# lh_table_new @ 0043ea98
0043ea98  lui gp,0x1e
0043ea9c  addiu gp,gp,-0x5618
0043eaa0  addu gp,gp,t9
0043eaa4  addiu sp,sp,-0x28
0043eaa8  sw ra,0x24(sp)
0043eaac  sw s8,0x20(sp)
0043eab0  move s8,sp
0043eab4  sw gp,0x10(sp)
0043eab8  sw a0,0x28(s8)
0043eabc  sw a1,0x2c(s8)
0043eac0  sw a2,0x30(s8)
0043eac4  sw a3,0x34(s8)
0043eac8  li a0,0x1
0043eacc  li a1,0x38
0043ead0  lw v0,-0x5a68(gp)
0043ead4  nop
0043ead8  move t9,v0
0043eadc  jalr t9
0043eae0  _nop
0043eae4  lw gp,0x10(s8)
0043eae8  sw v0,0x18(s8)
0043eaec  lw v0,0x18(s8)
0043eaf0  nop
0043eaf4  bne v0,zero,0x0043eb20
0043eaf8  _nop
0043eafc  lw v0,-0x7fd0(gp)
0043eb00  nop
0043eb04  addiu a0,v0,-0x1ed0
0043eb08  lw v0,-0x6298(gp)
0043eb0c  nop
0043eb10  move t9,v0
0043eb14  jalr t9
0043eb18  _nop
0043eb1c  lw gp,0x10(s8)
0043eb20  lw v0,0x18(s8)
0043eb24  nop
0043eb28  sw zero,0x4(v0)
0043eb2c  lw v0,0x18(s8)
0043eb30  lw v1,0x28(s8)
0043eb34  nop
0043eb38  sw v1,0x0(v0)
0043eb3c  lw v0,0x18(s8)
0043eb40  lw v1,0x2c(s8)
0043eb44  nop
0043eb48  sw v1,0x1c(v0)
0043eb4c  lw v0,0x28(s8)
0043eb50  nop
0043eb54  move a0,v0
0043eb58  li a1,0x10
0043eb5c  lw v0,-0x5a68(gp)
0043eb60  nop
0043eb64  move t9,v0
0043eb68  jalr t9
0043eb6c  _nop
0043eb70  lw gp,0x10(s8)
0043eb74  move v1,v0
0043eb78  lw v0,0x18(s8)
0043eb7c  nop
0043eb80  sw v1,0x28(v0)
0043eb84  lw v0,0x18(s8)
0043eb88  nop
0043eb8c  lw v0,0x28(v0)
0043eb90  nop
0043eb94  bne v0,zero,0x0043ebc0
0043eb98  _nop
0043eb9c  lw v0,-0x7fd0(gp)
0043eba0  nop
0043eba4  addiu a0,v0,-0x1ed0
0043eba8  lw v0,-0x6298(gp)
0043ebac  nop
0043ebb0  move t9,v0
0043ebb4  jalr t9
0043ebb8  _nop
0043ebbc  lw gp,0x10(s8)
0043ebc0  lw v0,0x18(s8)
0043ebc4  lw v1,0x30(s8)
0043ebc8  nop
0043ebcc  sw v1,0x2c(v0)
0043ebd0  lw v0,0x18(s8)
0043ebd4  lw v1,0x34(s8)
0043ebd8  nop
0043ebdc  sw v1,0x30(v0)
0043ebe0  lw v0,0x18(s8)
0043ebe4  lw v1,0x38(s8)
0043ebe8  nop
0043ebec  sw v1,0x34(v0)
0043ebf0  sw zero,0x1c(s8)
0043ebf4  b 0x0043ec30
0043ebf8  _nop
0043ebfc  lw v0,0x18(s8)
0043ec00  nop
0043ec04  lw v1,0x28(v0)
0043ec08  lw v0,0x1c(s8)
0043ec0c  nop
0043ec10  sll v0,v0,0x4
0043ec14  addu v0,v1,v0
0043ec18  li v1,-0x1
0043ec1c  sw v1,0x0(v0)
0043ec20  lw v0,0x1c(s8)
0043ec24  nop
0043ec28  addiu v0,v0,0x1
0043ec2c  sw v0,0x1c(s8)
0043ec30  lw v1,0x1c(s8)
0043ec34  lw v0,0x28(s8)
0043ec38  nop
0043ec3c  slt v0,v1,v0
0043ec40  bne v0,zero,0x0043ebfc
0043ec44  _nop
0043ec48  lw v0,0x18(s8)
0043ec4c  move sp,s8
0043ec50  lw ra,0x24(sp)
0043ec54  lw s8,0x20(sp)
0043ec58  addiu sp,sp,0x28
0043ec5c  jr ra
0043ec60  _nop
