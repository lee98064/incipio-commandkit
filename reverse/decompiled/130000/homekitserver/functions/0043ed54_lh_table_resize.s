# lh_table_resize @ 0043ed54
0043ed54  lui gp,0x1e
0043ed58  addiu gp,gp,-0x58d4
0043ed5c  addu gp,gp,t9
0043ed60  addiu sp,sp,-0x30
0043ed64  sw ra,0x2c(sp)
0043ed68  sw s8,0x28(sp)
0043ed6c  move s8,sp
0043ed70  sw gp,0x18(sp)
0043ed74  sw a0,0x30(s8)
0043ed78  sw a1,0x34(s8)
0043ed7c  lw v0,0x30(s8)
0043ed80  nop
0043ed84  lw v1,0x1c(v0)
0043ed88  lw v0,0x30(s8)
0043ed8c  nop
0043ed90  lw v0,0x30(v0)
0043ed94  lw a0,0x30(s8)
0043ed98  nop
0043ed9c  lw a0,0x34(a0)
0043eda0  nop
0043eda4  sw a0,0x10(sp)
0043eda8  lw a0,0x34(s8)
0043edac  move a1,v1
0043edb0  clear a2
0043edb4  move a3,v0
0043edb8  lw v0,-0x6c1c(gp)
0043edbc  nop
0043edc0  move t9,v0
0043edc4  jalr t9
0043edc8  _nop
0043edcc  lw gp,0x18(s8)
0043edd0  sw v0,0x24(s8)
0043edd4  lw v0,0x30(s8)
0043edd8  nop
0043eddc  lw v0,0x20(v0)
0043ede0  nop
0043ede4  sw v0,0x20(s8)
0043ede8  b 0x0043ee40
0043edec  _nop
0043edf0  lw v0,0x20(s8)
0043edf4  nop
0043edf8  lw v1,0x0(v0)
0043edfc  lw v0,0x20(s8)
0043ee00  nop
0043ee04  lw v0,0x4(v0)
0043ee08  lw a0,0x24(s8)
0043ee0c  move a1,v1
0043ee10  move a2,v0
0043ee14  lw v0,-0x5ad8(gp)
0043ee18  nop
0043ee1c  move t9,v0
0043ee20  jalr t9
0043ee24  _nop
0043ee28  lw gp,0x18(s8)
0043ee2c  lw v0,0x20(s8)
0043ee30  nop
0043ee34  lw v0,0x8(v0)
0043ee38  nop
0043ee3c  sw v0,0x20(s8)
0043ee40  lw v0,0x20(s8)
0043ee44  nop
0043ee48  bne v0,zero,0x0043edf0
0043ee4c  _nop
0043ee50  lw v0,0x30(s8)
0043ee54  nop
0043ee58  lw v0,0x28(v0)
0043ee5c  nop
0043ee60  move a0,v0
0043ee64  lw v0,-0x7aa4(gp)
0043ee68  nop
0043ee6c  move t9,v0
0043ee70  jalr t9
0043ee74  _nop
0043ee78  lw gp,0x18(s8)
0043ee7c  lw v0,0x24(s8)
0043ee80  nop
0043ee84  lw v1,0x28(v0)
0043ee88  lw v0,0x30(s8)
0043ee8c  nop
0043ee90  sw v1,0x28(v0)
0043ee94  lw v0,0x30(s8)
0043ee98  lw v1,0x34(s8)
0043ee9c  nop
0043eea0  sw v1,0x0(v0)
0043eea4  lw v0,0x24(s8)
0043eea8  nop
0043eeac  lw v1,0x20(v0)
0043eeb0  lw v0,0x30(s8)
0043eeb4  nop
0043eeb8  sw v1,0x20(v0)
0043eebc  lw v0,0x24(s8)
0043eec0  nop
0043eec4  lw v1,0x24(v0)
0043eec8  lw v0,0x30(s8)
0043eecc  nop
0043eed0  sw v1,0x24(v0)
0043eed4  lw v0,0x30(s8)
0043eed8  nop
0043eedc  lw v0,0xc(v0)
0043eee0  nop
0043eee4  addiu v1,v0,0x1
0043eee8  lw v0,0x30(s8)
0043eeec  nop
0043eef0  sw v1,0xc(v0)
0043eef4  lw a0,0x24(s8)
0043eef8  lw v0,-0x7aa4(gp)
0043eefc  nop
0043ef00  move t9,v0
0043ef04  jalr t9
0043ef08  _nop
0043ef0c  lw gp,0x18(s8)
0043ef10  move sp,s8
0043ef14  lw ra,0x2c(sp)
0043ef18  lw s8,0x28(sp)
0043ef1c  addiu sp,sp,0x30
0043ef20  jr ra
0043ef24  _nop
