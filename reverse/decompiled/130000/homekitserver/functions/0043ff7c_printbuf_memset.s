# printbuf_memset @ 0043ff7c
0043ff7c  lui gp,0x1e
0043ff80  addiu gp,gp,-0x6afc
0043ff84  addu gp,gp,t9
0043ff88  addiu sp,sp,-0x28
0043ff8c  sw ra,0x24(sp)
0043ff90  sw s8,0x20(sp)
0043ff94  move s8,sp
0043ff98  sw gp,0x10(sp)
0043ff9c  sw a0,0x28(s8)
0043ffa0  sw a1,0x2c(s8)
0043ffa4  sw a2,0x30(s8)
0043ffa8  sw a3,0x34(s8)
0043ffac  lw v1,0x2c(s8)
0043ffb0  li v0,-0x1
0043ffb4  bne v1,v0,0x0043ffd0
0043ffb8  _nop
0043ffbc  lw v0,0x28(s8)
0043ffc0  nop
0043ffc4  lw v0,0x4(v0)
0043ffc8  nop
0043ffcc  sw v0,0x2c(s8)
0043ffd0  lw v1,0x2c(s8)
0043ffd4  lw v0,0x34(s8)
0043ffd8  nop
0043ffdc  addu v0,v1,v0
0043ffe0  sw v0,0x18(s8)
0043ffe4  lw v0,0x28(s8)
0043ffe8  nop
0043ffec  lw v1,0x8(v0)
0043fff0  lw v0,0x18(s8)
0043fff4  nop
0043fff8  slt v0,v1,v0
0043fffc  beq v0,zero,0x0044003c
00440000  _nop
00440004  lw a0,0x28(s8)
00440008  lw a1,0x18(s8)
0044000c  lw v0,-0x7fc4(gp)
00440010  nop
00440014  addiu v0,v0,-0x2f0
00440018  move t9,v0
0044001c  jalr t9
00440020  _nop
00440024  lw gp,0x10(s8)
00440028  bgez v0,0x0044003c
0044002c  _nop
00440030  li v0,-0x1
00440034  b 0x004400b0
00440038  _nop
0044003c  lw v0,0x28(s8)
00440040  nop
00440044  lw v1,0x0(v0)
00440048  lw v0,0x2c(s8)
0044004c  nop
00440050  addu v1,v1,v0
00440054  lw v0,0x34(s8)
00440058  move a0,v1
0044005c  lw a1,0x30(s8)
00440060  move a2,v0
00440064  lw v0,-0x7244(gp)
00440068  nop
0044006c  move t9,v0
00440070  jalr t9
00440074  _nop
00440078  lw gp,0x10(s8)
0044007c  lw v0,0x28(s8)
00440080  nop
00440084  lw v1,0x4(v0)
00440088  lw v0,0x18(s8)
0044008c  nop
00440090  slt v0,v1,v0
00440094  beq v0,zero,0x004400ac
00440098  _nop
0044009c  lw v0,0x28(s8)
004400a0  lw v1,0x18(s8)
004400a4  nop
004400a8  sw v1,0x4(v0)
004400ac  clear v0
004400b0  move sp,s8
004400b4  lw ra,0x24(sp)
004400b8  lw s8,0x20(sp)
004400bc  addiu sp,sp,0x28
004400c0  jr ra
004400c4  _nop
