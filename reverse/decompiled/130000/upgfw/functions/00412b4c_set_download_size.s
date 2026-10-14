# set_download_size @ 00412b4c
00412b4c  lui v0,0x58
00412b50  lw v0,-0x1640(v0)
00412b54  lui gp,0x58
00412b58  addiu gp,gp,0x5010
00412b5c  beq v0,zero,0x00412b80
00412b60  _move a1,a0
00412b64  lw t9,-0x7dc8(gp)
00412b68  sw a0,0x10(v0)
00412b6c  lui a0,0x53
00412b70  addiu a0,a0,0x2880
00412b74  sw zero,0x18(v0)
00412b78  jr t9
00412b7c  _nop
00412b80  jr ra
00412b84  _nop
