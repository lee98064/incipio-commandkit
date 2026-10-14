# FUN_0041d380 @ 0041d380
0041d380  addiu sp,sp,-0x168
0041d384  sw ra,0x164(sp)
0041d388  sw s8,0x160(sp)
0041d38c  sw s7,0x15c(sp)
0041d390  sw s6,0x158(sp)
0041d394  sw s5,0x154(sp)
0041d398  sw s4,0x150(sp)
0041d39c  sw s3,0x14c(sp)
0041d3a0  sw s2,0x148(sp)
0041d3a4  sw s1,0x144(sp)
0041d3a8  sw s0,0x140(sp)
0041d3ac  lui gp,0x47
0041d3b0  addiu gp,gp,0x2630
0041d3b4  sw gp,0x18(sp)
0041d3b8  lw t9,-0x7fbc(gp)
0041d3bc  lui s1,0x45
0041d3c0  lui a1,0x45
0041d3c4  addiu a1,a1,-0x20c
0041d3c8  addiu a2,s1,-0x4cd4
0041d3cc  jalr t9
0041d3d0  _move s0,a0
0041d3d4  lw gp,0x18(sp)
0041d3d8  lui a1,0x45
0041d3dc  addiu a1,a1,-0x204
0041d3e0  lw t9,-0x7fbc(gp)
0041d3e4  move a0,s0
0041d3e8  addiu a2,s1,-0x4cd4
0041d3ec  jalr t9
0041d3f0  _move s3,v0
0041d3f4  lw gp,0x18(sp)
0041d3f8  lui a1,0x45
0041d3fc  addiu a1,a1,-0x1f8
0041d400  lw t9,-0x7fbc(gp)
0041d404  move a0,s0
0041d408  addiu a2,s1,-0x4cd4
0041d40c  jalr t9
0041d410  _move s2,v0
0041d414  lw gp,0x18(sp)
0041d418  addiu a0,sp,0x9c
0041d41c  clear a1
0041d420  lw t9,-0x7db4(gp)
0041d424  li a2,0x91
0041d428  jalr t9
0041d42c  _move s4,v0
0041d430  lb v0,0x0(s3)
0041d434  lw gp,0x18(sp)
0041d438  beq v0,zero,0x0041dc44
0041d43c  _lui a1,0x45
0041d440  lw t9,-0x7fbc(gp)
0041d444  addiu a1,a1,0x2248
0041d448  addiu a2,s1,-0x4cd4
0041d44c  jalr t9
0041d450  _move a0,s0
0041d454  lw gp,0x18(sp)
0041d458  lui a1,0x45
0041d45c  move a0,v0
0041d460  lw t9,-0x7e0c(gp)
0041d464  nop
0041d468  jalr t9
0041d46c  _addiu a1,a1,-0x54ec
0041d470  lw gp,0x18(sp)
0041d474  bne v0,zero,0x0041d484
0041d478  _li v0,0x1
0041d47c  b 0x0041d488
0041d480  _sw v0,0x24(sp)
0041d484  sw zero,0x24(sp)
0041d488  lw t9,-0x7c08(gp)
0041d48c  li a0,0x133
0041d490  jalr t9
0041d494  _addiu a1,sp,0x24
0041d498  lw gp,0x18(sp)
0041d49c  bne v0,zero,0x0041d4b0
0041d4a0  _lui a1,0x45
0041d4a4  lw t9,-0x79d0(gp)
0041d4a8  b 0x0041dd9c
0041d4ac  _addiu a1,a1,-0x560
0041d4b0  lw v0,0x24(sp)
0041d4b4  nop
0041d4b8  beq v0,zero,0x0041ddf0
0041d4bc  _lui a1,0x45
0041d4c0  lw t9,-0x7fbc(gp)
0041d4c4  lui a2,0x45
0041d4c8  addiu a1,a1,-0x1ec
0041d4cc  addiu a2,a2,-0x4cd4
0041d4d0  jalr t9
0041d4d4  _move a0,s0
0041d4d8  lw gp,0x18(sp)
0041d4dc  lui a1,0x45
0041d4e0  move a0,v0
0041d4e4  lw t9,-0x7e0c(gp)
0041d4e8  nop
0041d4ec  jalr t9
0041d4f0  _addiu a1,a1,-0x54ec
0041d4f4  lw gp,0x18(sp)
0041d4f8  bne v0,zero,0x0041d508
0041d4fc  _li v0,0x1
0041d500  b 0x0041d50c
0041d504  _sw v0,0x24(sp)
0041d508  sw zero,0x24(sp)
0041d50c  lw t9,-0x7c08(gp)
0041d510  addiu s1,sp,0x24
0041d514  li a0,0x134
0041d518  jalr t9
0041d51c  _move a1,s1
0041d520  lw gp,0x18(sp)
0041d524  beq v0,zero,0x0041d668
0041d528  _nop
0041d52c  lw v0,0x24(sp)
0041d530  nop
0041d534  beq v0,zero,0x0041d548
0041d538  _lui a2,0x45
0041d53c  lui s8,0x1
0041d540  b 0x0041d594
0041d544  _ori s8,s8,0x9000
0041d548  lw t9,-0x7fbc(gp)
0041d54c  lui a1,0x45
0041d550  addiu a2,a2,-0x4cd4
0041d554  addiu a1,a1,-0x1c4
0041d558  jalr t9
0041d55c  _move a0,s0
0041d560  move a0,v0
0041d564  jal 0x00419f50
0041d568  _move a1,s1
0041d56c  lw gp,0x18(sp)
0041d570  move a1,s1
0041d574  lw t9,-0x7c08(gp)
0041d578  nop
0041d57c  jalr t9
0041d580  _li a0,0x135
0041d584  lw gp,0x18(sp)
0041d588  beq v0,zero,0x0041d668
0041d58c  _nop
0041d590  lw s8,0x24(sp)
0041d594  lw t9,-0x7fbc(gp)
0041d598  lui a1,0x45
0041d59c  lui a2,0x45
0041d5a0  addiu a1,a1,-0x1b0
0041d5a4  addiu a2,a2,-0x4cd4
0041d5a8  jalr t9
0041d5ac  _move a0,s0
0041d5b0  lw gp,0x18(sp)
0041d5b4  lui a1,0x45
0041d5b8  move a0,v0
0041d5bc  lw t9,-0x7e0c(gp)
0041d5c0  nop
0041d5c4  jalr t9
0041d5c8  _addiu a1,a1,-0x54ec
0041d5cc  lw gp,0x18(sp)
0041d5d0  bne v0,zero,0x0041d5e0
0041d5d4  _li v0,0x1
0041d5d8  b 0x0041d5e4
0041d5dc  _sw v0,0x24(sp)
0041d5e0  sw zero,0x24(sp)
0041d5e4  lw t9,-0x7c08(gp)
0041d5e8  addiu s1,sp,0x24
0041d5ec  li a0,0x28b
0041d5f0  jalr t9
0041d5f4  _move a1,s1
0041d5f8  lw gp,0x18(sp)
0041d5fc  beq v0,zero,0x0041d668
0041d600  _nop
0041d604  lw v0,0x24(sp)
0041d608  nop
0041d60c  beq v0,zero,0x0041d620
0041d610  _lui a2,0x45
0041d614  lui s7,0x1
0041d618  b 0x0041d67c
0041d61c  _ori s7,s7,0x9000
0041d620  lw t9,-0x7fbc(gp)
0041d624  lui a1,0x45
0041d628  addiu a2,a2,-0x4cd4
0041d62c  addiu a1,a1,-0x198
0041d630  jalr t9
0041d634  _move a0,s0
0041d638  move a0,v0
0041d63c  jal 0x00419f50
0041d640  _move a1,s1
0041d644  lw gp,0x18(sp)
0041d648  move a1,s1
0041d64c  lw t9,-0x7c08(gp)
0041d650  nop
0041d654  jalr t9
0041d658  _li a0,0x28c
0041d65c  lw gp,0x18(sp)
0041d660  bne v0,zero,0x0041d678
0041d664  _nop
0041d668  lui a1,0x45
0041d66c  lw t9,-0x79d0(gp)
0041d670  b 0x0041dd9c
0041d674  _addiu a1,a1,-0x1d4
0041d678  lw s7,0x24(sp)
0041d67c  lw t9,-0x7fbc(gp)
0041d680  lui s1,0x45
0041d684  lui a1,0x45
0041d688  addiu a2,s1,-0x4cd4
0041d68c  addiu a1,a1,-0x184
0041d690  jalr t9
0041d694  _move a0,s0
0041d698  lw gp,0x18(sp)
0041d69c  lui a1,0x45
0041d6a0  addiu a2,s1,-0x4cd4
0041d6a4  lw t9,-0x7fbc(gp)
0041d6a8  addiu a1,a1,-0x17c
0041d6ac  move a0,s0
0041d6b0  jalr t9
0041d6b4  _move s6,v0
0041d6b8  lw gp,0x18(sp)
0041d6bc  lui a1,0x45
0041d6c0  addiu a2,s1,-0x4cd4
0041d6c4  lw t9,-0x7fbc(gp)
0041d6c8  addiu a1,a1,-0x28c
0041d6cc  move a0,s0
0041d6d0  jalr t9
0041d6d4  _move s5,v0
0041d6d8  lw gp,0x18(sp)
0041d6dc  lui a1,0x45
0041d6e0  addiu a2,s1,-0x4cd4
0041d6e4  lw t9,-0x7fbc(gp)
0041d6e8  addiu a1,a1,-0x174
0041d6ec  move a0,s0
0041d6f0  jalr t9
0041d6f4  _move s3,v0
0041d6f8  lw gp,0x18(sp)
0041d6fc  lui a1,0x45
0041d700  addiu a2,s1,-0x4cd4
0041d704  lw t9,-0x7fbc(gp)
0041d708  addiu a1,a1,-0x168
0041d70c  move a0,s0
0041d710  jalr t9
0041d714  _sw v0,0x134(sp)
0041d718  lw gp,0x18(sp)
0041d71c  lui a1,0x45
0041d720  addiu a2,s1,-0x4cd4
0041d724  lw t9,-0x7fbc(gp)
0041d728  addiu a1,a1,-0x534
0041d72c  move a0,s0
0041d730  jalr t9
0041d734  _sw v0,0x130(sp)
0041d738  lw gp,0x18(sp)
0041d73c  lui a1,0x45
0041d740  addiu a2,s1,-0x4cd4
0041d744  lw t9,-0x7fbc(gp)
0041d748  addiu a1,a1,-0x154
0041d74c  move a0,s0
0041d750  jalr t9
0041d754  _move s1,v0
0041d758  lb v1,0x0(s6)
0041d75c  lw gp,0x18(sp)
0041d760  bne v1,zero,0x0041d7c8
0041d764  _nop
0041d768  lb v1,0x0(s5)
0041d76c  nop
0041d770  bne v1,zero,0x0041d7c8
0041d774  _nop
0041d778  lb v1,0x0(s3)
0041d77c  nop
0041d780  bne v1,zero,0x0041d7c8
0041d784  _nop
0041d788  lw a0,0x134(sp)
0041d78c  nop
0041d790  lb v1,0x0(a0)
0041d794  nop
0041d798  bne v1,zero,0x0041d7c8
0041d79c  _nop
0041d7a0  lw a0,0x130(sp)
0041d7a4  nop
0041d7a8  lb v1,0x0(a0)
0041d7ac  nop
0041d7b0  bne v1,zero,0x0041d7c8
0041d7b4  _nop
0041d7b8  lb v1,0x0(s1)
0041d7bc  nop
0041d7c0  beq v1,zero,0x0041ddf0
0041d7c4  _nop
0041d7c8  lb v1,0x0(v0)
0041d7cc  nop
0041d7d0  beq v1,zero,0x0041d7f0
0041d7d4  _nop
0041d7d8  lw t9,-0x79d0(gp)
0041d7dc  move a1,v0
0041d7e0  jalr t9
0041d7e4  _addiu a0,sp,0xc4
0041d7e8  lw gp,0x18(sp)
0041d7ec  nop
0041d7f0  lw t9,-0x7fbc(gp)
0041d7f4  lui a1,0x45
0041d7f8  lui a2,0x45
0041d7fc  addiu a1,a1,-0x148
0041d800  addiu a2,a2,-0x4cd4
0041d804  jalr t9
0041d808  _move a0,s0
0041d80c  move a0,v0
0041d810  jal 0x00419f50
0041d814  _addiu a1,sp,0x24
0041d818  lw v0,0x24(sp)
0041d81c  lw gp,0x18(sp)
0041d820  bne v0,zero,0x0041d95c
0041d824  _move a0,s6
0041d828  lw t9,-0x7d94(gp)
0041d82c  nop
0041d830  jalr t9
0041d834  _addiu a1,sp,0x28
0041d838  lw gp,0x18(sp)
0041d83c  move a0,s5
0041d840  addiu a1,sp,0x2c
0041d844  lw t9,-0x7d94(gp)
0041d848  nop
0041d84c  jalr t9
0041d850  _li s3,0x1
0041d854  lw gp,0x18(sp)
0041d858  li a0,0x136
0041d85c  lw t9,-0x7b54(gp)
0041d860  nop
0041d864  jalr t9
0041d868  _addiu a1,sp,0x20
0041d86c  lw gp,0x18(sp)
0041d870  b 0x0041d914
0041d874  _addiu v1,sp,0x9c
0041d878  lw t9,-0x7b54(gp)
0041d87c  sb s3,0x0(v1)
0041d880  sw v1,0x138(sp)
0041d884  jalr t9
0041d888  _ori a0,zero,0x8137
0041d88c  lw gp,0x18(sp)
0041d890  lw v1,0x138(sp)
0041d894  beq v0,zero,0x0041d910
0041d898  _nop
0041d89c  lbu v0,0xb3(sp)
0041d8a0  nop
0041d8a4  andi v0,v0,0x4
0041d8a8  beq v0,zero,0x0041d910
0041d8ac  _nop
0041d8b0  lw a1,0xb4(sp)
0041d8b4  lw a2,0x28(sp)
0041d8b8  lw v0,0xb8(sp)
0041d8bc  sltu a0,a2,a1
0041d8c0  bne a0,zero,0x0041d8d0
0041d8c4  _sltu a0,v0,a2
0041d8c8  beq a0,zero,0x0041d900
0041d8cc  _nop
0041d8d0  lw a0,0x2c(sp)
0041d8d4  nop
0041d8d8  sltu a3,a0,a1
0041d8dc  bne a3,zero,0x0041d8ec
0041d8e0  _sltu a3,v0,a0
0041d8e4  beq a3,zero,0x0041d900
0041d8e8  _nop
0041d8ec  sltu a1,a2,a1
0041d8f0  beq a1,zero,0x0041d910
0041d8f4  _sltu v0,v0,a0
0041d8f8  beq v0,zero,0x0041d914
0041d8fc  _addiu s3,s3,0x1
0041d900  lui a1,0x45
0041d904  lw t9,-0x79d0(gp)
0041d908  b 0x0041dd9c
0041d90c  _addiu a1,a1,-0x13c
0041d910  addiu s3,s3,0x1
0041d914  lw v0,0x20(sp)
0041d918  nop
0041d91c  slt v0,v0,s3
0041d920  beq v0,zero,0x0041d878
0041d924  _move a1,v1
0041d928  lw t9,-0x7d94(gp)
0041d92c  move a0,s6
0041d930  jalr t9
0041d934  _addiu a1,sp,0xb4
0041d938  lw gp,0x18(sp)
0041d93c  move a0,s5
0041d940  lw t9,-0x7d94(gp)
0041d944  nop
0041d948  jalr t9
0041d94c  _addiu a1,sp,0xb8
0041d950  lw gp,0x18(sp)
0041d954  b 0x0041da94
0041d958  _li v0,0x4
0041d95c  li v1,0x1
0041d960  bne v0,v1,0x0041da94
0041d964  _li v0,0x20
0041d968  move a0,s3
0041d96c  jal 0x0041c35c
0041d970  _addiu a1,sp,0x30
0041d974  lw gp,0x18(sp)
0041d978  li a0,0x136
0041d97c  addiu a1,sp,0x20
0041d980  lw t9,-0x7b54(gp)
0041d984  li s5,0x1
0041d988  jalr t9
0041d98c  _addiu s6,sp,0x9c
0041d990  lw gp,0x18(sp)
0041d994  b 0x0041da58
0041d998  _nop
0041d99c  lw t9,-0x7b54(gp)
0041d9a0  sb s5,0x0(s6)
0041d9a4  jalr t9
0041d9a8  _move a1,s6
0041d9ac  lw gp,0x18(sp)
0041d9b0  beq v0,zero,0x0041da54
0041d9b4  _nop
0041d9b8  lbu v0,0xb3(sp)
0041d9bc  nop
0041d9c0  andi v0,v0,0x8
0041d9c4  beq v0,zero,0x0041da54
0041d9c8  _nop
0041d9cc  lbu v1,0xad(sp)
0041d9d0  lb v0,0x30(sp)
0041d9d4  nop
0041d9d8  bne v1,v0,0x0041da54
0041d9dc  _nop
0041d9e0  lbu v1,0xae(sp)
0041d9e4  lb v0,0x31(sp)
0041d9e8  nop
0041d9ec  bne v1,v0,0x0041da54
0041d9f0  _nop
0041d9f4  lbu v1,0xaf(sp)
0041d9f8  lb v0,0x32(sp)
0041d9fc  nop
0041da00  bne v1,v0,0x0041da54
0041da04  _nop
0041da08  lbu v1,0xb0(sp)
0041da0c  lb v0,0x33(sp)
0041da10  nop
0041da14  bne v1,v0,0x0041da54
0041da18  _nop
0041da1c  lbu v1,0xb1(sp)
0041da20  lb v0,0x34(sp)
0041da24  nop
0041da28  bne v1,v0,0x0041da54
0041da2c  _nop
0041da30  lbu v1,0xb2(sp)
0041da34  lb v0,0x35(sp)
0041da38  nop
0041da3c  bne v1,v0,0x0041da58
0041da40  _addiu s5,s5,0x1
0041da44  lui a1,0x45
0041da48  lw t9,-0x79d0(gp)
0041da4c  b 0x0041dd9c
0041da50  _addiu a1,a1,-0x124
0041da54  addiu s5,s5,0x1
0041da58  lw v0,0x20(sp)
0041da5c  nop
0041da60  slt v0,v0,s5
0041da64  beq v0,zero,0x0041d99c
0041da68  _ori a0,zero,0x8137
0041da6c  move a0,s3
0041da70  jal 0x0041c35c
0041da74  _addiu a1,sp,0xad
0041da78  lw gp,0x18(sp)
0041da7c  bne v0,zero,0x0041da94
0041da80  _li v0,0x8
0041da84  lui a1,0x45
0041da88  lw t9,-0x79d0(gp)
0041da8c  b 0x0041dd9c
0041da90  _addiu a1,a1,-0x10c
0041da94  lw t9,-0x7fbc(gp)
0041da98  lui a1,0x45
0041da9c  lui a2,0x45
0041daa0  move a0,s0
0041daa4  sb v0,0xb3(sp)
0041daa8  addiu a1,a1,0x2378
0041daac  jalr t9
0041dab0  _addiu a2,a2,-0x4cd4
0041dab4  lb a0,0x0(v0)
0041dab8  li v1,0x31
0041dabc  lbu v0,0xb3(sp)
0041dac0  bne a0,v1,0x0041dad0
0041dac4  _nop
0041dac8  b 0x0041dad4
0041dacc  _ori v0,v0,0x1
0041dad0  ori v0,v0,0x2
0041dad4  lw a0,0x134(sp)
0041dad8  addiu s3,sp,0x24
0041dadc  move a1,s3
0041dae0  jal 0x00419f50
0041dae4  _sb v0,0xb3(sp)
0041dae8  lw v0,0x24(sp)
0041daec  lw a0,0x130(sp)
0041daf0  move a1,s3
0041daf4  jal 0x00419f50
0041daf8  _sw v0,0xbc(sp)
0041dafc  lbu v0,0xb3(sp)
0041db00  lw a1,0x24(sp)
0041db04  lw gp,0x18(sp)
0041db08  andi v0,v0,0x1
0041db0c  beq v0,zero,0x0041db88
0041db10  _sw a1,0xc0(sp)
0041db14  lw a0,0xbc(sp)
0041db18  move a2,s8
0041db1c  jal 0x00419e40
0041db20  _move a3,s7
0041db24  li v1,-0x1
0041db28  lw gp,0x18(sp)
0041db2c  bne v0,v1,0x0041db44
0041db30  _li v1,0x3
0041db34  lui a1,0x45
0041db38  lw t9,-0x79d0(gp)
0041db3c  b 0x0041dd9c
0041db40  _addiu a1,a1,-0xfc
0041db44  bne v0,v1,0x0041db5c
0041db48  _li v1,0x2
0041db4c  lui a1,0x45
0041db50  lw t9,-0x79d0(gp)
0041db54  b 0x0041dd9c
0041db58  _addiu a1,a1,-0xe4
0041db5c  bne v0,v1,0x0041db74
0041db60  _li v1,0x1
0041db64  lui a1,0x45
0041db68  lw t9,-0x79d0(gp)
0041db6c  b 0x0041dd9c
0041db70  _addiu a1,a1,-0x54
0041db74  bne v0,v1,0x0041db88
0041db78  _lui a1,0x45
0041db7c  lw t9,-0x79d0(gp)
0041db80  b 0x0041dd9c
0041db84  _addiu a1,a1,0x34
0041db88  lb v0,0x0(s1)
0041db8c  nop
0041db90  beq v0,zero,0x0041dbb0
0041db94  _move a1,s1
0041db98  lw t9,-0x79d0(gp)
0041db9c  nop
0041dba0  jalr t9
0041dba4  _addiu a0,sp,0x9c
0041dba8  lw gp,0x18(sp)
0041dbac  nop
0041dbb0  lw t9,-0x7b54(gp)
0041dbb4  li v0,0x1
0041dbb8  sb v0,0xac(sp)
0041dbbc  li a0,0x136
0041dbc0  jalr t9
0041dbc4  _addiu a1,sp,0x20
0041dbc8  lw gp,0x18(sp)
0041dbcc  beq v0,zero,0x0041dc70
0041dbd0  _nop
0041dbd4  lw v0,0x20(sp)
0041dbd8  nop
0041dbdc  addiu v0,v0,0x1
0041dbe0  slti v0,v0,0xb
0041dbe4  bne v0,zero,0x0041dbfc
0041dbe8  _addiu s1,sp,0x9c
0041dbec  lui a1,0x45
0041dbf0  lw t9,-0x79d0(gp)
0041dbf4  b 0x0041dd9c
0041dbf8  _addiu a1,a1,-0x1a14
0041dbfc  lw t9,-0x7c08(gp)
0041dc00  lui a0,0x2
0041dc04  ori a0,a0,0x139
0041dc08  jalr t9
0041dc0c  _move a1,s1
0041dc10  lw gp,0x18(sp)
0041dc14  lui a0,0x1
0041dc18  ori a0,a0,0x138
0041dc1c  lw t9,-0x7c08(gp)
0041dc20  nop
0041dc24  jalr t9
0041dc28  _move a1,s1
0041dc2c  lw gp,0x18(sp)
0041dc30  bne v0,zero,0x0041dc44
0041dc34  _lui a1,0x45
0041dc38  lw t9,-0x79d0(gp)
0041dc3c  b 0x0041dd9c
0041dc40  _addiu a1,a1,-0x1954
0041dc44  lb v0,0x0(s2)
0041dc48  nop
0041dc4c  beq v0,zero,0x0041dd68
0041dc50  _li a0,0x136
0041dc54  lw t9,-0x7b54(gp)
0041dc58  nop
0041dc5c  jalr t9
0041dc60  _addiu a1,sp,0x20
0041dc64  lw gp,0x18(sp)
0041dc68  bne v0,zero,0x0041dc80
0041dc6c  _lui s8,0x45
0041dc70  lui a1,0x45
0041dc74  lw t9,-0x79d0(gp)
0041dc78  b 0x0041dd9c
0041dc7c  _addiu a1,a1,-0x1a2c
0041dc80  lui s7,0x45
0041dc84  lui s6,0x45
0041dc88  lui s5,0x2
0041dc8c  addiu s8,s8,-0x193c
0041dc90  addiu s7,s7,-0x4cd4
0041dc94  addiu s6,s6,-0x54ec
0041dc98  ori s5,s5,0x139
0041dc9c  lw s1,0x20(sp)
0041dca0  addiu s2,sp,0x38
0041dca4  b 0x0041dd60
0041dca8  _addiu s3,sp,0x9c
0041dcac  lw t9,-0x7a4c(gp)
0041dcb0  move a0,s2
0041dcb4  li a1,0x14
0041dcb8  jalr t9
0041dcbc  _move a2,s8
0041dcc0  lw gp,0x18(sp)
0041dcc4  move a0,s0
0041dcc8  move a1,s2
0041dccc  lw t9,-0x7fbc(gp)
0041dcd0  nop
0041dcd4  jalr t9
0041dcd8  _move a2,s7
0041dcdc  lw gp,0x18(sp)
0041dce0  move a0,v0
0041dce4  lw t9,-0x7e0c(gp)
0041dce8  nop
0041dcec  jalr t9
0041dcf0  _move a1,s6
0041dcf4  lw gp,0x18(sp)
0041dcf8  bne v0,zero,0x0041dd5c
0041dcfc  _ori a0,zero,0x8137
0041dd00  lw t9,-0x7b54(gp)
0041dd04  sb s1,0x0(s3)
0041dd08  jalr t9
0041dd0c  _move a1,s3
0041dd10  lw gp,0x18(sp)
0041dd14  bne v0,zero,0x0041dd2c
0041dd18  _lui a1,0x45
0041dd1c  lw t9,-0x79d0(gp)
0041dd20  move a0,s2
0041dd24  b 0x0041dda0
0041dd28  _addiu a1,a1,-0x1930
0041dd2c  lw t9,-0x7c08(gp)
0041dd30  move a0,s5
0041dd34  jalr t9
0041dd38  _move a1,s3
0041dd3c  lw gp,0x18(sp)
0041dd40  bne v0,zero,0x0041dd60
0041dd44  _addiu s1,s1,-0x1
0041dd48  lui a1,0x45
0041dd4c  lw t9,-0x79d0(gp)
0041dd50  move a0,s2
0041dd54  b 0x0041dda0
0041dd58  _addiu a1,a1,-0x1918
0041dd5c  addiu s1,s1,-0x1
0041dd60  bgtz s1,0x0041dcac
0041dd64  _move a3,s1
0041dd68  lb v0,0x0(s4)
0041dd6c  nop
0041dd70  beq v0,zero,0x0041ddf0
0041dd74  _lui a0,0x4
0041dd78  lw t9,-0x7c08(gp)
0041dd7c  ori a0,a0,0x13a
0041dd80  jalr t9
0041dd84  _addiu a1,sp,0x9c
0041dd88  lw gp,0x18(sp)
0041dd8c  bne v0,zero,0x0041ddf0
0041dd90  _lui a1,0x45
0041dd94  lw t9,-0x79d0(gp)
0041dd98  addiu a1,a1,-0x18fc
0041dd9c  addiu a0,sp,0x38
0041dda0  jalr t9
0041dda4  _nop
0041dda8  jal 0x00419fe8
0041ddac  _move a0,s0
0041ddb0  lw gp,0x18(sp)
0041ddb4  lui a1,0x45
0041ddb8  move a0,s0
0041ddbc  lw t9,-0x7cd4(gp)
0041ddc0  addiu a1,a1,-0x271c
0041ddc4  jalr t9
0041ddc8  _addiu a2,sp,0x38
0041ddcc  lw gp,0x18(sp)
0041ddd0  lui a1,0x45
0041ddd4  move a0,s0
0041ddd8  lw t9,-0x7cd4(gp)
0041dddc  nop
0041dde0  jalr t9
0041dde4  _addiu a1,a1,-0x2050
0041dde8  b 0x0041dff0
0041ddec  _nop
0041ddf0  lw t9,-0x7c04(gp)
0041ddf4  nop
0041ddf8  jalr t9
0041ddfc  _li a0,0x4
0041de00  lw gp,0x18(sp)
0041de04  nop
0041de08  lw t9,-0x7d68(gp)
0041de0c  nop
0041de10  jalr t9
0041de14  _nop
0041de18  lw gp,0x18(sp)
0041de1c  beq v0,zero,0x0041de84
0041de20  _addiu s1,sp,0x38
0041de24  lw t9,-0x79e8(gp)
0041de28  move a0,v0
0041de2c  clear a1
0041de30  jalr t9
0041de34  _clear a2
0041de38  lw gp,0x18(sp)
0041de3c  lui a1,0x45
0041de40  lui a2,0x45
0041de44  lw t9,-0x7fbc(gp)
0041de48  move a0,s0
0041de4c  addiu a1,a1,-0x3b10
0041de50  jalr t9
0041de54  _addiu a2,a2,-0x4cd4
0041de58  lw gp,0x18(sp)
0041de5c  move s1,v0
0041de60  li a0,0x1
0041de64  lw v1,-0x7c7c(gp)
0041de68  nop
0041de6c  lw v0,0x0(v1)
0041de70  nop
0041de74  bne v0,a0,0x0041dfd0
0041de78  _nop
0041de7c  b 0x0041dee4
0041de80  _sw v0,0x0(v1)
0041de84  lw t9,-0x7a4c(gp)
0041de88  lui s0,0x45
0041de8c  addiu s0,s0,0xb8
0041de90  lui a2,0x45
0041de94  lui a3,0x45
0041de98  addiu a2,a2,-0x27e4
0041de9c  addiu a3,a3,-0x27dc
0041dea0  move a0,s1
0041dea4  li a1,0x64
0041dea8  jalr t9
0041deac  _sw s0,0x10(sp)
0041deb0  lw gp,0x18(sp)
0041deb4  move a0,s1
0041deb8  move a1,s0
0041debc  lw t9,-0x7ae4(gp)
0041dec0  nop
0041dec4  jalr t9
0041dec8  _clear a2
0041decc  lw gp,0x18(sp)
0041ded0  nop
0041ded4  lw t9,-0x7ed4(gp)
0041ded8  nop
0041dedc  jalr t9
0041dee0  _li a0,0x1
0041dee4  lb v0,0x0(s1)
0041dee8  nop
0041deec  bne v0,zero,0x0041df10
0041def0  _nop
0041def4  lw t9,-0x79d0(gp)
0041def8  lui a1,0x45
0041defc  addiu a1,a1,-0x22a8
0041df00  jalr t9
0041df04  _move a0,s1
0041df08  lw gp,0x18(sp)
0041df0c  nop
0041df10  lw t9,-0x7cd4(gp)
0041df14  lui a1,0x45
0041df18  move a0,s0
0041df1c  jalr t9
0041df20  _addiu a1,a1,-0x229c
0041df24  lw gp,0x18(sp)
0041df28  lui a1,0x45
0041df2c  move a0,s0
0041df30  lw t9,-0x7cd4(gp)
0041df34  nop
0041df38  jalr t9
0041df3c  _addiu a1,a1,-0x21b0
0041df40  lw gp,0x18(sp)
0041df44  lui a1,0x45
0041df48  move a2,s1
0041df4c  lw t9,-0x7cd4(gp)
0041df50  move a0,s0
0041df54  jalr t9
0041df58  _addiu a1,a1,-0x216c
0041df5c  lw gp,0x18(sp)
0041df60  lui a1,0x45
0041df64  move a0,s0
0041df68  lw t9,-0x7cd4(gp)
0041df6c  nop
0041df70  jalr t9
0041df74  _addiu a1,a1,-0x2138
0041df78  lw gp,0x18(sp)
0041df7c  lui a1,0x45
0041df80  move a2,s1
0041df84  lw t9,-0x7cd4(gp)
0041df88  move a0,s0
0041df8c  jalr t9
0041df90  _addiu a1,a1,-0x20d8
0041df94  lw gp,0x18(sp)
0041df98  lui a1,0x45
0041df9c  move a0,s0
0041dfa0  lw t9,-0x7cd4(gp)
0041dfa4  nop
0041dfa8  jalr t9
0041dfac  _addiu a1,a1,-0x2074
0041dfb0  lw gp,0x18(sp)
0041dfb4  lui a0,0x45
0041dfb8  lw t9,-0x7c58(gp)
0041dfbc  nop
0041dfc0  jalr t9
0041dfc4  _addiu a0,a0,-0x3bd8
0041dfc8  b 0x0041dff0
0041dfcc  _nop
0041dfd0  lb v0,0x0(s1)
0041dfd4  nop
0041dfd8  beq v0,zero,0x0041dff0
0041dfdc  _move a0,s0
0041dfe0  lw t9,-0x79b8(gp)
0041dfe4  nop
0041dfe8  jalr t9
0041dfec  _move a1,s1
0041dff0  lw ra,0x164(sp)
0041dff4  lw s8,0x160(sp)
0041dff8  lw s7,0x15c(sp)
0041dffc  lw s6,0x158(sp)
0041e000  lw s5,0x154(sp)
0041e004  lw s4,0x150(sp)
0041e008  lw s3,0x14c(sp)
0041e00c  lw s2,0x148(sp)
0041e010  lw s1,0x144(sp)
0041e014  lw s0,0x140(sp)
0041e018  jr ra
0041e01c  _addiu sp,sp,0x168
