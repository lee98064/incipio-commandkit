# FUN_0040c6c4 @ 0040c6c4
0040c6c4  addiu sp,sp,-0x7ff0
0040c6c8  sw ra,0x7fec(sp)
0040c6cc  sw s5,0x7fe8(sp)
0040c6d0  sw s4,0x7fe4(sp)
0040c6d4  sw s3,0x7fe0(sp)
0040c6d8  sw s2,0x7fdc(sp)
0040c6dc  sw s1,0x7fd8(sp)
0040c6e0  sw s0,0x7fd4(sp)
0040c6e4  lui gp,0x47
0040c6e8  addiu sp,sp,-0x48
0040c6ec  addiu gp,gp,0x2630
0040c6f0  sw gp,0x10(sp)
0040c6f4  lw v0,0x50(a0)
0040c6f8  nop
0040c6fc  beq v0,zero,0x0040c74c
0040c700  _move s0,a0
0040c704  lw v0,0x0(a0)
0040c708  nop
0040c70c  sltiu v0,v0,0xb
0040c710  beq v0,zero,0x0040c74c
0040c714  _li v0,0xa
0040c718  lw t9,-0x7f98(gp)
0040c71c  nop
0040c720  jalr t9
0040c724  _sw v0,0x0(a0)
0040c728  li v1,-0x2
0040c72c  lw gp,0x10(sp)
0040c730  bne v0,v1,0x0040c744
0040c734  _nop
0040c738  li v0,0xc
0040c73c  b 0x0040c74c
0040c740  _sw v0,0x0(s0)
0040c744  bgtz v0,0x0040cc38
0040c748  _nop
0040c74c  lw t9,-0x7ea0(gp)
0040c750  lw a0,-0x79dc(gp)
0040c754  jalr t9
0040c758  _move a1,s0
0040c75c  lw v1,0x0(s0)
0040c760  li v0,0xb
0040c764  lw gp,0x10(sp)
0040c768  bne v1,v0,0x0040c784
0040c76c  _nop
0040c770  lw v0,0x10(s0)
0040c774  nop
0040c778  bne v0,zero,0x0040c784
0040c77c  _li v0,0x198
0040c780  sw v0,0x10(s0)
0040c784  lw a0,0xa4(s0)
0040c788  nop
0040c78c  beq a0,zero,0x0040c7ac
0040c790  _nop
0040c794  lw t9,-0x7be4(gp)
0040c798  nop
0040c79c  jalr t9
0040c7a0  _nop
0040c7a4  b 0x0040c7cc
0040c7a8  _nop
0040c7ac  lw a0,0x38(s0)
0040c7b0  nop
0040c7b4  beq a0,zero,0x0040c7d0
0040c7b8  _nop
0040c7bc  lw t9,-0x7a54(gp)
0040c7c0  lw a1,0x2c(s0)
0040c7c4  jalr t9
0040c7c8  _nop
0040c7cc  lw gp,0x10(sp)
0040c7d0  lw a0,0x28(s0)
0040c7d4  nop
0040c7d8  beq a0,zero,0x0040c820
0040c7dc  _nop
0040c7e0  lw t9,-0x7f9c(gp)
0040c7e4  nop
0040c7e8  jalr t9
0040c7ec  _nop
0040c7f0  lw gp,0x10(sp)
0040c7f4  lw v1,0x28(s0)
0040c7f8  li a1,0x1
0040c7fc  lw a0,-0x7fb8(gp)
0040c800  srl v0,v1,0x5
0040c804  sll v0,v0,0x2
0040c808  addu v0,a0,v0
0040c80c  lw a0,0x0(v0)
0040c810  sllv v1,a1,v1
0040c814  nor v1,zero,v1
0040c818  and v1,v1,a0
0040c81c  sw v1,0x0(v0)
0040c820  lw a0,0x74(s0)
0040c824  nop
0040c828  beq a0,zero,0x0040c850
0040c82c  _nop
0040c830  lw t9,-0x7fb0(gp)
0040c834  nop
0040c838  jalr t9
0040c83c  _nop
0040c840  lw gp,0x10(sp)
0040c844  sw zero,0x74(s0)
0040c848  sw zero,0x7c(s0)
0040c84c  sw zero,0x78(s0)
0040c850  lw v0,0x10(s0)
0040c854  nop
0040c858  sltiu v0,v0,0x190
0040c85c  bne v0,zero,0x0040c87c
0040c860  _nop
0040c864  lw v0,-0x7f88(gp)
0040c868  nop
0040c86c  lw v1,0x4(v0)
0040c870  nop
0040c874  addiu v1,v1,0x1
0040c878  sw v1,0x4(v0)
0040c87c  lw v0,-0x7a10(gp)
0040c880  lui s5,0x45
0040c884  addiu s5,s5,-0x52ec
0040c888  lh s3,0x0(v0)
0040c88c  clear s2
0040c890  lw s4,-0x7e40(gp)
0040c894  addiu s1,s3,0xc36
0040c898  sll s1,s1,0x2
0040c89c  b 0x0040c8e0
0040c8a0  _addu s1,s0,s1
0040c8a4  lw v0,0x0(s1)
0040c8a8  nop
0040c8ac  beq v0,zero,0x0040c8c4
0040c8b0  _move a0,v0
0040c8b4  jalr t9
0040c8b8  _nop
0040c8bc  b 0x0040c8d4
0040c8c0  _nop
0040c8c4  lw t9,-0x7c44(gp)
0040c8c8  lw a0,0x0(s4)
0040c8cc  jalr t9
0040c8d0  _move a1,s5
0040c8d4  lw gp,0x10(sp)
0040c8d8  addiu s2,s2,0x1
0040c8dc  addiu s1,s1,0x4
0040c8e0  lw a3,0x5c(s0)
0040c8e4  addu a2,s2,s3
0040c8e8  lw t9,-0x7fb0(gp)
0040c8ec  slt v0,a2,a3
0040c8f0  bne v0,zero,0x0040c8a4
0040c8f4  _nop
0040c8f8  lw a0,0x1c(s0)
0040c8fc  nop
0040c900  beq a0,zero,0x0040c914
0040c904  _nop
0040c908  jalr t9
0040c90c  _nop
0040c910  lw gp,0x10(sp)
0040c914  lw a0,0x80(s0)
0040c918  nop
0040c91c  beq a0,zero,0x0040c938
0040c920  _nop
0040c924  lw t9,-0x7fb0(gp)
0040c928  nop
0040c92c  jalr t9
0040c930  _nop
0040c934  lw gp,0x10(sp)
0040c938  lw a0,0x84(s0)
0040c93c  nop
0040c940  beq a0,zero,0x0040c95c
0040c944  _nop
0040c948  lw t9,-0x7fb0(gp)
0040c94c  nop
0040c950  jalr t9
0040c954  _nop
0040c958  lw gp,0x10(sp)
0040c95c  lw a0,0x88(s0)
0040c960  nop
0040c964  beq a0,zero,0x0040c980
0040c968  _nop
0040c96c  lw t9,-0x7fb0(gp)
0040c970  nop
0040c974  jalr t9
0040c978  _nop
0040c97c  lw gp,0x10(sp)
0040c980  lw a0,0x70(s0)
0040c984  nop
0040c988  beq a0,zero,0x0040c9a4
0040c98c  _nop
0040c990  lw t9,-0x7fb0(gp)
0040c994  nop
0040c998  jalr t9
0040c99c  _nop
0040c9a0  lw gp,0x10(sp)
0040c9a4  lw v0,0x20(s0)
0040c9a8  nop
0040c9ac  beq v0,zero,0x0040c9c8
0040c9b0  _nop
0040c9b4  lw t9,-0x7c98(gp)
0040c9b8  nop
0040c9bc  jalr t9
0040c9c0  _move a0,s0
0040c9c4  lw gp,0x10(sp)
0040c9c8  lw a0,0xa8(s0)
0040c9cc  nop
0040c9d0  beq a0,zero,0x0040c9ec
0040c9d4  _nop
0040c9d8  lw t9,-0x7fb0(gp)
0040c9dc  nop
0040c9e0  jalr t9
0040c9e4  _nop
0040c9e8  lw gp,0x10(sp)
0040c9ec  lw a0,0xac(s0)
0040c9f0  nop
0040c9f4  beq a0,zero,0x0040ca10
0040c9f8  _nop
0040c9fc  lw t9,-0x7fb0(gp)
0040ca00  nop
0040ca04  jalr t9
0040ca08  _nop
0040ca0c  lw gp,0x10(sp)
0040ca10  lw a0,0x8d0(s0)
0040ca14  nop
0040ca18  beq a0,zero,0x0040ca38
0040ca1c  _nop
0040ca20  lw t9,-0x7fb0(gp)
0040ca24  nop
0040ca28  jalr t9
0040ca2c  _nop
0040ca30  lw gp,0x10(sp)
0040ca34  sw zero,0x8d0(s0)
0040ca38  lw v0,0x98(s0)
0040ca3c  nop
0040ca40  beq v0,zero,0x0040ca64
0040ca44  _lui a0,0x45
0040ca48  lw v0,-0x7e40(gp)
0040ca4c  lw t9,-0x7f4c(gp)
0040ca50  lw a1,0x0(v0)
0040ca54  jalr t9
0040ca58  _addiu a0,a0,-0x52ac
0040ca5c  lw gp,0x10(sp)
0040ca60  sw zero,0x98(s0)
0040ca64  lw a0,0x3278(s0)
0040ca68  nop
0040ca6c  beq a0,zero,0x0040ca88
0040ca70  _nop
0040ca74  lw t9,-0x7fb0(gp)
0040ca78  nop
0040ca7c  jalr t9
0040ca80  _nop
0040ca84  lw gp,0x10(sp)
0040ca88  lw v0,0x0(s0)
0040ca8c  nop
0040ca90  sltiu v0,v0,0xb
0040ca94  beq v0,zero,0x0040cb84
0040ca98  _li v0,0x1
0040ca9c  lw s1,0x4(s0)
0040caa0  nop
0040caa4  bne s1,v0,0x0040cb84
0040caa8  _nop
0040caac  lw v0,0x10(s0)
0040cab0  nop
0040cab4  addiu v0,v0,-0x1
0040cab8  sltiu v0,v0,0x1f3
0040cabc  beq v0,zero,0x0040cb84
0040cac0  _nop
0040cac4  lw v0,0x8c4(s0)
0040cac8  nop
0040cacc  beq v0,zero,0x0040cb84
0040cad0  _move a0,s0
0040cad4  jal 0x0040c5d0
0040cad8  _clear a1
0040cadc  lw gp,0x10(sp)
0040cae0  lw v1,0x8c4(s0)
0040cae4  move a1,s0
0040cae8  lw v0,-0x7f88(gp)
0040caec  addiu v1,v1,-0x1
0040caf0  sw v1,0x8c4(s0)
0040caf4  lw v1,0x0(v0)
0040caf8  lw t9,-0x7e7c(gp)
0040cafc  lw a0,-0x7e4c(gp)
0040cb00  addiu v1,v1,0x1
0040cb04  jalr t9
0040cb08  _sw v1,0x0(v0)
0040cb0c  lw gp,0x10(sp)
0040cb10  lw a0,0xb4(s0)
0040cb14  lw a1,-0x7fb8(gp)
0040cb18  srl v1,a0,0x5
0040cb1c  sll v1,v1,0x2
0040cb20  addu v1,a1,v1
0040cb24  lw a2,0x0(v1)
0040cb28  sllv s1,s1,a0
0040cb2c  lw v0,-0x7fac(gp)
0040cb30  or s1,a2,s1
0040cb34  sw s1,0x0(v1)
0040cb38  lw a1,0x0(v0)
0040cb3c  lw v1,0xb4(s0)
0040cb40  nop
0040cb44  slt a0,a1,v1
0040cb48  beq a0,zero,0x0040cb58
0040cb4c  _nop
0040cb50  sw v1,0x0(v0)
0040cb54  lw v1,0xb4(s0)
0040cb58  lw a0,-0x7d4c(gp)
0040cb5c  li a1,0x1
0040cb60  srl v0,v1,0x5
0040cb64  sll v0,v0,0x2
0040cb68  addu v0,a0,v0
0040cb6c  lw a0,0x0(v0)
0040cb70  sllv v1,a1,v1
0040cb74  nor v1,zero,v1
0040cb78  and v1,v1,a0
0040cb7c  b 0x0040cc38
0040cb80  _sw v1,0x0(v0)
0040cb84  lw v1,0xc(s0)
0040cb88  li v0,0x4
0040cb8c  bne v1,v0,0x0040cbb0
0040cb90  _nop
0040cb94  lw t9,-0x7cfc(gp)
0040cb98  lw a0,0xb4(s0)
0040cb9c  addiu a1,sp,0x18
0040cba0  jalr t9
0040cba4  _ori a2,zero,0x8000
0040cba8  lw gp,0x10(sp)
0040cbac  nop
0040cbb0  lw t9,-0x7f9c(gp)
0040cbb4  lw a0,0xb4(s0)
0040cbb8  jalr t9
0040cbbc  _nop
0040cbc0  lw gp,0x10(sp)
0040cbc4  lw v1,0xb4(s0)
0040cbc8  li a2,0x1
0040cbcc  lw a0,-0x7fb8(gp)
0040cbd0  srl v0,v1,0x5
0040cbd4  sll v0,v0,0x2
0040cbd8  addu v0,a0,v0
0040cbdc  lw a0,0x0(v0)
0040cbe0  sllv v1,a2,v1
0040cbe4  nor v1,zero,v1
0040cbe8  and v1,v1,a0
0040cbec  sw v1,0x0(v0)
0040cbf0  lw a0,0xb4(s0)
0040cbf4  lw a1,-0x7d4c(gp)
0040cbf8  lui v0,0x47
0040cbfc  srl v1,a0,0x5
0040cc00  sll v1,v1,0x2
0040cc04  addu v1,a1,v1
0040cc08  lw a3,0x0(v1)
0040cc0c  lw a1,-0x2030(v0)
0040cc10  sllv a2,a2,a0
0040cc14  lw t9,-0x7e7c(gp)
0040cc18  nor a2,zero,a2
0040cc1c  lw a0,-0x7f60(gp)
0040cc20  and a2,a2,a3
0040cc24  addiu a1,a1,-0x1
0040cc28  sw a1,-0x2030(v0)
0040cc2c  sw a2,0x0(v1)
0040cc30  jalr t9
0040cc34  _move a1,s0
0040cc38  addiu sp,sp,0x48
0040cc3c  lw ra,0x7fec(sp)
0040cc40  lw s5,0x7fe8(sp)
0040cc44  lw s4,0x7fe4(sp)
0040cc48  lw s3,0x7fe0(sp)
0040cc4c  lw s2,0x7fdc(sp)
0040cc50  lw s1,0x7fd8(sp)
0040cc54  lw s0,0x7fd4(sp)
0040cc58  jr ra
0040cc5c  _addiu sp,sp,0x7ff0
