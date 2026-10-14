# FUN_00404288 @ 00404288
00404288  addiu sp,sp,-0xa0
0040428c  sw ra,0x9c(sp)
00404290  sw s8,0x98(sp)
00404294  sw s7,0x94(sp)
00404298  sw s6,0x90(sp)
0040429c  sw s5,0x8c(sp)
004042a0  sw s4,0x88(sp)
004042a4  sw s3,0x84(sp)
004042a8  sw s2,0x80(sp)
004042ac  sw s1,0x7c(sp)
004042b0  sw s0,0x78(sp)
004042b4  lui gp,0x44
004042b8  addiu gp,gp,-0x4fc0
004042bc  sw gp,0x38(sp)
004042c0  addiu v0,a0,0x8
004042c4  addiu v1,a0,0x34
004042c8  move s0,a0
004042cc  addiu s8,a0,0x24
004042d0  sw v0,0x58(sp)
004042d4  addiu a0,sp,0x50
004042d8  addiu v0,sp,0x40
004042dc  sw v1,0x68(sp)
004042e0  clear s1
004042e4  sw a0,0x60(sp)
004042e8  addiu s7,sp,0x54
004042ec  b 0x00404dc0
004042f0  _sw v0,0x5c(sp)
004042f4  beq v0,zero,0x00404dd0
004042f8  _lui v1,0x42
004042fc  sll v0,s1,0x2
00404300  addiu v1,v1,-0x2b00
00404304  addu v0,v1,v0
00404308  lw v0,0x0(v0)
0040430c  nop
00404310  jr v0
00404314  _nop
00404318  lw t9,-0x7e58(gp)
0040431c  sw zero,0x40(sp)
00404320  move a0,s8
00404324  clear a1
00404328  jalr t9
0040432c  _clear a2
00404330  lw gp,0x38(sp)
00404334  bne v0,zero,0x004044d8
00404338  _li s2,0x1
0040433c  sb s2,0x20(s0)
00404340  lw t9,-0x7e58(gp)
00404344  lw a0,0x58(sp)
00404348  clear a1
0040434c  jalr t9
00404350  _clear a2
00404354  lw gp,0x38(sp)
00404358  bne v0,zero,0x004044d8
0040435c  _nop
00404360  lw t9,0x44(s0)
00404364  sb s2,0x18(s0)
00404368  beq t9,zero,0x00404384
0040436c  _sw zero,0x38(s0)
00404370  move a0,s0
00404374  jalr t9
00404378  _clear a1
0040437c  lw gp,0x38(sp)
00404380  nop
00404384  lw t9,-0x7ed0(gp)
00404388  nop
0040438c  jalr t9
00404390  _nop
00404394  lw gp,0x38(sp)
00404398  bne v0,zero,0x004044d8
0040439c  _li s2,0x1
004043a0  lw v0,0x0(s0)
004043a4  lw t9,-0x7dcc(gp)
004043a8  lbu v1,0x6(v0)
004043ac  lw a0,0x1c(v0)
004043b0  lw a1,0x20(v0)
004043b4  lw a2,0x24(v0)
004043b8  sw v1,0x10(sp)
004043bc  lbu v1,0x7(v0)
004043c0  move a3,v0
004043c4  sw v1,0x14(sp)
004043c8  lbu v1,0x8(v0)
004043cc  sw s2,0x1c(sp)
004043d0  sw v1,0x18(sp)
004043d4  lbu v1,0xb(v0)
004043d8  nop
004043dc  sw v1,0x20(sp)
004043e0  lbu v1,0x9(v0)
004043e4  nop
004043e8  sw v1,0x24(sp)
004043ec  lbu v1,0xa(v0)
004043f0  nop
004043f4  sw v1,0x28(sp)
004043f8  addiu v1,sp,0x4c
004043fc  lbu v0,0xc(v0)
00404400  sw v1,0x34(sp)
00404404  lw v1,0x5c(sp)
00404408  sw v0,0x2c(sp)
0040440c  jalr t9
00404410  _sw v1,0x30(sp)
00404414  lw gp,0x38(sp)
00404418  bne v0,zero,0x004044d8
0040441c  _nop
00404420  lw t9,-0x7d7c(gp)
00404424  lw a0,0x40(sp)
00404428  lw a1,0x4c(sp)
0040442c  jalr t9
00404430  _nop
00404434  lw gp,0x38(sp)
00404438  bne v0,zero,0x004044d8
0040443c  _nop
00404440  lw t9,-0x7dc0(gp)
00404444  nop
00404448  jalr t9
0040444c  _li a0,0x3c
00404450  lw gp,0x38(sp)
00404454  lui a0,0x42
00404458  lui a1,0x40
0040445c  lw t9,-0x7f04(gp)
00404460  sw v0,0x4(s0)
00404464  move a3,v0
00404468  addiu a0,a0,-0x2c28
0040446c  addiu a1,a1,0x3c70
00404470  jalr t9
00404474  _move a2,s0
00404478  lw gp,0x38(sp)
0040447c  bne v0,zero,0x004044d8
00404480  _nop
00404484  lw t9,-0x7e34(gp)
00404488  lw a0,0x4(s0)
0040448c  jalr t9
00404490  _nop
00404494  lw gp,0x38(sp)
00404498  bne v0,zero,0x004044d8
0040449c  _nop
004044a0  lw t9,-0x7f00(gp)
004044a4  nop
004044a8  jalr t9
004044ac  _nop
004044b0  lw gp,0x38(sp)
004044b4  bne v0,zero,0x004044d8
004044b8  _li a1,0x1
004044bc  lw t9,-0x7f70(gp)
004044c0  lui a0,0x43
004044c4  sb s2,0x35a0(a0)
004044c8  jalr t9
004044cc  _move a0,s0
004044d0  lw gp,0x38(sp)
004044d4  movz s1,s2,v0
004044d8  lw a0,0x40(sp)
004044dc  b 0x0040463c
004044e0  _nop
004044e4  lw t9,0x44(s0)
004044e8  nop
004044ec  beq t9,zero,0x00404504
004044f0  _move a0,s0
004044f4  jalr t9
004044f8  _li a1,0x1
004044fc  lw gp,0x38(sp)
00404500  nop
00404504  lw t9,-0x7dc8(gp)
00404508  nop
0040450c  jalr t9
00404510  _move a0,s8
00404514  lw gp,0x38(sp)
00404518  lw a0,0x1c(s0)
0040451c  lui a1,0x42
00404520  lw t9,-0x7e10(gp)
00404524  nop
00404528  jalr t9
0040452c  _addiu a1,a1,-0x2c10
00404530  lw gp,0x38(sp)
00404534  bne v0,zero,0x00404dd0
00404538  _nop
0040453c  b 0x00404dc0
00404540  _li s1,0x2
00404544  lw t9,-0x7f64(gp)
00404548  lw a0,0x68(sp)
0040454c  sw zero,0x4c(sp)
00404550  sw zero,0x54(sp)
00404554  sw zero,0x48(sp)
00404558  sw zero,0x44(sp)
0040455c  jalr t9
00404560  _li a1,0x1
00404564  lw gp,0x38(sp)
00404568  bne v0,zero,0x0040460c
0040456c  _addiu a3,sp,0x48
00404570  lw v0,0x1c(s0)
00404574  lw a0,0x34(s0)
00404578  lw t9,-0x7e70(gp)
0040457c  lw a2,0x808(v0)
00404580  lw a1,0x804(v0)
00404584  addiu v0,sp,0x44
00404588  sw v0,0x10(sp)
0040458c  lw v0,0x5c(sp)
00404590  jalr t9
00404594  _sw v0,0x14(sp)
00404598  lw gp,0x38(sp)
0040459c  bne v0,zero,0x0040460c
004045a0  _nop
004045a4  lbu v1,0x40(sp)
004045a8  nop
004045ac  beq v1,zero,0x0040460c
004045b0  _lui a0,0x42
004045b4  lw t9,-0x7ef0(gp)
004045b8  lw a1,0x48(sp)
004045bc  lw a2,0x44(sp)
004045c0  sw s7,0x10(sp)
004045c4  addiu a0,a0,-0x2c04
004045c8  jalr t9
004045cc  _addiu a3,sp,0x4c
004045d0  lw gp,0x38(sp)
004045d4  bne v0,zero,0x0040460c
004045d8  _nop
004045dc  lw a1,0x4c(sp)
004045e0  nop
004045e4  beq a1,zero,0x0040460c
004045e8  _nop
004045ec  lw t9,-0x7e50(gp)
004045f0  lw a0,0x4(s0)
004045f4  lw a2,0x54(sp)
004045f8  jalr t9
004045fc  _nop
00404600  lw gp,0x38(sp)
00404604  li v1,0x3
00404608  movz s1,v1,v0
0040460c  lw a0,0x48(sp)
00404610  nop
00404614  beq a0,zero,0x00404634
00404618  _nop
0040461c  lw t9,-0x7fb8(gp)
00404620  nop
00404624  jalr t9
00404628  _sw v0,0x70(sp)
0040462c  lw gp,0x38(sp)
00404630  lw v0,0x70(sp)
00404634  lw a0,0x4c(sp)
00404638  nop
0040463c  beq a0,zero,0x00404660
00404640  _nop
00404644  lw t9,-0x7fb8(gp)
00404648  nop
0040464c  jalr t9
00404650  _sw v0,0x70(sp)
00404654  lw gp,0x38(sp)
00404658  lw v0,0x70(sp)
0040465c  nop
00404660  beq v0,zero,0x00404dc0
00404664  _nop
00404668  b 0x00404dd0
0040466c  _nop
00404670  lw t9,-0x7dc8(gp)
00404674  nop
00404678  jalr t9
0040467c  _move a0,s8
00404680  lw gp,0x38(sp)
00404684  lw a0,0x1c(s0)
00404688  lui a1,0x42
0040468c  lw t9,-0x7e10(gp)
00404690  nop
00404694  jalr t9
00404698  _addiu a1,a1,-0x2be8
0040469c  lw gp,0x38(sp)
004046a0  bne v0,zero,0x00404dd0
004046a4  _nop
004046a8  lw t9,0x44(s0)
004046ac  nop
004046b0  beq t9,zero,0x00404ed8
004046b4  _move a0,s0
004046b8  jalr t9
004046bc  _li a1,0x2
004046c0  lw gp,0x38(sp)
004046c4  b 0x00404dc0
004046c8  _li s1,0x4
004046cc  lw t9,-0x7db4(gp)
004046d0  sw zero,0x44(sp)
004046d4  sw zero,0x48(sp)
004046d8  jalr t9
004046dc  _move a0,s0
004046e0  lw gp,0x38(sp)
004046e4  bne v0,zero,0x00404b10
004046e8  _move v1,v0
004046ec  lw v0,0x1c(s0)
004046f0  lw t9,-0x7dc0(gp)
004046f4  lw a0,0x808(v0)
004046f8  jalr t9
004046fc  _nop
00404700  lw gp,0x38(sp)
00404704  bne v0,zero,0x00404720
00404708  _move s6,v0
0040470c  clear s2
00404710  clear s4
00404714  clear s3
00404718  b 0x00404b24
0040471c  _clear s5
00404720  lw v0,0x1c(s0)
00404724  lw t9,-0x7d74(gp)
00404728  lw a0,0x34(s0)
0040472c  lw a2,0x808(v0)
00404730  lw a1,0x804(v0)
00404734  jalr t9
00404738  _move a3,s6
0040473c  lw gp,0x38(sp)
00404740  bne v0,zero,0x00404b10
00404744  _move v1,v0
00404748  lw v0,0x1c(s0)
0040474c  nop
00404750  lw v0,0x808(v0)
00404754  sw s6,0x4c(sp)
00404758  addu v1,s6,v0
0040475c  bne v0,zero,0x0040477c
00404760  _sw v1,0x64(sp)
00404764  clear s2
00404768  clear s4
0040476c  clear s3
00404770  clear s5
00404774  b 0x0040488c
00404778  _li v0,-0x1a31
0040477c  addiu a0,sp,0x4c
00404780  clear s2
00404784  clear s4
00404788  clear s3
0040478c  clear s5
00404790  b 0x00404854
00404794  _sw a0,0x6c(sp)
00404798  lw a0,0x50(sp)
0040479c  lw t9,-0x7e1c(gp)
004047a0  nop
004047a4  jalr t9
004047a8  _addiu a0,a0,0x1
004047ac  lw gp,0x38(sp)
004047b0  bne v0,zero,0x004047c0
004047b4  _move a0,v0
004047b8  b 0x0040488c
004047bc  _li v0,-0x1a48
004047c0  lw t9,-0x7d98(gp)
004047c4  lw a1,0x54(sp)
004047c8  lw a2,0x50(sp)
004047cc  sw v0,0x74(sp)
004047d0  jalr t9
004047d4  _sw v0,0x70(sp)
004047d8  lbu v0,0x40(sp)
004047dc  li a0,0x9
004047e0  lw gp,0x38(sp)
004047e4  lw v1,0x74(sp)
004047e8  lw a3,0x70(sp)
004047ec  beq v0,a0,0x00404850
004047f0  _sltiu a0,v0,0xa
004047f4  beq a0,zero,0x00404810
004047f8  _li a0,0xb
004047fc  li a0,0x8
00404800  bne v0,a0,0x00404834
00404804  _nop
00404808  b 0x00404824
0040480c  _move s4,v1
00404810  beq v0,a0,0x0040482c
00404814  _li a0,0xc
00404818  bne v0,a0,0x00404834
0040481c  _nop
00404820  move s5,v1
00404824  b 0x00404850
00404828  _move v1,s2
0040482c  b 0x00404824
00404830  _move s3,v1
00404834  lw t9,-0x7fb8(gp)
00404838  move a0,a3
0040483c  jalr t9
00404840  _sw s2,0x74(sp)
00404844  lw gp,0x38(sp)
00404848  lw v1,0x74(sp)
0040484c  nop
00404850  move s2,v1
00404854  lw v0,0x60(sp)
00404858  lw v1,0x6c(sp)
0040485c  lw t9,-0x7f1c(gp)
00404860  lw a0,0x4c(sp)
00404864  lw a1,0x64(sp)
00404868  lw a2,0x5c(sp)
0040486c  sw v0,0x10(sp)
00404870  sw v1,0x14(sp)
00404874  jalr t9
00404878  _move a3,s7
0040487c  lw gp,0x38(sp)
00404880  beq v0,zero,0x00404798
00404884  _li a1,0x1
00404888  clear v0
0040488c  lw t9,-0x7fb8(gp)
00404890  sw v0,0x70(sp)
00404894  jalr t9
00404898  _move a0,s6
0040489c  lw v0,0x70(sp)
004048a0  lw gp,0x38(sp)
004048a4  bne v0,zero,0x00404b28
004048a8  _li v1,-0x1a38
004048ac  beq s5,zero,0x00404b28
004048b0  _nop
004048b4  lw t9,0x44(s0)
004048b8  nop
004048bc  beq t9,zero,0x004048d0
004048c0  _move a0,s0
004048c4  jalr t9
004048c8  _li a1,0x3
004048cc  lw gp,0x38(sp)
004048d0  lw a0,0x0(s0)
004048d4  nop
004048d8  lbu v0,0x2c(a0)
004048dc  nop
004048e0  beq v0,zero,0x004049bc
004048e4  _move a1,s7
004048e8  jal 0x00403d3c
004048ec  _addiu a2,sp,0x4c
004048f0  lw gp,0x38(sp)
004048f4  bne v0,zero,0x00404b28
004048f8  _move v1,v0
004048fc  lw v0,0x54(sp)
00404900  nop
00404904  beq v0,zero,0x00404b24
00404908  _nop
0040490c  lw a0,0x4c(sp)
00404910  nop
00404914  beq a0,zero,0x00404b24
00404918  _nop
0040491c  lw t9,-0x7dc0(gp)
00404920  nop
00404924  jalr t9
00404928  _sw v1,0x74(sp)
0040492c  lw gp,0x38(sp)
00404930  lw v1,0x74(sp)
00404934  beq v0,zero,0x00404b28
00404938  _move s6,v0
0040493c  lw t9,-0x7fac(gp)
00404940  lw a0,0x34(s0)
00404944  lw a1,0x54(sp)
00404948  lw a2,0x4c(sp)
0040494c  jalr t9
00404950  _move a3,v0
00404954  lw gp,0x38(sp)
00404958  lw a2,0x4c(sp)
0040495c  addiu v0,sp,0x48
00404960  lw t9,-0x7ef0(gp)
00404964  lui a0,0x42
00404968  move a1,s6
0040496c  addiu a3,sp,0x44
00404970  addiu a0,a0,-0x2be0
00404974  jalr t9
00404978  _sw v0,0x10(sp)
0040497c  lw gp,0x38(sp)
00404980  move a0,s6
00404984  lw t9,-0x7fb8(gp)
00404988  nop
0040498c  jalr t9
00404990  _sw v0,0x74(sp)
00404994  lw gp,0x38(sp)
00404998  lw a0,0x54(sp)
0040499c  lw t9,-0x7fb8(gp)
004049a0  nop
004049a4  jalr t9
004049a8  _nop
004049ac  lw gp,0x38(sp)
004049b0  lw v1,0x74(sp)
004049b4  b 0x004049d4
004049b8  _nop
004049bc  lw t9,-0x7e30(gp)
004049c0  addiu a0,sp,0x44
004049c4  jalr t9
004049c8  _addiu a1,sp,0x48
004049cc  lw gp,0x38(sp)
004049d0  move v1,v0
004049d4  bne v1,zero,0x00404b28
004049d8  _nop
004049dc  lw t9,-0x7e50(gp)
004049e0  lw a0,0x4(s0)
004049e4  lw a1,0x44(sp)
004049e8  lw a2,0x48(sp)
004049ec  jalr t9
004049f0  _nop
004049f4  lw gp,0x38(sp)
004049f8  bne v0,zero,0x00404b28
004049fc  _move v1,v0
00404a00  lw t9,-0x7ee0(gp)
00404a04  lw a0,0x4(s0)
00404a08  jalr t9
00404a0c  _nop
00404a10  lw gp,0x38(sp)
00404a14  bne v0,zero,0x00404b28
00404a18  _move v1,v0
00404a1c  lw t9,-0x7dc8(gp)
00404a20  lw a0,0x58(sp)
00404a24  jalr t9
00404a28  _nop
00404a2c  lw gp,0x38(sp)
00404a30  lw a0,0x4(s0)
00404a34  lw t9,-0x7e68(gp)
00404a38  nop
00404a3c  jalr t9
00404a40  _nop
00404a44  lw gp,0x38(sp)
00404a48  nop
00404a4c  lw t9,-0x7d60(gp)
00404a50  nop
00404a54  jalr t9
00404a58  _nop
00404a5c  lw gp,0x38(sp)
00404a60  bne v0,zero,0x00404b28
00404a64  _move v1,v0
00404a68  beq s4,zero,0x00404a8c
00404a6c  _nop
00404a70  lw t9,-0x7fc4(gp)
00404a74  nop
00404a78  jalr t9
00404a7c  _move a0,s4
00404a80  lw gp,0x38(sp)
00404a84  bne v0,zero,0x00404b28
00404a88  _move v1,v0
00404a8c  beq s2,zero,0x00404ac8
00404a90  _nop
00404a94  lw v0,0x0(s0)
00404a98  nop
00404a9c  lbu v0,0x7(v0)
00404aa0  nop
00404aa4  beq v0,zero,0x00404ac8
00404aa8  _nop
00404aac  lw t9,-0x7d40(gp)
00404ab0  nop
00404ab4  jalr t9
00404ab8  _move a0,s2
00404abc  lw gp,0x38(sp)
00404ac0  bne v0,zero,0x00404b28
00404ac4  _move v1,v0
00404ac8  beq s3,zero,0x00404ae8
00404acc  _clear v0
00404ad0  lw t9,-0x7f74(gp)
00404ad4  nop
00404ad8  jalr t9
00404adc  _move a0,s3
00404ae0  lw gp,0x38(sp)
00404ae4  nop
00404ae8  lw t9,-0x7e84(gp)
00404aec  move a2,v0
00404af0  move a0,s5
00404af4  jalr t9
00404af8  _move a1,s3
00404afc  move v1,v0
00404b00  li v0,0x5
00404b04  lw gp,0x38(sp)
00404b08  b 0x00404b28
00404b0c  _movz s1,v0,v1
00404b10  clear s2
00404b14  clear s4
00404b18  clear s3
00404b1c  b 0x00404b28
00404b20  _clear s5
00404b24  li v1,-0x1a48
00404b28  lw a0,0x4(s0)
00404b2c  nop
00404b30  beq a0,zero,0x00404b50
00404b34  _nop
00404b38  lw t9,-0x7fb8(gp)
00404b3c  nop
00404b40  jalr t9
00404b44  _sw v1,0x74(sp)
00404b48  lw gp,0x38(sp)
00404b4c  lw v1,0x74(sp)
00404b50  lw a0,0x44(sp)
00404b54  nop
00404b58  beq a0,zero,0x00404b78
00404b5c  _nop
00404b60  lw t9,-0x7fb8(gp)
00404b64  nop
00404b68  jalr t9
00404b6c  _sw v1,0x74(sp)
00404b70  lw gp,0x38(sp)
00404b74  lw v1,0x74(sp)
00404b78  beq s5,zero,0x00404b98
00404b7c  _nop
00404b80  lw t9,-0x7fb8(gp)
00404b84  sw v1,0x74(sp)
00404b88  jalr t9
00404b8c  _move a0,s5
00404b90  lw gp,0x38(sp)
00404b94  lw v1,0x74(sp)
00404b98  beq s3,zero,0x00404bb8
00404b9c  _nop
00404ba0  lw t9,-0x7fb8(gp)
00404ba4  sw v1,0x74(sp)
00404ba8  jalr t9
00404bac  _move a0,s3
00404bb0  lw gp,0x38(sp)
00404bb4  lw v1,0x74(sp)
00404bb8  beq s4,zero,0x00404bd8
00404bbc  _nop
00404bc0  lw t9,-0x7fb8(gp)
00404bc4  sw v1,0x74(sp)
00404bc8  jalr t9
00404bcc  _move a0,s4
00404bd0  lw gp,0x38(sp)
00404bd4  lw v1,0x74(sp)
00404bd8  beq s2,zero,0x00404bfc
00404bdc  _nop
00404be0  lw t9,-0x7fb8(gp)
00404be4  sw v1,0x74(sp)
00404be8  jalr t9
00404bec  _move a0,s2
00404bf0  lw gp,0x38(sp)
00404bf4  lw v1,0x74(sp)
00404bf8  nop
00404bfc  beq v1,zero,0x00404dc0
00404c00  _nop
00404c04  b 0x00404dd0
00404c08  _nop
00404c0c  lw t9,-0x7dc0(gp)
00404c10  nop
00404c14  jalr t9
00404c18  _li a0,0x3c
00404c1c  lw gp,0x38(sp)
00404c20  lui a0,0x42
00404c24  lui a1,0x40
00404c28  lw t9,-0x7f04(gp)
00404c2c  sw v0,0x4(s0)
00404c30  move a3,v0
00404c34  addiu a0,a0,-0x2c28
00404c38  addiu a1,a1,0x3c70
00404c3c  jalr t9
00404c40  _move a2,s0
00404c44  lw gp,0x38(sp)
00404c48  bne v0,zero,0x00404dd0
00404c4c  _nop
00404c50  lw t9,-0x7e34(gp)
00404c54  lw a0,0x4(s0)
00404c58  jalr t9
00404c5c  _nop
00404c60  lw gp,0x38(sp)
00404c64  bne v0,zero,0x00404dd0
00404c68  _lui a0,0x43
00404c6c  lbu a1,0x35a0(a0)
00404c70  lw t9,-0x7f70(gp)
00404c74  lui v0,0x43
00404c78  addiu a1,a1,0x1
00404c7c  andi a1,a1,0xff
00404c80  move a0,s0
00404c84  jalr t9
00404c88  _sb a1,0x35a0(v0)
00404c8c  lw gp,0x38(sp)
00404c90  bne v0,zero,0x00404dd0
00404c94  _nop
00404c98  lw t9,-0x7dc8(gp)
00404c9c  nop
00404ca0  jalr t9
00404ca4  _move a0,s8
00404ca8  lw gp,0x38(sp)
00404cac  lw a0,0x1c(s0)
00404cb0  lui a1,0x42
00404cb4  lw t9,-0x7e10(gp)
00404cb8  nop
00404cbc  jalr t9
00404cc0  _addiu a1,a1,-0x2bcc
00404cc4  lw gp,0x38(sp)
00404cc8  beq v0,zero,0x00404ee0
00404ccc  _nop
00404cd0  b 0x00404dd0
00404cd4  _nop
00404cd8  lw t9,-0x7db4(gp)
00404cdc  sw zero,0x50(sp)
00404ce0  sw zero,0x54(sp)
00404ce4  jalr t9
00404ce8  _move a0,s0
00404cec  lw gp,0x38(sp)
00404cf0  bne v0,zero,0x00404d68
00404cf4  _move s2,v0
00404cf8  lw t9,-0x7e30(gp)
00404cfc  lw a0,0x60(sp)
00404d00  jalr t9
00404d04  _move a1,s7
00404d08  lw gp,0x38(sp)
00404d0c  bne v0,zero,0x00404d68
00404d10  _move s2,v0
00404d14  lw t9,-0x7e50(gp)
00404d18  lw a0,0x4(s0)
00404d1c  lw a1,0x50(sp)
00404d20  lw a2,0x54(sp)
00404d24  jalr t9
00404d28  _nop
00404d2c  lw gp,0x38(sp)
00404d30  bne v0,zero,0x00404d68
00404d34  _move s2,v0
00404d38  lw t9,-0x7ee0(gp)
00404d3c  lw a0,0x4(s0)
00404d40  jalr t9
00404d44  _nop
00404d48  lw gp,0x38(sp)
00404d4c  bne v0,zero,0x00404d68
00404d50  _move s2,v0
00404d54  lw t9,-0x7dc8(gp)
00404d58  lw a0,0x58(sp)
00404d5c  jalr t9
00404d60  _li s1,0x7
00404d64  lw gp,0x38(sp)
00404d68  lw a0,0x50(sp)
00404d6c  nop
00404d70  beq a0,zero,0x00404d8c
00404d74  _nop
00404d78  lw t9,-0x7fb8(gp)
00404d7c  nop
00404d80  jalr t9
00404d84  _nop
00404d88  lw gp,0x38(sp)
00404d8c  beq s2,zero,0x00404dc0
00404d90  _nop
00404d94  b 0x00404dd0
00404d98  _nop
00404d9c  lw t9,0x44(s0)
00404da0  nop
00404da4  beq t9,zero,0x00404dd0
00404da8  _move a0,s0
00404dac  jalr t9
00404db0  _li a1,0x4
00404db4  lw gp,0x38(sp)
00404db8  b 0x00404dd0
00404dbc  _nop
00404dc0  lbu v0,0x40(s0)
00404dc4  nop
00404dc8  beq v0,zero,0x004042f4
00404dcc  _sltiu v0,s1,0x8
00404dd0  lw t9,-0x7db4(gp)
00404dd4  nop
00404dd8  jalr t9
00404ddc  _move a0,s0
00404de0  lw gp,0x38(sp)
00404de4  nop
00404de8  lw t9,-0x7e48(gp)
00404dec  nop
00404df0  jalr t9
00404df4  _nop
00404df8  lw gp,0x38(sp)
00404dfc  lw a0,0x4(s0)
00404e00  lw t9,-0x7e68(gp)
00404e04  nop
00404e08  jalr t9
00404e0c  _nop
00404e10  lw a0,0x4(s0)
00404e14  lw gp,0x38(sp)
00404e18  beq a0,zero,0x00404e38
00404e1c  _nop
00404e20  lw t9,-0x7fb8(gp)
00404e24  nop
00404e28  jalr t9
00404e2c  _nop
00404e30  lw gp,0x38(sp)
00404e34  nop
00404e38  lw t9,-0x7e08(gp)
00404e3c  nop
00404e40  jalr t9
00404e44  _nop
00404e48  lbu v0,0x20(s0)
00404e4c  lw gp,0x38(sp)
00404e50  beq v0,zero,0x00404e6c
00404e54  _nop
00404e58  lw t9,-0x7db8(gp)
00404e5c  nop
00404e60  jalr t9
00404e64  _addiu a0,s0,0x24
00404e68  lw gp,0x38(sp)
00404e6c  lbu v0,0x18(s0)
00404e70  nop
00404e74  beq v0,zero,0x00404e8c
00404e78  _nop
00404e7c  lw t9,-0x7db8(gp)
00404e80  nop
00404e84  jalr t9
00404e88  _addiu a0,s0,0x8
00404e8c  lw t9,0x44(s0)
00404e90  nop
00404e94  beq t9,zero,0x00404ea4
00404e98  _move a0,s0
00404e9c  jalr t9
00404ea0  _li a1,0x5
00404ea4  lw ra,0x9c(sp)
00404ea8  lw s8,0x98(sp)
00404eac  lw s7,0x94(sp)
00404eb0  lw s6,0x90(sp)
00404eb4  lw s5,0x8c(sp)
00404eb8  lw s4,0x88(sp)
00404ebc  lw s3,0x84(sp)
00404ec0  lw s2,0x80(sp)
00404ec4  lw s1,0x7c(sp)
00404ec8  lw s0,0x78(sp)
00404ecc  clear v0
00404ed0  jr ra
00404ed4  _addiu sp,sp,0xa0
00404ed8  b 0x00404dc0
00404edc  _li s1,0x4
00404ee0  b 0x00404dc0
00404ee4  _li s1,0x6
