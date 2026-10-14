# FUN_00433b3c @ 00433b3c
00433b3c  addiu sp,sp,-0x20
00433b40  sw ra,0x1c(sp)
00433b44  sw s0,0x18(sp)
00433b48  lui s0,0x60
00433b4c  lw v0,0xb80(s0)
00433b50  nop
00433b54  bgtz v0,0x00433b70
00433b58  _nop
00433b5c  jal 0x00433a90
00433b60  _nop
00433b64  lw v0,0xb80(s0)
00433b68  nop
00433b6c  slt v0,zero,v0
00433b70  lw ra,0x1c(sp)
00433b74  lw s0,0x18(sp)
00433b78  jr ra
00433b7c  _addiu sp,sp,0x20
