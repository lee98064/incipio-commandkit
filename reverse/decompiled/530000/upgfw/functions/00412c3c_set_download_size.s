# set_download_size @ 00412c3c
00412c3c  lui v0,0x58
00412c40  lw v0,-0x1510(v0)
00412c44  lui gp,0x58
00412c48  addiu gp,gp,0x5140
00412c4c  beq v0,zero,0x00412c70
00412c50  _move a1,a0
00412c54  lw t9,-0x7dc8(gp)
00412c58  sw a0,0x10(v0)
00412c5c  lui a0,0x53
00412c60  addiu a0,a0,0x29b4
00412c64  sw zero,0x18(v0)
00412c68  jr t9
00412c6c  _nop
00412c70  jr ra
00412c74  _nop
