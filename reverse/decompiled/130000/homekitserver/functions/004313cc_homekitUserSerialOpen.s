# homekitUserSerialOpen @ 004313cc
004313cc  addiu sp,sp,-0x20
004313d0  sw ra,0x1c(sp)
004313d4  lui gp,0x62
004313d8  addiu gp,gp,-0x6b80
004313dc  sw gp,0x10(sp)
004313e0  lw t9,-0x6fbc(gp)
004313e4  nop
004313e8  jalr t9
004313ec  _nop
004313f0  lw ra,0x1c(sp)
004313f4  clear v0
004313f8  jr ra
004313fc  _addiu sp,sp,0x20
