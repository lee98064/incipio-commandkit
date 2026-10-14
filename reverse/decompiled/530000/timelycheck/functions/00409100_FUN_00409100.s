# FUN_00409100 @ 00409100
00409100  addiu sp,sp,-0x170
00409104  sw ra,0x16c(sp)
00409108  sw s5,0x168(sp)
0040910c  sw s4,0x164(sp)
00409110  sw s3,0x160(sp)
00409114  sw s2,0x15c(sp)
00409118  sw s1,0x158(sp)
0040911c  sw s0,0x154(sp)
00409120  lui gp,0x43
00409124  addiu gp,gp,0x3060
00409128  sw gp,0x20(sp)
0040912c  lw t9,-0x7f4c(gp)
00409130  move s1,a0
00409134  clear a1
00409138  addiu a0,sp,0x2c
0040913c  jalr t9
00409140  _li a2,0x20
00409144  lw gp,0x20(sp)
00409148  addiu a0,sp,0x4c
0040914c  clear a1
00409150  lw t9,-0x7f4c(gp)
00409154  li a2,0x20
00409158  jalr t9
0040915c  _addiu s3,sp,0xec
00409160  lw gp,0x20(sp)
00409164  move a0,s3
00409168  clear a1
0040916c  lw t9,-0x7f4c(gp)
00409170  li a2,0x64
00409174  jalr t9
00409178  _sw zero,0x28(sp)
0040917c  lw gp,0x20(sp)
00409180  addiu s0,sp,0x6c
00409184  move a0,s0
00409188  lw t9,-0x7f4c(gp)
0040918c  clear a1
00409190  jalr t9
00409194  _li a2,0x40
00409198  lw gp,0x20(sp)
0040919c  addiu a0,sp,0xac
004091a0  clear a1
004091a4  lw t9,-0x7f4c(gp)
004091a8  li a2,0x40
004091ac  jalr t9
004091b0  _lui s4,0x42
004091b4  lw gp,0x20(sp)
004091b8  lui a1,0x42
004091bc  addiu a1,a1,-0x7acc
004091c0  lw t9,-0x7f78(gp)
004091c4  move a0,s3
004091c8  jalr t9
004091cc  _move a2,s1
004091d0  lw gp,0x20(sp)
004091d4  move a2,s3
004091d8  addiu a0,s4,-0x7abc
004091dc  lw t9,-0x7eb8(gp)
004091e0  li a1,0x1
004091e4  jalr t9
004091e8  _addiu s2,sp,0x28
004091ec  lw gp,0x20(sp)
004091f0  move a1,s0
004091f4  lw t9,-0x7ec0(gp)
004091f8  nop
004091fc  jalr t9
00409200  _li a0,0xae
00409204  lw gp,0x20(sp)
00409208  lw a0,0x6c(sp)
0040920c  lw t9,-0x7f58(gp)
00409210  nop
00409214  jalr t9
00409218  _nop
0040921c  lw gp,0x20(sp)
00409220  lui a1,0x42
00409224  addiu a1,a1,-0x7aa8
00409228  lw t9,-0x7f78(gp)
0040922c  move a2,v0
00409230  jalr t9
00409234  _move a0,s3
00409238  lw gp,0x20(sp)
0040923c  move a2,s3
00409240  addiu a0,s4,-0x7abc
00409244  lw t9,-0x7eb8(gp)
00409248  nop
0040924c  jalr t9
00409250  _li a1,0x2
00409254  lw gp,0x20(sp)
00409258  move a1,s0
0040925c  lw t9,-0x7ec0(gp)
00409260  nop
00409264  jalr t9
00409268  _li a0,0xaf
0040926c  lw gp,0x20(sp)
00409270  lw a0,0x6c(sp)
00409274  lw t9,-0x7f58(gp)
00409278  nop
0040927c  jalr t9
00409280  _nop
00409284  lw gp,0x20(sp)
00409288  lui a1,0x42
0040928c  addiu a1,a1,-0x7a9c
00409290  lw t9,-0x7f78(gp)
00409294  move a2,v0
00409298  jalr t9
0040929c  _move a0,s3
004092a0  lw gp,0x20(sp)
004092a4  move a2,s3
004092a8  addiu a0,s4,-0x7abc
004092ac  lw t9,-0x7eb8(gp)
004092b0  nop
004092b4  jalr t9
004092b8  _li a1,0x2
004092bc  lw gp,0x20(sp)
004092c0  move a1,s0
004092c4  lw t9,-0x7ec0(gp)
004092c8  nop
004092cc  jalr t9
004092d0  _li a0,0xab
004092d4  lw gp,0x20(sp)
004092d8  lw a0,0x6c(sp)
004092dc  lw t9,-0x7f58(gp)
004092e0  nop
004092e4  jalr t9
004092e8  _nop
004092ec  lw gp,0x20(sp)
004092f0  lui a1,0x42
004092f4  addiu a1,a1,-0x7a94
004092f8  lw t9,-0x7f78(gp)
004092fc  move a2,v0
00409300  jalr t9
00409304  _move a0,s3
00409308  lw gp,0x20(sp)
0040930c  addiu a0,s4,-0x7abc
00409310  move a2,s3
00409314  lw t9,-0x7eb8(gp)
00409318  nop
0040931c  jalr t9
00409320  _li a1,0x2
00409324  lw gp,0x20(sp)
00409328  li a0,0x3b1
0040932c  lw t9,-0x7ec0(gp)
00409330  nop
00409334  jalr t9
00409338  _move a1,s2
0040933c  lw a3,0x28(sp)
00409340  lw gp,0x20(sp)
00409344  addiu v0,a3,-0x2
00409348  sltiu v0,v0,0x275f
0040934c  bne v0,zero,0x004093c0
00409350  _nop
00409354  lw t9,-0x7e70(gp)
00409358  lui a0,0x42
0040935c  lui a1,0x42
00409360  addiu a0,a0,-0x7848
00409364  addiu a1,a1,-0x7808
00409368  jalr t9
0040936c  _li a2,0x4a
00409370  lw gp,0x20(sp)
00409374  move a1,s2
00409378  lw t9,-0x7edc(gp)
0040937c  nop
00409380  jalr t9
00409384  _li a0,0x3b1
00409388  lw gp,0x20(sp)
0040938c  bne v0,zero,0x004093ac
00409390  _nop
00409394  lw t9,-0x7ea8(gp)
00409398  lui a0,0x42
0040939c  jalr t9
004093a0  _addiu a0,a0,-0x7a84
004093a4  lw gp,0x20(sp)
004093a8  nop
004093ac  lw t9,-0x7ed8(gp)
004093b0  nop
004093b4  jalr t9
004093b8  _li a0,0x4
004093bc  lw gp,0x20(sp)
004093c0  lw v1,0x28(sp)
004093c4  li v0,0x3c
004093c8  lw t9,-0x7f78(gp)
004093cc  mult v1,v0
004093d0  addiu s2,sp,0xec
004093d4  lui a1,0x42
004093d8  addiu a1,a1,-0x7a64
004093dc  move a0,s2
004093e0  lui s3,0x42
004093e4  addiu s4,sp,0x6c
004093e8  mflo v0
004093ec  sw v0,0x28(sp)
004093f0  jalr t9
004093f4  _mflo a2
004093f8  lw gp,0x20(sp)
004093fc  move a2,s2
00409400  addiu a0,s3,-0x7abc
00409404  lw t9,-0x7eb8(gp)
00409408  nop
0040940c  jalr t9
00409410  _li a1,0x2
00409414  lw gp,0x20(sp)
00409418  move a1,s4
0040941c  lw t9,-0x7ec0(gp)
00409420  nop
00409424  jalr t9
00409428  _li a0,0xaa
0040942c  lw gp,0x20(sp)
00409430  lw a0,0x0(s0)
00409434  lw t9,-0x7f58(gp)
00409438  nop
0040943c  jalr t9
00409440  _nop
00409444  lw gp,0x20(sp)
00409448  lui a1,0x42
0040944c  addiu a1,a1,-0x7a54
00409450  lw t9,-0x7f78(gp)
00409454  move a0,s2
00409458  move a2,v0
0040945c  jalr t9
00409460  _move s5,v0
00409464  lw gp,0x20(sp)
00409468  addiu a0,s3,-0x7abc
0040946c  li a1,0x2
00409470  lw t9,-0x7eb8(gp)
00409474  nop
00409478  jalr t9
0040947c  _move a2,s2
00409480  lw gp,0x20(sp)
00409484  lui a1,0x42
00409488  addiu a1,a1,-0x7a44
0040948c  lw t9,-0x7f78(gp)
00409490  move a2,s5
00409494  jalr t9
00409498  _move a0,s2
0040949c  lw gp,0x20(sp)
004094a0  addiu a0,s3,-0x7abc
004094a4  li a1,0x2
004094a8  lw t9,-0x7eb8(gp)
004094ac  nop
004094b0  jalr t9
004094b4  _move a2,s2
004094b8  lw gp,0x20(sp)
004094bc  move a0,s4
004094c0  clear a1
004094c4  lw t9,-0x7f4c(gp)
004094c8  nop
004094cc  jalr t9
004094d0  _li a2,0x40
004094d4  lw gp,0x20(sp)
004094d8  li a0,0xc6
004094dc  lw t9,-0x7ec0(gp)
004094e0  nop
004094e4  jalr t9
004094e8  _move a1,s4
004094ec  lb v0,0x6c(sp)
004094f0  lw gp,0x20(sp)
004094f4  beq v0,zero,0x00409534
004094f8  _move a2,s4
004094fc  lw t9,-0x7f78(gp)
00409500  lui a1,0x42
00409504  addiu a1,a1,-0x7a38
00409508  jalr t9
0040950c  _move a0,s2
00409510  lw gp,0x20(sp)
00409514  addiu a0,s3,-0x7abc
00409518  move a2,s2
0040951c  lw t9,-0x7eb8(gp)
00409520  nop
00409524  jalr t9
00409528  _li a1,0x2
0040952c  lw gp,0x20(sp)
00409530  nop
00409534  lw t9,-0x7ec0(gp)
00409538  addiu a1,sp,0x6c
0040953c  jalr t9
00409540  _li a0,0xaa
00409544  lw gp,0x20(sp)
00409548  lw a0,0x0(s0)
0040954c  addiu s2,sp,0x2c
00409550  lw t9,-0x7f58(gp)
00409554  addiu s3,sp,0x4c
00409558  jalr t9
0040955c  _lui s0,0x42
00409560  lw gp,0x20(sp)
00409564  move a0,s2
00409568  move a1,v0
0040956c  lw t9,-0x7e58(gp)
00409570  nop
00409574  jalr t9
00409578  _addiu s0,s0,-0x67b4
0040957c  lw gp,0x20(sp)
00409580  addiu a1,sp,0xac
00409584  lw t9,-0x7ec0(gp)
00409588  nop
0040958c  jalr t9
00409590  _li a0,0xab
00409594  lw gp,0x20(sp)
00409598  lw a0,0xac(sp)
0040959c  lw t9,-0x7f58(gp)
004095a0  nop
004095a4  jalr t9
004095a8  _nop
004095ac  lw gp,0x20(sp)
004095b0  move a0,s3
004095b4  lw t9,-0x7e58(gp)
004095b8  nop
004095bc  jalr t9
004095c0  _move a1,v0
004095c4  lw gp,0x20(sp)
004095c8  lui v0,0x41
004095cc  addiu v0,v0,0x7f4c
004095d0  lw t9,-0x7f84(gp)
004095d4  lui a1,0x41
004095d8  sw s3,0x14(sp)
004095dc  move a2,s1
004095e0  move a3,s2
004095e4  sw s0,0x18(sp)
004095e8  sw v0,0x10(sp)
004095ec  addiu a1,a1,0x7d7c
004095f0  jalr t9
004095f4  _clear a0
004095f8  lw gp,0x20(sp)
004095fc  lui a1,0x42
00409600  lui a2,0x42
00409604  lw t9,-0x7f84(gp)
00409608  move a3,s0
0040960c  addiu a1,a1,-0x781c
00409610  addiu a2,a2,-0x7abc
00409614  jalr t9
00409618  _clear a0
0040961c  lw ra,0x16c(sp)
00409620  lw s5,0x168(sp)
00409624  lw s4,0x164(sp)
00409628  lw s3,0x160(sp)
0040962c  lw s2,0x15c(sp)
00409630  lw s1,0x158(sp)
00409634  lw s0,0x154(sp)
00409638  jr ra
0040963c  _addiu sp,sp,0x170
