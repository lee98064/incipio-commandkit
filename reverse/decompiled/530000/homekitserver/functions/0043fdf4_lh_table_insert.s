# lh_table_insert @ 0043fdf4
0043fdf4  lui gp,0x1e
0043fdf8  addiu gp,gp,-0x5ae4
0043fdfc  addu gp,gp,t9
0043fe00  addiu sp,sp,-0x38
0043fe04  sw ra,0x34(sp)
0043fe08  sw s8,0x30(sp)
0043fe0c  sw s2,0x2c(sp)
0043fe10  sw s1,0x28(sp)
0043fe14  sw s0,0x24(sp)
0043fe18  move s8,sp
0043fe1c  sw gp,0x10(sp)
0043fe20  sw a0,0x38(s8)
0043fe24  sw a1,0x3c(s8)
0043fe28  sw a2,0x40(s8)
0043fe2c  lw v0,0x38(s8)
0043fe30  nop
0043fe34  lw v0,0x14(v0)
0043fe38  nop
0043fe3c  addiu v1,v0,0x1
0043fe40  lw v0,0x38(s8)
0043fe44  nop
0043fe48  sw v1,0x14(v0)
0043fe4c  lw v0,0x38(s8)
0043fe50  nop
0043fe54  lw v1,0x4(v0)
0043fe58  lw v0,-0x6b68(gp)
0043fe5c  move a0,v1
0043fe60  move t9,v0
0043fe64  jalr t9
0043fe68  _nop
0043fe6c  lw gp,0x10(s8)
0043fe70  move s1,v1
0043fe74  move s0,v0
0043fe78  lw v0,0x38(s8)
0043fe7c  nop
0043fe80  lw v1,0x0(v0)
0043fe84  lw v0,-0x6b68(gp)
0043fe88  move a0,v1
0043fe8c  move t9,v0
0043fe90  jalr t9
0043fe94  _nop
0043fe98  lw gp,0x10(s8)
0043fe9c  nop
0043fea0  lw a2,-0x7fd0(gp)
0043fea4  lw t0,-0x6c20(gp)
0043fea8  move a1,v1
0043feac  move a0,v0
0043feb0  lw a3,-0x100c(a2)
0043feb4  lw a2,-0x1010(a2)
0043feb8  move t9,t0
0043febc  jalr t9
0043fec0  _nop
0043fec4  lw gp,0x10(s8)
0043fec8  clear s2
0043fecc  lw t0,-0x7540(gp)
0043fed0  move a1,s1
0043fed4  move a0,s0
0043fed8  move a3,v1
0043fedc  move a2,v0
0043fee0  move t9,t0
0043fee4  jalr t9
0043fee8  _nop
0043feec  lw gp,0x10(s8)
0043fef0  bltz v0,0x0043fefc
0043fef4  _nop
0043fef8  li s2,0x1
0043fefc  andi v0,s2,0xff
0043ff00  beq v0,zero,0x0043ff3c
0043ff04  _nop
0043ff08  lw v0,0x38(s8)
0043ff0c  nop
0043ff10  lw v0,0x0(v0)
0043ff14  nop
0043ff18  sll v0,v0,0x1
0043ff1c  lw a0,0x38(s8)
0043ff20  move a1,v0
0043ff24  lw v0,-0x63c0(gp)
0043ff28  nop
0043ff2c  move t9,v0
0043ff30  jalr t9
0043ff34  _nop
0043ff38  lw gp,0x10(s8)
0043ff3c  lw v0,0x38(s8)
0043ff40  nop
0043ff44  lw v0,0x30(v0)
0043ff48  lw a0,0x3c(s8)
0043ff4c  move t9,v0
0043ff50  jalr t9
0043ff54  _nop
0043ff58  lw gp,0x10(s8)
0043ff5c  sw v0,0x1c(s8)
0043ff60  lw v0,0x38(s8)
0043ff64  nop
0043ff68  lw v0,0x0(v0)
0043ff6c  lw v1,0x1c(s8)
0043ff70  nop
0043ff74  divu v1,v0
0043ff78  bne v0,zero,0x0043ff84
0043ff7c  _nop
0043ff80  break 0x1c00
0043ff84  mfhi v0
0043ff88  sw v0,0x18(s8)
0043ff8c  b 0x0043ff98
0043ff90  _nop
0043ff94  nop
0043ff98  lw v0,0x38(s8)
0043ff9c  nop
0043ffa0  lw v1,0x28(v0)
0043ffa4  lw v0,0x18(s8)
0043ffa8  nop
0043ffac  sll v0,v0,0x4
0043ffb0  addu v0,v1,v0
0043ffb4  lw v1,0x0(v0)
0043ffb8  li v0,-0x1
0043ffbc  beq v1,v0,0x00440048
0043ffc0  _nop
0043ffc4  lw v0,0x38(s8)
0043ffc8  nop
0043ffcc  lw v1,0x28(v0)
0043ffd0  lw v0,0x18(s8)
0043ffd4  nop
0043ffd8  sll v0,v0,0x4
0043ffdc  addu v0,v1,v0
0043ffe0  lw v1,0x0(v0)
0043ffe4  li v0,-0x2
0043ffe8  beq v1,v0,0x00440048
0043ffec  _nop
0043fff0  lw v0,0x38(s8)
0043fff4  nop
0043fff8  lw v0,0x8(v0)
0043fffc  nop
00440000  addiu v1,v0,0x1
00440004  lw v0,0x38(s8)
00440008  nop
0044000c  sw v1,0x8(v0)
00440010  lw v0,0x18(s8)
00440014  nop
00440018  addiu v0,v0,0x1
0044001c  sw v0,0x18(s8)
00440020  lw v1,0x18(s8)
00440024  lw v0,0x38(s8)
00440028  nop
0044002c  lw v0,0x0(v0)
00440030  nop
00440034  bne v1,v0,0x0043ff94
00440038  _nop
0044003c  sw zero,0x18(s8)
00440040  b 0x0043ff98
00440044  _nop
00440048  lw v0,0x38(s8)
0044004c  nop
00440050  lw v1,0x28(v0)
00440054  lw v0,0x18(s8)
00440058  nop
0044005c  sll v0,v0,0x4
00440060  addu v0,v1,v0
00440064  lw v1,0x3c(s8)
00440068  nop
0044006c  sw v1,0x0(v0)
00440070  lw v0,0x38(s8)
00440074  nop
00440078  lw v1,0x28(v0)
0044007c  lw v0,0x18(s8)
00440080  nop
00440084  sll v0,v0,0x4
00440088  addu v0,v1,v0
0044008c  lw v1,0x40(s8)
00440090  nop
00440094  sw v1,0x4(v0)
00440098  lw v0,0x38(s8)
0044009c  nop
004400a0  lw v0,0x4(v0)
004400a4  nop
004400a8  addiu v1,v0,0x1
004400ac  lw v0,0x38(s8)
004400b0  nop
004400b4  sw v1,0x4(v0)
004400b8  lw v0,0x38(s8)
004400bc  nop
004400c0  lw v0,0x20(v0)
004400c4  nop
004400c8  bne v0,zero,0x00440160
004400cc  _nop
004400d0  lw v0,0x38(s8)
004400d4  nop
004400d8  lw v1,0x28(v0)
004400dc  lw v0,0x18(s8)
004400e0  nop
004400e4  sll v0,v0,0x4
004400e8  addu v1,v1,v0
004400ec  lw v0,0x38(s8)
004400f0  nop
004400f4  sw v1,0x24(v0)
004400f8  lw v0,0x38(s8)
004400fc  nop
00440100  lw v1,0x24(v0)
00440104  lw v0,0x38(s8)
00440108  nop
0044010c  sw v1,0x20(v0)
00440110  lw v0,0x38(s8)
00440114  nop
00440118  lw v1,0x28(v0)
0044011c  lw v0,0x18(s8)
00440120  nop
00440124  sll v0,v0,0x4
00440128  addu v1,v1,v0
0044012c  lw v0,0x38(s8)
00440130  nop
00440134  lw a0,0x28(v0)
00440138  lw v0,0x18(s8)
0044013c  nop
00440140  sll v0,v0,0x4
00440144  addu v0,a0,v0
00440148  sw zero,0xc(v0)
0044014c  lw v0,0xc(v0)
00440150  nop
00440154  sw v0,0x8(v1)
00440158  b 0x00440204
0044015c  _nop
00440160  lw v0,0x38(s8)
00440164  nop
00440168  lw v0,0x24(v0)
0044016c  lw v1,0x38(s8)
00440170  nop
00440174  lw a0,0x28(v1)
00440178  lw v1,0x18(s8)
0044017c  nop
00440180  sll v1,v1,0x4
00440184  addu v1,a0,v1
00440188  sw v1,0x8(v0)
0044018c  lw v0,0x38(s8)
00440190  nop
00440194  lw v1,0x28(v0)
00440198  lw v0,0x18(s8)
0044019c  nop
004401a0  sll v0,v0,0x4
004401a4  addu v0,v1,v0
004401a8  lw v1,0x38(s8)
004401ac  nop
004401b0  lw v1,0x24(v1)
004401b4  nop
004401b8  sw v1,0xc(v0)
004401bc  lw v0,0x38(s8)
004401c0  nop
004401c4  lw v1,0x28(v0)
004401c8  lw v0,0x18(s8)
004401cc  nop
004401d0  sll v0,v0,0x4
004401d4  addu v0,v1,v0
004401d8  sw zero,0x8(v0)
004401dc  lw v0,0x38(s8)
004401e0  nop
004401e4  lw v1,0x28(v0)
004401e8  lw v0,0x18(s8)
004401ec  nop
004401f0  sll v0,v0,0x4
004401f4  addu v1,v1,v0
004401f8  lw v0,0x38(s8)
004401fc  nop
00440200  sw v1,0x24(v0)
00440204  clear v0
00440208  move sp,s8
0044020c  lw ra,0x34(sp)
00440210  lw s8,0x30(sp)
00440214  lw s2,0x2c(sp)
00440218  lw s1,0x28(sp)
0044021c  lw s0,0x24(sp)
00440220  addiu sp,sp,0x38
00440224  jr ra
00440228  _nop
