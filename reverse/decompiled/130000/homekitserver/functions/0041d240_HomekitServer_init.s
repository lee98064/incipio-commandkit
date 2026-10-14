# HomekitServer_init @ 0041d240
0041d240  addiu sp,sp,-0x20
0041d244  sw ra,0x1c(sp)
0041d248  lui gp,0x62
0041d24c  addiu gp,gp,-0x6b80
0041d250  sw gp,0x10(sp)
0041d254  lw t9,-0x6e30(gp)
0041d258  nop
0041d25c  jalr t9
0041d260  _nop
0041d264  lw gp,0x10(sp)
0041d268  lui a0,0x61
0041d26c  addiu a0,a0,0x3d10
0041d270  lw t9,-0x5e4c(gp)
0041d274  nop
0041d278  jalr t9
0041d27c  _clear a1
0041d280  lw gp,0x10(sp)
0041d284  lui a0,0x61
0041d288  addiu a0,a0,0x3d28
0041d28c  lw t9,-0x5e4c(gp)
0041d290  nop
0041d294  jalr t9
0041d298  _clear a1
0041d29c  lw gp,0x10(sp)
0041d2a0  lui a0,0x60
0041d2a4  addiu a0,a0,-0x4a0
0041d2a8  lw t9,-0x6fb8(gp)
0041d2ac  nop
0041d2b0  jalr t9
0041d2b4  _clear a1
0041d2b8  lw gp,0x10(sp)
0041d2bc  lw ra,0x1c(sp)
0041d2c0  lw t9,-0x5c08(gp)
0041d2c4  nop
0041d2c8  jr t9
0041d2cc  _addiu sp,sp,0x20
