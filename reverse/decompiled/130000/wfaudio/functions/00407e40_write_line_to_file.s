# write_line_to_file @ 00407e40
00407e40  addiu sp,sp,-0x230
00407e44  sw ra,0x22c(sp)
00407e48  sw s2,0x228(sp)
00407e4c  sw s1,0x224(sp)
00407e50  sw s0,0x220(sp)
00407e54  lui gp,0x43
00407e58  addiu gp,gp,-0x4f70
00407e5c  sw gp,0x18(sp)
00407e60  li v0,0x1
00407e64  move s2,a2
00407e68  bne a1,v0,0x00407e7c
00407e6c  _move s1,a0
00407e70  lw t9,-0x7f90(gp)
00407e74  b 0x00407e90
00407e78  _li a1,0x302
00407e7c  li v0,0x2
00407e80  bne a1,v0,0x00407ee0
00407e84  _clear s0
00407e88  lw t9,-0x7f90(gp)
00407e8c  li a1,0xa
00407e90  jalr t9
00407e94  _nop
00407e98  lw gp,0x18(sp)
00407e9c  bgez v0,0x00407ee0
00407ea0  _move s0,v0
00407ea4  lw v0,-0x7f30(gp)
00407ea8  lw t9,-0x7e6c(gp)
00407eac  lui a1,0x41
00407eb0  lw a0,0x0(v0)
00407eb4  lui a2,0x41
00407eb8  li v0,0xfe
00407ebc  lui a3,0x41
00407ec0  sw v0,0x10(sp)
00407ec4  sw s1,0x14(sp)
00407ec8  addiu a1,a1,0x126c
00407ecc  addiu a2,a2,0x1028
00407ed0  jalr t9
00407ed4  _addiu a3,a3,0x14e0
00407ed8  b 0x00407f44
00407edc  _clear v0
00407ee0  lw t9,-0x7d9c(gp)
00407ee4  addiu s1,sp,0x20
00407ee8  move a1,s2
00407eec  jalr t9
00407ef0  _move a0,s1
00407ef4  lw gp,0x18(sp)
00407ef8  nop
00407efc  lw t9,-0x7f88(gp)
00407f00  nop
00407f04  jalr t9
00407f08  _move a0,s1
00407f0c  lw gp,0x18(sp)
00407f10  move a1,s1
00407f14  move a2,v0
00407f18  lw t9,-0x7e68(gp)
00407f1c  nop
00407f20  jalr t9
00407f24  _move a0,s0
00407f28  lw gp,0x18(sp)
00407f2c  nop
00407f30  lw t9,-0x7fc4(gp)
00407f34  nop
00407f38  jalr t9
00407f3c  _move a0,s0
00407f40  li v0,0x1
00407f44  lw ra,0x22c(sp)
00407f48  lw s2,0x228(sp)
00407f4c  lw s1,0x224(sp)
00407f50  lw s0,0x220(sp)
00407f54  jr ra
00407f58  _addiu sp,sp,0x230
