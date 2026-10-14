# mdnsPhytrex_HomekitUpdate @ 0042e890
0042e890  addiu sp,sp,-0x40
0042e894  sw ra,0x3c(sp)
0042e898  sw s5,0x38(sp)
0042e89c  sw s4,0x34(sp)
0042e8a0  sw s3,0x30(sp)
0042e8a4  sw s2,0x2c(sp)
0042e8a8  sw s1,0x28(sp)
0042e8ac  sw s0,0x24(sp)
0042e8b0  lui gp,0x62
0042e8b4  addiu gp,gp,-0x5cf0
0042e8b8  sw gp,0x18(sp)
0042e8bc  lw v0,-0x7de8(gp)
0042e8c0  move s2,a0
0042e8c4  lw v0,0x0(v0)
0042e8c8  nop
0042e8cc  beq v0,zero,0x0042eb30
0042e8d0  _move s3,a1
0042e8d4  lw t9,-0x7cc0(gp)
0042e8d8  lui a0,0x5b
0042e8dc  addiu a0,a0,-0x2b50
0042e8e0  jalr t9
0042e8e4  _li a1,0x1
0042e8e8  lw gp,0x18(sp)
0042e8ec  bne v0,zero,0x0042e914
0042e8f0  _move s0,v0
0042e8f4  lw v0,-0x6b48(gp)
0042e8f8  lw t9,-0x7054(gp)
0042e8fc  lui a0,0x5b
0042e900  lw a1,0x0(v0)
0042e904  jalr t9
0042e908  _addiu a0,a0,-0x2b40
0042e90c  lw gp,0x18(sp)
0042e910  nop
0042e914  lw t9,-0x67a8(gp)
0042e918  nop
0042e91c  jalr t9
0042e920  _nop
0042e924  lw gp,0x18(sp)
0042e928  lui a1,0x5b
0042e92c  addiu a1,a1,-0x2afc
0042e930  lw t9,-0x6304(gp)
0042e934  nop
0042e938  jalr t9
0042e93c  _move a0,s0
0042e940  lw gp,0x18(sp)
0042e944  nop
0042e948  lw t9,-0x67a8(gp)
0042e94c  nop
0042e950  jalr t9
0042e954  _move s1,v0
0042e958  lw gp,0x18(sp)
0042e95c  nop
0042e960  lw t9,-0x63c4(gp)
0042e964  nop
0042e968  jalr t9
0042e96c  _move a0,s3
0042e970  lui a0,0x61
0042e974  move a3,s3
0042e978  andi a2,v0,0xff
0042e97c  addiu a0,a0,0x56c4
0042e980  move t9,s1
0042e984  jalr t9
0042e988  _move a1,s2
0042e98c  lw gp,0x18(sp)
0042e990  nop
0042e994  lw t9,-0x67a8(gp)
0042e998  nop
0042e99c  jalr t9
0042e9a0  _nop
0042e9a4  lw gp,0x18(sp)
0042e9a8  lui a1,0x5b
0042e9ac  addiu a1,a1,-0x2ae8
0042e9b0  lw t9,-0x6304(gp)
0042e9b4  nop
0042e9b8  jalr t9
0042e9bc  _move a0,s0
0042e9c0  lw gp,0x18(sp)
0042e9c4  nop
0042e9c8  lw t9,-0x67a8(gp)
0042e9cc  nop
0042e9d0  jalr t9
0042e9d4  _move s1,v0
0042e9d8  lw gp,0x18(sp)
0042e9dc  lui a1,0x5b
0042e9e0  addiu a1,a1,-0x2ad0
0042e9e4  lw t9,-0x6304(gp)
0042e9e8  nop
0042e9ec  jalr t9
0042e9f0  _move a0,s0
0042e9f4  lw gp,0x18(sp)
0042e9f8  nop
0042e9fc  lw t9,-0x67a8(gp)
0042ea00  nop
0042ea04  jalr t9
0042ea08  _move s3,v0
0042ea0c  lw gp,0x18(sp)
0042ea10  beq v0,zero,0x0042ea38
0042ea14  _lui a1,0x5b
0042ea18  lw v1,-0x6b48(gp)
0042ea1c  lw t9,-0x73b4(gp)
0042ea20  lw a0,0x0(v1)
0042ea24  addiu a1,a1,-0x2abc
0042ea28  jalr t9
0042ea2c  _move a2,v0
0042ea30  lw gp,0x18(sp)
0042ea34  nop
0042ea38  lw t9,-0x67a8(gp)
0042ea3c  nop
0042ea40  jalr t9
0042ea44  _nop
0042ea48  lw gp,0x18(sp)
0042ea4c  lui a1,0x5b
0042ea50  addiu a1,a1,-0x2aa8
0042ea54  lw t9,-0x6304(gp)
0042ea58  nop
0042ea5c  jalr t9
0042ea60  _move a0,s0
0042ea64  lw gp,0x18(sp)
0042ea68  nop
0042ea6c  lw t9,-0x67a8(gp)
0042ea70  nop
0042ea74  jalr t9
0042ea78  _move s2,v0
0042ea7c  lw gp,0x18(sp)
0042ea80  nop
0042ea84  lw t9,-0x67a8(gp)
0042ea88  nop
0042ea8c  jalr t9
0042ea90  _nop
0042ea94  lw gp,0x18(sp)
0042ea98  beq v0,zero,0x0042eab8
0042ea9c  _lui a1,0x5b
0042eaa0  lw v1,-0x6b48(gp)
0042eaa4  lw t9,-0x73b4(gp)
0042eaa8  lw a0,0x0(v1)
0042eaac  addiu a1,a1,-0x2abc
0042eab0  jalr t9
0042eab4  _move a2,v0
0042eab8  lui s4,0x61
0042eabc  lui v0,0x61
0042eac0  lw s5,0x56c0(v0)
0042eac4  move t9,s3
0042eac8  jalr t9
0042eacc  _addiu a0,s4,0x56c4
0042ead0  addiu a0,s4,0x56c4
0042ead4  move t9,s2
0042ead8  jalr t9
0042eadc  _move s3,v0
0042eae0  move a0,s5
0042eae4  andi a3,s3,0xffff
0042eae8  move t9,s1
0042eaec  sw v0,0x10(sp)
0042eaf0  sw zero,0x14(sp)
0042eaf4  clear a1
0042eaf8  jalr t9
0042eafc  _clear a2
0042eb00  lw gp,0x18(sp)
0042eb04  move a0,s0
0042eb08  lw ra,0x3c(sp)
0042eb0c  lw t9,-0x7ea4(gp)
0042eb10  lw s5,0x38(sp)
0042eb14  lw s4,0x34(sp)
0042eb18  lw s3,0x30(sp)
0042eb1c  lw s2,0x2c(sp)
0042eb20  lw s1,0x28(sp)
0042eb24  lw s0,0x24(sp)
0042eb28  jr t9
0042eb2c  _addiu sp,sp,0x40
0042eb30  lw ra,0x3c(sp)
0042eb34  lw s5,0x38(sp)
0042eb38  lw s4,0x34(sp)
0042eb3c  lw s3,0x30(sp)
0042eb40  lw s2,0x2c(sp)
0042eb44  lw s1,0x28(sp)
0042eb48  lw s0,0x24(sp)
0042eb4c  jr ra
0042eb50  _addiu sp,sp,0x40
