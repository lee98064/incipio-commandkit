# FUN_0041b644 @ 0041b644
0041b644  addiu sp,sp,-0x140
0041b648  sw ra,0x13c(sp)
0041b64c  sw s8,0x138(sp)
0041b650  sw s7,0x134(sp)
0041b654  sw s6,0x130(sp)
0041b658  sw s5,0x12c(sp)
0041b65c  sw s4,0x128(sp)
0041b660  sw s3,0x124(sp)
0041b664  sw s2,0x120(sp)
0041b668  sw s1,0x11c(sp)
0041b66c  sw s0,0x118(sp)
0041b670  lui gp,0x47
0041b674  addiu gp,gp,0x2630
0041b678  sw gp,0x18(sp)
0041b67c  lw t9,-0x7fbc(gp)
0041b680  lui s1,0x45
0041b684  lui a1,0x45
0041b688  addiu a1,a1,-0x58c
0041b68c  addiu a2,s1,-0x4cd4
0041b690  jalr t9
0041b694  _move s0,a0
0041b698  lw gp,0x18(sp)
0041b69c  lui a1,0x45
0041b6a0  addiu a1,a1,-0x580
0041b6a4  lw t9,-0x7fbc(gp)
0041b6a8  move a0,s0
0041b6ac  addiu a2,s1,-0x4cd4
0041b6b0  jalr t9
0041b6b4  _move s2,v0
0041b6b8  lw gp,0x18(sp)
0041b6bc  lui a1,0x45
0041b6c0  addiu a1,a1,-0x570
0041b6c4  lw t9,-0x7fbc(gp)
0041b6c8  move a0,s0
0041b6cc  addiu a2,s1,-0x4cd4
0041b6d0  jalr t9
0041b6d4  _move s8,v0
0041b6d8  lw gp,0x18(sp)
0041b6dc  addiu a0,sp,0x30
0041b6e0  clear a1
0041b6e4  lw t9,-0x7db4(gp)
0041b6e8  li a2,0x3d
0041b6ec  jalr t9
0041b6f0  _move s4,v0
0041b6f4  lb v0,0x0(s2)
0041b6f8  lw gp,0x18(sp)
0041b6fc  beq v0,zero,0x0041bbac
0041b700  _lui a1,0x45
0041b704  lw t9,-0x7fbc(gp)
0041b708  addiu a1,a1,0x2248
0041b70c  addiu a2,s1,-0x4cd4
0041b710  jalr t9
0041b714  _move a0,s0
0041b718  lw gp,0x18(sp)
0041b71c  lui a1,0x45
0041b720  move a0,v0
0041b724  lw t9,-0x7e0c(gp)
0041b728  nop
0041b72c  jalr t9
0041b730  _addiu a1,a1,-0x54ec
0041b734  lw gp,0x18(sp)
0041b738  bne v0,zero,0x0041b748
0041b73c  _li v0,0x1
0041b740  b 0x0041b74c
0041b744  _sw v0,0x24(sp)
0041b748  sw zero,0x24(sp)
0041b74c  lw t9,-0x7c08(gp)
0041b750  addiu s2,sp,0x24
0041b754  li a0,0x6e
0041b758  jalr t9
0041b75c  _move a1,s2
0041b760  lw gp,0x18(sp)
0041b764  bne v0,zero,0x0041b77c
0041b768  _lui s1,0x45
0041b76c  lui a1,0x45
0041b770  lw t9,-0x79d0(gp)
0041b774  b 0x0041bd04
0041b778  _addiu a1,a1,-0x560
0041b77c  lw t9,-0x7fbc(gp)
0041b780  lui a1,0x45
0041b784  addiu a2,s1,-0x4cd4
0041b788  addiu a1,a1,0x161c
0041b78c  jalr t9
0041b790  _move a0,s0
0041b794  lw gp,0x18(sp)
0041b798  lui a1,0x45
0041b79c  addiu a2,s1,-0x4cd4
0041b7a0  lw t9,-0x7fbc(gp)
0041b7a4  addiu a1,a1,-0x548
0041b7a8  move a0,s0
0041b7ac  jalr t9
0041b7b0  _move s7,v0
0041b7b4  lw gp,0x18(sp)
0041b7b8  lui a1,0x45
0041b7bc  addiu a2,s1,-0x4cd4
0041b7c0  lw t9,-0x7fbc(gp)
0041b7c4  addiu a1,a1,-0x53c
0041b7c8  move a0,s0
0041b7cc  jalr t9
0041b7d0  _move s5,v0
0041b7d4  lw gp,0x18(sp)
0041b7d8  lui a1,0x45
0041b7dc  addiu a2,s1,-0x4cd4
0041b7e0  lw t9,-0x7fbc(gp)
0041b7e4  addiu a1,a1,-0x534
0041b7e8  move a0,s0
0041b7ec  jalr t9
0041b7f0  _move s3,v0
0041b7f4  lb v1,0x0(s7)
0041b7f8  lw gp,0x18(sp)
0041b7fc  bne v1,zero,0x0041b840
0041b800  _move s1,v0
0041b804  lb v0,0x0(s5)
0041b808  nop
0041b80c  bne v0,zero,0x0041b834
0041b810  _lui a1,0x45
0041b814  lb v0,0x0(s3)
0041b818  nop
0041b81c  bne v0,zero,0x0041b834
0041b820  _nop
0041b824  lb v0,0x0(s1)
0041b828  nop
0041b82c  beq v0,zero,0x0041bd58
0041b830  _nop
0041b834  lw t9,-0x79d0(gp)
0041b838  b 0x0041bd04
0041b83c  _addiu a1,a1,-0x52c
0041b840  lw t9,-0x7d94(gp)
0041b844  move a0,s7
0041b848  lw s6,-0x7a50(gp)
0041b84c  jalr t9
0041b850  _addiu a1,sp,0x30
0041b854  lw gp,0x18(sp)
0041b858  lw a0,0x0(s6)
0041b85c  clear a1
0041b860  lw t9,-0x7ae0(gp)
0041b864  nop
0041b868  jalr t9
0041b86c  _addiu a2,sp,0x28
0041b870  lw gp,0x18(sp)
0041b874  lw a0,0x0(s6)
0041b878  li a1,0x2
0041b87c  lw t9,-0x7ae0(gp)
0041b880  nop
0041b884  jalr t9
0041b888  _addiu a2,sp,0x2c
0041b88c  lw v1,0x28(sp)
0041b890  lw v0,0x30(sp)
0041b894  lw gp,0x18(sp)
0041b898  xor v0,v1,v0
0041b89c  lw v1,0x2c(sp)
0041b8a0  nop
0041b8a4  and v0,v0,v1
0041b8a8  beq v0,zero,0x0041b8bc
0041b8ac  _lui a1,0x45
0041b8b0  lw t9,-0x79d0(gp)
0041b8b4  b 0x0041bd04
0041b8b8  _addiu a1,a1,-0x50c
0041b8bc  lb v0,0x0(s5)
0041b8c0  nop
0041b8c4  bne v0,zero,0x0041b8d8
0041b8c8  _lui a1,0x45
0041b8cc  lw t9,-0x79d0(gp)
0041b8d0  b 0x0041bd04
0041b8d4  _addiu a1,a1,-0x4cc
0041b8d8  move a0,s5
0041b8dc  jal 0x00419f50
0041b8e0  _move a1,s2
0041b8e4  lw gp,0x18(sp)
0041b8e8  beq v0,zero,0x0041b90c
0041b8ec  _nop
0041b8f0  lw v0,0x24(sp)
0041b8f4  nop
0041b8f8  blez v0,0x0041b90c
0041b8fc  _lui v1,0x1
0041b900  slt v1,v0,v1
0041b904  bne v1,zero,0x0041b91c
0041b908  _nop
0041b90c  lui a1,0x45
0041b910  lw t9,-0x79d0(gp)
0041b914  b 0x0041bd04
0041b918  _addiu a1,a1,-0x4a4
0041b91c  sh v0,0x34(sp)
0041b920  lb v0,0x0(s3)
0041b924  nop
0041b928  beq v0,zero,0x0041b970
0041b92c  _move a0,s3
0041b930  jal 0x00419f50
0041b934  _move a1,s2
0041b938  lw gp,0x18(sp)
0041b93c  beq v0,zero,0x0041b960
0041b940  _nop
0041b944  lw v0,0x24(sp)
0041b948  nop
0041b94c  blez v0,0x0041b960
0041b950  _lui v1,0x1
0041b954  slt v0,v0,v1
0041b958  bne v0,zero,0x0041b970
0041b95c  _nop
0041b960  lui a1,0x45
0041b964  lw t9,-0x79d0(gp)
0041b968  b 0x0041bd04
0041b96c  _addiu a1,a1,-0x480
0041b970  lhu v0,0x26(sp)
0041b974  lhu v1,0x34(sp)
0041b978  sh v0,0x36(sp)
0041b97c  sltu v0,v0,v1
0041b980  beq v0,zero,0x0041b998
0041b984  _lui a2,0x45
0041b988  lui a1,0x45
0041b98c  lw t9,-0x79d0(gp)
0041b990  b 0x0041bd04
0041b994  _addiu a1,a1,-0x45c
0041b998  lw t9,-0x7fbc(gp)
0041b99c  lui a1,0x45
0041b9a0  addiu a1,a1,-0x440
0041b9a4  addiu a2,a2,-0x4cd4
0041b9a8  jalr t9
0041b9ac  _move a0,s0
0041b9b0  lb v0,0x0(v0)
0041b9b4  lw gp,0x18(sp)
0041b9b8  beq v0,zero,0x0041ba14
0041b9bc  _li v1,0x30
0041b9c0  bne v0,v1,0x0041b9d0
0041b9c4  _li v1,0x31
0041b9c8  b 0x0041b9dc
0041b9cc  _li v0,0x3
0041b9d0  bne v0,v1,0x0041b9f8
0041b9d4  _li v1,0x32
0041b9d8  li v0,0x1
0041b9dc  sb v0,0x38(sp)
0041b9e0  lb v0,0x0(s1)
0041b9e4  nop
0041b9e8  bne v0,zero,0x0041ba24
0041b9ec  _nop
0041b9f0  b 0x0041ba68
0041b9f4  _nop
0041b9f8  bne v0,v1,0x0041ba08
0041b9fc  _lui a1,0x45
0041ba00  b 0x0041b9dc
0041ba04  _li v0,0x2
0041ba08  lw t9,-0x79d0(gp)
0041ba0c  b 0x0041bd04
0041ba10  _addiu a1,a1,-0x434
0041ba14  lui a1,0x45
0041ba18  lw t9,-0x79d0(gp)
0041ba1c  b 0x0041bd04
0041ba20  _addiu a1,a1,-0x414
0041ba24  lw t9,-0x7f1c(gp)
0041ba28  nop
0041ba2c  jalr t9
0041ba30  _move a0,s1
0041ba34  lw gp,0x18(sp)
0041ba38  sltiu v0,v0,0x15
0041ba3c  lw t9,-0x79d0(gp)
0041ba40  bne v0,zero,0x0041ba54
0041ba44  _nop
0041ba48  lui a1,0x45
0041ba4c  b 0x0041bd04
0041ba50  _addiu a1,a1,-0x3ec
0041ba54  move a1,s1
0041ba58  jalr t9
0041ba5c  _addiu a0,sp,0x58
0041ba60  lw gp,0x18(sp)
0041ba64  nop
0041ba68  lw t9,-0x7b54(gp)
0041ba6c  li a0,0x6f
0041ba70  jalr t9
0041ba74  _addiu a1,sp,0x20
0041ba78  lw gp,0x18(sp)
0041ba7c  beq v0,zero,0x0041bbd8
0041ba80  _nop
0041ba84  lw v0,0x20(sp)
0041ba88  nop
0041ba8c  addiu v0,v0,0x1
0041ba90  slti v0,v0,0x15
0041ba94  beq v0,zero,0x0041baa4
0041ba98  _li s1,0x1
0041ba9c  b 0x0041bb4c
0041baa0  _addiu s2,sp,0x70
0041baa4  lui a1,0x45
0041baa8  lw t9,-0x79d0(gp)
0041baac  b 0x0041bd04
0041bab0  _addiu a1,a1,-0x1a14
0041bab4  lw t9,-0x7b54(gp)
0041bab8  sb s1,0x0(s2)
0041babc  jalr t9
0041bac0  _move a1,s2
0041bac4  lw gp,0x18(sp)
0041bac8  bne v0,zero,0x0041badc
0041bacc  _lui a1,0x45
0041bad0  lw t9,-0x79d0(gp)
0041bad4  b 0x0041bd04
0041bad8  _addiu a1,a1,-0x1930
0041badc  lw a0,0x34(sp)
0041bae0  lhu v1,0x74(sp)
0041bae4  srl v0,a0,0x10
0041bae8  sltu a1,v1,v0
0041baec  bne a1,zero,0x0041bb0c
0041baf0  _andi a0,a0,0xffff
0041baf4  sltu a0,a0,v1
0041baf8  beq a0,zero,0x0041bb20
0041bafc  _sltu v1,v0,v1
0041bb00  bne v1,zero,0x0041bb4c
0041bb04  _addiu s1,s1,0x1
0041bb08  addiu s1,s1,-0x1
0041bb0c  lhu v1,0x76(sp)
0041bb10  nop
0041bb14  sltu v0,v1,v0
0041bb18  bne v0,zero,0x0041bb48
0041bb1c  _nop
0041bb20  lbu v0,0x38(sp)
0041bb24  lbu v1,0x78(sp)
0041bb28  nop
0041bb2c  and v0,v1,v0
0041bb30  beq v0,zero,0x0041bb4c
0041bb34  _addiu s1,s1,0x1
0041bb38  lui a1,0x45
0041bb3c  lw t9,-0x79d0(gp)
0041bb40  b 0x0041bd04
0041bb44  _addiu a1,a1,-0x3cc
0041bb48  addiu s1,s1,0x1
0041bb4c  lw v0,0x20(sp)
0041bb50  nop
0041bb54  slt v0,v0,s1
0041bb58  beq v0,zero,0x0041bab4
0041bb5c  _ori a0,zero,0x8070
0041bb60  lw t9,-0x7c08(gp)
0041bb64  addiu s1,sp,0x30
0041bb68  lui a0,0x2
0041bb6c  ori a0,a0,0x72
0041bb70  jalr t9
0041bb74  _move a1,s1
0041bb78  lw gp,0x18(sp)
0041bb7c  lui a0,0x1
0041bb80  ori a0,a0,0x71
0041bb84  lw t9,-0x7c08(gp)
0041bb88  nop
0041bb8c  jalr t9
0041bb90  _move a1,s1
0041bb94  lw gp,0x18(sp)
0041bb98  bne v0,zero,0x0041bbac
0041bb9c  _lui a1,0x45
0041bba0  lw t9,-0x79d0(gp)
0041bba4  b 0x0041bd04
0041bba8  _addiu a1,a1,-0x1954
0041bbac  lb v0,0x0(s8)
0041bbb0  nop
0041bbb4  beq v0,zero,0x0041bcd0
0041bbb8  _li a0,0x6f
0041bbbc  lw t9,-0x7b54(gp)
0041bbc0  nop
0041bbc4  jalr t9
0041bbc8  _addiu a1,sp,0x20
0041bbcc  lw gp,0x18(sp)
0041bbd0  bne v0,zero,0x0041bbe8
0041bbd4  _lui s8,0x45
0041bbd8  lui a1,0x45
0041bbdc  lw t9,-0x79d0(gp)
0041bbe0  b 0x0041bd04
0041bbe4  _addiu a1,a1,-0x1a2c
0041bbe8  lui s7,0x45
0041bbec  lui s6,0x45
0041bbf0  lui s5,0x2
0041bbf4  addiu s8,s8,-0x193c
0041bbf8  addiu s7,s7,-0x4cd4
0041bbfc  addiu s6,s6,-0x54ec
0041bc00  ori s5,s5,0x72
0041bc04  lw s1,0x20(sp)
0041bc08  addiu s2,sp,0xb0
0041bc0c  b 0x0041bcc8
0041bc10  _addiu s3,sp,0x30
0041bc14  lw t9,-0x7a4c(gp)
0041bc18  move a0,s2
0041bc1c  li a1,0x14
0041bc20  jalr t9
0041bc24  _move a2,s8
0041bc28  lw gp,0x18(sp)
0041bc2c  move a0,s0
0041bc30  move a1,s2
0041bc34  lw t9,-0x7fbc(gp)
0041bc38  nop
0041bc3c  jalr t9
0041bc40  _move a2,s7
0041bc44  lw gp,0x18(sp)
0041bc48  move a0,v0
0041bc4c  lw t9,-0x7e0c(gp)
0041bc50  nop
0041bc54  jalr t9
0041bc58  _move a1,s6
0041bc5c  lw gp,0x18(sp)
0041bc60  bne v0,zero,0x0041bcc4
0041bc64  _ori a0,zero,0x8070
0041bc68  lw t9,-0x7b54(gp)
0041bc6c  sb s1,0x0(s3)
0041bc70  jalr t9
0041bc74  _move a1,s3
0041bc78  lw gp,0x18(sp)
0041bc7c  bne v0,zero,0x0041bc94
0041bc80  _lui a1,0x45
0041bc84  lw t9,-0x79d0(gp)
0041bc88  move a0,s2
0041bc8c  b 0x0041bd08
0041bc90  _addiu a1,a1,-0x1930
0041bc94  lw t9,-0x7c08(gp)
0041bc98  move a0,s5
0041bc9c  jalr t9
0041bca0  _move a1,s3
0041bca4  lw gp,0x18(sp)
0041bca8  bne v0,zero,0x0041bcc8
0041bcac  _addiu s1,s1,-0x1
0041bcb0  lui a1,0x45
0041bcb4  lw t9,-0x79d0(gp)
0041bcb8  move a0,s2
0041bcbc  b 0x0041bd08
0041bcc0  _addiu a1,a1,-0x1918
0041bcc4  addiu s1,s1,-0x1
0041bcc8  bgtz s1,0x0041bc14
0041bccc  _move a3,s1
0041bcd0  lb v0,0x0(s4)
0041bcd4  nop
0041bcd8  beq v0,zero,0x0041bd58
0041bcdc  _lui a0,0x4
0041bce0  lw t9,-0x7c08(gp)
0041bce4  ori a0,a0,0x73
0041bce8  jalr t9
0041bcec  _addiu a1,sp,0x30
0041bcf0  lw gp,0x18(sp)
0041bcf4  bne v0,zero,0x0041bd58
0041bcf8  _lui a1,0x45
0041bcfc  lw t9,-0x79d0(gp)
0041bd00  addiu a1,a1,-0x18fc
0041bd04  addiu a0,sp,0xb0
0041bd08  jalr t9
0041bd0c  _nop
0041bd10  jal 0x00419fe8
0041bd14  _move a0,s0
0041bd18  lw gp,0x18(sp)
0041bd1c  lui a1,0x45
0041bd20  move a0,s0
0041bd24  lw t9,-0x7cd4(gp)
0041bd28  addiu a1,a1,-0x271c
0041bd2c  jalr t9
0041bd30  _addiu a2,sp,0xb0
0041bd34  lw gp,0x18(sp)
0041bd38  lui a1,0x45
0041bd3c  move a0,s0
0041bd40  lw t9,-0x7cd4(gp)
0041bd44  nop
0041bd48  jalr t9
0041bd4c  _addiu a1,a1,-0x2050
0041bd50  b 0x0041bf50
0041bd54  _nop
0041bd58  jal 0x0041af38
0041bd5c  _nop
0041bd60  lw gp,0x18(sp)
0041bd64  nop
0041bd68  lw t9,-0x7d68(gp)
0041bd6c  nop
0041bd70  jalr t9
0041bd74  _nop
0041bd78  lw gp,0x18(sp)
0041bd7c  beq v0,zero,0x0041bde4
0041bd80  _addiu s1,sp,0xb0
0041bd84  lw t9,-0x79e8(gp)
0041bd88  move a0,v0
0041bd8c  clear a1
0041bd90  jalr t9
0041bd94  _clear a2
0041bd98  lw gp,0x18(sp)
0041bd9c  lui a1,0x45
0041bda0  lui a2,0x45
0041bda4  lw t9,-0x7fbc(gp)
0041bda8  move a0,s0
0041bdac  addiu a1,a1,-0x3b10
0041bdb0  jalr t9
0041bdb4  _addiu a2,a2,-0x4cd4
0041bdb8  lw gp,0x18(sp)
0041bdbc  move s1,v0
0041bdc0  li a0,0x1
0041bdc4  lw v1,-0x7c7c(gp)
0041bdc8  nop
0041bdcc  lw v0,0x0(v1)
0041bdd0  nop
0041bdd4  bne v0,a0,0x0041bf30
0041bdd8  _nop
0041bddc  b 0x0041be44
0041bde0  _sw v0,0x0(v1)
0041bde4  lw t9,-0x7a4c(gp)
0041bde8  lui s0,0x45
0041bdec  addiu s0,s0,-0x390
0041bdf0  lui a2,0x45
0041bdf4  lui a3,0x45
0041bdf8  addiu a2,a2,-0x27e4
0041bdfc  addiu a3,a3,-0x27dc
0041be00  move a0,s1
0041be04  li a1,0x64
0041be08  jalr t9
0041be0c  _sw s0,0x10(sp)
0041be10  lw gp,0x18(sp)
0041be14  move a0,s1
0041be18  move a1,s0
0041be1c  lw t9,-0x7ae4(gp)
0041be20  nop
0041be24  jalr t9
0041be28  _clear a2
0041be2c  lw gp,0x18(sp)
0041be30  nop
0041be34  lw t9,-0x7ed4(gp)
0041be38  nop
0041be3c  jalr t9
0041be40  _li a0,0x1
0041be44  lb v0,0x0(s1)
0041be48  nop
0041be4c  bne v0,zero,0x0041be70
0041be50  _nop
0041be54  lw t9,-0x79d0(gp)
0041be58  lui a1,0x45
0041be5c  addiu a1,a1,-0x22a8
0041be60  jalr t9
0041be64  _move a0,s1
0041be68  lw gp,0x18(sp)
0041be6c  nop
0041be70  lw t9,-0x7cd4(gp)
0041be74  lui a1,0x45
0041be78  move a0,s0
0041be7c  jalr t9
0041be80  _addiu a1,a1,-0x229c
0041be84  lw gp,0x18(sp)
0041be88  lui a1,0x45
0041be8c  move a0,s0
0041be90  lw t9,-0x7cd4(gp)
0041be94  nop
0041be98  jalr t9
0041be9c  _addiu a1,a1,-0x21b0
0041bea0  lw gp,0x18(sp)
0041bea4  lui a1,0x45
0041bea8  move a2,s1
0041beac  lw t9,-0x7cd4(gp)
0041beb0  move a0,s0
0041beb4  jalr t9
0041beb8  _addiu a1,a1,-0x216c
0041bebc  lw gp,0x18(sp)
0041bec0  lui a1,0x45
0041bec4  move a0,s0
0041bec8  lw t9,-0x7cd4(gp)
0041becc  nop
0041bed0  jalr t9
0041bed4  _addiu a1,a1,-0x2138
0041bed8  lw gp,0x18(sp)
0041bedc  lui a1,0x45
0041bee0  move a2,s1
0041bee4  lw t9,-0x7cd4(gp)
0041bee8  move a0,s0
0041beec  jalr t9
0041bef0  _addiu a1,a1,-0x20d8
0041bef4  lw gp,0x18(sp)
0041bef8  lui a1,0x45
0041befc  move a0,s0
0041bf00  lw t9,-0x7cd4(gp)
0041bf04  nop
0041bf08  jalr t9
0041bf0c  _addiu a1,a1,-0x2074
0041bf10  lw gp,0x18(sp)
0041bf14  lui a0,0x45
0041bf18  lw t9,-0x7c58(gp)
0041bf1c  nop
0041bf20  jalr t9
0041bf24  _addiu a0,a0,-0x3bd8
0041bf28  b 0x0041bf50
0041bf2c  _nop
0041bf30  lb v0,0x0(s1)
0041bf34  nop
0041bf38  beq v0,zero,0x0041bf50
0041bf3c  _move a0,s0
0041bf40  lw t9,-0x79b8(gp)
0041bf44  nop
0041bf48  jalr t9
0041bf4c  _move a1,s1
0041bf50  lw ra,0x13c(sp)
0041bf54  lw s8,0x138(sp)
0041bf58  lw s7,0x134(sp)
0041bf5c  lw s6,0x130(sp)
0041bf60  lw s5,0x12c(sp)
0041bf64  lw s4,0x128(sp)
0041bf68  lw s3,0x124(sp)
0041bf6c  lw s2,0x120(sp)
0041bf70  lw s1,0x11c(sp)
0041bf74  lw s0,0x118(sp)
0041bf78  jr ra
0041bf7c  _addiu sp,sp,0x140
