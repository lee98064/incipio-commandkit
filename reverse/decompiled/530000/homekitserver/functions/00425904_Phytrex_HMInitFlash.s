# Phytrex_HMInitFlash @ 00425904
00425904  addiu sp,sp,-0x78
00425908  sw ra,0x74(sp)
0042590c  sw s1,0x70(sp)
00425910  sw s0,0x6c(sp)
00425914  lui gp,0x62
00425918  addiu gp,gp,-0x5cf0
0042591c  sw gp,0x10(sp)
00425920  andi a0,a0,0xff
00425924  beq a0,zero,0x0042593c
00425928  _nop
0042592c  jal 0x00425670
00425930  _nop
00425934  lw gp,0x10(sp)
00425938  nop
0042593c  lw t9,-0x5b74(gp)
00425940  lui a0,0x5b
00425944  addiu a0,a0,-0x373c
00425948  li a1,0x101
0042594c  jalr t9
00425950  _li a2,0x1b0
00425954  lw gp,0x10(sp)
00425958  move s0,v0
0042595c  li v0,0x50
00425960  sb v0,0x18(sp)
00425964  li v0,0x48
00425968  lw t9,-0x64a4(gp)
0042596c  sb v0,0x19(sp)
00425970  li v0,0x52
00425974  sb v0,0x1a(sp)
00425978  li v0,0x58
0042597c  move a0,s0
00425980  sb v0,0x1b(sp)
00425984  sw zero,0x1c(sp)
00425988  sw zero,0x20(sp)
0042598c  clear a1
00425990  jalr t9
00425994  _clear a2
00425998  lw gp,0x10(sp)
0042599c  move a0,s0
004259a0  addiu a1,sp,0x18
004259a4  lw t9,-0x6bdc(gp)
004259a8  li a2,0xc
004259ac  jalr t9
004259b0  _addiu s1,sp,0x24
004259b4  lw gp,0x10(sp)
004259b8  move a0,s1
004259bc  clear a1
004259c0  lw t9,-0x7244(gp)
004259c4  nop
004259c8  jalr t9
004259cc  _li a2,0x41
004259d0  lw gp,0x10(sp)
004259d4  move a0,s0
004259d8  clear a1
004259dc  lw t9,-0x64a4(gp)
004259e0  nop
004259e4  jalr t9
004259e8  _li a2,0xc
004259ec  lw gp,0x10(sp)
004259f0  move a1,s1
004259f4  move a0,s0
004259f8  lw t9,-0x6bdc(gp)
004259fc  li a2,0x41
00425a00  jalr t9
00425a04  _lui s1,0x61
00425a08  lw gp,0x10(sp)
00425a0c  addiu s1,s1,0x4c18
00425a10  move a0,s1
00425a14  lw t9,-0x7244(gp)
00425a18  clear a1
00425a1c  jalr t9
00425a20  _li a2,0xa10
00425a24  lw gp,0x10(sp)
00425a28  move a0,s0
00425a2c  clear a1
00425a30  lw t9,-0x64a4(gp)
00425a34  nop
00425a38  jalr t9
00425a3c  _li a2,0x4d
00425a40  lw gp,0x10(sp)
00425a44  move a1,s1
00425a48  move a0,s0
00425a4c  lw t9,-0x6bdc(gp)
00425a50  nop
00425a54  jalr t9
00425a58  _li a2,0xa10
00425a5c  lw gp,0x10(sp)
00425a60  nop
00425a64  lw t9,-0x6d0c(gp)
00425a68  nop
00425a6c  jalr t9
00425a70  _move a0,s0
00425a74  lw ra,0x74(sp)
00425a78  lw s1,0x70(sp)
00425a7c  lw s0,0x6c(sp)
00425a80  jr ra
00425a84  _addiu sp,sp,0x78
