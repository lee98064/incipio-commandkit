# FUN_00407688 @ 00407688
00407688  addiu sp,sp,-0xa0
0040768c  sw ra,0x9c(sp)
00407690  sw s4,0x98(sp)
00407694  sw s3,0x94(sp)
00407698  sw s2,0x90(sp)
0040769c  sw s1,0x8c(sp)
004076a0  sw s0,0x88(sp)
004076a4  lui gp,0x43
004076a8  addiu gp,gp,-0x4f70
004076ac  sw gp,0x18(sp)
004076b0  lw t9,-0x7f90(gp)
004076b4  li a1,0x302
004076b8  li a2,0x3f
004076bc  jalr t9
004076c0  _move s0,a0
004076c4  lw gp,0x18(sp)
004076c8  bgez v0,0x0040770c
004076cc  _move s1,v0
004076d0  lw v0,-0x7f30(gp)
004076d4  lw t9,-0x7e6c(gp)
004076d8  lui a1,0x41
004076dc  lw a0,0x0(v0)
004076e0  lui a2,0x41
004076e4  li v0,0x19c
004076e8  lui a3,0x41
004076ec  sw v0,0x10(sp)
004076f0  sw s0,0x14(sp)
004076f4  addiu a1,a1,0x106c
004076f8  addiu a2,a2,0x1028
004076fc  jalr t9
00407700  _addiu a3,a3,0x14b4
00407704  b 0x00407a44
00407708  _nop
0040770c  lw t9,-0x7d9c(gp)
00407710  addiu s0,sp,0x20
00407714  lui a1,0x41
00407718  addiu a1,a1,0x10a4
0040771c  jalr t9
00407720  _move a0,s0
00407724  lw gp,0x18(sp)
00407728  move a0,s0
0040772c  lui s2,0x41
00407730  lw t9,-0x7f88(gp)
00407734  addiu s2,s2,0x1e18
00407738  jalr t9
0040773c  _lui s4,0x41
00407740  lw gp,0x18(sp)
00407744  move a2,v0
00407748  move a0,s1
0040774c  lw t9,-0x7e68(gp)
00407750  move a1,s0
00407754  jalr t9
00407758  _lui s3,0x41
0040775c  lw gp,0x18(sp)
00407760  lui a2,0x41
00407764  addiu a2,a2,0x10b0
00407768  lw t9,-0x7f2c(gp)
0040776c  move a1,s2
00407770  jalr t9
00407774  _move a0,s0
00407778  lw gp,0x18(sp)
0040777c  nop
00407780  lw t9,-0x7f88(gp)
00407784  nop
00407788  jalr t9
0040778c  _move a0,s0
00407790  lw gp,0x18(sp)
00407794  move a2,v0
00407798  move a0,s1
0040779c  lw t9,-0x7e68(gp)
004077a0  nop
004077a4  jalr t9
004077a8  _move a1,s0
004077ac  lw gp,0x18(sp)
004077b0  lui a2,0x41
004077b4  addiu a2,a2,0x10c8
004077b8  lw t9,-0x7f2c(gp)
004077bc  move a1,s2
004077c0  jalr t9
004077c4  _move a0,s0
004077c8  lw gp,0x18(sp)
004077cc  nop
004077d0  lw t9,-0x7f88(gp)
004077d4  nop
004077d8  jalr t9
004077dc  _move a0,s0
004077e0  lw gp,0x18(sp)
004077e4  move a2,v0
004077e8  move a0,s1
004077ec  lw t9,-0x7e68(gp)
004077f0  nop
004077f4  jalr t9
004077f8  _move a1,s0
004077fc  lw gp,0x18(sp)
00407800  move a1,s2
00407804  addiu a2,s4,0x110c
00407808  lw t9,-0x7f2c(gp)
0040780c  nop
00407810  jalr t9
00407814  _move a0,s0
00407818  lw gp,0x18(sp)
0040781c  nop
00407820  lw t9,-0x7f88(gp)
00407824  nop
00407828  jalr t9
0040782c  _move a0,s0
00407830  lw gp,0x18(sp)
00407834  move a2,v0
00407838  move a0,s1
0040783c  lw t9,-0x7e68(gp)
00407840  nop
00407844  jalr t9
00407848  _move a1,s0
0040784c  lw gp,0x18(sp)
00407850  lui a2,0x41
00407854  addiu a2,a2,0x1114
00407858  lw t9,-0x7f2c(gp)
0040785c  move a1,s2
00407860  jalr t9
00407864  _move a0,s0
00407868  lw gp,0x18(sp)
0040786c  nop
00407870  lw t9,-0x7f88(gp)
00407874  nop
00407878  jalr t9
0040787c  _move a0,s0
00407880  lw gp,0x18(sp)
00407884  move a2,v0
00407888  move a0,s1
0040788c  lw t9,-0x7e68(gp)
00407890  nop
00407894  jalr t9
00407898  _move a1,s0
0040789c  lw gp,0x18(sp)
004078a0  lui a2,0x41
004078a4  addiu a2,a2,0x112c
004078a8  lw t9,-0x7f2c(gp)
004078ac  move a1,s2
004078b0  jalr t9
004078b4  _move a0,s0
004078b8  lw gp,0x18(sp)
004078bc  nop
004078c0  lw t9,-0x7f88(gp)
004078c4  nop
004078c8  jalr t9
004078cc  _move a0,s0
004078d0  lw gp,0x18(sp)
004078d4  move a2,v0
004078d8  move a0,s1
004078dc  lw t9,-0x7e68(gp)
004078e0  nop
004078e4  jalr t9
004078e8  _move a1,s0
004078ec  lw gp,0x18(sp)
004078f0  addiu a2,s4,0x110c
004078f4  move a1,s2
004078f8  lw t9,-0x7f2c(gp)
004078fc  nop
00407900  jalr t9
00407904  _move a0,s0
00407908  lw gp,0x18(sp)
0040790c  nop
00407910  lw t9,-0x7f88(gp)
00407914  nop
00407918  jalr t9
0040791c  _move a0,s0
00407920  lw gp,0x18(sp)
00407924  move a2,v0
00407928  move a0,s1
0040792c  lw t9,-0x7e68(gp)
00407930  nop
00407934  jalr t9
00407938  _move a1,s0
0040793c  lw gp,0x18(sp)
00407940  lui a2,0x41
00407944  addiu a2,a2,0x1170
00407948  lw t9,-0x7f2c(gp)
0040794c  move a1,s2
00407950  jalr t9
00407954  _move a0,s0
00407958  lw gp,0x18(sp)
0040795c  nop
00407960  lw t9,-0x7f88(gp)
00407964  nop
00407968  jalr t9
0040796c  _move a0,s0
00407970  lw gp,0x18(sp)
00407974  move a2,v0
00407978  move a0,s1
0040797c  lw t9,-0x7e68(gp)
00407980  nop
00407984  jalr t9
00407988  _move a1,s0
0040798c  lw gp,0x18(sp)
00407990  move a1,s2
00407994  addiu a2,s3,0x11a8
00407998  lw t9,-0x7f2c(gp)
0040799c  nop
004079a0  jalr t9
004079a4  _move a0,s0
004079a8  lw gp,0x18(sp)
004079ac  nop
004079b0  lw t9,-0x7f88(gp)
004079b4  nop
004079b8  jalr t9
004079bc  _move a0,s0
004079c0  lw gp,0x18(sp)
004079c4  move a2,v0
004079c8  move a0,s1
004079cc  lw t9,-0x7e68(gp)
004079d0  nop
004079d4  jalr t9
004079d8  _move a1,s0
004079dc  lw gp,0x18(sp)
004079e0  move a1,s2
004079e4  addiu a2,s3,0x11a8
004079e8  lw t9,-0x7f2c(gp)
004079ec  nop
004079f0  jalr t9
004079f4  _move a0,s0
004079f8  lw gp,0x18(sp)
004079fc  nop
00407a00  lw t9,-0x7f88(gp)
00407a04  nop
00407a08  jalr t9
00407a0c  _move a0,s0
00407a10  lw gp,0x18(sp)
00407a14  move a0,s1
00407a18  move a1,s0
00407a1c  lw t9,-0x7e68(gp)
00407a20  nop
00407a24  jalr t9
00407a28  _move a2,v0
00407a2c  lw gp,0x18(sp)
00407a30  nop
00407a34  lw t9,-0x7fc4(gp)
00407a38  nop
00407a3c  jalr t9
00407a40  _move a0,s1
00407a44  lw ra,0x9c(sp)
00407a48  lw s4,0x98(sp)
00407a4c  lw s3,0x94(sp)
00407a50  lw s2,0x90(sp)
00407a54  lw s1,0x8c(sp)
00407a58  lw s0,0x88(sp)
00407a5c  jr ra
00407a60  _addiu sp,sp,0xa0
