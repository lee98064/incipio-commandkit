# HTTPServerShutdownSocket @ 004054ac
004054ac  lui gp,0x44
004054b0  bne a0,zero,0x004054c0
004054b4  _addiu gp,gp,-0x4fc0
004054b8  jr ra
004054bc  _li v0,-0x1a31
004054c0  lw a0,0x10(a0)
004054c4  lw t9,-0x7fa8(gp)
004054c8  nop
004054cc  jr t9
004054d0  _nop
