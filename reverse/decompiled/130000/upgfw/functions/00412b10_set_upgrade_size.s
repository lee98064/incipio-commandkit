# set_upgrade_size @ 00412b10
00412b10  lui v0,0x58
00412b14  lw v0,-0x1640(v0)
00412b18  lui gp,0x58
00412b1c  addiu gp,gp,0x5010
00412b20  beq v0,zero,0x00412b44
00412b24  _move a1,a0
00412b28  lw t9,-0x7dc8(gp)
00412b2c  sw a0,0x14(v0)
00412b30  lui a0,0x53
00412b34  addiu a0,a0,0x2868
00412b38  sw zero,0x1c(v0)
00412b3c  jr t9
00412b40  _nop
00412b44  jr ra
00412b48  _nop
