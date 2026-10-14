# FUN_00402b64 @ 00402b64
00402b64  addiu sp,sp,-0x28
00402b68  sw ra,0x24(sp)
00402b6c  lui gp,0x44
00402b70  addiu gp,gp,-0x4fc0
00402b74  sw gp,0x10(sp)
00402b78  lbu v0,0x40(a0)
00402b7c  nop
00402b80  beq v0,zero,0x00402bb8
00402b84  _sltiu v0,a1,0x7
00402b88  lw t9,-0x7dac(gp)
00402b8c  li v1,0x1
00402b90  lui v0,0x43
00402b94  lui a0,0x42
00402b98  sw a1,0x18(sp)
00402b9c  sb v1,0x3540(v0)
00402ba0  jalr t9
00402ba4  _addiu a0,a0,-0x30c0
00402ba8  lw gp,0x10(sp)
00402bac  lw a1,0x18(sp)
00402bb0  nop
00402bb4  sltiu v0,a1,0x7
00402bb8  beq v0,zero,0x00402c2c
00402bbc  _lui v0,0x42
00402bc0  addiu v0,v0,-0x3090
00402bc4  sll a1,a1,0x2
00402bc8  addu a1,v0,a1
00402bcc  lw v0,0x0(a1)
00402bd0  nop
00402bd4  jr v0
00402bd8  _nop
00402bdc  b 0x00402c20
00402be0  _clear a0
00402be4  b 0x00402c20
00402be8  _li a0,0x1
00402bec  b 0x00402c20
00402bf0  _li a0,0x2
00402bf4  b 0x00402c20
00402bf8  _li a0,0x3
00402bfc  b 0x00402c20
00402c00  _li a0,0x4
00402c04  jal 0x004028e0
00402c08  _li a0,0x5
00402c0c  li v1,0x1
00402c10  lui v0,0x43
00402c14  b 0x00402c2c
00402c18  _sb v1,0x3540(v0)
00402c1c  li a0,0x6
00402c20  lw ra,0x24(sp)
00402c24  j 0x004028e0
00402c28  _addiu sp,sp,0x28
00402c2c  lw ra,0x24(sp)
00402c30  nop
00402c34  jr ra
00402c38  _addiu sp,sp,0x28
