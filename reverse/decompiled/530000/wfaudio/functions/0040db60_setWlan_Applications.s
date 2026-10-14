# setWlan_Applications @ 0040db60
0040db60  addiu sp,sp,-0x618
0040db64  sw ra,0x614(sp)
0040db68  sw s8,0x610(sp)
0040db6c  sw s7,0x60c(sp)
0040db70  sw s6,0x608(sp)
0040db74  sw s5,0x604(sp)
0040db78  sw s4,0x600(sp)
0040db7c  sw s3,0x5fc(sp)
0040db80  sw s2,0x5f8(sp)
0040db84  sw s1,0x5f4(sp)
0040db88  sw s0,0x5f0(sp)
0040db8c  lui gp,0x43
0040db90  addiu gp,gp,-0x4c90
0040db94  sw gp,0x28(sp)
0040db98  lw t9,-0x7ee0(gp)
0040db9c  move s0,a1
0040dba0  sw a0,0x618(sp)
0040dba4  clear a1
0040dba8  addiu a0,sp,0x36c
0040dbac  jalr t9
0040dbb0  _li a2,0xc8
0040dbb4  lw gp,0x28(sp)
0040dbb8  addiu s3,sp,0xcc
0040dbbc  move a0,s3
0040dbc0  lw t9,-0x7ee0(gp)
0040dbc4  clear a1
0040dbc8  li a2,0x1e
0040dbcc  sw zero,0x30(sp)
0040dbd0  sw zero,0x34(sp)
0040dbd4  sw zero,0x38(sp)
0040dbd8  sw zero,0x3c(sp)
0040dbdc  sw zero,0x40(sp)
0040dbe0  sw zero,0x44(sp)
0040dbe4  sw zero,0x48(sp)
0040dbe8  sw zero,0x4c(sp)
0040dbec  sw zero,0x50(sp)
0040dbf0  sw zero,0x54(sp)
0040dbf4  sw zero,0x58(sp)
0040dbf8  sw zero,0x5c(sp)
0040dbfc  sw zero,0x60(sp)
0040dc00  sw zero,0x64(sp)
0040dc04  sw zero,0x68(sp)
0040dc08  sw zero,0x6c(sp)
0040dc0c  sw zero,0x70(sp)
0040dc10  sw zero,0x74(sp)
0040dc14  sw zero,0x78(sp)
0040dc18  sw zero,0x7c(sp)
0040dc1c  sw zero,0x80(sp)
0040dc20  jalr t9
0040dc24  _sw zero,0x84(sp)
0040dc28  lw gp,0x28(sp)
0040dc2c  addiu a0,sp,0xec
0040dc30  clear a1
0040dc34  lw t9,-0x7ee0(gp)
0040dc38  li a2,0x1e
0040dc3c  jalr t9
0040dc40  _addiu s4,sp,0x4fc
0040dc44  lw gp,0x28(sp)
0040dc48  addiu a0,sp,0x10c
0040dc4c  clear a1
0040dc50  lw t9,-0x7ee0(gp)
0040dc54  li a2,0x1e
0040dc58  jalr t9
0040dc5c  _addiu s2,sp,0x12c
0040dc60  lw gp,0x28(sp)
0040dc64  addiu a0,sp,0x434
0040dc68  clear a1
0040dc6c  lw t9,-0x7ee0(gp)
0040dc70  li a2,0xc8
0040dc74  jalr t9
0040dc78  _addiu s5,sp,0x2a4
0040dc7c  lw gp,0x28(sp)
0040dc80  move a0,s4
0040dc84  clear a1
0040dc88  lw t9,-0x7ee0(gp)
0040dc8c  li a2,0xc8
0040dc90  jalr t9
0040dc94  _addiu s1,sp,0x88
0040dc98  lw gp,0x28(sp)
0040dc9c  move a0,s2
0040dca0  clear a1
0040dca4  lw t9,-0x7ee0(gp)
0040dca8  nop
0040dcac  jalr t9
0040dcb0  _li a2,0x1e
0040dcb4  lw gp,0x28(sp)
0040dcb8  li a2,0x40
0040dcbc  addiu a0,sp,0x19c
0040dcc0  lw t9,-0x7ee0(gp)
0040dcc4  clear a1
0040dcc8  sw zero,0x88(sp)
0040dccc  sw zero,0x8c(sp)
0040dcd0  sw zero,0xac(sp)
0040dcd4  sw zero,0xb0(sp)
0040dcd8  sw zero,0xb4(sp)
0040dcdc  sw zero,0xb8(sp)
0040dce0  sw zero,0xbc(sp)
0040dce4  sw zero,0xc0(sp)
0040dce8  sw zero,0xc4(sp)
0040dcec  jalr t9
0040dcf0  _sw zero,0xc8(sp)
0040dcf4  lw gp,0x28(sp)
0040dcf8  move a1,s0
0040dcfc  move a0,s5
0040dd00  lw t9,-0x7d90(gp)
0040dd04  sw zero,0x88(sp)
0040dd08  jalr t9
0040dd0c  _lui s0,0x41
0040dd10  lw gp,0x28(sp)
0040dd14  addiu s0,s0,0xb34
0040dd18  move a0,s5
0040dd1c  lw t9,-0x7da8(gp)
0040dd20  move a1,s0
0040dd24  jalr t9
0040dd28  _move a2,s1
0040dd2c  lw gp,0x28(sp)
0040dd30  beq v0,zero,0x0040de08
0040dd34  _nop
0040dd38  lui s7,0x41
0040dd3c  lui s6,0x41
0040dd40  move s5,s1
0040dd44  addiu s7,s7,0x1bb0
0040dd48  addiu s6,s6,0x205c
0040dd4c  addiu s1,sp,0x9c
0040dd50  lw t9,-0x7d90(gp)
0040dd54  move a1,v0
0040dd58  jalr t9
0040dd5c  _move a0,s1
0040dd60  lw gp,0x28(sp)
0040dd64  move a0,s1
0040dd68  move a1,s7
0040dd6c  lw t9,-0x7e8c(gp)
0040dd70  nop
0040dd74  jalr t9
0040dd78  _li a2,0x4
0040dd7c  lw gp,0x28(sp)
0040dd80  bne v0,zero,0x0040ddcc
0040dd84  _move a0,s3
0040dd88  lb v1,0x4fc(sp)
0040dd8c  lw t9,-0x7f24(gp)
0040dd90  move a1,s6
0040dd94  lw v0,-0x7d90(gp)
0040dd98  bne v1,zero,0x0040ddb0
0040dd9c  _move a2,s1
0040dda0  move a0,s4
0040dda4  move a1,s1
0040dda8  b 0x0040ddd8
0040ddac  _move t9,v0
0040ddb0  jalr t9
0040ddb4  _nop
0040ddb8  lw gp,0x28(sp)
0040ddbc  move a0,s4
0040ddc0  lw t9,-0x7e68(gp)
0040ddc4  b 0x0040ddd8
0040ddc8  _move a1,s3
0040ddcc  lw t9,-0x7d90(gp)
0040ddd0  move a0,s2
0040ddd4  move a1,s1
0040ddd8  jalr t9
0040dddc  _nop
0040dde0  lw gp,0x28(sp)
0040dde4  clear a0
0040dde8  move a1,s0
0040ddec  lw t9,-0x7da8(gp)
0040ddf0  nop
0040ddf4  jalr t9
0040ddf8  _move a2,s5
0040ddfc  lw gp,0x28(sp)
0040de00  bne v0,zero,0x0040dd50
0040de04  _nop
0040de08  lw t9,-0x7f98(gp)
0040de0c  lui s1,0x41
0040de10  jalr t9
0040de14  _addiu a0,s1,0x21b0
0040de18  lw gp,0x28(sp)
0040de1c  beq v0,zero,0x0040deb0
0040de20  _nop
0040de24  lw t9,-0x7dc0(gp)
0040de28  nop
0040de2c  jalr t9
0040de30  _addiu a0,s1,0x21b0
0040de34  li v1,-0x1
0040de38  lw gp,0x28(sp)
0040de3c  beq v0,v1,0x0040de98
0040de40  _addiu a3,sp,0x90
0040de44  lw t9,-0x7f24(gp)
0040de48  lui a1,0x41
0040de4c  move a0,a3
0040de50  addiu a1,a1,0x17f4
0040de54  move a2,v0
0040de58  jalr t9
0040de5c  _sw a3,0x5e4(sp)
0040de60  lw gp,0x28(sp)
0040de64  lui v0,0x41
0040de68  lw a3,0x5e4(sp)
0040de6c  lw t9,-0x7f48(gp)
0040de70  addiu v0,v0,0xcb4
0040de74  lui a1,0x41
0040de78  lui a2,0x41
0040de7c  sw v0,0x10(sp)
0040de80  addiu a1,a1,0x12c4
0040de84  addiu a2,a2,0x12cc
0040de88  jalr t9
0040de8c  _clear a0
0040de90  lw gp,0x28(sp)
0040de94  nop
0040de98  lw t9,-0x7e98(gp)
0040de9c  lui a0,0x41
0040dea0  jalr t9
0040dea4  _addiu a0,a0,0x21b0
0040dea8  lw gp,0x28(sp)
0040deac  nop
0040deb0  lw t9,-0x7d90(gp)
0040deb4  addiu s1,sp,0x2a4
0040deb8  move a0,s1
0040debc  addiu a1,sp,0x4fc
0040dec0  jalr t9
0040dec4  _sw zero,0x88(sp)
0040dec8  lw gp,0x28(sp)
0040decc  move a0,s1
0040ded0  move a1,s0
0040ded4  lw t9,-0x7da8(gp)
0040ded8  nop
0040dedc  jalr t9
0040dee0  _addiu a2,sp,0x88
0040dee4  lw gp,0x28(sp)
0040dee8  beq v0,zero,0x0040e3b8
0040deec  _lui s1,0x41
0040def0  lui s5,0x41
0040def4  lui s4,0x41
0040def8  lui s3,0x41
0040defc  addiu s1,s1,0xcb4
0040df00  addiu s5,s5,0x2214
0040df04  addiu s4,s4,0x222c
0040df08  addiu s3,s3,0x2244
0040df0c  lw t9,-0x7d90(gp)
0040df10  addiu s6,sp,0x9c
0040df14  move a1,v0
0040df18  jalr t9
0040df1c  _move a0,s6
0040df20  lw gp,0x28(sp)
0040df24  lui a1,0x41
0040df28  move a0,s6
0040df2c  lw t9,-0x7e8c(gp)
0040df30  addiu a1,a1,0x1bb0
0040df34  jalr t9
0040df38  _li a2,0x4
0040df3c  lw gp,0x28(sp)
0040df40  bne v0,zero,0x0040e1b8
0040df44  _lui s8,0x41
0040df48  lw t9,-0x7f24(gp)
0040df4c  addiu s2,sp,0x1dc
0040df50  lui a1,0x41
0040df54  move a2,s6
0040df58  move a0,s2
0040df5c  jalr t9
0040df60  _addiu a1,a1,0x21c8
0040df64  lw gp,0x28(sp)
0040df68  nop
0040df6c  lw t9,-0x7f98(gp)
0040df70  nop
0040df74  jalr t9
0040df78  _move a0,s2
0040df7c  lw gp,0x28(sp)
0040df80  beq v0,zero,0x0040e0c8
0040df84  _nop
0040df88  lw t9,-0x7dc0(gp)
0040df8c  nop
0040df90  jalr t9
0040df94  _move a0,s2
0040df98  li v1,-0x1
0040df9c  lw gp,0x28(sp)
0040dfa0  beq v0,v1,0x0040dff4
0040dfa4  _addiu a3,sp,0x90
0040dfa8  lw t9,-0x7f24(gp)
0040dfac  lui a1,0x41
0040dfb0  move a0,a3
0040dfb4  addiu a1,a1,0x17f4
0040dfb8  move a2,v0
0040dfbc  jalr t9
0040dfc0  _sw a3,0x5e4(sp)
0040dfc4  lw gp,0x28(sp)
0040dfc8  lw a3,0x5e4(sp)
0040dfcc  lui a1,0x41
0040dfd0  lw t9,-0x7f48(gp)
0040dfd4  lui a2,0x41
0040dfd8  sw s1,0x10(sp)
0040dfdc  addiu a1,a1,0x12c4
0040dfe0  addiu a2,a2,0x12cc
0040dfe4  jalr t9
0040dfe8  _clear a0
0040dfec  lw gp,0x28(sp)
0040dff0  nop
0040dff4  lw t9,-0x7e98(gp)
0040dff8  addiu a0,sp,0x1dc
0040dffc  jalr t9
0040e000  _addiu s2,sp,0x240
0040e004  lw gp,0x28(sp)
0040e008  lui a1,0x41
0040e00c  addiu a1,a1,0x21e0
0040e010  lw t9,-0x7f24(gp)
0040e014  move a0,s2
0040e018  jalr t9
0040e01c  _addiu a2,sp,0x9c
0040e020  lw gp,0x28(sp)
0040e024  nop
0040e028  lw t9,-0x7f98(gp)
0040e02c  nop
0040e030  jalr t9
0040e034  _move a0,s2
0040e038  lw gp,0x28(sp)
0040e03c  beq v0,zero,0x0040e0c8
0040e040  _nop
0040e044  lw t9,-0x7dc0(gp)
0040e048  nop
0040e04c  jalr t9
0040e050  _move a0,s2
0040e054  li v1,-0x1
0040e058  lw gp,0x28(sp)
0040e05c  beq v0,v1,0x0040e0b0
0040e060  _addiu a3,sp,0x90
0040e064  lw t9,-0x7f24(gp)
0040e068  lui a1,0x41
0040e06c  move a0,a3
0040e070  addiu a1,a1,0x17f4
0040e074  move a2,v0
0040e078  jalr t9
0040e07c  _sw a3,0x5e4(sp)
0040e080  lw gp,0x28(sp)
0040e084  lw a3,0x5e4(sp)
0040e088  lui a1,0x41
0040e08c  lw t9,-0x7f48(gp)
0040e090  lui a2,0x41
0040e094  sw s1,0x10(sp)
0040e098  addiu a1,a1,0x12c4
0040e09c  addiu a2,a2,0x12cc
0040e0a0  jalr t9
0040e0a4  _clear a0
0040e0a8  lw gp,0x28(sp)
0040e0ac  nop
0040e0b0  lw t9,-0x7e98(gp)
0040e0b4  nop
0040e0b8  jalr t9
0040e0bc  _addiu a0,sp,0x240
0040e0c0  lw gp,0x28(sp)
0040e0c4  nop
0040e0c8  lw t9,-0x7f24(gp)
0040e0cc  addiu s2,sp,0x240
0040e0d0  lui a1,0x41
0040e0d4  move a0,s2
0040e0d8  addiu a1,a1,0x21fc
0040e0dc  jalr t9
0040e0e0  _addiu a2,sp,0x9c
0040e0e4  lw gp,0x28(sp)
0040e0e8  nop
0040e0ec  lw t9,-0x7f98(gp)
0040e0f0  nop
0040e0f4  jalr t9
0040e0f8  _move a0,s2
0040e0fc  lw gp,0x28(sp)
0040e100  beq v0,zero,0x0040e18c
0040e104  _nop
0040e108  lw t9,-0x7dc0(gp)
0040e10c  nop
0040e110  jalr t9
0040e114  _move a0,s2
0040e118  li v1,-0x1
0040e11c  lw gp,0x28(sp)
0040e120  beq v0,v1,0x0040e174
0040e124  _addiu a3,sp,0x90
0040e128  lw t9,-0x7f24(gp)
0040e12c  lui a1,0x41
0040e130  move a0,a3
0040e134  addiu a1,a1,0x17f4
0040e138  move a2,v0
0040e13c  jalr t9
0040e140  _sw a3,0x5e4(sp)
0040e144  lw gp,0x28(sp)
0040e148  lw a3,0x5e4(sp)
0040e14c  lui a1,0x41
0040e150  lw t9,-0x7f48(gp)
0040e154  lui a2,0x41
0040e158  sw s1,0x10(sp)
0040e15c  addiu a1,a1,0x12c4
0040e160  addiu a2,a2,0x12cc
0040e164  jalr t9
0040e168  _clear a0
0040e16c  lw gp,0x28(sp)
0040e170  nop
0040e174  lw t9,-0x7e98(gp)
0040e178  nop
0040e17c  jalr t9
0040e180  _addiu a0,sp,0x240
0040e184  lw gp,0x28(sp)
0040e188  nop
0040e18c  lw t9,-0x7f48(gp)
0040e190  lui a0,0x41
0040e194  lui a1,0x41
0040e198  lui a2,0x41
0040e19c  addiu a0,a0,0x1a24
0040e1a0  addiu a1,a1,0x1830
0040e1a4  addiu a2,a2,0x1f80
0040e1a8  jalr t9
0040e1ac  _move a3,s1
0040e1b0  lw gp,0x28(sp)
0040e1b4  lui s8,0x41
0040e1b8  lui s7,0x41
0040e1bc  addiu s8,s8,0x12c4
0040e1c0  addiu s7,s7,0x12cc
0040e1c4  li s6,-0x1
0040e1c8  addiu s2,sp,0x90
0040e1cc  lw t9,-0x7f98(gp)
0040e1d0  nop
0040e1d4  jalr t9
0040e1d8  _move a0,s5
0040e1dc  lw gp,0x28(sp)
0040e1e0  nop
0040e1e4  lw v1,-0x7dc0(gp)
0040e1e8  lw t9,-0x7f98(gp)
0040e1ec  beq v0,zero,0x0040e258
0040e1f0  _move a0,s5
0040e1f4  move t9,v1
0040e1f8  jalr t9
0040e1fc  _nop
0040e200  lw gp,0x28(sp)
0040e204  lui a1,0x41
0040e208  move a0,s2
0040e20c  lw t9,-0x7f24(gp)
0040e210  addiu a1,a1,0x17f4
0040e214  beq v0,s6,0x0040e398
0040e218  _move a2,v0
0040e21c  jalr t9
0040e220  _nop
0040e224  lw gp,0x28(sp)
0040e228  clear a0
0040e22c  sw s1,0x10(sp)
0040e230  lw t9,-0x7f48(gp)
0040e234  move a1,s8
0040e238  move a2,s7
0040e23c  jalr t9
0040e240  _move a3,s2
0040e244  lw gp,0x28(sp)
0040e248  nop
0040e24c  lw t9,-0x7e98(gp)
0040e250  b 0x0040e354
0040e254  _move a0,s5
0040e258  jalr t9
0040e25c  _move a0,s4
0040e260  lw gp,0x28(sp)
0040e264  nop
0040e268  lw v1,-0x7dc0(gp)
0040e26c  lw t9,-0x7f98(gp)
0040e270  beq v0,zero,0x0040e2dc
0040e274  _move a0,s4
0040e278  move t9,v1
0040e27c  jalr t9
0040e280  _nop
0040e284  lw gp,0x28(sp)
0040e288  lui a1,0x41
0040e28c  move a0,s2
0040e290  lw t9,-0x7f24(gp)
0040e294  addiu a1,a1,0x17f4
0040e298  beq v0,s6,0x0040e398
0040e29c  _move a2,v0
0040e2a0  jalr t9
0040e2a4  _nop
0040e2a8  lw gp,0x28(sp)
0040e2ac  clear a0
0040e2b0  sw s1,0x10(sp)
0040e2b4  lw t9,-0x7f48(gp)
0040e2b8  move a1,s8
0040e2bc  move a2,s7
0040e2c0  jalr t9
0040e2c4  _move a3,s2
0040e2c8  lw gp,0x28(sp)
0040e2cc  nop
0040e2d0  lw t9,-0x7e98(gp)
0040e2d4  b 0x0040e354
0040e2d8  _move a0,s4
0040e2dc  jalr t9
0040e2e0  _move a0,s3
0040e2e4  lw gp,0x28(sp)
0040e2e8  nop
0040e2ec  lw t9,-0x7dc0(gp)
0040e2f0  beq v0,zero,0x0040e398
0040e2f4  _move a0,s3
0040e2f8  jalr t9
0040e2fc  _nop
0040e300  lw gp,0x28(sp)
0040e304  lui a1,0x41
0040e308  move a0,s2
0040e30c  lw t9,-0x7f24(gp)
0040e310  addiu a1,a1,0x17f4
0040e314  beq v0,s6,0x0040e398
0040e318  _move a2,v0
0040e31c  jalr t9
0040e320  _nop
0040e324  lw gp,0x28(sp)
0040e328  clear a0
0040e32c  sw s1,0x10(sp)
0040e330  lw t9,-0x7f48(gp)
0040e334  move a1,s8
0040e338  move a2,s7
0040e33c  jalr t9
0040e340  _move a3,s2
0040e344  lw gp,0x28(sp)
0040e348  move a0,s3
0040e34c  lw t9,-0x7e98(gp)
0040e350  nop
0040e354  jalr t9
0040e358  _nop
0040e35c  lw gp,0x28(sp)
0040e360  nop
0040e364  lw t9,-0x7e20(gp)
0040e368  nop
0040e36c  jalr t9
0040e370  _li a0,0x1
0040e374  lw gp,0x28(sp)
0040e378  lui a0,0x41
0040e37c  lw t9,-0x7e08(gp)
0040e380  nop
0040e384  jalr t9
0040e388  _addiu a0,a0,0x2264
0040e38c  lw gp,0x28(sp)
0040e390  bgtz v0,0x0040e1cc
0040e394  _nop
0040e398  lw t9,-0x7da8(gp)
0040e39c  clear a0
0040e3a0  move a1,s0
0040e3a4  jalr t9
0040e3a8  _addiu a2,sp,0x88
0040e3ac  lw gp,0x28(sp)
0040e3b0  bne v0,zero,0x0040df0c
0040e3b4  _nop
0040e3b8  lw t9,-0x7f98(gp)
0040e3bc  lui s1,0x41
0040e3c0  jalr t9
0040e3c4  _addiu a0,s1,0x226c
0040e3c8  lw gp,0x28(sp)
0040e3cc  beq v0,zero,0x0040e460
0040e3d0  _nop
0040e3d4  lw t9,-0x7dc0(gp)
0040e3d8  nop
0040e3dc  jalr t9
0040e3e0  _addiu a0,s1,0x226c
0040e3e4  li v1,-0x1
0040e3e8  lw gp,0x28(sp)
0040e3ec  beq v0,v1,0x0040e448
0040e3f0  _addiu a3,sp,0x90
0040e3f4  lw t9,-0x7f24(gp)
0040e3f8  lui a1,0x41
0040e3fc  move a0,a3
0040e400  addiu a1,a1,0x17f4
0040e404  move a2,v0
0040e408  jalr t9
0040e40c  _sw a3,0x5e4(sp)
0040e410  lw gp,0x28(sp)
0040e414  lui v0,0x41
0040e418  lw a3,0x5e4(sp)
0040e41c  lw t9,-0x7f48(gp)
0040e420  addiu v0,v0,0xcb4
0040e424  lui a1,0x41
0040e428  lui a2,0x41
0040e42c  sw v0,0x10(sp)
0040e430  addiu a1,a1,0x12c4
0040e434  addiu a2,a2,0x12cc
0040e438  jalr t9
0040e43c  _clear a0
0040e440  lw gp,0x28(sp)
0040e444  nop
0040e448  lw t9,-0x7e98(gp)
0040e44c  lui a0,0x41
0040e450  jalr t9
0040e454  _addiu a0,a0,0x226c
0040e458  lw gp,0x28(sp)
0040e45c  nop
0040e460  lw t9,-0x7e18(gp)
0040e464  lui a0,0x41
0040e468  jalr t9
0040e46c  _addiu a0,a0,0x2280
0040e470  lw gp,0x28(sp)
0040e474  lw a0,0x618(sp)
0040e478  lui a1,0x41
0040e47c  lw t9,-0x7f0c(gp)
0040e480  nop
0040e484  jalr t9
0040e488  _addiu a1,a1,0x12c4
0040e48c  lw gp,0x28(sp)
0040e490  beq v0,zero,0x0040f8bc
0040e494  _nop
0040e498  lw t9,-0x7e0c(gp)
0040e49c  lui a0,0x41
0040e4a0  jalr t9
0040e4a4  _addiu a0,a0,0x2294
0040e4a8  lw gp,0x28(sp)
0040e4ac  lui a0,0x41
0040e4b0  lw t9,-0x7df0(gp)
0040e4b4  nop
0040e4b8  jalr t9
0040e4bc  _addiu a0,a0,0x540
0040e4c0  lw gp,0x28(sp)
0040e4c4  beq v0,zero,0x0040e5bc
0040e4c8  _li a0,0x16
0040e4cc  lw t9,-0x7e24(gp)
0040e4d0  nop
0040e4d4  jalr t9
0040e4d8  _addiu a1,sp,0x34
0040e4dc  lw gp,0x28(sp)
0040e4e0  li a0,0x3b
0040e4e4  lw t9,-0x7e24(gp)
0040e4e8  nop
0040e4ec  jalr t9
0040e4f0  _addiu a1,sp,0x30
0040e4f4  lw gp,0x28(sp)
0040e4f8  li a0,0x3e
0040e4fc  lw t9,-0x7e24(gp)
0040e500  nop
0040e504  jalr t9
0040e508  _addiu a1,sp,0x3c
0040e50c  lw gp,0x28(sp)
0040e510  li a0,0x10e
0040e514  lw t9,-0x7e24(gp)
0040e518  nop
0040e51c  jalr t9
0040e520  _addiu a1,sp,0x40
0040e524  lw gp,0x28(sp)
0040e528  li a0,0x23
0040e52c  lw t9,-0x7e24(gp)
0040e530  nop
0040e534  jalr t9
0040e538  _addiu a1,sp,0x48
0040e53c  lw gp,0x28(sp)
0040e540  li a0,0x19
0040e544  lw t9,-0x7e24(gp)
0040e548  nop
0040e54c  jalr t9
0040e550  _addiu a1,sp,0x4c
0040e554  lw gp,0x28(sp)
0040e558  li a0,0x2d
0040e55c  lw t9,-0x7e24(gp)
0040e560  nop
0040e564  jalr t9
0040e568  _addiu a1,sp,0x50
0040e56c  lw gp,0x28(sp)
0040e570  li a0,0x3c
0040e574  lw t9,-0x7e24(gp)
0040e578  nop
0040e57c  jalr t9
0040e580  _addiu a1,sp,0x44
0040e584  lw gp,0x28(sp)
0040e588  li a0,0x1c
0040e58c  lw t9,-0x7e24(gp)
0040e590  nop
0040e594  jalr t9
0040e598  _addiu a1,sp,0x38
0040e59c  lw gp,0x28(sp)
0040e5a0  li a0,0x117
0040e5a4  lw t9,-0x7e24(gp)
0040e5a8  nop
0040e5ac  jalr t9
0040e5b0  _addiu a1,sp,0x8c
0040e5b4  lw gp,0x28(sp)
0040e5b8  nop
0040e5bc  lw t9,-0x7d90(gp)
0040e5c0  addiu s1,sp,0x2a4
0040e5c4  move a0,s1
0040e5c8  addiu a1,sp,0x4fc
0040e5cc  jalr t9
0040e5d0  _sw zero,0x88(sp)
0040e5d4  lw gp,0x28(sp)
0040e5d8  move a0,s1
0040e5dc  move a1,s0
0040e5e0  lw t9,-0x7da8(gp)
0040e5e4  addiu a2,sp,0x88
0040e5e8  jalr t9
0040e5ec  _clear s1
0040e5f0  lw gp,0x28(sp)
0040e5f4  beq v0,zero,0x0040f0c0
0040e5f8  _nop
0040e5fc  lui s4,0x41
0040e600  lui s3,0x41
0040e604  addiu s4,s4,0x22d0
0040e608  addiu s3,s3,0xcb4
0040e60c  clear s2
0040e610  sw zero,0x5c8(sp)
0040e614  sw zero,0x5d4(sp)
0040e618  clear s5
0040e61c  sw zero,0x5d8(sp)
0040e620  sw zero,0x5e0(sp)
0040e624  sw zero,0x5dc(sp)
0040e628  lw t9,-0x7d90(gp)
0040e62c  addiu s6,sp,0x9c
0040e630  move a1,v0
0040e634  jalr t9
0040e638  _move a0,s6
0040e63c  lw gp,0x28(sp)
0040e640  lui a1,0x41
0040e644  move a0,s6
0040e648  lw t9,-0x7e8c(gp)
0040e64c  addiu a1,a1,0x1bb0
0040e650  jalr t9
0040e654  _li a2,0x4
0040e658  lw gp,0x28(sp)
0040e65c  bne v0,zero,0x0040ee34
0040e660  _move a0,s6
0040e664  lw t9,-0x7f88(gp)
0040e668  nop
0040e66c  jalr t9
0040e670  _clear s7
0040e674  sltiu v0,v0,0x9
0040e678  lw gp,0x28(sp)
0040e67c  bne v0,zero,0x0040e68c
0040e680  _nop
0040e684  lb s7,0xa2(sp)
0040e688  lb s2,0xa3(sp)
0040e68c  lw t9,-0x7df0(gp)
0040e690  nop
0040e694  jalr t9
0040e698  _addiu a0,sp,0x9c
0040e69c  lw gp,0x28(sp)
0040e6a0  beq v0,zero,0x0040ee34
0040e6a4  _li a0,0x16
0040e6a8  lw t9,-0x7e24(gp)
0040e6ac  nop
0040e6b0  jalr t9
0040e6b4  _addiu a1,sp,0x54
0040e6b8  lw gp,0x28(sp)
0040e6bc  li a0,0x3b
0040e6c0  lw t9,-0x7e24(gp)
0040e6c4  nop
0040e6c8  jalr t9
0040e6cc  _addiu a1,sp,0x58
0040e6d0  lw gp,0x28(sp)
0040e6d4  li a0,0x3f
0040e6d8  lw t9,-0x7e24(gp)
0040e6dc  nop
0040e6e0  jalr t9
0040e6e4  _addiu a1,sp,0x5c
0040e6e8  lw gp,0x28(sp)
0040e6ec  li a0,0x40
0040e6f0  lw t9,-0x7e24(gp)
0040e6f4  nop
0040e6f8  jalr t9
0040e6fc  _addiu a1,sp,0x60
0040e700  lw gp,0x28(sp)
0040e704  li a0,0x19
0040e708  lw t9,-0x7e24(gp)
0040e70c  nop
0040e710  jalr t9
0040e714  _addiu a1,sp,0x64
0040e718  lw gp,0x28(sp)
0040e71c  li a0,0x1c
0040e720  lw t9,-0x7e24(gp)
0040e724  nop
0040e728  jalr t9
0040e72c  _addiu a1,sp,0x6c
0040e730  lw v0,0x54(sp)
0040e734  lw gp,0x28(sp)
0040e738  bne v0,zero,0x0040e770
0040e73c  _nop
0040e740  lw v0,0x58(sp)
0040e744  nop
0040e748  slti v0,v0,0x4
0040e74c  bne v0,zero,0x0040e768
0040e750  _li a0,0x22f
0040e754  lw t9,-0x7e24(gp)
0040e758  nop
0040e75c  jalr t9
0040e760  _addiu a1,sp,0x70
0040e764  lw gp,0x28(sp)
0040e768  lw v0,0x54(sp)
0040e76c  nop
0040e770  bne v0,zero,0x0040e8c4
0040e774  _nop
0040e778  lw v0,0x58(sp)
0040e77c  nop
0040e780  addiu v0,v0,-0x2
0040e784  sltiu v0,v0,0x2
0040e788  beq v0,zero,0x0040e8c4
0040e78c  _nop
0040e790  lw v0,0x5c(sp)
0040e794  nop
0040e798  beq v0,zero,0x0040e8c4
0040e79c  _nop
0040e7a0  lw v0,0x60(sp)
0040e7a4  nop
0040e7a8  beq v0,zero,0x0040e8c4
0040e7ac  _nop
0040e7b0  lw t9,-0x7e24(gp)
0040e7b4  li a0,0x45
0040e7b8  jalr t9
0040e7bc  _addiu a1,sp,0x68
0040e7c0  lw v0,0x68(sp)
0040e7c4  lw gp,0x28(sp)
0040e7c8  addiu v0,v0,-0x3
0040e7cc  sltiu v0,v0,0x2
0040e7d0  beq v0,zero,0x0040e8c4
0040e7d4  _nop
0040e7d8  lw t9,-0x7f24(gp)
0040e7dc  addiu s6,sp,0x9c
0040e7e0  addiu s8,sp,0x1dc
0040e7e4  lui a1,0x41
0040e7e8  move a0,s8
0040e7ec  move a2,s6
0040e7f0  jalr t9
0040e7f4  _addiu a1,a1,0x22b0
0040e7f8  lw gp,0x28(sp)
0040e7fc  lui v0,0x41
0040e800  addiu v0,v0,0x22cc
0040e804  lw t9,-0x7f48(gp)
0040e808  lui a1,0x41
0040e80c  lui a2,0x41
0040e810  move a3,s6
0040e814  sw s8,0x10(sp)
0040e818  clear a0
0040e81c  addiu a1,a1,0x1c00
0040e820  addiu a2,a2,0x22c8
0040e824  sw v0,0x14(sp)
0040e828  jalr t9
0040e82c  _sw s3,0x18(sp)
0040e830  lw gp,0x28(sp)
0040e834  lui v1,0x41
0040e838  addiu v1,v1,0x22cc
0040e83c  lw t9,-0x7f48(gp)
0040e840  move a2,s6
0040e844  sw s8,0x14(sp)
0040e848  sw v1,0x10(sp)
0040e84c  clear a0
0040e850  move a1,s4
0040e854  addiu a3,sp,0x12c
0040e858  jalr t9
0040e85c  _sw s3,0x18(sp)
0040e860  lw gp,0x28(sp)
0040e864  addiu a0,sp,0x240
0040e868  lui a1,0x41
0040e86c  lw t9,-0x7f24(gp)
0040e870  move a2,s6
0040e874  addiu a1,a1,0x21c8
0040e878  jalr t9
0040e87c  _sw a0,0x5cc(sp)
0040e880  lw gp,0x28(sp)
0040e884  clear s6
0040e888  li s8,0xa
0040e88c  lw t9,-0x7f98(gp)
0040e890  lw a0,0x5cc(sp)
0040e894  jalr t9
0040e898  _addiu s6,s6,0x1
0040e89c  lw gp,0x28(sp)
0040e8a0  nop
0040e8a4  lw t9,-0x7e20(gp)
0040e8a8  bne v0,zero,0x0040e8c4
0040e8ac  _li a0,0x1
0040e8b0  jalr t9
0040e8b4  _nop
0040e8b8  lw gp,0x28(sp)
0040e8bc  bne s6,s8,0x0040e88c
0040e8c0  _nop
0040e8c4  lw v0,0x64(sp)
0040e8c8  nop
0040e8cc  slti v1,v0,0x2
0040e8d0  beq v1,zero,0x0040e928
0040e8d4  _li v1,0x7
0040e8d8  lw t9,-0x7e24(gp)
0040e8dc  li a0,0x23
0040e8e0  jalr t9
0040e8e4  _addiu a1,sp,0x74
0040e8e8  lw gp,0x28(sp)
0040e8ec  li a0,0x2d
0040e8f0  lw t9,-0x7e24(gp)
0040e8f4  nop
0040e8f8  jalr t9
0040e8fc  _addiu a1,sp,0x78
0040e900  lw v0,0x74(sp)
0040e904  lw gp,0x28(sp)
0040e908  bne v0,zero,0x0040e950
0040e90c  _li s6,0x1
0040e910  lw v0,0x78(sp)
0040e914  nop
0040e918  bne v0,zero,0x0040e950
0040e91c  _nop
0040e920  b 0x0040e95c
0040e924  _clear s6
0040e928  beq v0,v1,0x0040e958
0040e92c  _li v0,0x1
0040e930  lw v1,0x6c(sp)
0040e934  nop
0040e938  beq v1,v0,0x0040e94c
0040e93c  _nop
0040e940  clear s6
0040e944  b 0x0040e960
0040e948  _sw v0,0x5cc(sp)
0040e94c  li s6,0x1
0040e950  b 0x0040e960
0040e954  _sw s6,0x5cc(sp)
0040e958  clear s6
0040e95c  sw zero,0x5cc(sp)
0040e960  lw v0,0x54(sp)
0040e964  nop
0040e968  bne v0,zero,0x0040ea84
0040e96c  _nop
0040e970  lw v0,0x58(sp)
0040e974  nop
0040e978  slti v0,v0,0x4
0040e97c  bne v0,zero,0x0040ea84
0040e980  _nop
0040e984  lw v0,0x70(sp)
0040e988  nop
0040e98c  beq v0,zero,0x0040ea84
0040e990  _addiu a0,sp,0x1dc
0040e994  lw t9,-0x7f24(gp)
0040e998  addiu s8,sp,0x9c
0040e99c  lui a1,0x41
0040e9a0  move a2,s8
0040e9a4  sw a0,0x5d0(sp)
0040e9a8  jalr t9
0040e9ac  _addiu a1,a1,0x22d8
0040e9b0  lw gp,0x28(sp)
0040e9b4  lw a1,0x5d0(sp)
0040e9b8  lui a3,0x41
0040e9bc  lw t9,-0x7f48(gp)
0040e9c0  sw a1,0x10(sp)
0040e9c4  addiu a3,a3,0x2064
0040e9c8  lui a1,0x41
0040e9cc  lui a2,0x41
0040e9d0  sw a3,0x14(sp)
0040e9d4  clear a0
0040e9d8  move a3,s8
0040e9dc  addiu a1,a1,0x1c00
0040e9e0  addiu a2,a2,0x22c8
0040e9e4  jalr t9
0040e9e8  _sw s3,0x18(sp)
0040e9ec  lw gp,0x28(sp)
0040e9f0  lw v0,0x5d0(sp)
0040e9f4  lui v1,0x41
0040e9f8  lw t9,-0x7f48(gp)
0040e9fc  addiu v1,v1,0x2064
0040ea00  move a2,s8
0040ea04  sw v1,0x10(sp)
0040ea08  clear a0
0040ea0c  move a1,s4
0040ea10  addiu a3,sp,0x12c
0040ea14  sw v0,0x14(sp)
0040ea18  jalr t9
0040ea1c  _sw s3,0x18(sp)
0040ea20  lw gp,0x28(sp)
0040ea24  addiu a0,sp,0x240
0040ea28  lui a1,0x41
0040ea2c  lw t9,-0x7f24(gp)
0040ea30  move a2,s8
0040ea34  addiu a1,a1,0x21c8
0040ea38  jalr t9
0040ea3c  _sw a0,0x5d0(sp)
0040ea40  lw gp,0x28(sp)
0040ea44  clear s8
0040ea48  lw t9,-0x7f98(gp)
0040ea4c  lw a0,0x5d0(sp)
0040ea50  jalr t9
0040ea54  _addiu s8,s8,0x1
0040ea58  lw gp,0x28(sp)
0040ea5c  nop
0040ea60  lw t9,-0x7e20(gp)
0040ea64  bne v0,zero,0x0040ea84
0040ea68  _li a0,0x1
0040ea6c  jalr t9
0040ea70  _nop
0040ea74  li a0,0xa
0040ea78  lw gp,0x28(sp)
0040ea7c  bne s8,a0,0x0040ea48
0040ea80  _nop
0040ea84  lw a1,0x5cc(sp)
0040ea88  nop
0040ea8c  beq a1,zero,0x0040ec18
0040ea90  _li v0,0x76
0040ea94  lw v0,0x54(sp)
0040ea98  nop
0040ea9c  bne v0,zero,0x0040ec18
0040eaa0  _li v0,0x76
0040eaa4  lw t9,-0x7f24(gp)
0040eaa8  addiu a3,sp,0x9c
0040eaac  addiu s8,sp,0x1dc
0040eab0  lui a1,0x41
0040eab4  move a2,a3
0040eab8  move a0,s8
0040eabc  addiu a1,a1,0x22f0
0040eac0  jalr t9
0040eac4  _sw a3,0x5e4(sp)
0040eac8  lw gp,0x28(sp)
0040eacc  lw a3,0x5e4(sp)
0040ead0  lui a1,0x41
0040ead4  lw t9,-0x7f48(gp)
0040ead8  lui a2,0x41
0040eadc  sw s8,0x10(sp)
0040eae0  sw s3,0x14(sp)
0040eae4  clear a0
0040eae8  addiu a1,a1,0x1c00
0040eaec  jalr t9
0040eaf0  _addiu a2,a2,0x22c8
0040eaf4  lw v1,0x58(sp)
0040eaf8  li v0,0x1
0040eafc  lw gp,0x28(sp)
0040eb00  bne v1,v0,0x0040eb44
0040eb04  _move a1,s4
0040eb08  lw t9,-0x7e24(gp)
0040eb0c  li a0,0x3c
0040eb10  jalr t9
0040eb14  _addiu a1,sp,0x7c
0040eb18  lw gp,0x28(sp)
0040eb1c  lw v0,0x7c(sp)
0040eb20  lw t9,-0x7d90(gp)
0040eb24  bne v0,zero,0x0040eb38
0040eb28  _addiu a0,sp,0xec
0040eb2c  lui a1,0x41
0040eb30  b 0x0040eb4c
0040eb34  _addiu a1,a1,0x2304
0040eb38  lui a1,0x41
0040eb3c  b 0x0040eb4c
0040eb40  _addiu a1,a1,0x2314
0040eb44  lw t9,-0x7d90(gp)
0040eb48  addiu a0,sp,0xec
0040eb4c  jalr t9
0040eb50  _nop
0040eb54  li v0,0x76
0040eb58  lw gp,0x28(sp)
0040eb5c  bne s7,v0,0x0040eb8c
0040eb60  _li v0,0x61
0040eb64  bne s2,v0,0x0040eb8c
0040eb68  _nop
0040eb6c  lw v0,0x30(sp)
0040eb70  nop
0040eb74  beq v0,zero,0x0040eb8c
0040eb78  _xori v0,v0,0x3
0040eb7c  lw a3,0x5d8(sp)
0040eb80  li v1,0x1
0040eb84  movn a3,v1,v0
0040eb88  sw a3,0x5d8(sp)
0040eb8c  lw v1,0x58(sp)
0040eb90  li v0,0x2
0040eb94  beq v1,v0,0x0040ec14
0040eb98  _nop
0040eb9c  lw t9,0x5d8(sp)
0040eba0  nop
0040eba4  bne t9,zero,0x0040ec14
0040eba8  _nop
0040ebac  lw v1,0x6c(sp)
0040ebb0  nop
0040ebb4  bne v1,v0,0x0040ebc4
0040ebb8  _nop
0040ebbc  beq s6,zero,0x0040ec18
0040ebc0  _li v0,0x76
0040ebc4  lw t9,-0x7f48(gp)
0040ebc8  addiu v0,sp,0xec
0040ebcc  sw v0,0x10(sp)
0040ebd0  addiu v0,sp,0x1dc
0040ebd4  sw v0,0x14(sp)
0040ebd8  sw s3,0x18(sp)
0040ebdc  clear a0
0040ebe0  move a1,s4
0040ebe4  addiu a2,sp,0x9c
0040ebe8  jalr t9
0040ebec  _addiu a3,sp,0x12c
0040ebf0  li v0,0x76
0040ebf4  lw gp,0x28(sp)
0040ebf8  bne s7,v0,0x0040ec88
0040ebfc  _li s1,0x1
0040ec00  li v0,0x61
0040ec04  beq s2,v0,0x0040eca0
0040ec08  _nop
0040ec0c  b 0x0040ec20
0040ec10  _sw s1,0x5dc(sp)
0040ec14  li v0,0x76
0040ec18  bne s7,v0,0x0040ec90
0040ec1c  _li v0,0x78
0040ec20  li v0,0x78
0040ec24  bne s2,v0,0x0040f8f0
0040ec28  _li v0,0x61
0040ec2c  lw v0,0x54(sp)
0040ec30  nop
0040ec34  bne v0,zero,0x0040ee34
0040ec38  _addiu a0,sp,0xec
0040ec3c  lw t9,-0x7f0c(gp)
0040ec40  nop
0040ec44  jalr t9
0040ec48  _move a1,s4
0040ec4c  lw gp,0x28(sp)
0040ec50  bne v0,zero,0x0040ec60
0040ec54  _nop
0040ec58  beq s6,zero,0x0040ee34
0040ec5c  _nop
0040ec60  lw t9,-0x7e68(gp)
0040ec64  addiu s6,sp,0x10c
0040ec68  move a0,s6
0040ec6c  jalr t9
0040ec70  _move a1,s0
0040ec74  lw gp,0x28(sp)
0040ec78  move a0,s6
0040ec7c  lw t9,-0x7e68(gp)
0040ec80  b 0x0040ecec
0040ec84  _addiu a1,sp,0x9c
0040ec88  sw s1,0x5dc(sp)
0040ec8c  li v0,0x78
0040ec90  bne s2,v0,0x0040ed30
0040ec94  _li a0,0x3e
0040ec98  b 0x0040ee34
0040ec9c  _nop
0040eca0  sw s1,0x5e0(sp)
0040eca4  lw v0,0x54(sp)
0040eca8  nop
0040ecac  bne v0,zero,0x0040ee34
0040ecb0  _nop
0040ecb4  lw v0,0x3c(sp)
0040ecb8  nop
0040ecbc  beq v0,zero,0x0040ecd4
0040ecc0  _nop
0040ecc4  lw v0,0x5e0(sp)
0040ecc8  nop
0040eccc  beq v0,zero,0x0040ee34
0040ecd0  _nop
0040ecd4  lb v0,0x434(sp)
0040ecd8  addiu s6,sp,0x434
0040ecdc  bne v0,zero,0x0040ed00
0040ece0  _addiu a1,sp,0x9c
0040ece4  lw t9,-0x7d90(gp)
0040ece8  move a0,s6
0040ecec  jalr t9
0040ecf0  _nop
0040ecf4  lw gp,0x28(sp)
0040ecf8  b 0x0040ee34
0040ecfc  _nop
0040ed00  lw t9,-0x7f24(gp)
0040ed04  addiu s7,sp,0xcc
0040ed08  move a2,a1
0040ed0c  lui a1,0x41
0040ed10  move a0,s7
0040ed14  jalr t9
0040ed18  _addiu a1,a1,0x205c
0040ed1c  lw gp,0x28(sp)
0040ed20  move a0,s6
0040ed24  lw t9,-0x7e68(gp)
0040ed28  b 0x0040ecec
0040ed2c  _move a1,s7
0040ed30  lw t9,-0x7e24(gp)
0040ed34  nop
0040ed38  jalr t9
0040ed3c  _addiu a1,sp,0x84
0040ed40  lw gp,0x28(sp)
0040ed44  li a0,0x10e
0040ed48  lw t9,-0x7e24(gp)
0040ed4c  nop
0040ed50  jalr t9
0040ed54  _addiu a1,sp,0x80
0040ed58  lw v1,0x5dc(sp)
0040ed5c  lw gp,0x28(sp)
0040ed60  bne v1,zero,0x0040ed88
0040ed64  _nop
0040ed68  lw v0,0x84(sp)
0040ed6c  nop
0040ed70  beq v0,zero,0x0040ed88
0040ed74  _nop
0040ed78  lw v0,0x80(sp)
0040ed7c  nop
0040ed80  bne v0,zero,0x0040f900
0040ed84  _li v0,0x61
0040ed88  lb v0,0x434(sp)
0040ed8c  addiu s6,sp,0x434
0040ed90  bne v0,zero,0x0040eda4
0040ed94  _addiu a1,sp,0x9c
0040ed98  lw t9,-0x7d90(gp)
0040ed9c  b 0x0040edd4
0040eda0  _move a0,s6
0040eda4  lw t9,-0x7f24(gp)
0040eda8  addiu s7,sp,0xcc
0040edac  move a2,a1
0040edb0  lui a1,0x41
0040edb4  move a0,s7
0040edb8  jalr t9
0040edbc  _addiu a1,a1,0x205c
0040edc0  lw gp,0x28(sp)
0040edc4  move a0,s6
0040edc8  move a1,s7
0040edcc  lw t9,-0x7e68(gp)
0040edd0  nop
0040edd4  jalr t9
0040edd8  _nop
0040eddc  lw gp,0x28(sp)
0040ede0  b 0x0040f900
0040ede4  _li v0,0x61
0040ede8  lw a0,0x54(sp)
0040edec  lw v0,0x58(sp)
0040edf0  nop
0040edf4  beq v0,zero,0x0040ee18
0040edf8  _movz s5,v1,a0
0040edfc  li v1,0x3
0040ee00  beq v0,v1,0x0040ee18
0040ee04  _li v1,0x4
0040ee08  beq v0,v1,0x0040ee18
0040ee0c  _li v1,0x6
0040ee10  bne v0,v1,0x0040ee20
0040ee14  _nop
0040ee18  li a0,0x1
0040ee1c  sw a0,0x5d4(sp)
0040ee20  lw a1,0x5c8(sp)
0040ee24  lw v1,0x84(sp)
0040ee28  li v0,0x1
0040ee2c  movz a1,v0,v1
0040ee30  sw a1,0x5c8(sp)
0040ee34  lw t9,-0x7da8(gp)
0040ee38  addiu s6,sp,0x88
0040ee3c  clear a0
0040ee40  move a1,s0
0040ee44  jalr t9
0040ee48  _move a2,s6
0040ee4c  lw gp,0x28(sp)
0040ee50  bne v0,zero,0x0040e628
0040ee54  _nop
0040ee58  li v0,0x1
0040ee5c  bne s5,v0,0x0040f0c0
0040ee60  _nop
0040ee64  lw a3,0x5d4(sp)
0040ee68  nop
0040ee6c  bne a3,s5,0x0040f0c0
0040ee70  _nop
0040ee74  lw t9,0x5c8(sp)
0040ee78  nop
0040ee7c  bne t9,a3,0x0040f0c0
0040ee80  _addiu a1,sp,0x434
0040ee84  lw t9,-0x7d90(gp)
0040ee88  addiu s1,sp,0x2a4
0040ee8c  move a0,s1
0040ee90  jalr t9
0040ee94  _sw zero,0x88(sp)
0040ee98  lw gp,0x28(sp)
0040ee9c  move a2,s6
0040eea0  move a0,s1
0040eea4  lw t9,-0x7da8(gp)
0040eea8  nop
0040eeac  jalr t9
0040eeb0  _move a1,s0
0040eeb4  lw gp,0x28(sp)
0040eeb8  beq v0,zero,0x0040f020
0040eebc  _move a2,v0
0040eec0  lui s3,0x41
0040eec4  addiu v0,sp,0x30
0040eec8  addiu s3,s3,0x205c
0040eecc  addiu s2,sp,0x36c
0040eed0  addiu s1,sp,0xcc
0040eed4  sw v0,0x5c8(sp)
0040eed8  addiu s8,sp,0x3c
0040eedc  li s7,0x3
0040eee0  li s5,0x4
0040eee4  li s4,0x6
0040eee8  lw t9,-0x7f0c(gp)
0040eeec  lui a1,0x41
0040eef0  move a0,a2
0040eef4  sw a2,0x5e4(sp)
0040eef8  jalr t9
0040eefc  _addiu a1,a1,0x540
0040ef00  lw gp,0x28(sp)
0040ef04  lw a2,0x5e4(sp)
0040ef08  beq v0,zero,0x0040ef34
0040ef0c  _nop
0040ef10  lw t9,-0x7f0c(gp)
0040ef14  lui a1,0x41
0040ef18  move a0,a2
0040ef1c  jalr t9
0040ef20  _addiu a1,a1,0x2324
0040ef24  lw gp,0x28(sp)
0040ef28  lw a2,0x5e4(sp)
0040ef2c  bne v0,zero,0x0040efb0
0040ef30  _nop
0040ef34  lw t9,-0x7df0(gp)
0040ef38  move a0,a2
0040ef3c  jalr t9
0040ef40  _sw a2,0x5e4(sp)
0040ef44  lw gp,0x28(sp)
0040ef48  lw a1,0x5c8(sp)
0040ef4c  lw t9,-0x7e24(gp)
0040ef50  nop
0040ef54  jalr t9
0040ef58  _li a0,0x3b
0040ef5c  lw gp,0x28(sp)
0040ef60  li a0,0x3e
0040ef64  lw t9,-0x7e24(gp)
0040ef68  nop
0040ef6c  jalr t9
0040ef70  _move a1,s8
0040ef74  lw v0,0x30(sp)
0040ef78  lw gp,0x28(sp)
0040ef7c  lw a2,0x5e4(sp)
0040ef80  beq v0,zero,0x0040efa0
0040ef84  _nop
0040ef88  beq v0,s7,0x0040efa0
0040ef8c  _nop
0040ef90  beq v0,s5,0x0040efa0
0040ef94  _nop
0040ef98  bne v0,s4,0x0040f000
0040ef9c  _nop
0040efa0  lw v0,0x3c(sp)
0040efa4  nop
0040efa8  bne v0,zero,0x0040f000
0040efac  _nop
0040efb0  lb v0,0x36c(sp)
0040efb4  nop
0040efb8  bne v0,zero,0x0040efcc
0040efbc  _move a0,s2
0040efc0  lw t9,-0x7d90(gp)
0040efc4  b 0x0040eff0
0040efc8  _move a1,a2
0040efcc  lw t9,-0x7f24(gp)
0040efd0  move a0,s1
0040efd4  jalr t9
0040efd8  _move a1,s3
0040efdc  lw gp,0x28(sp)
0040efe0  move a0,s2
0040efe4  move a1,s1
0040efe8  lw t9,-0x7e68(gp)
0040efec  nop
0040eff0  jalr t9
0040eff4  _nop
0040eff8  lw gp,0x28(sp)
0040effc  nop
0040f000  lw t9,-0x7da8(gp)
0040f004  move a2,s6
0040f008  clear a0
0040f00c  jalr t9
0040f010  _move a1,s0
0040f014  lw gp,0x28(sp)
0040f018  bne v0,zero,0x0040eee8
0040f01c  _move a2,v0
0040f020  lw t9,-0x7f24(gp)
0040f024  addiu s1,sp,0x1dc
0040f028  lui a1,0x41
0040f02c  addiu a1,a1,0x232c
0040f030  addiu a2,sp,0x12c
0040f034  addiu a3,sp,0x36c
0040f038  jalr t9
0040f03c  _move a0,s1
0040f040  lw gp,0x28(sp)
0040f044  move a0,s1
0040f048  lw t9,-0x7e18(gp)
0040f04c  nop
0040f050  jalr t9
0040f054  _lui s1,0x41
0040f058  lw gp,0x28(sp)
0040f05c  nop
0040f060  lw t9,-0x7f98(gp)
0040f064  nop
0040f068  jalr t9
0040f06c  _addiu a0,s1,0x2338
0040f070  lw gp,0x28(sp)
0040f074  beq v0,zero,0x0040f094
0040f078  _nop
0040f07c  lw t9,-0x7e98(gp)
0040f080  nop
0040f084  jalr t9
0040f088  _addiu a0,s1,0x2338
0040f08c  lw gp,0x28(sp)
0040f090  nop
0040f094  lw t9,-0x7f48(gp)
0040f098  lui a0,0x41
0040f09c  lui a1,0x41
0040f0a0  lui a3,0x41
0040f0a4  addiu a0,a0,0x2338
0040f0a8  addiu a1,a1,0x1830
0040f0ac  addiu a3,a3,0xcb4
0040f0b0  jalr t9
0040f0b4  _addiu a2,sp,0x1dc
0040f0b8  lw gp,0x28(sp)
0040f0bc  li s1,0x1
0040f0c0  lw t9,-0x7f98(gp)
0040f0c4  lui a0,0x41
0040f0c8  jalr t9
0040f0cc  _addiu a0,a0,0x234c
0040f0d0  lw gp,0x28(sp)
0040f0d4  beq v0,zero,0x0040f868
0040f0d8  _addiu a0,sp,0x1dc
0040f0dc  lw t9,-0x7ee0(gp)
0040f0e0  clear a1
0040f0e4  jalr t9
0040f0e8  _li a2,0x64
0040f0ec  lw gp,0x28(sp)
0040f0f0  li a2,0x64
0040f0f4  addiu a0,sp,0x240
0040f0f8  lw t9,-0x7ee0(gp)
0040f0fc  clear a1
0040f100  jalr t9
0040f104  _addiu s2,sp,0x2a4
0040f108  lw gp,0x28(sp)
0040f10c  move a0,s2
0040f110  addiu a1,sp,0x434
0040f114  lw t9,-0x7d90(gp)
0040f118  nop
0040f11c  jalr t9
0040f120  _sw zero,0x88(sp)
0040f124  lw gp,0x28(sp)
0040f128  move a0,s2
0040f12c  move a1,s0
0040f130  lw t9,-0x7da8(gp)
0040f134  nop
0040f138  jalr t9
0040f13c  _addiu a2,sp,0x88
0040f140  lw gp,0x28(sp)
0040f144  beq v0,zero,0x0040f868
0040f148  _move s2,v0
0040f14c  lui s5,0x41
0040f150  lui s3,0x41
0040f154  lui s4,0x41
0040f158  addiu s5,s5,0x540
0040f15c  addiu s3,s3,0xcb4
0040f160  addiu s4,s4,0x23b8
0040f164  lw t9,-0x7ee0(gp)
0040f168  addiu a0,sp,0x14c
0040f16c  clear a1
0040f170  jalr t9
0040f174  _li a2,0x28
0040f178  lw gp,0x28(sp)
0040f17c  addiu a0,sp,0x174
0040f180  clear a1
0040f184  lw t9,-0x7ee0(gp)
0040f188  nop
0040f18c  jalr t9
0040f190  _li a2,0x28
0040f194  lw gp,0x28(sp)
0040f198  move a0,s2
0040f19c  lw t9,-0x7f0c(gp)
0040f1a0  nop
0040f1a4  jalr t9
0040f1a8  _move a1,s5
0040f1ac  lw gp,0x28(sp)
0040f1b0  beq v0,zero,0x0040f1d4
0040f1b4  _lui a1,0x41
0040f1b8  lw t9,-0x7f0c(gp)
0040f1bc  addiu a1,a1,0x2324
0040f1c0  jalr t9
0040f1c4  _move a0,s2
0040f1c8  lw gp,0x28(sp)
0040f1cc  bne v0,zero,0x0040f848
0040f1d0  _nop
0040f1d4  lw t9,-0x7df0(gp)
0040f1d8  nop
0040f1dc  jalr t9
0040f1e0  _move a0,s2
0040f1e4  lw gp,0x28(sp)
0040f1e8  li a0,0x3b
0040f1ec  lw t9,-0x7e24(gp)
0040f1f0  nop
0040f1f4  jalr t9
0040f1f8  _addiu a1,sp,0x30
0040f1fc  lw gp,0x28(sp)
0040f200  li a0,0x23
0040f204  lw t9,-0x7e24(gp)
0040f208  nop
0040f20c  jalr t9
0040f210  _addiu a1,sp,0x48
0040f214  lw gp,0x28(sp)
0040f218  li a0,0x19
0040f21c  lw t9,-0x7e24(gp)
0040f220  nop
0040f224  jalr t9
0040f228  _addiu a1,sp,0x4c
0040f22c  lw gp,0x28(sp)
0040f230  li a0,0x2d
0040f234  lw t9,-0x7e24(gp)
0040f238  nop
0040f23c  jalr t9
0040f240  _addiu a1,sp,0x50
0040f244  lw gp,0x28(sp)
0040f248  li a0,0x1c
0040f24c  lw t9,-0x7e24(gp)
0040f250  nop
0040f254  jalr t9
0040f258  _addiu a1,sp,0x38
0040f25c  lw gp,0x28(sp)
0040f260  li a0,0x117
0040f264  lw t9,-0x7e24(gp)
0040f268  nop
0040f26c  jalr t9
0040f270  _addiu a1,sp,0x8c
0040f274  lw s6,0x4c(sp)
0040f278  lw gp,0x28(sp)
0040f27c  sw zero,0x34(sp)
0040f280  slti v0,s6,0x2
0040f284  sw zero,0x44(sp)
0040f288  beq v0,zero,0x0040f2a8
0040f28c  _xori s7,s6,0x7
0040f290  lw v0,0x48(sp)
0040f294  nop
0040f298  bne v0,zero,0x0040f2ac
0040f29c  _li s7,0x1
0040f2a0  lw s7,0x50(sp)
0040f2a4  nop
0040f2a8  sltu s7,zero,s7
0040f2ac  lw t9,-0x7f0c(gp)
0040f2b0  move a0,s2
0040f2b4  jalr t9
0040f2b8  _move a1,s5
0040f2bc  lw gp,0x28(sp)
0040f2c0  bne v0,zero,0x0040f2e8
0040f2c4  _nop
0040f2c8  lw v0,0x40(sp)
0040f2cc  nop
0040f2d0  bne v0,zero,0x0040f808
0040f2d4  _li v0,0x2
0040f2d8  lw v1,0x30(sp)
0040f2dc  nop
0040f2e0  beq v1,v0,0x0040f808
0040f2e4  _nop
0040f2e8  lw v0,0x30(sp)
0040f2ec  nop
0040f2f0  bne v0,zero,0x0040f328
0040f2f4  _slti v0,s6,0x2
0040f2f8  beq v0,zero,0x0040f310
0040f2fc  _li v0,0x7
0040f300  bne s7,zero,0x0040f808
0040f304  _nop
0040f308  b 0x0040f328
0040f30c  _nop
0040f310  beq s6,v0,0x0040f328
0040f314  _li v0,0x1
0040f318  lw v1,0x38(sp)
0040f31c  nop
0040f320  beq v1,v0,0x0040f808
0040f324  _nop
0040f328  lw t9,-0x7f98(gp)
0040f32c  lui v1,0x41
0040f330  addiu v0,sp,0x19c
0040f334  addiu v1,v1,0x2264
0040f338  lui a0,0x41
0040f33c  sw zero,0xc(v0)
0040f340  sw zero,0x4(v0)
0040f344  sw zero,0x8(v0)
0040f348  sw v1,0x19c(sp)
0040f34c  jalr t9
0040f350  _addiu a0,a0,0x2358
0040f354  lw gp,0x28(sp)
0040f358  bne v0,zero,0x0040f3e0
0040f35c  _lui s1,0x41
0040f360  lw t9,-0x7f98(gp)
0040f364  nop
0040f368  jalr t9
0040f36c  _addiu a0,s1,0x2378
0040f370  lw gp,0x28(sp)
0040f374  beq v0,zero,0x0040f3a4
0040f378  _lui a1,0x41
0040f37c  lw t9,-0x7f48(gp)
0040f380  lui a3,0x41
0040f384  sw s3,0x10(sp)
0040f388  addiu a1,a1,0x189c
0040f38c  addiu a2,s1,0x2378
0040f390  addiu a3,a3,0x2384
0040f394  jalr t9
0040f398  _clear a0
0040f39c  lw gp,0x28(sp)
0040f3a0  nop
0040f3a4  lw t9,-0x7f48(gp)
0040f3a8  lui a1,0x41
0040f3ac  lui a2,0x41
0040f3b0  addiu a1,a1,0x2388
0040f3b4  addiu a2,a2,0x2378
0040f3b8  clear a0
0040f3bc  jalr t9
0040f3c0  _move a3,s3
0040f3c4  lw gp,0x28(sp)
0040f3c8  lui a0,0x41
0040f3cc  lw t9,-0x7e18(gp)
0040f3d0  nop
0040f3d4  jalr t9
0040f3d8  _addiu a0,a0,0x2390
0040f3dc  lw gp,0x28(sp)
0040f3e0  lw v1,0x30(sp)
0040f3e4  li v0,0x1
0040f3e8  bne v1,v0,0x0040f410
0040f3ec  _lui v0,0x41
0040f3f0  addiu v0,v0,0x23b0
0040f3f4  sw v0,0x1a0(sp)
0040f3f8  lui v0,0x41
0040f3fc  addiu v0,v0,0x1f8c
0040f400  sw v0,0x1a4(sp)
0040f404  sw zero,0x8c(sp)
0040f408  b 0x0040f418
0040f40c  _li s1,0x3
0040f410  sw s4,0x1a0(sp)
0040f414  li s1,0x2
0040f418  lw v1,0x8c(sp)
0040f41c  li v0,0x1
0040f420  bne v1,v0,0x0040f4cc
0040f424  _lui t1,0x41
0040f428  lw t9,-0x7f48(gp)
0040f42c  lui t0,0x41
0040f430  lui v1,0x41
0040f434  addiu t1,t1,0x23c0
0040f438  addiu t0,t0,0x1ef0
0040f43c  addiu v1,v1,0x23d0
0040f440  addiu s8,sp,0x12c
0040f444  lui s7,0x41
0040f448  lui s6,0x41
0040f44c  lui a2,0x41
0040f450  addiu a2,a2,0x209c
0040f454  sw t1,0x10(sp)
0040f458  sw t0,0x14(sp)
0040f45c  sw v1,0x18(sp)
0040f460  clear a0
0040f464  addiu a1,s7,0x1ef8
0040f468  addiu a3,s6,0x1f04
0040f46c  sw v1,0x5ec(sp)
0040f470  sw t0,0x5e8(sp)
0040f474  sw t1,0x5e4(sp)
0040f478  sw s8,0x1c(sp)
0040f47c  jalr t9
0040f480  _sw s3,0x20(sp)
0040f484  lw gp,0x28(sp)
0040f488  lw t1,0x5e4(sp)
0040f48c  lw t0,0x5e8(sp)
0040f490  lw v1,0x5ec(sp)
0040f494  lw t9,-0x7f48(gp)
0040f498  lui a2,0x41
0040f49c  sw t1,0x10(sp)
0040f4a0  sw t0,0x14(sp)
0040f4a4  sw v1,0x18(sp)
0040f4a8  sw s8,0x1c(sp)
0040f4ac  sw s3,0x20(sp)
0040f4b0  addiu a1,s7,0x1ef8
0040f4b4  addiu a2,a2,0x1f00
0040f4b8  addiu a3,s6,0x1f04
0040f4bc  jalr t9
0040f4c0  _clear a0
0040f4c4  lw gp,0x28(sp)
0040f4c8  nop
0040f4cc  lw t9,-0x7f24(gp)
0040f4d0  addiu s6,sp,0x14c
0040f4d4  lui a1,0x41
0040f4d8  move a0,s6
0040f4dc  move a2,s2
0040f4e0  jalr t9
0040f4e4  _addiu a1,a1,0x23e0
0040f4e8  lw gp,0x28(sp)
0040f4ec  lui a3,0x41
0040f4f0  lui a1,0x41
0040f4f4  lw t9,-0x7f48(gp)
0040f4f8  lui a2,0x41
0040f4fc  addiu a3,a3,0x2404
0040f500  addiu a1,a1,0x1c00
0040f504  addiu a2,a2,0x23f4
0040f508  sw s6,0x10(sp)
0040f50c  sw s2,0x14(sp)
0040f510  clear a0
0040f514  jalr t9
0040f518  _sw s3,0x18(sp)
0040f51c  addiu a1,s1,0x1
0040f520  lw gp,0x28(sp)
0040f524  addiu s7,sp,0x30
0040f528  sll a1,a1,0x2
0040f52c  sll a2,s1,0x2
0040f530  lui a3,0x41
0040f534  addu a2,s7,a2
0040f538  addu a1,s7,a1
0040f53c  addiu a3,a3,0x2414
0040f540  addiu a0,s1,0x2
0040f544  sw a3,0x16c(a2)
0040f548  addiu v1,s1,0x3
0040f54c  sw s6,0x16c(a1)
0040f550  addiu v0,s1,0x4
0040f554  sll a0,a0,0x2
0040f558  lui a1,0x41
0040f55c  lw t9,-0x7f24(gp)
0040f560  addu a0,s7,a0
0040f564  addiu a1,a1,0x2418
0040f568  sll v1,v1,0x2
0040f56c  sll v0,v0,0x2
0040f570  lui a3,0x41
0040f574  sw a1,0x16c(a0)
0040f578  addu v1,s7,v1
0040f57c  addiu a3,a3,0x241c
0040f580  addu v0,s7,v0
0040f584  addiu s8,sp,0x174
0040f588  lui a1,0x41
0040f58c  sw s2,0x16c(v1)
0040f590  move a2,s2
0040f594  sw a3,0x16c(v0)
0040f598  addiu a1,a1,0x2420
0040f59c  jalr t9
0040f5a0  _move a0,s8
0040f5a4  lw gp,0x28(sp)
0040f5a8  addiu s2,s1,0x5
0040f5ac  sll s2,s2,0x2
0040f5b0  lw t9,-0x7f98(gp)
0040f5b4  addu s2,s7,s2
0040f5b8  lui s6,0x41
0040f5bc  sw s8,0x16c(s2)
0040f5c0  jalr t9
0040f5c4  _addiu a0,s6,0x2434
0040f5c8  lw gp,0x28(sp)
0040f5cc  beq v0,zero,0x0040f5fc
0040f5d0  _addiu s2,s1,0x6
0040f5d4  lw t9,-0x7e98(gp)
0040f5d8  sll s2,s2,0x2
0040f5dc  lui v0,0x41
0040f5e0  addu s7,s7,s2
0040f5e4  addiu v0,v0,0x2448
0040f5e8  sw v0,0x16c(s7)
0040f5ec  jalr t9
0040f5f0  _addiu a0,s6,0x2434
0040f5f4  lw gp,0x28(sp)
0040f5f8  addiu s2,s1,0x7
0040f5fc  lw t9,-0x7f98(gp)
0040f600  lui s1,0x41
0040f604  jalr t9
0040f608  _addiu a0,s1,0x2454
0040f60c  lw gp,0x28(sp)
0040f610  beq v0,zero,0x0040f634
0040f614  _sll v0,s2,0x2
0040f618  lw t9,-0x7e98(gp)
0040f61c  addu v0,sp,v0
0040f620  sw s4,0x19c(v0)
0040f624  jalr t9
0040f628  _addiu a0,s1,0x2454
0040f62c  lw gp,0x28(sp)
0040f630  addiu s2,s2,0x1
0040f634  lw t9,-0x7f98(gp)
0040f638  lui s1,0x41
0040f63c  jalr t9
0040f640  _addiu a0,s1,0x2468
0040f644  lw gp,0x28(sp)
0040f648  beq v0,zero,0x0040f6fc
0040f64c  _lui a1,0x41
0040f650  lw t9,-0x7ed8(gp)
0040f654  addiu a0,s1,0x2468
0040f658  jalr t9
0040f65c  _addiu a1,a1,0x1fe4
0040f660  lw gp,0x28(sp)
0040f664  beq v0,zero,0x0040f6a4
0040f668  _move s1,v0
0040f66c  lw t9,-0x7de4(gp)
0040f670  lui a1,0x41
0040f674  addiu a1,a1,0x2334
0040f678  move a0,v0
0040f67c  jalr t9
0040f680  _addiu a2,sp,0x240
0040f684  lw gp,0x28(sp)
0040f688  nop
0040f68c  lw t9,-0x7ef0(gp)
0040f690  nop
0040f694  jalr t9
0040f698  _move a0,s1
0040f69c  lw gp,0x28(sp)
0040f6a0  nop
0040f6a4  lw t9,-0x7d90(gp)
0040f6a8  addiu s1,sp,0xac
0040f6ac  move a0,s1
0040f6b0  jalr t9
0040f6b4  _addiu a1,sp,0x240
0040f6b8  lw gp,0x28(sp)
0040f6bc  addiu v1,s2,0x1
0040f6c0  sll a0,s2,0x2
0040f6c4  addiu v0,sp,0x30
0040f6c8  sll v1,v1,0x2
0040f6cc  addu v1,v0,v1
0040f6d0  addu v0,v0,a0
0040f6d4  lui a0,0x41
0040f6d8  lw t9,-0x7e98(gp)
0040f6dc  addiu a0,a0,0x247c
0040f6e0  sw a0,0x16c(v0)
0040f6e4  lui a0,0x41
0040f6e8  sw s1,0x16c(v1)
0040f6ec  jalr t9
0040f6f0  _addiu a0,a0,0x2468
0040f6f4  lw gp,0x28(sp)
0040f6f8  addiu s2,s2,0x2
0040f6fc  lw t9,-0x7f98(gp)
0040f700  lui s1,0x41
0040f704  jalr t9
0040f708  _addiu a0,s1,0x2488
0040f70c  lw gp,0x28(sp)
0040f710  beq v0,zero,0x0040f7cc
0040f714  _addiu v1,s2,0x1
0040f718  lw t9,-0x7ed8(gp)
0040f71c  lui a1,0x41
0040f720  addiu a0,s1,0x2488
0040f724  jalr t9
0040f728  _addiu a1,a1,0x1fe4
0040f72c  lw gp,0x28(sp)
0040f730  beq v0,zero,0x0040f770
0040f734  _move s1,v0
0040f738  lw t9,-0x7de4(gp)
0040f73c  lui a1,0x41
0040f740  addiu a1,a1,0x2334
0040f744  move a0,v0
0040f748  jalr t9
0040f74c  _addiu a2,sp,0x240
0040f750  lw gp,0x28(sp)
0040f754  nop
0040f758  lw t9,-0x7ef0(gp)
0040f75c  nop
0040f760  jalr t9
0040f764  _move a0,s1
0040f768  lw gp,0x28(sp)
0040f76c  nop
0040f770  lw t9,-0x7d90(gp)
0040f774  addiu s1,sp,0xbc
0040f778  move a0,s1
0040f77c  jalr t9
0040f780  _addiu a1,sp,0x240
0040f784  lw gp,0x28(sp)
0040f788  addiu v1,s2,0x1
0040f78c  sll a0,s2,0x2
0040f790  lw t9,-0x7e98(gp)
0040f794  addiu v0,sp,0x30
0040f798  sll v1,v1,0x2
0040f79c  lui a1,0x41
0040f7a0  addu v1,v0,v1
0040f7a4  addiu a1,a1,0x249c
0040f7a8  addu v0,v0,a0
0040f7ac  lui a0,0x41
0040f7b0  sw a1,0x16c(v0)
0040f7b4  addiu a0,a0,0x2488
0040f7b8  jalr t9
0040f7bc  _sw s1,0x16c(v1)
0040f7c0  lw gp,0x28(sp)
0040f7c4  addiu s2,s2,0x2
0040f7c8  addiu v1,s2,0x1
0040f7cc  lw t9,-0x7f60(gp)
0040f7d0  addiu v0,sp,0x30
0040f7d4  sll v1,v1,0x2
0040f7d8  sll s2,s2,0x2
0040f7dc  lui a3,0x41
0040f7e0  addu v1,v0,v1
0040f7e4  addiu a3,a3,0x24a8
0040f7e8  addu v0,v0,s2
0040f7ec  sw a3,0x16c(v0)
0040f7f0  addiu a0,sp,0x19c
0040f7f4  sw zero,0x16c(v1)
0040f7f8  jalr t9
0040f7fc  _clear a1
0040f800  lw gp,0x28(sp)
0040f804  li s1,0x1
0040f808  li s2,0x5
0040f80c  addiu s6,sp,0x174
0040f810  lw t9,-0x7f98(gp)
0040f814  nop
0040f818  jalr t9
0040f81c  _move a0,s6
0040f820  lw gp,0x28(sp)
0040f824  bne v0,zero,0x0040f848
0040f828  _li a0,0x1
0040f82c  lw t9,-0x7e20(gp)
0040f830  nop
0040f834  jalr t9
0040f838  _addiu s2,s2,-0x1
0040f83c  lw gp,0x28(sp)
0040f840  bne s2,zero,0x0040f810
0040f844  _nop
0040f848  lw t9,-0x7da8(gp)
0040f84c  clear a0
0040f850  move a1,s0
0040f854  jalr t9
0040f858  _addiu a2,sp,0x88
0040f85c  lw gp,0x28(sp)
0040f860  bne v0,zero,0x0040f164
0040f864  _move s2,v0
0040f868  beq s1,zero,0x0040f8bc
0040f86c  _addiu a2,sp,0x434
0040f870  lb v0,0x10c(sp)
0040f874  lw t9,-0x7f24(gp)
0040f878  beq v0,zero,0x0040f898
0040f87c  _addiu a0,sp,0x1dc
0040f880  lui a1,0x41
0040f884  addiu a1,a1,0x24b0
0040f888  jalr t9
0040f88c  _addiu a3,sp,0x10c
0040f890  b 0x0040f8a4
0040f894  _nop
0040f898  lui a1,0x41
0040f89c  jalr t9
0040f8a0  _addiu a1,a1,0x24c0
0040f8a4  lw gp,0x28(sp)
0040f8a8  nop
0040f8ac  lw t9,-0x7e18(gp)
0040f8b0  nop
0040f8b4  jalr t9
0040f8b8  _addiu a0,sp,0x1dc
0040f8bc  lw ra,0x614(sp)
0040f8c0  lw s8,0x610(sp)
0040f8c4  lw s7,0x60c(sp)
0040f8c8  lw s6,0x608(sp)
0040f8cc  lw s5,0x604(sp)
0040f8d0  lw s4,0x600(sp)
0040f8d4  lw s3,0x5fc(sp)
0040f8d8  lw s2,0x5f8(sp)
0040f8dc  lw s1,0x5f4(sp)
0040f8e0  lw s0,0x5f0(sp)
0040f8e4  clear v0
0040f8e8  jr ra
0040f8ec  _addiu sp,sp,0x618
0040f8f0  bne s2,v0,0x0040ee34
0040f8f4  _nop
0040f8f8  b 0x0040eca4
0040f8fc  _nop
0040f900  beq s2,v0,0x0040ee34
0040f904  _li v1,0x1
0040f908  b 0x0040ede8
0040f90c  _nop
