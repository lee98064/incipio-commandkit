# FUN_80404c30 @ 80404c30
80404c30  addiu sp,sp,-0x10
80404c34  lui v0,0x8041
80404c38  lw a1,-0x5870(v0)
80404c3c  addiu v0,v0,-0x5870
80404c40  lw a0,0x4(v0)
80404c44  lw v1,0x8(v0)
80404c48  lw v0,0xc(v0)
80404c4c  sw a1,0x0(sp)
80404c50  sw a0,0x4(sp)
80404c54  sw v1,0x8(sp)
80404c58  sw v0,0xc(sp)
80404c5c  lui v0,0xb800
80404c60  ori v0,v0,0x8
80404c64  lw v0,0x0(v0)
80404c68  nop
80404c6c  andi v0,v0,0x1c00
80404c70  srl v0,v0,0x9
80404c74  addu v0,sp,v0
80404c78  lhu v0,0x0(v0)
80404c7c  addiu sp,sp,0x10
80404c80  jr ra
80404c84  _nop
