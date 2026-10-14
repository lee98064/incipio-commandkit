# simple_itoa @ 00410288
00410288  lui v0,0x47
0041028c  sb zero,-0xfe7(v0)
00410290  li v1,0xa
00410294  addiu v0,v0,-0xfe7
00410298  divu a0,v1
0041029c  bne v1,zero,0x004102a8
004102a0  _nop
004102a4  break 0x1c00
004102a8  addiu v0,v0,-0x1
004102ac  mfhi a1
004102b0  addiu a2,a1,0x30
004102b4  mflo a0
004102b8  bne a0,zero,0x00410298
004102bc  _sb a2,0x0(v0)
004102c0  jr ra
004102c4  _nop
