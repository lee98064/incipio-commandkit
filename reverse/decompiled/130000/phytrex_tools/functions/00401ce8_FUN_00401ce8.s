# FUN_00401ce8 @ 00401ce8
00401ce8  addiu sp,sp,-0x68
00401cec  sw ra,0x64(sp)
00401cf0  sw s8,0x60(sp)
00401cf4  sw s4,0x5c(sp)
00401cf8  sw s3,0x58(sp)
00401cfc  sw s2,0x54(sp)
00401d00  sw s1,0x50(sp)
00401d04  sw s0,0x4c(sp)
00401d08  move s8,sp
00401d0c  lui gp,0x42
00401d10  addiu gp,gp,-0x21a0
00401d14  sw gp,0x18(sp)
00401d18  sw a0,0x68(s8)
00401d1c  sw a1,0x6c(s8)
00401d20  sw a2,0x70(s8)
00401d24  move a0,sp
00401d28  move s4,a0
00401d2c  lw a1,0x6c(s8)
00401d30  lw a0,0x68(s8)
00401d34  nop
00401d38  subu a0,a1,a0
00401d3c  move a1,a0
00401d40  addiu a1,a1,-0x1
00401d44  sw a1,0x40(s8)
00401d48  move t1,a0
00401d4c  clear t0
00401d50  andi s2,t0,0xf
00401d54  li a1,-0x1
00401d58  and s3,t1,a1
00401d5c  move t1,s3
00401d60  move t0,s2
00401d64  srl a1,t1,0x1d
00401d68  sll t4,t0,0x3
00401d6c  or t4,a1,t4
00401d70  sll t5,t1,0x3
00401d74  andi s0,t4,0xf
00401d78  li a1,-0x1
00401d7c  and s1,t5,a1
00401d80  move t5,s1
00401d84  move t4,s0
00401d88  move v1,a0
00401d8c  clear v0
00401d90  andi t8,v0,0xf
00401d94  li a1,-0x1
00401d98  and t9,v1,a1
00401d9c  move v1,t9
00401da0  move v0,t8
00401da4  srl a1,v1,0x1d
00401da8  sll t2,v0,0x3
00401dac  or t2,a1,t2
00401db0  sll t3,v1,0x3
00401db4  andi t6,t2,0xf
00401db8  li v0,-0x1
00401dbc  and t7,t3,v0
00401dc0  move t3,t7
00401dc4  move t2,t6
00401dc8  move v0,a0
00401dcc  addiu v0,v0,0x7
00401dd0  addiu v0,v0,0x7
00401dd4  srl v0,v0,0x3
00401dd8  sll v0,v0,0x3
00401ddc  subu sp,sp,v0
00401de0  addiu v0,sp,0x18
00401de4  addiu v0,v0,0x7
00401de8  srl v0,v0,0x3
00401dec  sll v0,v0,0x3
00401df0  sw v0,0x3c(s8)
00401df4  lui v0,0x40
00401df8  addiu a0,v0,0x51f8
00401dfc  li a1,0x2
00401e00  lw v0,-0x7fc4(gp)
00401e04  nop
00401e08  move t9,v0
00401e0c  jalr t9
00401e10  _nop
00401e14  lw gp,0x18(s8)
00401e18  sw v0,0x38(s8)
00401e1c  lw v1,0x38(s8)
00401e20  li v0,-0x1
00401e24  bne v1,v0,0x00401eb0
00401e28  _nop
00401e2c  lw v0,-0x7fb0(gp)
00401e30  nop
00401e34  lw s1,0x0(v0)
00401e38  lui v0,0x40
00401e3c  addiu s0,v0,0x5368
00401e40  lw v0,-0x7fbc(gp)
00401e44  nop
00401e48  move t9,v0
00401e4c  jalr t9
00401e50  _nop
00401e54  lw gp,0x18(s8)
00401e58  lw v0,0x0(v0)
00401e5c  nop
00401e60  move a0,v0
00401e64  lw v0,-0x7f3c(gp)
00401e68  nop
00401e6c  move t9,v0
00401e70  jalr t9
00401e74  _nop
00401e78  lw gp,0x18(s8)
00401e7c  move a0,s1
00401e80  move a1,s0
00401e84  lw a2,0x70(s8)
00401e88  move a3,v0
00401e8c  lw v0,-0x7f78(gp)
00401e90  nop
00401e94  move t9,v0
00401e98  jalr t9
00401e9c  _nop
00401ea0  lw gp,0x18(s8)
00401ea4  clear v0
00401ea8  b 0x00402354
00401eac  _nop
00401eb0  lui v0,0x40
00401eb4  addiu a0,v0,0x5238
00401eb8  li a1,0x80
00401ebc  lw v0,-0x7fc4(gp)
00401ec0  nop
00401ec4  move t9,v0
00401ec8  jalr t9
00401ecc  _nop
00401ed0  lw gp,0x18(s8)
00401ed4  sw v0,0x34(s8)
00401ed8  lw v1,0x34(s8)
00401edc  li v0,-0x1
00401ee0  bne v1,v0,0x00401f74
00401ee4  _nop
00401ee8  lw v0,-0x7fb0(gp)
00401eec  nop
00401ef0  lw s1,0x0(v0)
00401ef4  lui v0,0x40
00401ef8  addiu s0,v0,0x5398
00401efc  lw v0,-0x7fbc(gp)
00401f00  nop
00401f04  move t9,v0
00401f08  jalr t9
00401f0c  _nop
00401f10  lw gp,0x18(s8)
00401f14  lw v0,0x0(v0)
00401f18  nop
00401f1c  move a0,v0
00401f20  lw v0,-0x7f3c(gp)
00401f24  nop
00401f28  move t9,v0
00401f2c  jalr t9
00401f30  _nop
00401f34  lw gp,0x18(s8)
00401f38  sw v0,0x10(sp)
00401f3c  move a0,s1
00401f40  move a1,s0
00401f44  lw a2,0x70(s8)
00401f48  lui v0,0x40
00401f4c  addiu a3,v0,0x5238
00401f50  lw v0,-0x7f78(gp)
00401f54  nop
00401f58  move t9,v0
00401f5c  jalr t9
00401f60  _nop
00401f64  lw gp,0x18(s8)
00401f68  clear v0
00401f6c  b 0x00402354
00401f70  _nop
00401f74  lw a0,0x38(s8)
00401f78  lw a1,0x68(s8)
00401f7c  clear a2
00401f80  lw v0,-0x7f64(gp)
00401f84  nop
00401f88  move t9,v0
00401f8c  jalr t9
00401f90  _nop
00401f94  lw gp,0x18(s8)
00401f98  sw v0,0x24(s8)
00401f9c  lw v1,0x24(s8)
00401fa0  li v0,-0x1
00401fa4  bne v1,v0,0x00402030
00401fa8  _nop
00401fac  lw v0,-0x7fb0(gp)
00401fb0  nop
00401fb4  lw s1,0x0(v0)
00401fb8  lui v0,0x40
00401fbc  addiu s0,v0,0x53c4
00401fc0  lw v0,-0x7fbc(gp)
00401fc4  nop
00401fc8  move t9,v0
00401fcc  jalr t9
00401fd0  _nop
00401fd4  lw gp,0x18(s8)
00401fd8  lw v0,0x0(v0)
00401fdc  nop
00401fe0  move a0,v0
00401fe4  lw v0,-0x7f3c(gp)
00401fe8  nop
00401fec  move t9,v0
00401ff0  jalr t9
00401ff4  _nop
00401ff8  lw gp,0x18(s8)
00401ffc  move a0,s1
00402000  move a1,s0
00402004  lw a2,0x70(s8)
00402008  move a3,v0
0040200c  lw v0,-0x7f78(gp)
00402010  nop
00402014  move t9,v0
00402018  jalr t9
0040201c  _nop
00402020  lw gp,0x18(s8)
00402024  clear v0
00402028  b 0x00402354
0040202c  _nop
00402030  lw a0,0x70(s8)
00402034  lui v0,0x40
00402038  addiu a1,v0,0x53ec
0040203c  lw v0,-0x7f7c(gp)
00402040  nop
00402044  move t9,v0
00402048  jalr t9
0040204c  _nop
00402050  lw gp,0x18(s8)
00402054  bne v0,zero,0x00402088
00402058  _nop
0040205c  lw a0,0x70(s8)
00402060  lui v0,0x40
00402064  addiu a1,v0,0x53f8
00402068  lw v0,-0x7f7c(gp)
0040206c  nop
00402070  move t9,v0
00402074  jalr t9
00402078  _nop
0040207c  lw gp,0x18(s8)
00402080  beq v0,zero,0x00402150
00402084  _nop
00402088  lw v0,0x68(s8)
0040208c  nop
00402090  addiu v0,v0,-0x6000
00402094  lw a0,0x34(s8)
00402098  move a1,v0
0040209c  clear a2
004020a0  lw v0,-0x7f64(gp)
004020a4  nop
004020a8  move t9,v0
004020ac  jalr t9
004020b0  _nop
004020b4  lw gp,0x18(s8)
004020b8  sw v0,0x20(s8)
004020bc  lw v1,0x20(s8)
004020c0  li v0,-0x1
004020c4  bne v1,v0,0x00402150
004020c8  _nop
004020cc  lw v0,-0x7fb0(gp)
004020d0  nop
004020d4  lw s1,0x0(v0)
004020d8  lui v0,0x40
004020dc  addiu s0,v0,0x5404
004020e0  lw v0,-0x7fbc(gp)
004020e4  nop
004020e8  move t9,v0
004020ec  jalr t9
004020f0  _nop
004020f4  lw gp,0x18(s8)
004020f8  lw v0,0x0(v0)
004020fc  nop
00402100  move a0,v0
00402104  lw v0,-0x7f3c(gp)
00402108  nop
0040210c  move t9,v0
00402110  jalr t9
00402114  _nop
00402118  lw gp,0x18(s8)
0040211c  move a0,s1
00402120  move a1,s0
00402124  lw a2,0x70(s8)
00402128  move a3,v0
0040212c  lw v0,-0x7f78(gp)
00402130  nop
00402134  move t9,v0
00402138  jalr t9
0040213c  _nop
00402140  lw gp,0x18(s8)
00402144  clear v0
00402148  b 0x00402354
0040214c  _nop
00402150  lw v1,0x3c(s8)
00402154  lw a0,0x6c(s8)
00402158  lw v0,0x68(s8)
0040215c  nop
00402160  subu v0,a0,v0
00402164  lw a0,0x34(s8)
00402168  move a1,v1
0040216c  move a2,v0
00402170  lw v0,-0x7f80(gp)
00402174  nop
00402178  move t9,v0
0040217c  jalr t9
00402180  _nop
00402184  lw gp,0x18(s8)
00402188  sw v0,0x2c(s8)
0040218c  lw v0,0x2c(s8)
00402190  nop
00402194  bgez v0,0x00402220
00402198  _nop
0040219c  lw v0,-0x7fb0(gp)
004021a0  nop
004021a4  lw s1,0x0(v0)
004021a8  lui v0,0x40
004021ac  addiu s0,v0,0x542c
004021b0  lw v0,-0x7fbc(gp)
004021b4  nop
004021b8  move t9,v0
004021bc  jalr t9
004021c0  _nop
004021c4  lw gp,0x18(s8)
004021c8  lw v0,0x0(v0)
004021cc  nop
004021d0  move a0,v0
004021d4  lw v0,-0x7f3c(gp)
004021d8  nop
004021dc  move t9,v0
004021e0  jalr t9
004021e4  _nop
004021e8  lw gp,0x18(s8)
004021ec  move a0,s1
004021f0  move a1,s0
004021f4  lw a2,0x70(s8)
004021f8  move a3,v0
004021fc  lw v0,-0x7f78(gp)
00402200  nop
00402204  move t9,v0
00402208  jalr t9
0040220c  _nop
00402210  lw gp,0x18(s8)
00402214  clear v0
00402218  b 0x00402354
0040221c  _nop
00402220  lw v1,0x3c(s8)
00402224  lw a0,0x6c(s8)
00402228  lw v0,0x68(s8)
0040222c  nop
00402230  subu v0,a0,v0
00402234  lw a0,0x38(s8)
00402238  move a1,v1
0040223c  move a2,v0
00402240  lw v0,-0x7f74(gp)
00402244  nop
00402248  move t9,v0
0040224c  jalr t9
00402250  _nop
00402254  lw gp,0x18(s8)
00402258  sw v0,0x28(s8)
0040225c  lw v0,0x28(s8)
00402260  nop
00402264  bgez v0,0x004022f0
00402268  _nop
0040226c  lw v0,-0x7fb0(gp)
00402270  nop
00402274  lw s1,0x0(v0)
00402278  lui v0,0x40
0040227c  addiu s0,v0,0x5454
00402280  lw v0,-0x7fbc(gp)
00402284  nop
00402288  move t9,v0
0040228c  jalr t9
00402290  _nop
00402294  lw gp,0x18(s8)
00402298  lw v0,0x0(v0)
0040229c  nop
004022a0  move a0,v0
004022a4  lw v0,-0x7f3c(gp)
004022a8  nop
004022ac  move t9,v0
004022b0  jalr t9
004022b4  _nop
004022b8  lw gp,0x18(s8)
004022bc  move a0,s1
004022c0  move a1,s0
004022c4  lw a2,0x70(s8)
004022c8  move a3,v0
004022cc  lw v0,-0x7f78(gp)
004022d0  nop
004022d4  move t9,v0
004022d8  jalr t9
004022dc  _nop
004022e0  lw gp,0x18(s8)
004022e4  clear v0
004022e8  b 0x00402354
004022ec  _nop
004022f0  lw a0,0x34(s8)
004022f4  lw v0,-0x7fcc(gp)
004022f8  nop
004022fc  move t9,v0
00402300  jalr t9
00402304  _nop
00402308  lw gp,0x18(s8)
0040230c  lw a0,0x38(s8)
00402310  lw v0,-0x7fcc(gp)
00402314  nop
00402318  move t9,v0
0040231c  jalr t9
00402320  _nop
00402324  lw gp,0x18(s8)
00402328  lui v0,0x40
0040232c  addiu v0,v0,0x547c
00402330  move a0,v0
00402334  lw a1,0x70(s8)
00402338  lw v0,-0x7f30(gp)
0040233c  nop
00402340  move t9,v0
00402344  jalr t9
00402348  _nop
0040234c  lw gp,0x18(s8)
00402350  li v0,0x1
00402354  move sp,s4
00402358  move sp,s8
0040235c  lw ra,0x64(sp)
00402360  lw s8,0x60(sp)
00402364  lw s4,0x5c(sp)
00402368  lw s3,0x58(sp)
0040236c  lw s2,0x54(sp)
00402370  lw s1,0x50(sp)
00402374  lw s0,0x4c(sp)
00402378  addiu sp,sp,0x68
0040237c  jr ra
00402380  _nop
