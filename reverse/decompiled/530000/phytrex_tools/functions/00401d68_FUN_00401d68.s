# FUN_00401d68 @ 00401d68
00401d68  addiu sp,sp,-0x68
00401d6c  sw ra,0x64(sp)
00401d70  sw s8,0x60(sp)
00401d74  sw s4,0x5c(sp)
00401d78  sw s3,0x58(sp)
00401d7c  sw s2,0x54(sp)
00401d80  sw s1,0x50(sp)
00401d84  sw s0,0x4c(sp)
00401d88  move s8,sp
00401d8c  lui gp,0x42
00401d90  addiu gp,gp,-0x1db0
00401d94  sw gp,0x18(sp)
00401d98  sw a0,0x68(s8)
00401d9c  sw a1,0x6c(s8)
00401da0  sw a2,0x70(s8)
00401da4  move a0,sp
00401da8  move s4,a0
00401dac  lw a1,0x6c(s8)
00401db0  lw a0,0x68(s8)
00401db4  nop
00401db8  subu a0,a1,a0
00401dbc  move a1,a0
00401dc0  addiu a1,a1,-0x1
00401dc4  sw a1,0x40(s8)
00401dc8  move t1,a0
00401dcc  clear t0
00401dd0  andi s2,t0,0xf
00401dd4  li a1,-0x1
00401dd8  and s3,t1,a1
00401ddc  move t1,s3
00401de0  move t0,s2
00401de4  srl a1,t1,0x1d
00401de8  sll t4,t0,0x3
00401dec  or t4,a1,t4
00401df0  sll t5,t1,0x3
00401df4  andi s0,t4,0xf
00401df8  li a1,-0x1
00401dfc  and s1,t5,a1
00401e00  move t5,s1
00401e04  move t4,s0
00401e08  move v1,a0
00401e0c  clear v0
00401e10  andi t8,v0,0xf
00401e14  li a1,-0x1
00401e18  and t9,v1,a1
00401e1c  move v1,t9
00401e20  move v0,t8
00401e24  srl a1,v1,0x1d
00401e28  sll t2,v0,0x3
00401e2c  or t2,a1,t2
00401e30  sll t3,v1,0x3
00401e34  andi t6,t2,0xf
00401e38  li v0,-0x1
00401e3c  and t7,t3,v0
00401e40  move t3,t7
00401e44  move t2,t6
00401e48  move v0,a0
00401e4c  addiu v0,v0,0x7
00401e50  addiu v0,v0,0x7
00401e54  srl v0,v0,0x3
00401e58  sll v0,v0,0x3
00401e5c  subu sp,sp,v0
00401e60  addiu v0,sp,0x18
00401e64  addiu v0,v0,0x7
00401e68  srl v0,v0,0x3
00401e6c  sll v0,v0,0x3
00401e70  sw v0,0x3c(s8)
00401e74  lui v0,0x40
00401e78  addiu a0,v0,0x54d8
00401e7c  li a1,0x2
00401e80  lw v0,-0x7fc4(gp)
00401e84  nop
00401e88  move t9,v0
00401e8c  jalr t9
00401e90  _nop
00401e94  lw gp,0x18(s8)
00401e98  sw v0,0x38(s8)
00401e9c  lw v1,0x38(s8)
00401ea0  li v0,-0x1
00401ea4  bne v1,v0,0x00401f30
00401ea8  _nop
00401eac  lw v0,-0x7fb0(gp)
00401eb0  nop
00401eb4  lw s1,0x0(v0)
00401eb8  lui v0,0x40
00401ebc  addiu s0,v0,0x5648
00401ec0  lw v0,-0x7fbc(gp)
00401ec4  nop
00401ec8  move t9,v0
00401ecc  jalr t9
00401ed0  _nop
00401ed4  lw gp,0x18(s8)
00401ed8  lw v0,0x0(v0)
00401edc  nop
00401ee0  move a0,v0
00401ee4  lw v0,-0x7f38(gp)
00401ee8  nop
00401eec  move t9,v0
00401ef0  jalr t9
00401ef4  _nop
00401ef8  lw gp,0x18(s8)
00401efc  move a0,s1
00401f00  move a1,s0
00401f04  lw a2,0x70(s8)
00401f08  move a3,v0
00401f0c  lw v0,-0x7f78(gp)
00401f10  nop
00401f14  move t9,v0
00401f18  jalr t9
00401f1c  _nop
00401f20  lw gp,0x18(s8)
00401f24  clear v0
00401f28  b 0x004023d4
00401f2c  _nop
00401f30  lui v0,0x40
00401f34  addiu a0,v0,0x5518
00401f38  li a1,0x80
00401f3c  lw v0,-0x7fc4(gp)
00401f40  nop
00401f44  move t9,v0
00401f48  jalr t9
00401f4c  _nop
00401f50  lw gp,0x18(s8)
00401f54  sw v0,0x34(s8)
00401f58  lw v1,0x34(s8)
00401f5c  li v0,-0x1
00401f60  bne v1,v0,0x00401ff4
00401f64  _nop
00401f68  lw v0,-0x7fb0(gp)
00401f6c  nop
00401f70  lw s1,0x0(v0)
00401f74  lui v0,0x40
00401f78  addiu s0,v0,0x5678
00401f7c  lw v0,-0x7fbc(gp)
00401f80  nop
00401f84  move t9,v0
00401f88  jalr t9
00401f8c  _nop
00401f90  lw gp,0x18(s8)
00401f94  lw v0,0x0(v0)
00401f98  nop
00401f9c  move a0,v0
00401fa0  lw v0,-0x7f38(gp)
00401fa4  nop
00401fa8  move t9,v0
00401fac  jalr t9
00401fb0  _nop
00401fb4  lw gp,0x18(s8)
00401fb8  sw v0,0x10(sp)
00401fbc  move a0,s1
00401fc0  move a1,s0
00401fc4  lw a2,0x70(s8)
00401fc8  lui v0,0x40
00401fcc  addiu a3,v0,0x5518
00401fd0  lw v0,-0x7f78(gp)
00401fd4  nop
00401fd8  move t9,v0
00401fdc  jalr t9
00401fe0  _nop
00401fe4  lw gp,0x18(s8)
00401fe8  clear v0
00401fec  b 0x004023d4
00401ff0  _nop
00401ff4  lw a0,0x38(s8)
00401ff8  lw a1,0x68(s8)
00401ffc  clear a2
00402000  lw v0,-0x7f64(gp)
00402004  nop
00402008  move t9,v0
0040200c  jalr t9
00402010  _nop
00402014  lw gp,0x18(s8)
00402018  sw v0,0x24(s8)
0040201c  lw v1,0x24(s8)
00402020  li v0,-0x1
00402024  bne v1,v0,0x004020b0
00402028  _nop
0040202c  lw v0,-0x7fb0(gp)
00402030  nop
00402034  lw s1,0x0(v0)
00402038  lui v0,0x40
0040203c  addiu s0,v0,0x56a4
00402040  lw v0,-0x7fbc(gp)
00402044  nop
00402048  move t9,v0
0040204c  jalr t9
00402050  _nop
00402054  lw gp,0x18(s8)
00402058  lw v0,0x0(v0)
0040205c  nop
00402060  move a0,v0
00402064  lw v0,-0x7f38(gp)
00402068  nop
0040206c  move t9,v0
00402070  jalr t9
00402074  _nop
00402078  lw gp,0x18(s8)
0040207c  move a0,s1
00402080  move a1,s0
00402084  lw a2,0x70(s8)
00402088  move a3,v0
0040208c  lw v0,-0x7f78(gp)
00402090  nop
00402094  move t9,v0
00402098  jalr t9
0040209c  _nop
004020a0  lw gp,0x18(s8)
004020a4  clear v0
004020a8  b 0x004023d4
004020ac  _nop
004020b0  lw a0,0x70(s8)
004020b4  lui v0,0x40
004020b8  addiu a1,v0,0x56cc
004020bc  lw v0,-0x7f7c(gp)
004020c0  nop
004020c4  move t9,v0
004020c8  jalr t9
004020cc  _nop
004020d0  lw gp,0x18(s8)
004020d4  bne v0,zero,0x00402108
004020d8  _nop
004020dc  lw a0,0x70(s8)
004020e0  lui v0,0x40
004020e4  addiu a1,v0,0x56d8
004020e8  lw v0,-0x7f7c(gp)
004020ec  nop
004020f0  move t9,v0
004020f4  jalr t9
004020f8  _nop
004020fc  lw gp,0x18(s8)
00402100  beq v0,zero,0x004021d0
00402104  _nop
00402108  lw v0,0x68(s8)
0040210c  nop
00402110  addiu v0,v0,-0x6000
00402114  lw a0,0x34(s8)
00402118  move a1,v0
0040211c  clear a2
00402120  lw v0,-0x7f64(gp)
00402124  nop
00402128  move t9,v0
0040212c  jalr t9
00402130  _nop
00402134  lw gp,0x18(s8)
00402138  sw v0,0x20(s8)
0040213c  lw v1,0x20(s8)
00402140  li v0,-0x1
00402144  bne v1,v0,0x004021d0
00402148  _nop
0040214c  lw v0,-0x7fb0(gp)
00402150  nop
00402154  lw s1,0x0(v0)
00402158  lui v0,0x40
0040215c  addiu s0,v0,0x56e4
00402160  lw v0,-0x7fbc(gp)
00402164  nop
00402168  move t9,v0
0040216c  jalr t9
00402170  _nop
00402174  lw gp,0x18(s8)
00402178  lw v0,0x0(v0)
0040217c  nop
00402180  move a0,v0
00402184  lw v0,-0x7f38(gp)
00402188  nop
0040218c  move t9,v0
00402190  jalr t9
00402194  _nop
00402198  lw gp,0x18(s8)
0040219c  move a0,s1
004021a0  move a1,s0
004021a4  lw a2,0x70(s8)
004021a8  move a3,v0
004021ac  lw v0,-0x7f78(gp)
004021b0  nop
004021b4  move t9,v0
004021b8  jalr t9
004021bc  _nop
004021c0  lw gp,0x18(s8)
004021c4  clear v0
004021c8  b 0x004023d4
004021cc  _nop
004021d0  lw v1,0x3c(s8)
004021d4  lw a0,0x6c(s8)
004021d8  lw v0,0x68(s8)
004021dc  nop
004021e0  subu v0,a0,v0
004021e4  lw a0,0x34(s8)
004021e8  move a1,v1
004021ec  move a2,v0
004021f0  lw v0,-0x7f80(gp)
004021f4  nop
004021f8  move t9,v0
004021fc  jalr t9
00402200  _nop
00402204  lw gp,0x18(s8)
00402208  sw v0,0x2c(s8)
0040220c  lw v0,0x2c(s8)
00402210  nop
00402214  bgez v0,0x004022a0
00402218  _nop
0040221c  lw v0,-0x7fb0(gp)
00402220  nop
00402224  lw s1,0x0(v0)
00402228  lui v0,0x40
0040222c  addiu s0,v0,0x570c
00402230  lw v0,-0x7fbc(gp)
00402234  nop
00402238  move t9,v0
0040223c  jalr t9
00402240  _nop
00402244  lw gp,0x18(s8)
00402248  lw v0,0x0(v0)
0040224c  nop
00402250  move a0,v0
00402254  lw v0,-0x7f38(gp)
00402258  nop
0040225c  move t9,v0
00402260  jalr t9
00402264  _nop
00402268  lw gp,0x18(s8)
0040226c  move a0,s1
00402270  move a1,s0
00402274  lw a2,0x70(s8)
00402278  move a3,v0
0040227c  lw v0,-0x7f78(gp)
00402280  nop
00402284  move t9,v0
00402288  jalr t9
0040228c  _nop
00402290  lw gp,0x18(s8)
00402294  clear v0
00402298  b 0x004023d4
0040229c  _nop
004022a0  lw v1,0x3c(s8)
004022a4  lw a0,0x6c(s8)
004022a8  lw v0,0x68(s8)
004022ac  nop
004022b0  subu v0,a0,v0
004022b4  lw a0,0x38(s8)
004022b8  move a1,v1
004022bc  move a2,v0
004022c0  lw v0,-0x7f74(gp)
004022c4  nop
004022c8  move t9,v0
004022cc  jalr t9
004022d0  _nop
004022d4  lw gp,0x18(s8)
004022d8  sw v0,0x28(s8)
004022dc  lw v0,0x28(s8)
004022e0  nop
004022e4  bgez v0,0x00402370
004022e8  _nop
004022ec  lw v0,-0x7fb0(gp)
004022f0  nop
004022f4  lw s1,0x0(v0)
004022f8  lui v0,0x40
004022fc  addiu s0,v0,0x5734
00402300  lw v0,-0x7fbc(gp)
00402304  nop
00402308  move t9,v0
0040230c  jalr t9
00402310  _nop
00402314  lw gp,0x18(s8)
00402318  lw v0,0x0(v0)
0040231c  nop
00402320  move a0,v0
00402324  lw v0,-0x7f38(gp)
00402328  nop
0040232c  move t9,v0
00402330  jalr t9
00402334  _nop
00402338  lw gp,0x18(s8)
0040233c  move a0,s1
00402340  move a1,s0
00402344  lw a2,0x70(s8)
00402348  move a3,v0
0040234c  lw v0,-0x7f78(gp)
00402350  nop
00402354  move t9,v0
00402358  jalr t9
0040235c  _nop
00402360  lw gp,0x18(s8)
00402364  clear v0
00402368  b 0x004023d4
0040236c  _nop
00402370  lw a0,0x34(s8)
00402374  lw v0,-0x7fcc(gp)
00402378  nop
0040237c  move t9,v0
00402380  jalr t9
00402384  _nop
00402388  lw gp,0x18(s8)
0040238c  lw a0,0x38(s8)
00402390  lw v0,-0x7fcc(gp)
00402394  nop
00402398  move t9,v0
0040239c  jalr t9
004023a0  _nop
004023a4  lw gp,0x18(s8)
004023a8  lui v0,0x40
004023ac  addiu v0,v0,0x575c
004023b0  move a0,v0
004023b4  lw a1,0x70(s8)
004023b8  lw v0,-0x7f2c(gp)
004023bc  nop
004023c0  move t9,v0
004023c4  jalr t9
004023c8  _nop
004023cc  lw gp,0x18(s8)
004023d0  li v0,0x1
004023d4  move sp,s4
004023d8  move sp,s8
004023dc  lw ra,0x64(sp)
004023e0  lw s8,0x60(sp)
004023e4  lw s4,0x5c(sp)
004023e8  lw s3,0x58(sp)
004023ec  lw s2,0x54(sp)
004023f0  lw s1,0x50(sp)
004023f4  lw s0,0x4c(sp)
004023f8  addiu sp,sp,0x68
004023fc  jr ra
00402400  _nop
