# set_upgrade_size @ 00412c00
00412c00  lui v0,0x58
00412c04  lw v0,-0x1510(v0)
00412c08  lui gp,0x58
00412c0c  addiu gp,gp,0x5140
00412c10  beq v0,zero,0x00412c34
00412c14  _move a1,a0
00412c18  lw t9,-0x7dc8(gp)
00412c1c  sw a0,0x14(v0)
00412c20  lui a0,0x53
00412c24  addiu a0,a0,0x299c
00412c28  sw zero,0x1c(v0)
00412c2c  jr t9
00412c30  _nop
00412c34  jr ra
00412c38  _nop
