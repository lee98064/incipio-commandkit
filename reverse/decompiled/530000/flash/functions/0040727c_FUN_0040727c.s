# FUN_0040727c @ 0040727c
0040727c  addiu sp,sp,-0x210
00407280  sw ra,0x20c(sp)
00407284  sw s3,0x208(sp)
00407288  sw s2,0x204(sp)
0040728c  sw s1,0x200(sp)
00407290  sw s0,0x1fc(sp)
00407294  lui gp,0x43
00407298  addiu gp,gp,-0x4bb0
0040729c  sw gp,0x28(sp)
004072a0  lw t9,-0x7e7c(gp)
004072a4  lui a1,0x42
004072a8  addiu a1,a1,0x33f8
004072ac  addiu a0,sp,0xf8
004072b0  li a2,0x30
004072b4  jalr t9
004072b8  _sw zero,0x30(sp)
004072bc  lw gp,0x28(sp)
004072c0  nop
004072c4  lw t9,-0x7fa4(gp)
004072c8  nop
004072cc  jalr t9
004072d0  _nop
004072d4  lw gp,0x28(sp)
004072d8  beq v0,zero,0x0040755c
004072dc  _nop
004072e0  lw t9,-0x7ea0(gp)
004072e4  nop
004072e8  jalr t9
004072ec  _nop
004072f0  lw gp,0x28(sp)
004072f4  lui a0,0x41
004072f8  lui a1,0x41
004072fc  lw t9,-0x7f40(gp)
00407300  addiu a0,a0,0x1af4
00407304  jalr t9
00407308  _addiu a1,a1,0x1b7c
0040730c  lw gp,0x28(sp)
00407310  bne v0,zero,0x00407328
00407314  _move s0,v0
00407318  lui a0,0x41
0040731c  lw t9,-0x7e8c(gp)
00407320  b 0x0040734c
00407324  _addiu a0,a0,0x1b04
00407328  lw t9,-0x7e74(gp)
0040732c  addiu a0,sp,0x128
00407330  li a1,0xc8
00407334  jalr t9
00407338  _move a2,v0
0040733c  lw gp,0x28(sp)
00407340  move a0,s0
00407344  lw t9,-0x7f54(gp)
00407348  nop
0040734c  jalr t9
00407350  _addiu s0,sp,0xac
00407354  lw gp,0x28(sp)
00407358  lui a1,0x41
0040735c  lw t9,-0x7f38(gp)
00407360  addiu a1,a1,0x1b20
00407364  move a0,s0
00407368  jalr t9
0040736c  _clear a2
00407370  lw gp,0x28(sp)
00407374  bne v0,zero,0x004073dc
00407378  _move a0,s0
0040737c  lw t9,-0x7f60(gp)
00407380  addiu a1,sp,0x128
00407384  li a2,0x2
00407388  addiu a3,sp,0x38
0040738c  jalr t9
00407390  _sw zero,0x10(sp)
00407394  lw gp,0x28(sp)
00407398  sw v0,0x1f0(sp)
0040739c  lw t9,-0x7fa8(gp)
004073a0  nop
004073a4  jalr t9
004073a8  _move a0,s0
004073ac  lw v0,0x1f0(sp)
004073b0  lw gp,0x28(sp)
004073b4  bne v0,zero,0x004073dc
004073b8  _nop
004073bc  lw v0,0x40(sp)
004073c0  nop
004073c4  bltz v0,0x004073dc
004073c8  _nop
004073cc  lw v0,0x44(sp)
004073d0  nop
004073d4  addu v0,sp,v0
004073d8  sb zero,0x128(v0)
004073dc  lw t9,-0x7f44(gp)
004073e0  addiu s1,sp,0xcc
004073e4  move a0,s1
004073e8  clear a1
004073ec  jalr t9
004073f0  _li a2,0x2c
004073f4  addiu v0,sp,0x70
004073f8  sw v0,0x10(sp)
004073fc  addiu v0,sp,0xd4
00407400  sw v0,0x14(sp)
00407404  addiu v0,sp,0xd0
00407408  lw gp,0x28(sp)
0040740c  sw v0,0x18(sp)
00407410  addiu v0,sp,0x98
00407414  sw v0,0x20(sp)
00407418  addiu v0,sp,0x84
0040741c  sw v0,0x24(sp)
00407420  lw v0,0x40(sp)
00407424  lw t9,-0x7f2c(gp)
00407428  addiu s0,sp,0x5c
0040742c  addiu a0,sp,0x128
00407430  lui a1,0x41
00407434  sw s1,0x1c(sp)
00407438  addu a0,a0,v0
0040743c  addiu a1,a1,0x1b38
00407440  addiu a2,sp,0x48
00407444  jalr t9
00407448  _move a3,s0
0040744c  lw gp,0x28(sp)
00407450  li v0,-0x1
00407454  sw v0,0xec(sp)
00407458  addiu s2,sp,0xf8
0040745c  clear s1
00407460  li s3,0xc
00407464  lw t9,-0x7f64(gp)
00407468  lw a0,0x0(s2)
0040746c  move a1,s0
00407470  jalr t9
00407474  _addiu s2,s2,0x4
00407478  lw gp,0x28(sp)
0040747c  bne v0,zero,0x00407490
00407480  _addiu s1,s1,0x1
00407484  addiu s1,s1,-0x1
00407488  b 0x00407498
0040748c  _sw s1,0xdc(sp)
00407490  bne s1,s3,0x00407464
00407494  _nop
00407498  lw t9,-0x7f98(gp)
0040749c  nop
004074a0  jalr t9
004074a4  _addiu a0,sp,0x84
004074a8  lw gp,0x28(sp)
004074ac  addiu v0,v0,-0x76c
004074b0  addiu a0,sp,0x70
004074b4  lw t9,-0x7f98(gp)
004074b8  nop
004074bc  jalr t9
004074c0  _sw v0,0xe0(sp)
004074c4  lw gp,0x28(sp)
004074c8  sw v0,0xd8(sp)
004074cc  lw t9,-0x7efc(gp)
004074d0  nop
004074d4  jalr t9
004074d8  _addiu a0,sp,0xcc
004074dc  lw gp,0x28(sp)
004074e0  bgez v0,0x00407508
004074e4  _sw v0,0x34(sp)
004074e8  lw v0,-0x7f74(gp)
004074ec  lw t9,-0x7fb0(gp)
004074f0  lui a0,0x41
004074f4  lw a1,0x0(v0)
004074f8  jalr t9
004074fc  _addiu a0,a0,0x1b50
00407500  lw gp,0x28(sp)
00407504  nop
00407508  lw t9,-0x7f94(gp)
0040750c  nop
00407510  jalr t9
00407514  _addiu a0,sp,0x34
00407518  lw gp,0x28(sp)
0040751c  bgez v0,0x00407540
00407520  _lui a0,0x41
00407524  lw v0,-0x7f74(gp)
00407528  lw t9,-0x7fb0(gp)
0040752c  lw a1,0x0(v0)
00407530  jalr t9
00407534  _addiu a0,a0,0x1b68
00407538  lw gp,0x28(sp)
0040753c  nop
00407540  lw t9,-0x7fa4(gp)
00407544  nop
00407548  jalr t9
0040754c  _nop
00407550  lw gp,0x28(sp)
00407554  bne v0,zero,0x00407574
00407558  _nop
0040755c  lw t9,-0x7e8c(gp)
00407560  lui a0,0x41
00407564  jalr t9
00407568  _addiu a0,a0,0x1ac0
0040756c  b 0x004076a0
00407570  _li v0,-0x1
00407574  lw t9,-0x7ea4(gp)
00407578  li a0,0x141
0040757c  jalr t9
00407580  _addiu a1,sp,0x30
00407584  lw v0,0x30(sp)
00407588  lw gp,0x28(sp)
0040758c  beq v0,zero,0x0040768c
00407590  _addiu v0,v0,-0x76c
00407594  lw t9,-0x7ea4(gp)
00407598  li a0,0x142
0040759c  addiu a1,sp,0xdc
004075a0  jalr t9
004075a4  _sw v0,0xe0(sp)
004075a8  lw gp,0x28(sp)
004075ac  li a0,0x143
004075b0  addiu a1,sp,0xd8
004075b4  lw t9,-0x7ea4(gp)
004075b8  nop
004075bc  jalr t9
004075c0  _addiu s0,sp,0xcc
004075c4  lw gp,0x28(sp)
004075c8  li a0,0x144
004075cc  lw t9,-0x7ea4(gp)
004075d0  nop
004075d4  jalr t9
004075d8  _addiu a1,sp,0xd4
004075dc  lw gp,0x28(sp)
004075e0  li a0,0x145
004075e4  lw t9,-0x7ea4(gp)
004075e8  nop
004075ec  jalr t9
004075f0  _addiu a1,sp,0xd0
004075f4  lw gp,0x28(sp)
004075f8  li a0,0x146
004075fc  lw t9,-0x7ea4(gp)
00407600  nop
00407604  jalr t9
00407608  _move a1,s0
0040760c  lw gp,0x28(sp)
00407610  nop
00407614  lw t9,-0x7efc(gp)
00407618  nop
0040761c  jalr t9
00407620  _move a0,s0
00407624  lw gp,0x28(sp)
00407628  bgez v0,0x00407650
0040762c  _sw v0,0x34(sp)
00407630  lw v0,-0x7f74(gp)
00407634  lw t9,-0x7fb0(gp)
00407638  lui a0,0x41
0040763c  lw a1,0x0(v0)
00407640  jalr t9
00407644  _addiu a0,a0,0x1b80
00407648  lw gp,0x28(sp)
0040764c  nop
00407650  lw t9,-0x7f94(gp)
00407654  nop
00407658  jalr t9
0040765c  _addiu a0,sp,0x34
00407660  lw gp,0x28(sp)
00407664  bgez v0,0x0040768c
00407668  _nop
0040766c  lw v0,-0x7f74(gp)
00407670  lw t9,-0x7fb0(gp)
00407674  lui a0,0x41
00407678  lw a1,0x0(v0)
0040767c  jalr t9
00407680  _addiu a0,a0,0x1b94
00407684  lw gp,0x28(sp)
00407688  nop
0040768c  lw t9,-0x7e94(gp)
00407690  lui a0,0x41
00407694  jalr t9
00407698  _addiu a0,a0,0x1bac
0040769c  clear v0
004076a0  lw ra,0x20c(sp)
004076a4  lw s3,0x208(sp)
004076a8  lw s2,0x204(sp)
004076ac  lw s1,0x200(sp)
004076b0  lw s0,0x1fc(sp)
004076b4  jr ra
004076b8  _addiu sp,sp,0x210
