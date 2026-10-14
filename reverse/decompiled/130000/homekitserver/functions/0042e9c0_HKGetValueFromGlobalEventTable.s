# HKGetValueFromGlobalEventTable @ 0042e9c0
0042e9c0  lui v0,0x61
0042e9c4  lw v1,0x4840(v0)
0042e9c8  addiu v0,v0,0x4840
0042e9cc  beq v1,v0,0x0042ea5c
0042e9d0  _nop
0042e9d4  lw v1,0xc(v0)
0042e9d8  lui a2,0x61
0042e9dc  lw v0,0x0(v1)
0042e9e0  b 0x0042ea54
0042e9e4  _addiu a2,a2,0x484c
0042e9e8  lw a3,-0xc(v1)
0042e9ec  nop
0042e9f0  bne a3,a0,0x0042ea4c
0042e9f4  _addiu v1,v1,-0xc
0042e9f8  lw a0,0x8(v1)
0042e9fc  nop
0042ea00  sltiu a2,a0,0x5
0042ea04  beq a2,zero,0x0042ea60
0042ea08  _clear v0
0042ea0c  lui v0,0x5b
0042ea10  addiu v0,v0,-0x3780
0042ea14  sll a0,a0,0x2
0042ea18  addu a0,v0,a0
0042ea1c  lw v0,0x0(a0)
0042ea20  nop
0042ea24  jr v0
0042ea28  _nop
0042ea2c  lw v1,0x4(v1)
0042ea30  clear v0
0042ea34  jr ra
0042ea38  _sw v1,0x0(a1)
0042ea3c  lw v1,0x4(v1)
0042ea40  clear v0
0042ea44  jr ra
0042ea48  _sw v1,0x0(a1)
0042ea4c  move v1,v0
0042ea50  lw v0,0x0(v0)
0042ea54  bne v1,a2,0x0042e9e8
0042ea58  _nop
0042ea5c  li v0,-0x1a49
0042ea60  jr ra
0042ea64  _nop
