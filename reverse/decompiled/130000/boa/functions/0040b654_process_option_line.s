# process_option_line @ 0040b654
0040b654  addiu sp,sp,-0xb8
0040b658  sw ra,0xb4(sp)
0040b65c  sw s3,0xb0(sp)
0040b660  sw s2,0xac(sp)
0040b664  sw s1,0xa8(sp)
0040b668  sw s0,0xa4(sp)
0040b66c  lui gp,0x47
0040b670  addiu gp,gp,0x2630
0040b674  sw gp,0x10(sp)
0040b678  lw s2,0x40(a0)
0040b67c  lw t9,-0x7f48(gp)
0040b680  move s0,a0
0040b684  li a1,0x3a
0040b688  jalr t9
0040b68c  _move a0,s2
0040b690  lw gp,0x10(sp)
0040b694  bne v0,zero,0x0040b6bc
0040b698  _lui a1,0x45
0040b69c  lw v0,-0x7e40(gp)
0040b6a0  lw t9,-0x7c44(gp)
0040b6a4  lw a0,0x0(v0)
0040b6a8  addiu a1,a1,-0x55b8
0040b6ac  jalr t9
0040b6b0  _move a2,s2
0040b6b4  b 0x0040b7a0
0040b6b8  _nop
0040b6bc  lw t9,-0x7ac4(gp)
0040b6c0  move a0,s2
0040b6c4  sb zero,0x0(v0)
0040b6c8  jalr t9
0040b6cc  _addiu s1,v0,0x1
0040b6d0  lw gp,0x10(sp)
0040b6d4  li a0,0x20
0040b6d8  b 0x0040b6e4
0040b6dc  _li v1,0x9
0040b6e0  addiu s1,s1,0x1
0040b6e4  lb v0,0x0(s1)
0040b6e8  nop
0040b6ec  beq v0,zero,0x0040bc04
0040b6f0  _nop
0040b6f4  beq v0,a0,0x0040b6e0
0040b6f8  _nop
0040b6fc  beq v0,v1,0x0040b6e4
0040b700  _addiu s1,s1,0x1
0040b704  addiu s1,s1,-0x1
0040b708  b 0x0040bc28
0040b70c  _li v1,0x48
0040b710  lw t9,-0x7d60(gp)
0040b714  lui a1,0x45
0040b718  addiu a1,a1,-0x5594
0040b71c  move a0,s2
0040b720  jalr t9
0040b724  _li a2,0x7
0040b728  lw gp,0x10(sp)
0040b72c  beq v0,zero,0x0040bc04
0040b730  _lui a1,0x45
0040b734  lw t9,-0x7d60(gp)
0040b738  addiu a1,a1,-0x558c
0040b73c  move a0,s2
0040b740  jalr t9
0040b744  _li a2,0xe
0040b748  lw gp,0x10(sp)
0040b74c  bne v0,zero,0x0040bbe4
0040b750  _lui a1,0x45
0040b754  lw t9,-0x7ba4(gp)
0040b758  addiu a1,a1,-0x557c
0040b75c  move a0,s1
0040b760  jalr t9
0040b764  _li a2,0x6
0040b768  lw gp,0x10(sp)
0040b76c  beq v0,zero,0x0040b7a8
0040b770  _nop
0040b774  lw t9,-0x7af4(gp)
0040b778  lui a0,0x45
0040b77c  addiu a0,a0,-0x5574
0040b780  jalr t9
0040b784  _nop
0040b788  lw gp,0x10(sp)
0040b78c  nop
0040b790  lw t9,-0x7cc8(gp)
0040b794  nop
0040b798  jalr t9
0040b79c  _move a0,s0
0040b7a0  b 0x0040bc08
0040b7a4  _clear v1
0040b7a8  lw t9,-0x7f1c(gp)
0040b7ac  nop
0040b7b0  jalr t9
0040b7b4  _addiu a0,s1,0x6
0040b7b8  lw gp,0x10(sp)
0040b7bc  clear v1
0040b7c0  clear a2
0040b7c4  clear a0
0040b7c8  clear t0
0040b7cc  addiu t5,sp,0x18
0040b7d0  li t4,0x1
0040b7d4  li t3,0x2b
0040b7d8  b 0x0040b884
0040b7dc  _li t2,0x2d
0040b7e0  lb a1,0x6(a1)
0040b7e4  nop
0040b7e8  andi t1,a1,0xff
0040b7ec  addiu t6,t1,-0x41
0040b7f0  andi t6,t6,0xff
0040b7f4  sltiu t6,t6,0x1a
0040b7f8  bne t6,zero,0x0040b83c
0040b7fc  _addiu a3,a1,-0x41
0040b800  addiu t6,t1,-0x61
0040b804  andi t6,t6,0xff
0040b808  sltiu t6,t6,0x1a
0040b80c  bne t6,zero,0x0040b83c
0040b810  _addiu a3,a1,-0x47
0040b814  addiu t1,t1,-0x30
0040b818  andi t1,t1,0xff
0040b81c  sltiu t1,t1,0xa
0040b820  bne t1,zero,0x0040b83c
0040b824  _addiu a3,a1,0x4
0040b828  beq a1,t3,0x0040b83c
0040b82c  _li a3,0x3e
0040b830  bne a1,t2,0x0040b880
0040b834  _nop
0040b838  li a3,0x3f
0040b83c  sll a2,a2,0x6
0040b840  addu a2,a3,a2
0040b844  b 0x0040b868
0040b848  _addiu v1,v1,0x6
0040b84c  addiu v1,v1,-0x8
0040b850  sllv a1,t4,v1
0040b854  beq t1,zero,0x0040b864
0040b858  _addiu a1,a1,-0x1
0040b85c  sb t6,0x0(a3)
0040b860  addiu a0,a0,0x1
0040b864  and a2,a2,a1
0040b868  addiu t6,v1,-0x8
0040b86c  slti a1,v1,0x8
0040b870  srav t6,a2,t6
0040b874  slti t1,a0,0x80
0040b878  beq a1,zero,0x0040b84c
0040b87c  _addu a3,t5,a0
0040b880  addiu t0,t0,0x1
0040b884  slt a1,t0,v0
0040b888  bne a1,zero,0x0040b7e0
0040b88c  _addu a1,s1,t0
0040b890  slti v0,a0,0x80
0040b894  beq v0,zero,0x0040b8a0
0040b898  _addu a0,sp,a0
0040b89c  sb zero,0x18(a0)
0040b8a0  lw t9,-0x7f48(gp)
0040b8a4  addiu s1,sp,0x18
0040b8a8  move a0,s1
0040b8ac  jalr t9
0040b8b0  _li a1,0x3a
0040b8b4  lw gp,0x10(sp)
0040b8b8  bne v0,zero,0x0040b8d0
0040b8bc  _move s2,v0
0040b8c0  lui a0,0x45
0040b8c4  lw t9,-0x7af4(gp)
0040b8c8  b 0x0040b780
0040b8cc  _addiu a0,a0,-0x5558
0040b8d0  lw t9,-0x7d8c(gp)
0040b8d4  move a0,s1
0040b8d8  jalr t9
0040b8dc  _sb zero,0x0(v0)
0040b8e0  lw gp,0x10(sp)
0040b8e4  addiu a0,s2,0x1
0040b8e8  lw t9,-0x7d8c(gp)
0040b8ec  nop
0040b8f0  jalr t9
0040b8f4  _sw v0,0xa8(s0)
0040b8f8  b 0x0040bc04
0040b8fc  _sw v0,0xac(s0)
0040b900  lw t9,-0x7d60(gp)
0040b904  move a0,s2
0040b908  jalr t9
0040b90c  _li a2,0xd
0040b910  lw gp,0x10(sp)
0040b914  bne v0,zero,0x0040b9e0
0040b918  _nop
0040b91c  lw v0,0x90(s0)
0040b920  nop
0040b924  bne v0,zero,0x0040b9e0
0040b928  _nop
0040b92c  lw t9,-0x7f1c(gp)
0040b930  sw s1,0x90(s0)
0040b934  sw zero,0x3278(s0)
0040b938  jalr t9
0040b93c  _move a0,s1
0040b940  sltiu v0,v0,0x14
0040b944  lw gp,0x10(sp)
0040b948  bne v0,zero,0x0040bc04
0040b94c  _lui a1,0x45
0040b950  lw t9,-0x7d18(gp)
0040b954  addiu a1,a1,-0x552c
0040b958  move a0,s1
0040b95c  jalr t9
0040b960  _li a2,0x13
0040b964  lw gp,0x10(sp)
0040b968  bne v0,zero,0x0040bc04
0040b96c  _lui a1,0x45
0040b970  lw t9,-0x7cf0(gp)
0040b974  move a0,s1
0040b978  jalr t9
0040b97c  _addiu a1,a1,-0x5518
0040b980  lw gp,0x10(sp)
0040b984  beq v0,zero,0x0040bc04
0040b988  _addiu a2,v0,0x9
0040b98c  lw t9,-0x7f1c(gp)
0040b990  move a0,a2
0040b994  jalr t9
0040b998  _sw a2,0x98(sp)
0040b99c  lw gp,0x10(sp)
0040b9a0  nop
0040b9a4  lw t9,-0x7b1c(gp)
0040b9a8  nop
0040b9ac  jalr t9
0040b9b0  _addiu a0,v0,0x4
0040b9b4  lw gp,0x10(sp)
0040b9b8  sw v0,0x3278(s0)
0040b9bc  lw a2,0x98(sp)
0040b9c0  beq v0,zero,0x0040bc04
0040b9c4  _lui a1,0x45
0040b9c8  lw t9,-0x7e28(gp)
0040b9cc  move a0,v0
0040b9d0  jalr t9
0040b9d4  _addiu a1,a1,-0x550c
0040b9d8  b 0x0040bc08
0040b9dc  _li v1,0x1
0040b9e0  lw t9,-0x7d60(gp)
0040b9e4  lui a1,0x45
0040b9e8  addiu a1,a1,-0x5504
0040b9ec  move a0,s2
0040b9f0  jalr t9
0040b9f4  _li a2,0xf
0040b9f8  lw gp,0x10(sp)
0040b9fc  bne v0,zero,0x0040ba1c
0040ba00  _nop
0040ba04  lw v0,0x94(s0)
0040ba08  nop
0040ba0c  bne v0,zero,0x0040ba1c
0040ba10  _nop
0040ba14  b 0x0040bc04
0040ba18  _sw s1,0x94(s0)
0040ba1c  lw t9,-0x7d60(gp)
0040ba20  lui a1,0x45
0040ba24  addiu a1,a1,-0x54f4
0040ba28  move a0,s2
0040ba2c  jalr t9
0040ba30  _li a2,0xb
0040ba34  lw gp,0x10(sp)
0040ba38  bne v0,zero,0x0040bbe4
0040ba3c  _nop
0040ba40  lw v0,-0x7f94(gp)
0040ba44  nop
0040ba48  lw v0,0x0(v0)
0040ba4c  nop
0040ba50  beq v0,zero,0x0040bbe4
0040ba54  _li v0,0x2
0040ba58  lw v1,0x4(s0)
0040ba5c  nop
0040ba60  beq v1,v0,0x0040bbe4
0040ba64  _nop
0040ba68  b 0x0040bc04
0040ba6c  _sw v0,0x4(s0)
0040ba70  lw t9,-0x7d60(gp)
0040ba74  lui a1,0x45
0040ba78  addiu a1,a1,-0x54e8
0040ba7c  move a0,s2
0040ba80  jalr t9
0040ba84  _li a2,0x5
0040ba88  lw gp,0x10(sp)
0040ba8c  bne v0,zero,0x0040bbe4
0040ba90  _nop
0040ba94  lw v0,0x60(s0)
0040ba98  nop
0040ba9c  bne v0,zero,0x0040bbe4
0040baa0  _nop
0040baa4  b 0x0040bc04
0040baa8  _sw s1,0x60(s0)
0040baac  lw t9,-0x7d60(gp)
0040bab0  move a0,s2
0040bab4  jalr t9
0040bab8  _li a2,0x12
0040babc  lw gp,0x10(sp)
0040bac0  bne v0,zero,0x0040bbe4
0040bac4  _nop
0040bac8  lw v0,0x54(s0)
0040bacc  nop
0040bad0  bne v0,zero,0x0040bbe4
0040bad4  _nop
0040bad8  b 0x0040bc04
0040badc  _sw s1,0x54(s0)
0040bae0  lw t9,-0x7d60(gp)
0040bae4  lui s3,0x45
0040bae8  move a0,s2
0040baec  addiu a1,s3,-0x54cc
0040baf0  jalr t9
0040baf4  _li a2,0x8
0040baf8  lw gp,0x10(sp)
0040bafc  bne v0,zero,0x0040bb34
0040bb00  _lui a1,0x45
0040bb04  lw t9,-0x7ea8(gp)
0040bb08  sw s1,0x68(s0)
0040bb0c  addiu a1,s3,-0x54cc
0040bb10  move a0,s0
0040bb14  move a2,s1
0040bb18  jalr t9
0040bb1c  _li a3,0x1
0040bb20  lw gp,0x10(sp)
0040bb24  bne v0,zero,0x0040bbe4
0040bb28  _clear v1
0040bb2c  b 0x0040bc08
0040bb30  _nop
0040bb34  lw t9,-0x7d60(gp)
0040bb38  addiu a1,a1,-0x54c4
0040bb3c  move a0,s2
0040bb40  jalr t9
0040bb44  _li a2,0x6
0040bb48  lw gp,0x10(sp)
0040bb4c  bne v0,zero,0x0040bbe4
0040bb50  _nop
0040bb54  lw v0,0x20(s0)
0040bb58  nop
0040bb5c  beq v0,zero,0x0040bb78
0040bb60  _nop
0040bb64  lw v1,0x4(v0)
0040bb68  lui v0,0x7fff
0040bb6c  ori v0,v0,0xffff
0040bb70  beq v1,v0,0x0040bc08
0040bb74  _li v1,0x1
0040bb78  lw t9,-0x7f00(gp)
0040bb7c  move a0,s0
0040bb80  jalr t9
0040bb84  _move a1,s1
0040bb88  lw gp,0x10(sp)
0040bb8c  bne v0,zero,0x0040bbe4
0040bb90  _nop
0040bb94  lw t9,-0x7bb0(gp)
0040bb98  b 0x0040b798
0040bb9c  _nop
0040bba0  lw t9,-0x7d60(gp)
0040bba4  lui s3,0x45
0040bba8  move a0,s2
0040bbac  addiu a1,s3,-0x54bc
0040bbb0  jalr t9
0040bbb4  _li a2,0xb
0040bbb8  lw gp,0x10(sp)
0040bbbc  bne v0,zero,0x0040bbe4
0040bbc0  _move a0,s0
0040bbc4  lw t9,-0x7ea8(gp)
0040bbc8  sw s1,0x64(s0)
0040bbcc  addiu a1,s3,-0x54bc
0040bbd0  move a2,s1
0040bbd4  jalr t9
0040bbd8  _li a3,0x1
0040bbdc  b 0x0040bc08
0040bbe0  _sltu v1,zero,v0
0040bbe4  lw t9,-0x7ea8(gp)
0040bbe8  move a0,s0
0040bbec  move a1,s2
0040bbf0  move a2,s1
0040bbf4  jalr t9
0040bbf8  _li a3,0x1
0040bbfc  b 0x0040bc08
0040bc00  _move v1,v0
0040bc04  li v1,0x1
0040bc08  lw ra,0xb4(sp)
0040bc0c  lw s3,0xb0(sp)
0040bc10  lw s2,0xac(sp)
0040bc14  lw s1,0xa8(sp)
0040bc18  lw s0,0xa4(sp)
0040bc1c  move v0,v1
0040bc20  jr ra
0040bc24  _addiu sp,sp,0xb8
0040bc28  lb v0,0x0(s2)
0040bc2c  nop
0040bc30  beq v0,v1,0x0040ba70
0040bc34  _slti v1,v0,0x49
0040bc38  beq v1,zero,0x0040bc5c
0040bc3c  _li v1,0x52
0040bc40  li v1,0x41
0040bc44  beq v0,v1,0x0040b710
0040bc48  _li v1,0x43
0040bc4c  bne v0,v1,0x0040bbe4
0040bc50  _lui a1,0x45
0040bc54  b 0x0040b900
0040bc58  _addiu a1,a1,-0x553c
0040bc5c  beq v0,v1,0x0040bae0
0040bc60  _li v1,0x55
0040bc64  beq v0,v1,0x0040bba0
0040bc68  _li v1,0x49
0040bc6c  bne v0,v1,0x0040bbe4
0040bc70  _lui a1,0x45
0040bc74  b 0x0040baac
0040bc78  _addiu a1,a1,-0x54e0
