# FUN_00414e68 @ 00414e68
00414e68  addiu sp,sp,-0x38
00414e6c  sw ra,0x34(sp)
00414e70  sw s3,0x30(sp)
00414e74  sw s2,0x2c(sp)
00414e78  sw s1,0x28(sp)
00414e7c  sw s0,0x24(sp)
00414e80  lui gp,0x58
00414e84  addiu gp,gp,0x5140
00414e88  sw gp,0x10(sp)
00414e8c  lw t9,-0x71e4(gp)
00414e90  move s1,a0
00414e94  move s3,a1
00414e98  lui a0,0x53
00414e9c  lui a1,0x53
00414ea0  addiu a0,a0,0x301c
00414ea4  addiu a1,a1,0x492c
00414ea8  jalr t9
00414eac  _move s2,a2
00414eb0  lw gp,0x10(sp)
00414eb4  bne v0,zero,0x00414ee4
00414eb8  _move s0,v0
00414ebc  lw v0,-0x72fc(gp)
00414ec0  lw t9,-0x785c(gp)
00414ec4  lui a1,0x55
00414ec8  lw a0,0x0(v0)
00414ecc  lui a2,0x53
00414ed0  addiu a1,a1,-0x63d4
00414ed4  jalr t9
00414ed8  _addiu a2,a2,0x302c
00414edc  b 0x00414f10
00414ee0  _nop
00414ee4  lw t9,-0x74ec(gp)
00414ee8  addiu a0,sp,0x18
00414eec  li a1,0x2
00414ef0  jalr t9
00414ef4  _move a2,v0
00414ef8  lw gp,0x10(sp)
00414efc  nop
00414f00  lw t9,-0x7154(gp)
00414f04  nop
00414f08  jalr t9
00414f0c  _move a0,s0
00414f10  lb v0,0x18(sp)
00414f14  nop
00414f18  addiu a0,v0,-0x31
00414f1c  sltiu a0,a0,0x2
00414f20  beq a0,zero,0x00414f34
00414f24  _addiu v1,v0,-0x30
00414f28  li v0,0x1
00414f2c  bne v1,v0,0x00414f40
00414f30  _nop
00414f34  li v0,0x2
00414f38  b 0x00414f44
00414f3c  _li v1,0x1
00414f40  li v1,0x2
00414f44  movz v0,v1,s1
00414f48  sw v1,0x0(s3)
00414f4c  sw v0,0x0(s2)
00414f50  lw ra,0x34(sp)
00414f54  lw s3,0x30(sp)
00414f58  lw s2,0x2c(sp)
00414f5c  lw s1,0x28(sp)
00414f60  lw s0,0x24(sp)
00414f64  jr ra
00414f68  _addiu sp,sp,0x38
