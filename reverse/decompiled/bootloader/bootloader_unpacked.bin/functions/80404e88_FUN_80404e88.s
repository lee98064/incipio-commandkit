# FUN_80404e88 @ 80404e88
80404e88  addiu sp,sp,-0x38
80404e8c  sw ra,0x34(sp)
80404e90  sw s8,0x30(sp)
80404e94  sw s7,0x2c(sp)
80404e98  sw s6,0x28(sp)
80404e9c  sw s5,0x24(sp)
80404ea0  sw s4,0x20(sp)
80404ea4  sw s3,0x1c(sp)
80404ea8  sw s2,0x18(sp)
80404eac  sw s1,0x14(sp)
80404eb0  sw s0,0x10(sp)
80404eb4  move s2,a3
80404eb8  lw s7,0x48(sp)
80404ebc  lw s8,0x4c(sp)
80404ec0  andi s1,a0,0xff
80404ec4  li s3,0x1
80404ec8  sllv s3,s3,a2
80404ecc  sll s4,s1,0x3
80404ed0  sll s0,s1,0x6
80404ed4  addu s0,s4,s0
80404ed8  lui s5,0x8041
80404edc  addiu s5,s5,0xe64
80404ee0  addu s0,s0,s5
80404ee4  sw a1,0x0(s0)
80404ee8  srl v0,a1,0x10
80404eec  sb v0,0x4(s0)
80404ef0  srl v0,a1,0x8
80404ef4  sb v0,0x5(s0)
80404ef8  andi a0,a1,0xff
80404efc  sb a0,0x6(s0)
80404f00  andi s6,a2,0xff
80404f04  jal 0x80404e5c
80404f08  _move a1,s6
80404f0c  sb v0,0x7(s0)
80404f10  addu s1,s4,s1
80404f14  addiu s1,s1,0x1
80404f18  sll s1,s1,0x3
80404f1c  addu s5,s1,s5
80404f20  sb s6,0x0(s5)
80404f24  sw s3,0x4(s5)
80404f28  sw s2,0x10(s0)
80404f2c  divu s3,s2
80404f30  bne s2,zero,0x80404f3c
80404f34  _nop
80404f38  break 0x1c00
80404f3c  mflo s2
80404f40  sw s2,0x14(s0)
80404f44  sw s7,0x18(s0)
80404f48  divu s3,s7
80404f4c  bne s7,zero,0x80404f58
80404f50  _nop
80404f54  break 0x1c00
80404f58  mflo s3
80404f5c  sw s3,0x1c(s0)
80404f60  sw s8,0x20(s0)
80404f64  divu s7,s8
80404f68  bne s8,zero,0x80404f74
80404f6c  _nop
80404f70  break 0x1c00
80404f74  mflo s7
80404f78  sw s7,0x24(s0)
80404f7c  lw v0,0x50(sp)
80404f80  nop
80404f84  sw v0,0x2c(s0)
80404f88  lw v0,0x54(sp)
80404f8c  nop
80404f90  sw v0,0x34(s0)
80404f94  lui v0,0x8040
80404f98  addiu v0,v0,0x5cf8
80404f9c  sw v0,0x38(s0)
80404fa0  lw v0,0x58(sp)
80404fa4  nop
80404fa8  sw v0,0x3c(s0)
80404fac  lw v0,0x5c(sp)
80404fb0  nop
80404fb4  sw v0,0x40(s0)
80404fb8  lw v0,0x60(sp)
80404fbc  nop
80404fc0  sw v0,0x44(s0)
80404fc4  lw ra,0x34(sp)
80404fc8  lw s8,0x30(sp)
80404fcc  lw s7,0x2c(sp)
80404fd0  lw s6,0x28(sp)
80404fd4  lw s5,0x24(sp)
80404fd8  lw s4,0x20(sp)
80404fdc  lw s3,0x1c(sp)
80404fe0  lw s2,0x18(sp)
80404fe4  lw s1,0x14(sp)
80404fe8  lw s0,0x10(sp)
80404fec  jr ra
80404ff0  _addiu sp,sp,0x38
