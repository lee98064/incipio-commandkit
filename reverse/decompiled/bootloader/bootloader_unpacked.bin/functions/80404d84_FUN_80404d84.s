# FUN_80404d84 @ 80404d84
80404d84  lw t2,0x10(sp)
80404d88  lw v0,0x14(sp)
80404d8c  lw t1,0x18(sp)
80404d90  lw t0,0x1c(sp)
80404d94  lw v1,0x20(sp)
80404d98  addu t3,a1,a0
80404d9c  divu a0,a2
80404da0  bne a2,zero,0x80404dac
80404da4  _nop
80404da8  break 0x1c00
80404dac  mflo t5
80404db0  addiu t4,t5,0x1
80404db4  mult t4,a2
80404db8  mflo t4
80404dbc  sltu t3,t3,t4
80404dc0  beq t3,zero,0x80404de4
80404dc4  _nop
80404dc8  sw a0,0x0(a3)
80404dcc  sw a1,0x0(t2)
80404dd0  sw zero,0x0(v0)
80404dd4  sw zero,0x0(t1)
80404dd8  sw zero,0x0(t0)
80404ddc  jr ra
80404de0  _sw zero,0x0(v1)
80404de4  sw a0,0x0(a3)
80404de8  divu a0,a2
80404dec  bne a2,zero,0x80404df8
80404df0  _nop
80404df4  break 0x1c00
80404df8  mfhi a0
80404dfc  subu a0,a2,a0
80404e00  xor t3,a2,a0
80404e04  movz a0,zero,t3
80404e08  sw a0,0x0(t2)
80404e0c  subu a1,a1,a0
80404e10  lw a3,0x0(a3)
80404e14  nop
80404e18  addu a0,a0,a3
80404e1c  sw a0,0x0(v0)
80404e20  divu a1,a2
80404e24  bne a2,zero,0x80404e30
80404e28  _nop
80404e2c  break 0x1c00
80404e30  mfhi a0
80404e34  mflo a1
80404e38  sw a1,0x0(t1)
80404e3c  mult a1,a2
80404e40  mflo a1
80404e44  lw v0,0x0(v0)
80404e48  nop
80404e4c  addu a1,a1,v0
80404e50  sw a1,0x0(t0)
80404e54  jr ra
80404e58  _sw a0,0x0(v1)
