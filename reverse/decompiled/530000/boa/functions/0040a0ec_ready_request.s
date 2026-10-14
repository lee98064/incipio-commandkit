# ready_request @ 0040a0ec
0040a0ec  lui v0,0x47
0040a0f0  lw v1,-0x205c(v0)
0040a0f4  lui gp,0x47
0040a0f8  bne v1,a0,0x0040a10c
0040a0fc  _addiu gp,gp,0x2630
0040a100  lw v1,0x327c(a0)
0040a104  nop
0040a108  sw v1,-0x205c(v0)
0040a10c  lw v0,0x3280(a0)
0040a110  nop
0040a114  beq v0,zero,0x0040a128
0040a118  _nop
0040a11c  lw v1,0x327c(a0)
0040a120  nop
0040a124  sw v1,0x327c(v0)
0040a128  lw v0,0x327c(a0)
0040a12c  nop
0040a130  beq v0,zero,0x0040a144
0040a134  _nop
0040a138  lw v1,0x3280(a0)
0040a13c  nop
0040a140  sw v1,0x3280(v0)
0040a144  sw zero,0x327c(a0)
0040a148  sw zero,0x3280(a0)
0040a14c  lui v0,0x47
0040a150  lw v0,-0x2060(v0)
0040a154  nop
0040a158  beq v0,zero,0x0040a164
0040a15c  _nop
0040a160  sw a0,0x3280(v0)
0040a164  lui v0,0x47
0040a168  lw v1,-0x2060(v0)
0040a16c  sw zero,0x3280(a0)
0040a170  sw v1,0x327c(a0)
0040a174  sw a0,-0x2060(v0)
0040a178  lw v0,0x50(a0)
0040a17c  nop
0040a180  bne v0,zero,0x0040a1cc
0040a184  _nop
0040a188  lw v0,0x0(a0)
0040a18c  nop
0040a190  addiu v0,v0,-0x5
0040a194  sltiu v1,v0,0x6
0040a198  beq v1,zero,0x0040a1ec
0040a19c  _lui v1,0x45
0040a1a0  sll v0,v0,0x2
0040a1a4  addiu v1,v1,-0x5a18
0040a1a8  addu v0,v1,v0
0040a1ac  lw v0,0x0(v0)
0040a1b0  nop
0040a1b4  jr v0
0040a1b8  _nop
0040a1bc  lw v0,0x4c(a0)
0040a1c0  nop
0040a1c4  beq v0,zero,0x0040a1e0
0040a1c8  _nop
0040a1cc  lw v1,0xb4(a0)
0040a1d0  lw a0,-0x7d4c(gp)
0040a1d4  srl v0,v1,0x5
0040a1d8  b 0x0040a1fc
0040a1dc  _sll v0,v0,0x2
0040a1e0  lw v1,0x28(a0)
0040a1e4  b 0x0040a1f0
0040a1e8  _nop
0040a1ec  lw v1,0xb4(a0)
0040a1f0  lw a0,-0x7fb8(gp)
0040a1f4  srl v0,v1,0x5
0040a1f8  sll v0,v0,0x2
0040a1fc  addu v0,a0,v0
0040a200  lw a0,0x0(v0)
0040a204  li a1,0x1
0040a208  sllv v1,a1,v1
0040a20c  nor v1,zero,v1
0040a210  and v1,v1,a0
0040a214  sw v1,0x0(v0)
0040a218  jr ra
0040a21c  _nop
