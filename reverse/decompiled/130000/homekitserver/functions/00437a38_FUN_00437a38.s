# FUN_00437a38 @ 00437a38
00437a38  lui gp,0x1e
00437a3c  addiu gp,gp,0x1a48
00437a40  addu gp,gp,t9
00437a44  addiu sp,sp,-0x20
00437a48  sw ra,0x1c(sp)
00437a4c  sw s8,0x18(sp)
00437a50  move s8,sp
00437a54  sw gp,0x10(sp)
00437a58  sw a0,0x20(s8)
00437a5c  sw a1,0x24(s8)
00437a60  lw v0,0x20(s8)
00437a64  nop
00437a68  lw v1,0x28(v0)
00437a6c  lw v0,0x24(s8)
00437a70  nop
00437a74  sll v0,v0,0x2
00437a78  sll a0,v0,0x2
00437a7c  addu v0,v0,a0
00437a80  addu v0,v1,v0
00437a84  sw zero,0x0(v0)
00437a88  lw v0,0x20(s8)
00437a8c  nop
00437a90  lw v1,0x28(v0)
00437a94  lw v0,0x24(s8)
00437a98  nop
00437a9c  sll v0,v0,0x2
00437aa0  sll a0,v0,0x2
00437aa4  addu v0,v0,a0
00437aa8  addu v0,v1,v0
00437aac  li v1,0x1
00437ab0  sw v1,0x4(v0)
00437ab4  lw v0,0x20(s8)
00437ab8  nop
00437abc  lw v1,0x28(v0)
00437ac0  lw v0,0x24(s8)
00437ac4  nop
00437ac8  sll v0,v0,0x2
00437acc  sll a0,v0,0x2
00437ad0  addu v0,v0,a0
00437ad4  addu v0,v1,v0
00437ad8  lw v0,0xc(v0)
00437adc  nop
00437ae0  move a0,v0
00437ae4  lw v0,-0x7dec(gp)
00437ae8  nop
00437aec  move t9,v0
00437af0  jalr t9
00437af4  _nop
00437af8  lw gp,0x10(s8)
00437afc  lw v0,0x20(s8)
00437b00  nop
00437b04  lw v1,0x28(v0)
00437b08  lw v0,0x24(s8)
00437b0c  nop
00437b10  sll v0,v0,0x2
00437b14  sll a0,v0,0x2
00437b18  addu v0,v0,a0
00437b1c  addu v0,v1,v0
00437b20  sw zero,0xc(v0)
00437b24  lw v0,0x20(s8)
00437b28  nop
00437b2c  lw v1,0x28(v0)
00437b30  lw v0,0x24(s8)
00437b34  nop
00437b38  sll v0,v0,0x2
00437b3c  sll a0,v0,0x2
00437b40  addu v0,v0,a0
00437b44  addu v0,v1,v0
00437b48  lw v0,0x10(v0)
00437b4c  nop
00437b50  move a0,v0
00437b54  lw v0,-0x7aa4(gp)
00437b58  nop
00437b5c  move t9,v0
00437b60  jalr t9
00437b64  _nop
00437b68  lw gp,0x10(s8)
00437b6c  lw v0,0x20(s8)
00437b70  nop
00437b74  lw v1,0x28(v0)
00437b78  lw v0,0x24(s8)
00437b7c  nop
00437b80  sll v0,v0,0x2
00437b84  sll a0,v0,0x2
00437b88  addu v0,v0,a0
00437b8c  addu v0,v1,v0
00437b90  sw zero,0x10(v0)
00437b94  move sp,s8
00437b98  lw ra,0x1c(sp)
00437b9c  lw s8,0x18(sp)
00437ba0  addiu sp,sp,0x20
00437ba4  jr ra
00437ba8  _nop
