# FUN_804029e0 @ 804029e0
804029e0  andi a1,a1,0xffff
804029e4  lbu v1,0x1(a0)
804029e8  lbu v0,0x0(a0)
804029ec  nop
804029f0  xor v0,v1,v0
804029f4  lbu v1,0x2(a0)
804029f8  nop
804029fc  xor v0,v0,v1
80402a00  lbu v1,0x3(a0)
80402a04  nop
80402a08  xor v0,v0,v1
80402a0c  lbu v1,0x4(a0)
80402a10  nop
80402a14  xor v0,v0,v1
80402a18  lbu v1,0x5(a0)
80402a1c  lui a0,0x8041
80402a20  addiu a0,a0,-0x5880
80402a24  addu a1,a1,a0
80402a28  xor v0,v0,v1
80402a2c  lbu v1,0x0(a1)
80402a30  nop
80402a34  xor v0,v0,v1
80402a38  jr ra
80402a3c  _andi v0,v0,0xff
