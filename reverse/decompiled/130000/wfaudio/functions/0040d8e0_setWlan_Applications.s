# setWlan_Applications @ 0040d8e0
0040d8e0  addiu sp,sp,-0x618
0040d8e4  sw ra,0x614(sp)
0040d8e8  sw s8,0x610(sp)
0040d8ec  sw s7,0x60c(sp)
0040d8f0  sw s6,0x608(sp)
0040d8f4  sw s5,0x604(sp)
0040d8f8  sw s4,0x600(sp)
0040d8fc  sw s3,0x5fc(sp)
0040d900  sw s2,0x5f8(sp)
0040d904  sw s1,0x5f4(sp)
0040d908  sw s0,0x5f0(sp)
0040d90c  lui gp,0x43
0040d910  addiu gp,gp,-0x4f70
0040d914  sw gp,0x28(sp)
0040d918  lw t9,-0x7ee8(gp)
0040d91c  move s0,a1
0040d920  sw a0,0x618(sp)
0040d924  clear a1
0040d928  addiu a0,sp,0x36c
0040d92c  jalr t9
0040d930  _li a2,0xc8
0040d934  lw gp,0x28(sp)
0040d938  addiu s3,sp,0xcc
0040d93c  move a0,s3
0040d940  lw t9,-0x7ee8(gp)
0040d944  clear a1
0040d948  li a2,0x1e
0040d94c  sw zero,0x30(sp)
0040d950  sw zero,0x34(sp)
0040d954  sw zero,0x38(sp)
0040d958  sw zero,0x3c(sp)
0040d95c  sw zero,0x40(sp)
0040d960  sw zero,0x44(sp)
0040d964  sw zero,0x48(sp)
0040d968  sw zero,0x4c(sp)
0040d96c  sw zero,0x50(sp)
0040d970  sw zero,0x54(sp)
0040d974  sw zero,0x58(sp)
0040d978  sw zero,0x5c(sp)
0040d97c  sw zero,0x60(sp)
0040d980  sw zero,0x64(sp)
0040d984  sw zero,0x68(sp)
0040d988  sw zero,0x6c(sp)
0040d98c  sw zero,0x70(sp)
0040d990  sw zero,0x74(sp)
0040d994  sw zero,0x78(sp)
0040d998  sw zero,0x7c(sp)
0040d99c  sw zero,0x80(sp)
0040d9a0  jalr t9
0040d9a4  _sw zero,0x84(sp)
0040d9a8  lw gp,0x28(sp)
0040d9ac  addiu a0,sp,0xec
0040d9b0  clear a1
0040d9b4  lw t9,-0x7ee8(gp)
0040d9b8  li a2,0x1e
0040d9bc  jalr t9
0040d9c0  _addiu s4,sp,0x4fc
0040d9c4  lw gp,0x28(sp)
0040d9c8  addiu a0,sp,0x10c
0040d9cc  clear a1
0040d9d0  lw t9,-0x7ee8(gp)
0040d9d4  li a2,0x1e
0040d9d8  jalr t9
0040d9dc  _addiu s2,sp,0x12c
0040d9e0  lw gp,0x28(sp)
0040d9e4  addiu a0,sp,0x434
0040d9e8  clear a1
0040d9ec  lw t9,-0x7ee8(gp)
0040d9f0  li a2,0xc8
0040d9f4  jalr t9
0040d9f8  _addiu s5,sp,0x2a4
0040d9fc  lw gp,0x28(sp)
0040da00  move a0,s4
0040da04  clear a1
0040da08  lw t9,-0x7ee8(gp)
0040da0c  li a2,0xc8
0040da10  jalr t9
0040da14  _addiu s1,sp,0x88
0040da18  lw gp,0x28(sp)
0040da1c  move a0,s2
0040da20  clear a1
0040da24  lw t9,-0x7ee8(gp)
0040da28  nop
0040da2c  jalr t9
0040da30  _li a2,0x1e
0040da34  lw gp,0x28(sp)
0040da38  li a2,0x40
0040da3c  addiu a0,sp,0x19c
0040da40  lw t9,-0x7ee8(gp)
0040da44  clear a1
0040da48  sw zero,0x88(sp)
0040da4c  sw zero,0x8c(sp)
0040da50  sw zero,0xac(sp)
0040da54  sw zero,0xb0(sp)
0040da58  sw zero,0xb4(sp)
0040da5c  sw zero,0xb8(sp)
0040da60  sw zero,0xbc(sp)
0040da64  sw zero,0xc0(sp)
0040da68  sw zero,0xc4(sp)
0040da6c  jalr t9
0040da70  _sw zero,0xc8(sp)
0040da74  lw gp,0x28(sp)
0040da78  move a1,s0
0040da7c  move a0,s5
0040da80  lw t9,-0x7d9c(gp)
0040da84  sw zero,0x88(sp)
0040da88  jalr t9
0040da8c  _lui s0,0x41
0040da90  lw gp,0x28(sp)
0040da94  addiu s0,s0,0x864
0040da98  move a0,s5
0040da9c  lw t9,-0x7db4(gp)
0040daa0  move a1,s0
0040daa4  jalr t9
0040daa8  _move a2,s1
0040daac  lw gp,0x28(sp)
0040dab0  beq v0,zero,0x0040db88
0040dab4  _nop
0040dab8  lui s7,0x41
0040dabc  lui s6,0x41
0040dac0  move s5,s1
0040dac4  addiu s7,s7,0x18d0
0040dac8  addiu s6,s6,0x1d7c
0040dacc  addiu s1,sp,0x9c
0040dad0  lw t9,-0x7d9c(gp)
0040dad4  move a1,v0
0040dad8  jalr t9
0040dadc  _move a0,s1
0040dae0  lw gp,0x28(sp)
0040dae4  move a0,s1
0040dae8  move a1,s7
0040daec  lw t9,-0x7e94(gp)
0040daf0  nop
0040daf4  jalr t9
0040daf8  _li a2,0x4
0040dafc  lw gp,0x28(sp)
0040db00  bne v0,zero,0x0040db4c
0040db04  _move a0,s3
0040db08  lb v1,0x4fc(sp)
0040db0c  lw t9,-0x7f2c(gp)
0040db10  move a1,s6
0040db14  lw v0,-0x7d9c(gp)
0040db18  bne v1,zero,0x0040db30
0040db1c  _move a2,s1
0040db20  move a0,s4
0040db24  move a1,s1
0040db28  b 0x0040db58
0040db2c  _move t9,v0
0040db30  jalr t9
0040db34  _nop
0040db38  lw gp,0x28(sp)
0040db3c  move a0,s4
0040db40  lw t9,-0x7e70(gp)
0040db44  b 0x0040db58
0040db48  _move a1,s3
0040db4c  lw t9,-0x7d9c(gp)
0040db50  move a0,s2
0040db54  move a1,s1
0040db58  jalr t9
0040db5c  _nop
0040db60  lw gp,0x28(sp)
0040db64  clear a0
0040db68  move a1,s0
0040db6c  lw t9,-0x7db4(gp)
0040db70  nop
0040db74  jalr t9
0040db78  _move a2,s5
0040db7c  lw gp,0x28(sp)
0040db80  bne v0,zero,0x0040dad0
0040db84  _nop
0040db88  lw t9,-0x7f98(gp)
0040db8c  lui s1,0x41
0040db90  jalr t9
0040db94  _addiu a0,s1,0x1ed0
0040db98  lw gp,0x28(sp)
0040db9c  beq v0,zero,0x0040dc30
0040dba0  _nop
0040dba4  lw t9,-0x7dcc(gp)
0040dba8  nop
0040dbac  jalr t9
0040dbb0  _addiu a0,s1,0x1ed0
0040dbb4  li v1,-0x1
0040dbb8  lw gp,0x28(sp)
0040dbbc  beq v0,v1,0x0040dc18
0040dbc0  _addiu a3,sp,0x90
0040dbc4  lw t9,-0x7f2c(gp)
0040dbc8  lui a1,0x41
0040dbcc  move a0,a3
0040dbd0  addiu a1,a1,0x1514
0040dbd4  move a2,v0
0040dbd8  jalr t9
0040dbdc  _sw a3,0x5e4(sp)
0040dbe0  lw gp,0x28(sp)
0040dbe4  lui v0,0x41
0040dbe8  lw a3,0x5e4(sp)
0040dbec  lw t9,-0x7f48(gp)
0040dbf0  addiu v0,v0,0x9e4
0040dbf4  lui a1,0x41
0040dbf8  lui a2,0x41
0040dbfc  sw v0,0x10(sp)
0040dc00  addiu a1,a1,0xfe4
0040dc04  addiu a2,a2,0xfec
0040dc08  jalr t9
0040dc0c  _clear a0
0040dc10  lw gp,0x28(sp)
0040dc14  nop
0040dc18  lw t9,-0x7ea0(gp)
0040dc1c  lui a0,0x41
0040dc20  jalr t9
0040dc24  _addiu a0,a0,0x1ed0
0040dc28  lw gp,0x28(sp)
0040dc2c  nop
0040dc30  lw t9,-0x7d9c(gp)
0040dc34  addiu s1,sp,0x2a4
0040dc38  move a0,s1
0040dc3c  addiu a1,sp,0x4fc
0040dc40  jalr t9
0040dc44  _sw zero,0x88(sp)
0040dc48  lw gp,0x28(sp)
0040dc4c  move a0,s1
0040dc50  move a1,s0
0040dc54  lw t9,-0x7db4(gp)
0040dc58  nop
0040dc5c  jalr t9
0040dc60  _addiu a2,sp,0x88
0040dc64  lw gp,0x28(sp)
0040dc68  beq v0,zero,0x0040e138
0040dc6c  _lui s1,0x41
0040dc70  lui s5,0x41
0040dc74  lui s4,0x41
0040dc78  lui s3,0x41
0040dc7c  addiu s1,s1,0x9e4
0040dc80  addiu s5,s5,0x1f34
0040dc84  addiu s4,s4,0x1f4c
0040dc88  addiu s3,s3,0x1f64
0040dc8c  lw t9,-0x7d9c(gp)
0040dc90  addiu s6,sp,0x9c
0040dc94  move a1,v0
0040dc98  jalr t9
0040dc9c  _move a0,s6
0040dca0  lw gp,0x28(sp)
0040dca4  lui a1,0x41
0040dca8  move a0,s6
0040dcac  lw t9,-0x7e94(gp)
0040dcb0  addiu a1,a1,0x18d0
0040dcb4  jalr t9
0040dcb8  _li a2,0x4
0040dcbc  lw gp,0x28(sp)
0040dcc0  bne v0,zero,0x0040df38
0040dcc4  _lui s8,0x41
0040dcc8  lw t9,-0x7f2c(gp)
0040dccc  addiu s2,sp,0x1dc
0040dcd0  lui a1,0x41
0040dcd4  move a2,s6
0040dcd8  move a0,s2
0040dcdc  jalr t9
0040dce0  _addiu a1,a1,0x1ee8
0040dce4  lw gp,0x28(sp)
0040dce8  nop
0040dcec  lw t9,-0x7f98(gp)
0040dcf0  nop
0040dcf4  jalr t9
0040dcf8  _move a0,s2
0040dcfc  lw gp,0x28(sp)
0040dd00  beq v0,zero,0x0040de48
0040dd04  _nop
0040dd08  lw t9,-0x7dcc(gp)
0040dd0c  nop
0040dd10  jalr t9
0040dd14  _move a0,s2
0040dd18  li v1,-0x1
0040dd1c  lw gp,0x28(sp)
0040dd20  beq v0,v1,0x0040dd74
0040dd24  _addiu a3,sp,0x90
0040dd28  lw t9,-0x7f2c(gp)
0040dd2c  lui a1,0x41
0040dd30  move a0,a3
0040dd34  addiu a1,a1,0x1514
0040dd38  move a2,v0
0040dd3c  jalr t9
0040dd40  _sw a3,0x5e4(sp)
0040dd44  lw gp,0x28(sp)
0040dd48  lw a3,0x5e4(sp)
0040dd4c  lui a1,0x41
0040dd50  lw t9,-0x7f48(gp)
0040dd54  lui a2,0x41
0040dd58  sw s1,0x10(sp)
0040dd5c  addiu a1,a1,0xfe4
0040dd60  addiu a2,a2,0xfec
0040dd64  jalr t9
0040dd68  _clear a0
0040dd6c  lw gp,0x28(sp)
0040dd70  nop
0040dd74  lw t9,-0x7ea0(gp)
0040dd78  addiu a0,sp,0x1dc
0040dd7c  jalr t9
0040dd80  _addiu s2,sp,0x240
0040dd84  lw gp,0x28(sp)
0040dd88  lui a1,0x41
0040dd8c  addiu a1,a1,0x1f00
0040dd90  lw t9,-0x7f2c(gp)
0040dd94  move a0,s2
0040dd98  jalr t9
0040dd9c  _addiu a2,sp,0x9c
0040dda0  lw gp,0x28(sp)
0040dda4  nop
0040dda8  lw t9,-0x7f98(gp)
0040ddac  nop
0040ddb0  jalr t9
0040ddb4  _move a0,s2
0040ddb8  lw gp,0x28(sp)
0040ddbc  beq v0,zero,0x0040de48
0040ddc0  _nop
0040ddc4  lw t9,-0x7dcc(gp)
0040ddc8  nop
0040ddcc  jalr t9
0040ddd0  _move a0,s2
0040ddd4  li v1,-0x1
0040ddd8  lw gp,0x28(sp)
0040dddc  beq v0,v1,0x0040de30
0040dde0  _addiu a3,sp,0x90
0040dde4  lw t9,-0x7f2c(gp)
0040dde8  lui a1,0x41
0040ddec  move a0,a3
0040ddf0  addiu a1,a1,0x1514
0040ddf4  move a2,v0
0040ddf8  jalr t9
0040ddfc  _sw a3,0x5e4(sp)
0040de00  lw gp,0x28(sp)
0040de04  lw a3,0x5e4(sp)
0040de08  lui a1,0x41
0040de0c  lw t9,-0x7f48(gp)
0040de10  lui a2,0x41
0040de14  sw s1,0x10(sp)
0040de18  addiu a1,a1,0xfe4
0040de1c  addiu a2,a2,0xfec
0040de20  jalr t9
0040de24  _clear a0
0040de28  lw gp,0x28(sp)
0040de2c  nop
0040de30  lw t9,-0x7ea0(gp)
0040de34  nop
0040de38  jalr t9
0040de3c  _addiu a0,sp,0x240
0040de40  lw gp,0x28(sp)
0040de44  nop
0040de48  lw t9,-0x7f2c(gp)
0040de4c  addiu s2,sp,0x240
0040de50  lui a1,0x41
0040de54  move a0,s2
0040de58  addiu a1,a1,0x1f1c
0040de5c  jalr t9
0040de60  _addiu a2,sp,0x9c
0040de64  lw gp,0x28(sp)
0040de68  nop
0040de6c  lw t9,-0x7f98(gp)
0040de70  nop
0040de74  jalr t9
0040de78  _move a0,s2
0040de7c  lw gp,0x28(sp)
0040de80  beq v0,zero,0x0040df0c
0040de84  _nop
0040de88  lw t9,-0x7dcc(gp)
0040de8c  nop
0040de90  jalr t9
0040de94  _move a0,s2
0040de98  li v1,-0x1
0040de9c  lw gp,0x28(sp)
0040dea0  beq v0,v1,0x0040def4
0040dea4  _addiu a3,sp,0x90
0040dea8  lw t9,-0x7f2c(gp)
0040deac  lui a1,0x41
0040deb0  move a0,a3
0040deb4  addiu a1,a1,0x1514
0040deb8  move a2,v0
0040debc  jalr t9
0040dec0  _sw a3,0x5e4(sp)
0040dec4  lw gp,0x28(sp)
0040dec8  lw a3,0x5e4(sp)
0040decc  lui a1,0x41
0040ded0  lw t9,-0x7f48(gp)
0040ded4  lui a2,0x41
0040ded8  sw s1,0x10(sp)
0040dedc  addiu a1,a1,0xfe4
0040dee0  addiu a2,a2,0xfec
0040dee4  jalr t9
0040dee8  _clear a0
0040deec  lw gp,0x28(sp)
0040def0  nop
0040def4  lw t9,-0x7ea0(gp)
0040def8  nop
0040defc  jalr t9
0040df00  _addiu a0,sp,0x240
0040df04  lw gp,0x28(sp)
0040df08  nop
0040df0c  lw t9,-0x7f48(gp)
0040df10  lui a0,0x41
0040df14  lui a1,0x41
0040df18  lui a2,0x41
0040df1c  addiu a0,a0,0x1744
0040df20  addiu a1,a1,0x1550
0040df24  addiu a2,a2,0x1ca0
0040df28  jalr t9
0040df2c  _move a3,s1
0040df30  lw gp,0x28(sp)
0040df34  lui s8,0x41
0040df38  lui s7,0x41
0040df3c  addiu s8,s8,0xfe4
0040df40  addiu s7,s7,0xfec
0040df44  li s6,-0x1
0040df48  addiu s2,sp,0x90
0040df4c  lw t9,-0x7f98(gp)
0040df50  nop
0040df54  jalr t9
0040df58  _move a0,s5
0040df5c  lw gp,0x28(sp)
0040df60  nop
0040df64  lw v1,-0x7dcc(gp)
0040df68  lw t9,-0x7f98(gp)
0040df6c  beq v0,zero,0x0040dfd8
0040df70  _move a0,s5
0040df74  move t9,v1
0040df78  jalr t9
0040df7c  _nop
0040df80  lw gp,0x28(sp)
0040df84  lui a1,0x41
0040df88  move a0,s2
0040df8c  lw t9,-0x7f2c(gp)
0040df90  addiu a1,a1,0x1514
0040df94  beq v0,s6,0x0040e118
0040df98  _move a2,v0
0040df9c  jalr t9
0040dfa0  _nop
0040dfa4  lw gp,0x28(sp)
0040dfa8  clear a0
0040dfac  sw s1,0x10(sp)
0040dfb0  lw t9,-0x7f48(gp)
0040dfb4  move a1,s8
0040dfb8  move a2,s7
0040dfbc  jalr t9
0040dfc0  _move a3,s2
0040dfc4  lw gp,0x28(sp)
0040dfc8  nop
0040dfcc  lw t9,-0x7ea0(gp)
0040dfd0  b 0x0040e0d4
0040dfd4  _move a0,s5
0040dfd8  jalr t9
0040dfdc  _move a0,s4
0040dfe0  lw gp,0x28(sp)
0040dfe4  nop
0040dfe8  lw v1,-0x7dcc(gp)
0040dfec  lw t9,-0x7f98(gp)
0040dff0  beq v0,zero,0x0040e05c
0040dff4  _move a0,s4
0040dff8  move t9,v1
0040dffc  jalr t9
0040e000  _nop
0040e004  lw gp,0x28(sp)
0040e008  lui a1,0x41
0040e00c  move a0,s2
0040e010  lw t9,-0x7f2c(gp)
0040e014  addiu a1,a1,0x1514
0040e018  beq v0,s6,0x0040e118
0040e01c  _move a2,v0
0040e020  jalr t9
0040e024  _nop
0040e028  lw gp,0x28(sp)
0040e02c  clear a0
0040e030  sw s1,0x10(sp)
0040e034  lw t9,-0x7f48(gp)
0040e038  move a1,s8
0040e03c  move a2,s7
0040e040  jalr t9
0040e044  _move a3,s2
0040e048  lw gp,0x28(sp)
0040e04c  nop
0040e050  lw t9,-0x7ea0(gp)
0040e054  b 0x0040e0d4
0040e058  _move a0,s4
0040e05c  jalr t9
0040e060  _move a0,s3
0040e064  lw gp,0x28(sp)
0040e068  nop
0040e06c  lw t9,-0x7dcc(gp)
0040e070  beq v0,zero,0x0040e118
0040e074  _move a0,s3
0040e078  jalr t9
0040e07c  _nop
0040e080  lw gp,0x28(sp)
0040e084  lui a1,0x41
0040e088  move a0,s2
0040e08c  lw t9,-0x7f2c(gp)
0040e090  addiu a1,a1,0x1514
0040e094  beq v0,s6,0x0040e118
0040e098  _move a2,v0
0040e09c  jalr t9
0040e0a0  _nop
0040e0a4  lw gp,0x28(sp)
0040e0a8  clear a0
0040e0ac  sw s1,0x10(sp)
0040e0b0  lw t9,-0x7f48(gp)
0040e0b4  move a1,s8
0040e0b8  move a2,s7
0040e0bc  jalr t9
0040e0c0  _move a3,s2
0040e0c4  lw gp,0x28(sp)
0040e0c8  move a0,s3
0040e0cc  lw t9,-0x7ea0(gp)
0040e0d0  nop
0040e0d4  jalr t9
0040e0d8  _nop
0040e0dc  lw gp,0x28(sp)
0040e0e0  nop
0040e0e4  lw t9,-0x7e28(gp)
0040e0e8  nop
0040e0ec  jalr t9
0040e0f0  _li a0,0x1
0040e0f4  lw gp,0x28(sp)
0040e0f8  lui a0,0x41
0040e0fc  lw t9,-0x7e10(gp)
0040e100  nop
0040e104  jalr t9
0040e108  _addiu a0,a0,0x1f84
0040e10c  lw gp,0x28(sp)
0040e110  bgtz v0,0x0040df4c
0040e114  _nop
0040e118  lw t9,-0x7db4(gp)
0040e11c  clear a0
0040e120  move a1,s0
0040e124  jalr t9
0040e128  _addiu a2,sp,0x88
0040e12c  lw gp,0x28(sp)
0040e130  bne v0,zero,0x0040dc8c
0040e134  _nop
0040e138  lw t9,-0x7f98(gp)
0040e13c  lui s1,0x41
0040e140  jalr t9
0040e144  _addiu a0,s1,0x1f8c
0040e148  lw gp,0x28(sp)
0040e14c  beq v0,zero,0x0040e1e0
0040e150  _nop
0040e154  lw t9,-0x7dcc(gp)
0040e158  nop
0040e15c  jalr t9
0040e160  _addiu a0,s1,0x1f8c
0040e164  li v1,-0x1
0040e168  lw gp,0x28(sp)
0040e16c  beq v0,v1,0x0040e1c8
0040e170  _addiu a3,sp,0x90
0040e174  lw t9,-0x7f2c(gp)
0040e178  lui a1,0x41
0040e17c  move a0,a3
0040e180  addiu a1,a1,0x1514
0040e184  move a2,v0
0040e188  jalr t9
0040e18c  _sw a3,0x5e4(sp)
0040e190  lw gp,0x28(sp)
0040e194  lui v0,0x41
0040e198  lw a3,0x5e4(sp)
0040e19c  lw t9,-0x7f48(gp)
0040e1a0  addiu v0,v0,0x9e4
0040e1a4  lui a1,0x41
0040e1a8  lui a2,0x41
0040e1ac  sw v0,0x10(sp)
0040e1b0  addiu a1,a1,0xfe4
0040e1b4  addiu a2,a2,0xfec
0040e1b8  jalr t9
0040e1bc  _clear a0
0040e1c0  lw gp,0x28(sp)
0040e1c4  nop
0040e1c8  lw t9,-0x7ea0(gp)
0040e1cc  lui a0,0x41
0040e1d0  jalr t9
0040e1d4  _addiu a0,a0,0x1f8c
0040e1d8  lw gp,0x28(sp)
0040e1dc  nop
0040e1e0  lw t9,-0x7e20(gp)
0040e1e4  lui a0,0x41
0040e1e8  jalr t9
0040e1ec  _addiu a0,a0,0x1fa0
0040e1f0  lw gp,0x28(sp)
0040e1f4  lw a0,0x618(sp)
0040e1f8  lui a1,0x41
0040e1fc  lw t9,-0x7f14(gp)
0040e200  nop
0040e204  jalr t9
0040e208  _addiu a1,a1,0xfe4
0040e20c  lw gp,0x28(sp)
0040e210  beq v0,zero,0x0040f63c
0040e214  _nop
0040e218  lw t9,-0x7e14(gp)
0040e21c  lui a0,0x41
0040e220  jalr t9
0040e224  _addiu a0,a0,0x1fb4
0040e228  lw gp,0x28(sp)
0040e22c  lui a0,0x41
0040e230  lw t9,-0x7df8(gp)
0040e234  nop
0040e238  jalr t9
0040e23c  _addiu a0,a0,0x280
0040e240  lw gp,0x28(sp)
0040e244  beq v0,zero,0x0040e33c
0040e248  _li a0,0x16
0040e24c  lw t9,-0x7e2c(gp)
0040e250  nop
0040e254  jalr t9
0040e258  _addiu a1,sp,0x34
0040e25c  lw gp,0x28(sp)
0040e260  li a0,0x3b
0040e264  lw t9,-0x7e2c(gp)
0040e268  nop
0040e26c  jalr t9
0040e270  _addiu a1,sp,0x30
0040e274  lw gp,0x28(sp)
0040e278  li a0,0x3e
0040e27c  lw t9,-0x7e2c(gp)
0040e280  nop
0040e284  jalr t9
0040e288  _addiu a1,sp,0x3c
0040e28c  lw gp,0x28(sp)
0040e290  li a0,0x10e
0040e294  lw t9,-0x7e2c(gp)
0040e298  nop
0040e29c  jalr t9
0040e2a0  _addiu a1,sp,0x40
0040e2a4  lw gp,0x28(sp)
0040e2a8  li a0,0x23
0040e2ac  lw t9,-0x7e2c(gp)
0040e2b0  nop
0040e2b4  jalr t9
0040e2b8  _addiu a1,sp,0x48
0040e2bc  lw gp,0x28(sp)
0040e2c0  li a0,0x19
0040e2c4  lw t9,-0x7e2c(gp)
0040e2c8  nop
0040e2cc  jalr t9
0040e2d0  _addiu a1,sp,0x4c
0040e2d4  lw gp,0x28(sp)
0040e2d8  li a0,0x2d
0040e2dc  lw t9,-0x7e2c(gp)
0040e2e0  nop
0040e2e4  jalr t9
0040e2e8  _addiu a1,sp,0x50
0040e2ec  lw gp,0x28(sp)
0040e2f0  li a0,0x3c
0040e2f4  lw t9,-0x7e2c(gp)
0040e2f8  nop
0040e2fc  jalr t9
0040e300  _addiu a1,sp,0x44
0040e304  lw gp,0x28(sp)
0040e308  li a0,0x1c
0040e30c  lw t9,-0x7e2c(gp)
0040e310  nop
0040e314  jalr t9
0040e318  _addiu a1,sp,0x38
0040e31c  lw gp,0x28(sp)
0040e320  li a0,0x117
0040e324  lw t9,-0x7e2c(gp)
0040e328  nop
0040e32c  jalr t9
0040e330  _addiu a1,sp,0x8c
0040e334  lw gp,0x28(sp)
0040e338  nop
0040e33c  lw t9,-0x7d9c(gp)
0040e340  addiu s1,sp,0x2a4
0040e344  move a0,s1
0040e348  addiu a1,sp,0x4fc
0040e34c  jalr t9
0040e350  _sw zero,0x88(sp)
0040e354  lw gp,0x28(sp)
0040e358  move a0,s1
0040e35c  move a1,s0
0040e360  lw t9,-0x7db4(gp)
0040e364  addiu a2,sp,0x88
0040e368  jalr t9
0040e36c  _clear s1
0040e370  lw gp,0x28(sp)
0040e374  beq v0,zero,0x0040ee40
0040e378  _nop
0040e37c  lui s4,0x41
0040e380  lui s3,0x41
0040e384  addiu s4,s4,0x1ff0
0040e388  addiu s3,s3,0x9e4
0040e38c  clear s2
0040e390  sw zero,0x5c8(sp)
0040e394  sw zero,0x5d4(sp)
0040e398  clear s5
0040e39c  sw zero,0x5d8(sp)
0040e3a0  sw zero,0x5e0(sp)
0040e3a4  sw zero,0x5dc(sp)
0040e3a8  lw t9,-0x7d9c(gp)
0040e3ac  addiu s6,sp,0x9c
0040e3b0  move a1,v0
0040e3b4  jalr t9
0040e3b8  _move a0,s6
0040e3bc  lw gp,0x28(sp)
0040e3c0  lui a1,0x41
0040e3c4  move a0,s6
0040e3c8  lw t9,-0x7e94(gp)
0040e3cc  addiu a1,a1,0x18d0
0040e3d0  jalr t9
0040e3d4  _li a2,0x4
0040e3d8  lw gp,0x28(sp)
0040e3dc  bne v0,zero,0x0040ebb4
0040e3e0  _move a0,s6
0040e3e4  lw t9,-0x7f88(gp)
0040e3e8  nop
0040e3ec  jalr t9
0040e3f0  _clear s7
0040e3f4  sltiu v0,v0,0x9
0040e3f8  lw gp,0x28(sp)
0040e3fc  bne v0,zero,0x0040e40c
0040e400  _nop
0040e404  lb s7,0xa2(sp)
0040e408  lb s2,0xa3(sp)
0040e40c  lw t9,-0x7df8(gp)
0040e410  nop
0040e414  jalr t9
0040e418  _addiu a0,sp,0x9c
0040e41c  lw gp,0x28(sp)
0040e420  beq v0,zero,0x0040ebb4
0040e424  _li a0,0x16
0040e428  lw t9,-0x7e2c(gp)
0040e42c  nop
0040e430  jalr t9
0040e434  _addiu a1,sp,0x54
0040e438  lw gp,0x28(sp)
0040e43c  li a0,0x3b
0040e440  lw t9,-0x7e2c(gp)
0040e444  nop
0040e448  jalr t9
0040e44c  _addiu a1,sp,0x58
0040e450  lw gp,0x28(sp)
0040e454  li a0,0x3f
0040e458  lw t9,-0x7e2c(gp)
0040e45c  nop
0040e460  jalr t9
0040e464  _addiu a1,sp,0x5c
0040e468  lw gp,0x28(sp)
0040e46c  li a0,0x40
0040e470  lw t9,-0x7e2c(gp)
0040e474  nop
0040e478  jalr t9
0040e47c  _addiu a1,sp,0x60
0040e480  lw gp,0x28(sp)
0040e484  li a0,0x19
0040e488  lw t9,-0x7e2c(gp)
0040e48c  nop
0040e490  jalr t9
0040e494  _addiu a1,sp,0x64
0040e498  lw gp,0x28(sp)
0040e49c  li a0,0x1c
0040e4a0  lw t9,-0x7e2c(gp)
0040e4a4  nop
0040e4a8  jalr t9
0040e4ac  _addiu a1,sp,0x6c
0040e4b0  lw v0,0x54(sp)
0040e4b4  lw gp,0x28(sp)
0040e4b8  bne v0,zero,0x0040e4f0
0040e4bc  _nop
0040e4c0  lw v0,0x58(sp)
0040e4c4  nop
0040e4c8  slti v0,v0,0x4
0040e4cc  bne v0,zero,0x0040e4e8
0040e4d0  _li a0,0x22f
0040e4d4  lw t9,-0x7e2c(gp)
0040e4d8  nop
0040e4dc  jalr t9
0040e4e0  _addiu a1,sp,0x70
0040e4e4  lw gp,0x28(sp)
0040e4e8  lw v0,0x54(sp)
0040e4ec  nop
0040e4f0  bne v0,zero,0x0040e644
0040e4f4  _nop
0040e4f8  lw v0,0x58(sp)
0040e4fc  nop
0040e500  addiu v0,v0,-0x2
0040e504  sltiu v0,v0,0x2
0040e508  beq v0,zero,0x0040e644
0040e50c  _nop
0040e510  lw v0,0x5c(sp)
0040e514  nop
0040e518  beq v0,zero,0x0040e644
0040e51c  _nop
0040e520  lw v0,0x60(sp)
0040e524  nop
0040e528  beq v0,zero,0x0040e644
0040e52c  _nop
0040e530  lw t9,-0x7e2c(gp)
0040e534  li a0,0x45
0040e538  jalr t9
0040e53c  _addiu a1,sp,0x68
0040e540  lw v0,0x68(sp)
0040e544  lw gp,0x28(sp)
0040e548  addiu v0,v0,-0x3
0040e54c  sltiu v0,v0,0x2
0040e550  beq v0,zero,0x0040e644
0040e554  _nop
0040e558  lw t9,-0x7f2c(gp)
0040e55c  addiu s6,sp,0x9c
0040e560  addiu s8,sp,0x1dc
0040e564  lui a1,0x41
0040e568  move a0,s8
0040e56c  move a2,s6
0040e570  jalr t9
0040e574  _addiu a1,a1,0x1fd0
0040e578  lw gp,0x28(sp)
0040e57c  lui v0,0x41
0040e580  addiu v0,v0,0x1fec
0040e584  lw t9,-0x7f48(gp)
0040e588  lui a1,0x41
0040e58c  lui a2,0x41
0040e590  move a3,s6
0040e594  sw s8,0x10(sp)
0040e598  clear a0
0040e59c  addiu a1,a1,0x1920
0040e5a0  addiu a2,a2,0x1fe8
0040e5a4  sw v0,0x14(sp)
0040e5a8  jalr t9
0040e5ac  _sw s3,0x18(sp)
0040e5b0  lw gp,0x28(sp)
0040e5b4  lui v1,0x41
0040e5b8  addiu v1,v1,0x1fec
0040e5bc  lw t9,-0x7f48(gp)
0040e5c0  move a2,s6
0040e5c4  sw s8,0x14(sp)
0040e5c8  sw v1,0x10(sp)
0040e5cc  clear a0
0040e5d0  move a1,s4
0040e5d4  addiu a3,sp,0x12c
0040e5d8  jalr t9
0040e5dc  _sw s3,0x18(sp)
0040e5e0  lw gp,0x28(sp)
0040e5e4  addiu a0,sp,0x240
0040e5e8  lui a1,0x41
0040e5ec  lw t9,-0x7f2c(gp)
0040e5f0  move a2,s6
0040e5f4  addiu a1,a1,0x1ee8
0040e5f8  jalr t9
0040e5fc  _sw a0,0x5cc(sp)
0040e600  lw gp,0x28(sp)
0040e604  clear s6
0040e608  li s8,0xa
0040e60c  lw t9,-0x7f98(gp)
0040e610  lw a0,0x5cc(sp)
0040e614  jalr t9
0040e618  _addiu s6,s6,0x1
0040e61c  lw gp,0x28(sp)
0040e620  nop
0040e624  lw t9,-0x7e28(gp)
0040e628  bne v0,zero,0x0040e644
0040e62c  _li a0,0x1
0040e630  jalr t9
0040e634  _nop
0040e638  lw gp,0x28(sp)
0040e63c  bne s6,s8,0x0040e60c
0040e640  _nop
0040e644  lw v0,0x64(sp)
0040e648  nop
0040e64c  slti v1,v0,0x2
0040e650  beq v1,zero,0x0040e6a8
0040e654  _li v1,0x7
0040e658  lw t9,-0x7e2c(gp)
0040e65c  li a0,0x23
0040e660  jalr t9
0040e664  _addiu a1,sp,0x74
0040e668  lw gp,0x28(sp)
0040e66c  li a0,0x2d
0040e670  lw t9,-0x7e2c(gp)
0040e674  nop
0040e678  jalr t9
0040e67c  _addiu a1,sp,0x78
0040e680  lw v0,0x74(sp)
0040e684  lw gp,0x28(sp)
0040e688  bne v0,zero,0x0040e6d0
0040e68c  _li s6,0x1
0040e690  lw v0,0x78(sp)
0040e694  nop
0040e698  bne v0,zero,0x0040e6d0
0040e69c  _nop
0040e6a0  b 0x0040e6dc
0040e6a4  _clear s6
0040e6a8  beq v0,v1,0x0040e6d8
0040e6ac  _li v0,0x1
0040e6b0  lw v1,0x6c(sp)
0040e6b4  nop
0040e6b8  beq v1,v0,0x0040e6cc
0040e6bc  _nop
0040e6c0  clear s6
0040e6c4  b 0x0040e6e0
0040e6c8  _sw v0,0x5cc(sp)
0040e6cc  li s6,0x1
0040e6d0  b 0x0040e6e0
0040e6d4  _sw s6,0x5cc(sp)
0040e6d8  clear s6
0040e6dc  sw zero,0x5cc(sp)
0040e6e0  lw v0,0x54(sp)
0040e6e4  nop
0040e6e8  bne v0,zero,0x0040e804
0040e6ec  _nop
0040e6f0  lw v0,0x58(sp)
0040e6f4  nop
0040e6f8  slti v0,v0,0x4
0040e6fc  bne v0,zero,0x0040e804
0040e700  _nop
0040e704  lw v0,0x70(sp)
0040e708  nop
0040e70c  beq v0,zero,0x0040e804
0040e710  _addiu a0,sp,0x1dc
0040e714  lw t9,-0x7f2c(gp)
0040e718  addiu s8,sp,0x9c
0040e71c  lui a1,0x41
0040e720  move a2,s8
0040e724  sw a0,0x5d0(sp)
0040e728  jalr t9
0040e72c  _addiu a1,a1,0x1ff8
0040e730  lw gp,0x28(sp)
0040e734  lw a1,0x5d0(sp)
0040e738  lui a3,0x41
0040e73c  lw t9,-0x7f48(gp)
0040e740  sw a1,0x10(sp)
0040e744  addiu a3,a3,0x1d84
0040e748  lui a1,0x41
0040e74c  lui a2,0x41
0040e750  sw a3,0x14(sp)
0040e754  clear a0
0040e758  move a3,s8
0040e75c  addiu a1,a1,0x1920
0040e760  addiu a2,a2,0x1fe8
0040e764  jalr t9
0040e768  _sw s3,0x18(sp)
0040e76c  lw gp,0x28(sp)
0040e770  lw v0,0x5d0(sp)
0040e774  lui v1,0x41
0040e778  lw t9,-0x7f48(gp)
0040e77c  addiu v1,v1,0x1d84
0040e780  move a2,s8
0040e784  sw v1,0x10(sp)
0040e788  clear a0
0040e78c  move a1,s4
0040e790  addiu a3,sp,0x12c
0040e794  sw v0,0x14(sp)
0040e798  jalr t9
0040e79c  _sw s3,0x18(sp)
0040e7a0  lw gp,0x28(sp)
0040e7a4  addiu a0,sp,0x240
0040e7a8  lui a1,0x41
0040e7ac  lw t9,-0x7f2c(gp)
0040e7b0  move a2,s8
0040e7b4  addiu a1,a1,0x1ee8
0040e7b8  jalr t9
0040e7bc  _sw a0,0x5d0(sp)
0040e7c0  lw gp,0x28(sp)
0040e7c4  clear s8
0040e7c8  lw t9,-0x7f98(gp)
0040e7cc  lw a0,0x5d0(sp)
0040e7d0  jalr t9
0040e7d4  _addiu s8,s8,0x1
0040e7d8  lw gp,0x28(sp)
0040e7dc  nop
0040e7e0  lw t9,-0x7e28(gp)
0040e7e4  bne v0,zero,0x0040e804
0040e7e8  _li a0,0x1
0040e7ec  jalr t9
0040e7f0  _nop
0040e7f4  li a0,0xa
0040e7f8  lw gp,0x28(sp)
0040e7fc  bne s8,a0,0x0040e7c8
0040e800  _nop
0040e804  lw a1,0x5cc(sp)
0040e808  nop
0040e80c  beq a1,zero,0x0040e998
0040e810  _li v0,0x76
0040e814  lw v0,0x54(sp)
0040e818  nop
0040e81c  bne v0,zero,0x0040e998
0040e820  _li v0,0x76
0040e824  lw t9,-0x7f2c(gp)
0040e828  addiu a3,sp,0x9c
0040e82c  addiu s8,sp,0x1dc
0040e830  lui a1,0x41
0040e834  move a2,a3
0040e838  move a0,s8
0040e83c  addiu a1,a1,0x2010
0040e840  jalr t9
0040e844  _sw a3,0x5e4(sp)
0040e848  lw gp,0x28(sp)
0040e84c  lw a3,0x5e4(sp)
0040e850  lui a1,0x41
0040e854  lw t9,-0x7f48(gp)
0040e858  lui a2,0x41
0040e85c  sw s8,0x10(sp)
0040e860  sw s3,0x14(sp)
0040e864  clear a0
0040e868  addiu a1,a1,0x1920
0040e86c  jalr t9
0040e870  _addiu a2,a2,0x1fe8
0040e874  lw v1,0x58(sp)
0040e878  li v0,0x1
0040e87c  lw gp,0x28(sp)
0040e880  bne v1,v0,0x0040e8c4
0040e884  _move a1,s4
0040e888  lw t9,-0x7e2c(gp)
0040e88c  li a0,0x3c
0040e890  jalr t9
0040e894  _addiu a1,sp,0x7c
0040e898  lw gp,0x28(sp)
0040e89c  lw v0,0x7c(sp)
0040e8a0  lw t9,-0x7d9c(gp)
0040e8a4  bne v0,zero,0x0040e8b8
0040e8a8  _addiu a0,sp,0xec
0040e8ac  lui a1,0x41
0040e8b0  b 0x0040e8cc
0040e8b4  _addiu a1,a1,0x2024
0040e8b8  lui a1,0x41
0040e8bc  b 0x0040e8cc
0040e8c0  _addiu a1,a1,0x2034
0040e8c4  lw t9,-0x7d9c(gp)
0040e8c8  addiu a0,sp,0xec
0040e8cc  jalr t9
0040e8d0  _nop
0040e8d4  li v0,0x76
0040e8d8  lw gp,0x28(sp)
0040e8dc  bne s7,v0,0x0040e90c
0040e8e0  _li v0,0x61
0040e8e4  bne s2,v0,0x0040e90c
0040e8e8  _nop
0040e8ec  lw v0,0x30(sp)
0040e8f0  nop
0040e8f4  beq v0,zero,0x0040e90c
0040e8f8  _xori v0,v0,0x3
0040e8fc  lw a3,0x5d8(sp)
0040e900  li v1,0x1
0040e904  movn a3,v1,v0
0040e908  sw a3,0x5d8(sp)
0040e90c  lw v1,0x58(sp)
0040e910  li v0,0x2
0040e914  beq v1,v0,0x0040e994
0040e918  _nop
0040e91c  lw t9,0x5d8(sp)
0040e920  nop
0040e924  bne t9,zero,0x0040e994
0040e928  _nop
0040e92c  lw v1,0x6c(sp)
0040e930  nop
0040e934  bne v1,v0,0x0040e944
0040e938  _nop
0040e93c  beq s6,zero,0x0040e998
0040e940  _li v0,0x76
0040e944  lw t9,-0x7f48(gp)
0040e948  addiu v0,sp,0xec
0040e94c  sw v0,0x10(sp)
0040e950  addiu v0,sp,0x1dc
0040e954  sw v0,0x14(sp)
0040e958  sw s3,0x18(sp)
0040e95c  clear a0
0040e960  move a1,s4
0040e964  addiu a2,sp,0x9c
0040e968  jalr t9
0040e96c  _addiu a3,sp,0x12c
0040e970  li v0,0x76
0040e974  lw gp,0x28(sp)
0040e978  bne s7,v0,0x0040ea08
0040e97c  _li s1,0x1
0040e980  li v0,0x61
0040e984  beq s2,v0,0x0040ea20
0040e988  _nop
0040e98c  b 0x0040e9a0
0040e990  _sw s1,0x5dc(sp)
0040e994  li v0,0x76
0040e998  bne s7,v0,0x0040ea10
0040e99c  _li v0,0x78
0040e9a0  li v0,0x78
0040e9a4  bne s2,v0,0x0040f670
0040e9a8  _li v0,0x61
0040e9ac  lw v0,0x54(sp)
0040e9b0  nop
0040e9b4  bne v0,zero,0x0040ebb4
0040e9b8  _addiu a0,sp,0xec
0040e9bc  lw t9,-0x7f14(gp)
0040e9c0  nop
0040e9c4  jalr t9
0040e9c8  _move a1,s4
0040e9cc  lw gp,0x28(sp)
0040e9d0  bne v0,zero,0x0040e9e0
0040e9d4  _nop
0040e9d8  beq s6,zero,0x0040ebb4
0040e9dc  _nop
0040e9e0  lw t9,-0x7e70(gp)
0040e9e4  addiu s6,sp,0x10c
0040e9e8  move a0,s6
0040e9ec  jalr t9
0040e9f0  _move a1,s0
0040e9f4  lw gp,0x28(sp)
0040e9f8  move a0,s6
0040e9fc  lw t9,-0x7e70(gp)
0040ea00  b 0x0040ea6c
0040ea04  _addiu a1,sp,0x9c
0040ea08  sw s1,0x5dc(sp)
0040ea0c  li v0,0x78
0040ea10  bne s2,v0,0x0040eab0
0040ea14  _li a0,0x3e
0040ea18  b 0x0040ebb4
0040ea1c  _nop
0040ea20  sw s1,0x5e0(sp)
0040ea24  lw v0,0x54(sp)
0040ea28  nop
0040ea2c  bne v0,zero,0x0040ebb4
0040ea30  _nop
0040ea34  lw v0,0x3c(sp)
0040ea38  nop
0040ea3c  beq v0,zero,0x0040ea54
0040ea40  _nop
0040ea44  lw v0,0x5e0(sp)
0040ea48  nop
0040ea4c  beq v0,zero,0x0040ebb4
0040ea50  _nop
0040ea54  lb v0,0x434(sp)
0040ea58  addiu s6,sp,0x434
0040ea5c  bne v0,zero,0x0040ea80
0040ea60  _addiu a1,sp,0x9c
0040ea64  lw t9,-0x7d9c(gp)
0040ea68  move a0,s6
0040ea6c  jalr t9
0040ea70  _nop
0040ea74  lw gp,0x28(sp)
0040ea78  b 0x0040ebb4
0040ea7c  _nop
0040ea80  lw t9,-0x7f2c(gp)
0040ea84  addiu s7,sp,0xcc
0040ea88  move a2,a1
0040ea8c  lui a1,0x41
0040ea90  move a0,s7
0040ea94  jalr t9
0040ea98  _addiu a1,a1,0x1d7c
0040ea9c  lw gp,0x28(sp)
0040eaa0  move a0,s6
0040eaa4  lw t9,-0x7e70(gp)
0040eaa8  b 0x0040ea6c
0040eaac  _move a1,s7
0040eab0  lw t9,-0x7e2c(gp)
0040eab4  nop
0040eab8  jalr t9
0040eabc  _addiu a1,sp,0x84
0040eac0  lw gp,0x28(sp)
0040eac4  li a0,0x10e
0040eac8  lw t9,-0x7e2c(gp)
0040eacc  nop
0040ead0  jalr t9
0040ead4  _addiu a1,sp,0x80
0040ead8  lw v1,0x5dc(sp)
0040eadc  lw gp,0x28(sp)
0040eae0  bne v1,zero,0x0040eb08
0040eae4  _nop
0040eae8  lw v0,0x84(sp)
0040eaec  nop
0040eaf0  beq v0,zero,0x0040eb08
0040eaf4  _nop
0040eaf8  lw v0,0x80(sp)
0040eafc  nop
0040eb00  bne v0,zero,0x0040f680
0040eb04  _li v0,0x61
0040eb08  lb v0,0x434(sp)
0040eb0c  addiu s6,sp,0x434
0040eb10  bne v0,zero,0x0040eb24
0040eb14  _addiu a1,sp,0x9c
0040eb18  lw t9,-0x7d9c(gp)
0040eb1c  b 0x0040eb54
0040eb20  _move a0,s6
0040eb24  lw t9,-0x7f2c(gp)
0040eb28  addiu s7,sp,0xcc
0040eb2c  move a2,a1
0040eb30  lui a1,0x41
0040eb34  move a0,s7
0040eb38  jalr t9
0040eb3c  _addiu a1,a1,0x1d7c
0040eb40  lw gp,0x28(sp)
0040eb44  move a0,s6
0040eb48  move a1,s7
0040eb4c  lw t9,-0x7e70(gp)
0040eb50  nop
0040eb54  jalr t9
0040eb58  _nop
0040eb5c  lw gp,0x28(sp)
0040eb60  b 0x0040f680
0040eb64  _li v0,0x61
0040eb68  lw a0,0x54(sp)
0040eb6c  lw v0,0x58(sp)
0040eb70  nop
0040eb74  beq v0,zero,0x0040eb98
0040eb78  _movz s5,v1,a0
0040eb7c  li v1,0x3
0040eb80  beq v0,v1,0x0040eb98
0040eb84  _li v1,0x4
0040eb88  beq v0,v1,0x0040eb98
0040eb8c  _li v1,0x6
0040eb90  bne v0,v1,0x0040eba0
0040eb94  _nop
0040eb98  li a0,0x1
0040eb9c  sw a0,0x5d4(sp)
0040eba0  lw a1,0x5c8(sp)
0040eba4  lw v1,0x84(sp)
0040eba8  li v0,0x1
0040ebac  movz a1,v0,v1
0040ebb0  sw a1,0x5c8(sp)
0040ebb4  lw t9,-0x7db4(gp)
0040ebb8  addiu s6,sp,0x88
0040ebbc  clear a0
0040ebc0  move a1,s0
0040ebc4  jalr t9
0040ebc8  _move a2,s6
0040ebcc  lw gp,0x28(sp)
0040ebd0  bne v0,zero,0x0040e3a8
0040ebd4  _nop
0040ebd8  li v0,0x1
0040ebdc  bne s5,v0,0x0040ee40
0040ebe0  _nop
0040ebe4  lw a3,0x5d4(sp)
0040ebe8  nop
0040ebec  bne a3,s5,0x0040ee40
0040ebf0  _nop
0040ebf4  lw t9,0x5c8(sp)
0040ebf8  nop
0040ebfc  bne t9,a3,0x0040ee40
0040ec00  _addiu a1,sp,0x434
0040ec04  lw t9,-0x7d9c(gp)
0040ec08  addiu s1,sp,0x2a4
0040ec0c  move a0,s1
0040ec10  jalr t9
0040ec14  _sw zero,0x88(sp)
0040ec18  lw gp,0x28(sp)
0040ec1c  move a2,s6
0040ec20  move a0,s1
0040ec24  lw t9,-0x7db4(gp)
0040ec28  nop
0040ec2c  jalr t9
0040ec30  _move a1,s0
0040ec34  lw gp,0x28(sp)
0040ec38  beq v0,zero,0x0040eda0
0040ec3c  _move a2,v0
0040ec40  lui s3,0x41
0040ec44  addiu v0,sp,0x30
0040ec48  addiu s3,s3,0x1d7c
0040ec4c  addiu s2,sp,0x36c
0040ec50  addiu s1,sp,0xcc
0040ec54  sw v0,0x5c8(sp)
0040ec58  addiu s8,sp,0x3c
0040ec5c  li s7,0x3
0040ec60  li s5,0x4
0040ec64  li s4,0x6
0040ec68  lw t9,-0x7f14(gp)
0040ec6c  lui a1,0x41
0040ec70  move a0,a2
0040ec74  sw a2,0x5e4(sp)
0040ec78  jalr t9
0040ec7c  _addiu a1,a1,0x280
0040ec80  lw gp,0x28(sp)
0040ec84  lw a2,0x5e4(sp)
0040ec88  beq v0,zero,0x0040ecb4
0040ec8c  _nop
0040ec90  lw t9,-0x7f14(gp)
0040ec94  lui a1,0x41
0040ec98  move a0,a2
0040ec9c  jalr t9
0040eca0  _addiu a1,a1,0x2044
0040eca4  lw gp,0x28(sp)
0040eca8  lw a2,0x5e4(sp)
0040ecac  bne v0,zero,0x0040ed30
0040ecb0  _nop
0040ecb4  lw t9,-0x7df8(gp)
0040ecb8  move a0,a2
0040ecbc  jalr t9
0040ecc0  _sw a2,0x5e4(sp)
0040ecc4  lw gp,0x28(sp)
0040ecc8  lw a1,0x5c8(sp)
0040eccc  lw t9,-0x7e2c(gp)
0040ecd0  nop
0040ecd4  jalr t9
0040ecd8  _li a0,0x3b
0040ecdc  lw gp,0x28(sp)
0040ece0  li a0,0x3e
0040ece4  lw t9,-0x7e2c(gp)
0040ece8  nop
0040ecec  jalr t9
0040ecf0  _move a1,s8
0040ecf4  lw v0,0x30(sp)
0040ecf8  lw gp,0x28(sp)
0040ecfc  lw a2,0x5e4(sp)
0040ed00  beq v0,zero,0x0040ed20
0040ed04  _nop
0040ed08  beq v0,s7,0x0040ed20
0040ed0c  _nop
0040ed10  beq v0,s5,0x0040ed20
0040ed14  _nop
0040ed18  bne v0,s4,0x0040ed80
0040ed1c  _nop
0040ed20  lw v0,0x3c(sp)
0040ed24  nop
0040ed28  bne v0,zero,0x0040ed80
0040ed2c  _nop
0040ed30  lb v0,0x36c(sp)
0040ed34  nop
0040ed38  bne v0,zero,0x0040ed4c
0040ed3c  _move a0,s2
0040ed40  lw t9,-0x7d9c(gp)
0040ed44  b 0x0040ed70
0040ed48  _move a1,a2
0040ed4c  lw t9,-0x7f2c(gp)
0040ed50  move a0,s1
0040ed54  jalr t9
0040ed58  _move a1,s3
0040ed5c  lw gp,0x28(sp)
0040ed60  move a0,s2
0040ed64  move a1,s1
0040ed68  lw t9,-0x7e70(gp)
0040ed6c  nop
0040ed70  jalr t9
0040ed74  _nop
0040ed78  lw gp,0x28(sp)
0040ed7c  nop
0040ed80  lw t9,-0x7db4(gp)
0040ed84  move a2,s6
0040ed88  clear a0
0040ed8c  jalr t9
0040ed90  _move a1,s0
0040ed94  lw gp,0x28(sp)
0040ed98  bne v0,zero,0x0040ec68
0040ed9c  _move a2,v0
0040eda0  lw t9,-0x7f2c(gp)
0040eda4  addiu s1,sp,0x1dc
0040eda8  lui a1,0x41
0040edac  addiu a1,a1,0x204c
0040edb0  addiu a2,sp,0x12c
0040edb4  addiu a3,sp,0x36c
0040edb8  jalr t9
0040edbc  _move a0,s1
0040edc0  lw gp,0x28(sp)
0040edc4  move a0,s1
0040edc8  lw t9,-0x7e20(gp)
0040edcc  nop
0040edd0  jalr t9
0040edd4  _lui s1,0x41
0040edd8  lw gp,0x28(sp)
0040eddc  nop
0040ede0  lw t9,-0x7f98(gp)
0040ede4  nop
0040ede8  jalr t9
0040edec  _addiu a0,s1,0x2058
0040edf0  lw gp,0x28(sp)
0040edf4  beq v0,zero,0x0040ee14
0040edf8  _nop
0040edfc  lw t9,-0x7ea0(gp)
0040ee00  nop
0040ee04  jalr t9
0040ee08  _addiu a0,s1,0x2058
0040ee0c  lw gp,0x28(sp)
0040ee10  nop
0040ee14  lw t9,-0x7f48(gp)
0040ee18  lui a0,0x41
0040ee1c  lui a1,0x41
0040ee20  lui a3,0x41
0040ee24  addiu a0,a0,0x2058
0040ee28  addiu a1,a1,0x1550
0040ee2c  addiu a3,a3,0x9e4
0040ee30  jalr t9
0040ee34  _addiu a2,sp,0x1dc
0040ee38  lw gp,0x28(sp)
0040ee3c  li s1,0x1
0040ee40  lw t9,-0x7f98(gp)
0040ee44  lui a0,0x41
0040ee48  jalr t9
0040ee4c  _addiu a0,a0,0x206c
0040ee50  lw gp,0x28(sp)
0040ee54  beq v0,zero,0x0040f5e8
0040ee58  _addiu a0,sp,0x1dc
0040ee5c  lw t9,-0x7ee8(gp)
0040ee60  clear a1
0040ee64  jalr t9
0040ee68  _li a2,0x64
0040ee6c  lw gp,0x28(sp)
0040ee70  li a2,0x64
0040ee74  addiu a0,sp,0x240
0040ee78  lw t9,-0x7ee8(gp)
0040ee7c  clear a1
0040ee80  jalr t9
0040ee84  _addiu s2,sp,0x2a4
0040ee88  lw gp,0x28(sp)
0040ee8c  move a0,s2
0040ee90  addiu a1,sp,0x434
0040ee94  lw t9,-0x7d9c(gp)
0040ee98  nop
0040ee9c  jalr t9
0040eea0  _sw zero,0x88(sp)
0040eea4  lw gp,0x28(sp)
0040eea8  move a0,s2
0040eeac  move a1,s0
0040eeb0  lw t9,-0x7db4(gp)
0040eeb4  nop
0040eeb8  jalr t9
0040eebc  _addiu a2,sp,0x88
0040eec0  lw gp,0x28(sp)
0040eec4  beq v0,zero,0x0040f5e8
0040eec8  _move s2,v0
0040eecc  lui s5,0x41
0040eed0  lui s3,0x41
0040eed4  lui s4,0x41
0040eed8  addiu s5,s5,0x280
0040eedc  addiu s3,s3,0x9e4
0040eee0  addiu s4,s4,0x20d8
0040eee4  lw t9,-0x7ee8(gp)
0040eee8  addiu a0,sp,0x14c
0040eeec  clear a1
0040eef0  jalr t9
0040eef4  _li a2,0x28
0040eef8  lw gp,0x28(sp)
0040eefc  addiu a0,sp,0x174
0040ef00  clear a1
0040ef04  lw t9,-0x7ee8(gp)
0040ef08  nop
0040ef0c  jalr t9
0040ef10  _li a2,0x28
0040ef14  lw gp,0x28(sp)
0040ef18  move a0,s2
0040ef1c  lw t9,-0x7f14(gp)
0040ef20  nop
0040ef24  jalr t9
0040ef28  _move a1,s5
0040ef2c  lw gp,0x28(sp)
0040ef30  beq v0,zero,0x0040ef54
0040ef34  _lui a1,0x41
0040ef38  lw t9,-0x7f14(gp)
0040ef3c  addiu a1,a1,0x2044
0040ef40  jalr t9
0040ef44  _move a0,s2
0040ef48  lw gp,0x28(sp)
0040ef4c  bne v0,zero,0x0040f5c8
0040ef50  _nop
0040ef54  lw t9,-0x7df8(gp)
0040ef58  nop
0040ef5c  jalr t9
0040ef60  _move a0,s2
0040ef64  lw gp,0x28(sp)
0040ef68  li a0,0x3b
0040ef6c  lw t9,-0x7e2c(gp)
0040ef70  nop
0040ef74  jalr t9
0040ef78  _addiu a1,sp,0x30
0040ef7c  lw gp,0x28(sp)
0040ef80  li a0,0x23
0040ef84  lw t9,-0x7e2c(gp)
0040ef88  nop
0040ef8c  jalr t9
0040ef90  _addiu a1,sp,0x48
0040ef94  lw gp,0x28(sp)
0040ef98  li a0,0x19
0040ef9c  lw t9,-0x7e2c(gp)
0040efa0  nop
0040efa4  jalr t9
0040efa8  _addiu a1,sp,0x4c
0040efac  lw gp,0x28(sp)
0040efb0  li a0,0x2d
0040efb4  lw t9,-0x7e2c(gp)
0040efb8  nop
0040efbc  jalr t9
0040efc0  _addiu a1,sp,0x50
0040efc4  lw gp,0x28(sp)
0040efc8  li a0,0x1c
0040efcc  lw t9,-0x7e2c(gp)
0040efd0  nop
0040efd4  jalr t9
0040efd8  _addiu a1,sp,0x38
0040efdc  lw gp,0x28(sp)
0040efe0  li a0,0x117
0040efe4  lw t9,-0x7e2c(gp)
0040efe8  nop
0040efec  jalr t9
0040eff0  _addiu a1,sp,0x8c
0040eff4  lw s6,0x4c(sp)
0040eff8  lw gp,0x28(sp)
0040effc  sw zero,0x34(sp)
0040f000  slti v0,s6,0x2
0040f004  sw zero,0x44(sp)
0040f008  beq v0,zero,0x0040f028
0040f00c  _xori s7,s6,0x7
0040f010  lw v0,0x48(sp)
0040f014  nop
0040f018  bne v0,zero,0x0040f02c
0040f01c  _li s7,0x1
0040f020  lw s7,0x50(sp)
0040f024  nop
0040f028  sltu s7,zero,s7
0040f02c  lw t9,-0x7f14(gp)
0040f030  move a0,s2
0040f034  jalr t9
0040f038  _move a1,s5
0040f03c  lw gp,0x28(sp)
0040f040  bne v0,zero,0x0040f068
0040f044  _nop
0040f048  lw v0,0x40(sp)
0040f04c  nop
0040f050  bne v0,zero,0x0040f588
0040f054  _li v0,0x2
0040f058  lw v1,0x30(sp)
0040f05c  nop
0040f060  beq v1,v0,0x0040f588
0040f064  _nop
0040f068  lw v0,0x30(sp)
0040f06c  nop
0040f070  bne v0,zero,0x0040f0a8
0040f074  _slti v0,s6,0x2
0040f078  beq v0,zero,0x0040f090
0040f07c  _li v0,0x7
0040f080  bne s7,zero,0x0040f588
0040f084  _nop
0040f088  b 0x0040f0a8
0040f08c  _nop
0040f090  beq s6,v0,0x0040f0a8
0040f094  _li v0,0x1
0040f098  lw v1,0x38(sp)
0040f09c  nop
0040f0a0  beq v1,v0,0x0040f588
0040f0a4  _nop
0040f0a8  lw t9,-0x7f98(gp)
0040f0ac  lui v1,0x41
0040f0b0  addiu v0,sp,0x19c
0040f0b4  addiu v1,v1,0x1f84
0040f0b8  lui a0,0x41
0040f0bc  sw zero,0xc(v0)
0040f0c0  sw zero,0x4(v0)
0040f0c4  sw zero,0x8(v0)
0040f0c8  sw v1,0x19c(sp)
0040f0cc  jalr t9
0040f0d0  _addiu a0,a0,0x2078
0040f0d4  lw gp,0x28(sp)
0040f0d8  bne v0,zero,0x0040f160
0040f0dc  _lui s1,0x41
0040f0e0  lw t9,-0x7f98(gp)
0040f0e4  nop
0040f0e8  jalr t9
0040f0ec  _addiu a0,s1,0x2098
0040f0f0  lw gp,0x28(sp)
0040f0f4  beq v0,zero,0x0040f124
0040f0f8  _lui a1,0x41
0040f0fc  lw t9,-0x7f48(gp)
0040f100  lui a3,0x41
0040f104  sw s3,0x10(sp)
0040f108  addiu a1,a1,0x15bc
0040f10c  addiu a2,s1,0x2098
0040f110  addiu a3,a3,0x20a4
0040f114  jalr t9
0040f118  _clear a0
0040f11c  lw gp,0x28(sp)
0040f120  nop
0040f124  lw t9,-0x7f48(gp)
0040f128  lui a1,0x41
0040f12c  lui a2,0x41
0040f130  addiu a1,a1,0x20a8
0040f134  addiu a2,a2,0x2098
0040f138  clear a0
0040f13c  jalr t9
0040f140  _move a3,s3
0040f144  lw gp,0x28(sp)
0040f148  lui a0,0x41
0040f14c  lw t9,-0x7e20(gp)
0040f150  nop
0040f154  jalr t9
0040f158  _addiu a0,a0,0x20b0
0040f15c  lw gp,0x28(sp)
0040f160  lw v1,0x30(sp)
0040f164  li v0,0x1
0040f168  bne v1,v0,0x0040f190
0040f16c  _lui v0,0x41
0040f170  addiu v0,v0,0x20d0
0040f174  sw v0,0x1a0(sp)
0040f178  lui v0,0x41
0040f17c  addiu v0,v0,0x1cac
0040f180  sw v0,0x1a4(sp)
0040f184  sw zero,0x8c(sp)
0040f188  b 0x0040f198
0040f18c  _li s1,0x3
0040f190  sw s4,0x1a0(sp)
0040f194  li s1,0x2
0040f198  lw v1,0x8c(sp)
0040f19c  li v0,0x1
0040f1a0  bne v1,v0,0x0040f24c
0040f1a4  _lui t1,0x41
0040f1a8  lw t9,-0x7f48(gp)
0040f1ac  lui t0,0x41
0040f1b0  lui v1,0x41
0040f1b4  addiu t1,t1,0x20e0
0040f1b8  addiu t0,t0,0x1c10
0040f1bc  addiu v1,v1,0x20f0
0040f1c0  addiu s8,sp,0x12c
0040f1c4  lui s7,0x41
0040f1c8  lui s6,0x41
0040f1cc  lui a2,0x41
0040f1d0  addiu a2,a2,0x1dbc
0040f1d4  sw t1,0x10(sp)
0040f1d8  sw t0,0x14(sp)
0040f1dc  sw v1,0x18(sp)
0040f1e0  clear a0
0040f1e4  addiu a1,s7,0x1c18
0040f1e8  addiu a3,s6,0x1c24
0040f1ec  sw v1,0x5ec(sp)
0040f1f0  sw t0,0x5e8(sp)
0040f1f4  sw t1,0x5e4(sp)
0040f1f8  sw s8,0x1c(sp)
0040f1fc  jalr t9
0040f200  _sw s3,0x20(sp)
0040f204  lw gp,0x28(sp)
0040f208  lw t1,0x5e4(sp)
0040f20c  lw t0,0x5e8(sp)
0040f210  lw v1,0x5ec(sp)
0040f214  lw t9,-0x7f48(gp)
0040f218  lui a2,0x41
0040f21c  sw t1,0x10(sp)
0040f220  sw t0,0x14(sp)
0040f224  sw v1,0x18(sp)
0040f228  sw s8,0x1c(sp)
0040f22c  sw s3,0x20(sp)
0040f230  addiu a1,s7,0x1c18
0040f234  addiu a2,a2,0x1c20
0040f238  addiu a3,s6,0x1c24
0040f23c  jalr t9
0040f240  _clear a0
0040f244  lw gp,0x28(sp)
0040f248  nop
0040f24c  lw t9,-0x7f2c(gp)
0040f250  addiu s6,sp,0x14c
0040f254  lui a1,0x41
0040f258  move a0,s6
0040f25c  move a2,s2
0040f260  jalr t9
0040f264  _addiu a1,a1,0x2100
0040f268  lw gp,0x28(sp)
0040f26c  lui a3,0x41
0040f270  lui a1,0x41
0040f274  lw t9,-0x7f48(gp)
0040f278  lui a2,0x41
0040f27c  addiu a3,a3,0x2124
0040f280  addiu a1,a1,0x1920
0040f284  addiu a2,a2,0x2114
0040f288  sw s6,0x10(sp)
0040f28c  sw s2,0x14(sp)
0040f290  clear a0
0040f294  jalr t9
0040f298  _sw s3,0x18(sp)
0040f29c  addiu a1,s1,0x1
0040f2a0  lw gp,0x28(sp)
0040f2a4  addiu s7,sp,0x30
0040f2a8  sll a1,a1,0x2
0040f2ac  sll a2,s1,0x2
0040f2b0  lui a3,0x41
0040f2b4  addu a2,s7,a2
0040f2b8  addu a1,s7,a1
0040f2bc  addiu a3,a3,0x2134
0040f2c0  addiu a0,s1,0x2
0040f2c4  sw a3,0x16c(a2)
0040f2c8  addiu v1,s1,0x3
0040f2cc  sw s6,0x16c(a1)
0040f2d0  addiu v0,s1,0x4
0040f2d4  sll a0,a0,0x2
0040f2d8  lui a1,0x41
0040f2dc  lw t9,-0x7f2c(gp)
0040f2e0  addu a0,s7,a0
0040f2e4  addiu a1,a1,0x2138
0040f2e8  sll v1,v1,0x2
0040f2ec  sll v0,v0,0x2
0040f2f0  lui a3,0x41
0040f2f4  sw a1,0x16c(a0)
0040f2f8  addu v1,s7,v1
0040f2fc  addiu a3,a3,0x213c
0040f300  addu v0,s7,v0
0040f304  addiu s8,sp,0x174
0040f308  lui a1,0x41
0040f30c  sw s2,0x16c(v1)
0040f310  move a2,s2
0040f314  sw a3,0x16c(v0)
0040f318  addiu a1,a1,0x2140
0040f31c  jalr t9
0040f320  _move a0,s8
0040f324  lw gp,0x28(sp)
0040f328  addiu s2,s1,0x5
0040f32c  sll s2,s2,0x2
0040f330  lw t9,-0x7f98(gp)
0040f334  addu s2,s7,s2
0040f338  lui s6,0x41
0040f33c  sw s8,0x16c(s2)
0040f340  jalr t9
0040f344  _addiu a0,s6,0x2154
0040f348  lw gp,0x28(sp)
0040f34c  beq v0,zero,0x0040f37c
0040f350  _addiu s2,s1,0x6
0040f354  lw t9,-0x7ea0(gp)
0040f358  sll s2,s2,0x2
0040f35c  lui v0,0x41
0040f360  addu s7,s7,s2
0040f364  addiu v0,v0,0x2168
0040f368  sw v0,0x16c(s7)
0040f36c  jalr t9
0040f370  _addiu a0,s6,0x2154
0040f374  lw gp,0x28(sp)
0040f378  addiu s2,s1,0x7
0040f37c  lw t9,-0x7f98(gp)
0040f380  lui s1,0x41
0040f384  jalr t9
0040f388  _addiu a0,s1,0x2174
0040f38c  lw gp,0x28(sp)
0040f390  beq v0,zero,0x0040f3b4
0040f394  _sll v0,s2,0x2
0040f398  lw t9,-0x7ea0(gp)
0040f39c  addu v0,sp,v0
0040f3a0  sw s4,0x19c(v0)
0040f3a4  jalr t9
0040f3a8  _addiu a0,s1,0x2174
0040f3ac  lw gp,0x28(sp)
0040f3b0  addiu s2,s2,0x1
0040f3b4  lw t9,-0x7f98(gp)
0040f3b8  lui s1,0x41
0040f3bc  jalr t9
0040f3c0  _addiu a0,s1,0x2188
0040f3c4  lw gp,0x28(sp)
0040f3c8  beq v0,zero,0x0040f47c
0040f3cc  _lui a1,0x41
0040f3d0  lw t9,-0x7ee0(gp)
0040f3d4  addiu a0,s1,0x2188
0040f3d8  jalr t9
0040f3dc  _addiu a1,a1,0x1d04
0040f3e0  lw gp,0x28(sp)
0040f3e4  beq v0,zero,0x0040f424
0040f3e8  _move s1,v0
0040f3ec  lw t9,-0x7df0(gp)
0040f3f0  lui a1,0x41
0040f3f4  addiu a1,a1,0x2054
0040f3f8  move a0,v0
0040f3fc  jalr t9
0040f400  _addiu a2,sp,0x240
0040f404  lw gp,0x28(sp)
0040f408  nop
0040f40c  lw t9,-0x7ef8(gp)
0040f410  nop
0040f414  jalr t9
0040f418  _move a0,s1
0040f41c  lw gp,0x28(sp)
0040f420  nop
0040f424  lw t9,-0x7d9c(gp)
0040f428  addiu s1,sp,0xac
0040f42c  move a0,s1
0040f430  jalr t9
0040f434  _addiu a1,sp,0x240
0040f438  lw gp,0x28(sp)
0040f43c  addiu v1,s2,0x1
0040f440  sll a0,s2,0x2
0040f444  addiu v0,sp,0x30
0040f448  sll v1,v1,0x2
0040f44c  addu v1,v0,v1
0040f450  addu v0,v0,a0
0040f454  lui a0,0x41
0040f458  lw t9,-0x7ea0(gp)
0040f45c  addiu a0,a0,0x219c
0040f460  sw a0,0x16c(v0)
0040f464  lui a0,0x41
0040f468  sw s1,0x16c(v1)
0040f46c  jalr t9
0040f470  _addiu a0,a0,0x2188
0040f474  lw gp,0x28(sp)
0040f478  addiu s2,s2,0x2
0040f47c  lw t9,-0x7f98(gp)
0040f480  lui s1,0x41
0040f484  jalr t9
0040f488  _addiu a0,s1,0x21a8
0040f48c  lw gp,0x28(sp)
0040f490  beq v0,zero,0x0040f54c
0040f494  _addiu v1,s2,0x1
0040f498  lw t9,-0x7ee0(gp)
0040f49c  lui a1,0x41
0040f4a0  addiu a0,s1,0x21a8
0040f4a4  jalr t9
0040f4a8  _addiu a1,a1,0x1d04
0040f4ac  lw gp,0x28(sp)
0040f4b0  beq v0,zero,0x0040f4f0
0040f4b4  _move s1,v0
0040f4b8  lw t9,-0x7df0(gp)
0040f4bc  lui a1,0x41
0040f4c0  addiu a1,a1,0x2054
0040f4c4  move a0,v0
0040f4c8  jalr t9
0040f4cc  _addiu a2,sp,0x240
0040f4d0  lw gp,0x28(sp)
0040f4d4  nop
0040f4d8  lw t9,-0x7ef8(gp)
0040f4dc  nop
0040f4e0  jalr t9
0040f4e4  _move a0,s1
0040f4e8  lw gp,0x28(sp)
0040f4ec  nop
0040f4f0  lw t9,-0x7d9c(gp)
0040f4f4  addiu s1,sp,0xbc
0040f4f8  move a0,s1
0040f4fc  jalr t9
0040f500  _addiu a1,sp,0x240
0040f504  lw gp,0x28(sp)
0040f508  addiu v1,s2,0x1
0040f50c  sll a0,s2,0x2
0040f510  lw t9,-0x7ea0(gp)
0040f514  addiu v0,sp,0x30
0040f518  sll v1,v1,0x2
0040f51c  lui a1,0x41
0040f520  addu v1,v0,v1
0040f524  addiu a1,a1,0x21bc
0040f528  addu v0,v0,a0
0040f52c  lui a0,0x41
0040f530  sw a1,0x16c(v0)
0040f534  addiu a0,a0,0x21a8
0040f538  jalr t9
0040f53c  _sw s1,0x16c(v1)
0040f540  lw gp,0x28(sp)
0040f544  addiu s2,s2,0x2
0040f548  addiu v1,s2,0x1
0040f54c  lw t9,-0x7f60(gp)
0040f550  addiu v0,sp,0x30
0040f554  sll v1,v1,0x2
0040f558  sll s2,s2,0x2
0040f55c  lui a3,0x41
0040f560  addu v1,v0,v1
0040f564  addiu a3,a3,0x21c8
0040f568  addu v0,v0,s2
0040f56c  sw a3,0x16c(v0)
0040f570  addiu a0,sp,0x19c
0040f574  sw zero,0x16c(v1)
0040f578  jalr t9
0040f57c  _clear a1
0040f580  lw gp,0x28(sp)
0040f584  li s1,0x1
0040f588  li s2,0x5
0040f58c  addiu s6,sp,0x174
0040f590  lw t9,-0x7f98(gp)
0040f594  nop
0040f598  jalr t9
0040f59c  _move a0,s6
0040f5a0  lw gp,0x28(sp)
0040f5a4  bne v0,zero,0x0040f5c8
0040f5a8  _li a0,0x1
0040f5ac  lw t9,-0x7e28(gp)
0040f5b0  nop
0040f5b4  jalr t9
0040f5b8  _addiu s2,s2,-0x1
0040f5bc  lw gp,0x28(sp)
0040f5c0  bne s2,zero,0x0040f590
0040f5c4  _nop
0040f5c8  lw t9,-0x7db4(gp)
0040f5cc  clear a0
0040f5d0  move a1,s0
0040f5d4  jalr t9
0040f5d8  _addiu a2,sp,0x88
0040f5dc  lw gp,0x28(sp)
0040f5e0  bne v0,zero,0x0040eee4
0040f5e4  _move s2,v0
0040f5e8  beq s1,zero,0x0040f63c
0040f5ec  _addiu a2,sp,0x434
0040f5f0  lb v0,0x10c(sp)
0040f5f4  lw t9,-0x7f2c(gp)
0040f5f8  beq v0,zero,0x0040f618
0040f5fc  _addiu a0,sp,0x1dc
0040f600  lui a1,0x41
0040f604  addiu a1,a1,0x21d0
0040f608  jalr t9
0040f60c  _addiu a3,sp,0x10c
0040f610  b 0x0040f624
0040f614  _nop
0040f618  lui a1,0x41
0040f61c  jalr t9
0040f620  _addiu a1,a1,0x21e0
0040f624  lw gp,0x28(sp)
0040f628  nop
0040f62c  lw t9,-0x7e20(gp)
0040f630  nop
0040f634  jalr t9
0040f638  _addiu a0,sp,0x1dc
0040f63c  lw ra,0x614(sp)
0040f640  lw s8,0x610(sp)
0040f644  lw s7,0x60c(sp)
0040f648  lw s6,0x608(sp)
0040f64c  lw s5,0x604(sp)
0040f650  lw s4,0x600(sp)
0040f654  lw s3,0x5fc(sp)
0040f658  lw s2,0x5f8(sp)
0040f65c  lw s1,0x5f4(sp)
0040f660  lw s0,0x5f0(sp)
0040f664  clear v0
0040f668  jr ra
0040f66c  _addiu sp,sp,0x618
0040f670  bne s2,v0,0x0040ebb4
0040f674  _nop
0040f678  b 0x0040ea24
0040f67c  _nop
0040f680  beq s2,v0,0x0040ebb4
0040f684  _li v1,0x1
0040f688  b 0x0040eb68
0040f68c  _nop
