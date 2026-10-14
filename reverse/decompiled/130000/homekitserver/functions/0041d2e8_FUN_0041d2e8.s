# FUN_0041d2e8 @ 0041d2e8
0041d2e8  addiu sp,sp,-0xe0
0041d2ec  sw ra,0xdc(sp)
0041d2f0  sw s8,0xd8(sp)
0041d2f4  sw s7,0xd4(sp)
0041d2f8  sw s6,0xd0(sp)
0041d2fc  sw s5,0xcc(sp)
0041d300  sw s4,0xc8(sp)
0041d304  sw s3,0xc4(sp)
0041d308  sw s2,0xc0(sp)
0041d30c  sw s1,0xbc(sp)
0041d310  sw s0,0xb8(sp)
0041d314  lui gp,0x62
0041d318  addiu gp,gp,-0x6b80
0041d31c  sw gp,0x10(sp)
0041d320  lw t9,-0x7b84(gp)
0041d324  sw a0,0xe0(sp)
0041d328  jalr t9
0041d32c  _lui s2,0x5c
0041d330  lw gp,0x10(sp)
0041d334  sw v0,0x8c(sp)
0041d338  clear s4
0041d33c  lw t9,-0x718c(gp)
0041d340  nop
0041d344  jalr t9
0041d348  _addiu s2,s2,0x72d8
0041d34c  lw gp,0x10(sp)
0041d350  lw a0,0x8c(sp)
0041d354  lui a1,0x5b
0041d358  lw t9,-0x6b6c(gp)
0041d35c  move a2,v0
0041d360  addiu a1,a1,-0x4a30
0041d364  jalr t9
0041d368  _move s1,v0
0041d36c  lw gp,0x10(sp)
0041d370  nop
0041d374  lw t9,-0x7b84(gp)
0041d378  nop
0041d37c  jalr t9
0041d380  _nop
0041d384  lw gp,0x10(sp)
0041d388  move a1,v0
0041d38c  move a0,s1
0041d390  lw t9,-0x709c(gp)
0041d394  nop
0041d398  jalr t9
0041d39c  _move s0,v0
0041d3a0  lw gp,0x10(sp)
0041d3a4  nop
0041d3a8  lw t9,-0x6e90(gp)
0041d3ac  nop
0041d3b0  jalr t9
0041d3b4  _li a0,0x1
0041d3b8  lw gp,0x10(sp)
0041d3bc  lui a1,0x5b
0041d3c0  addiu a1,a1,-0x4a24
0041d3c4  lw t9,-0x6b6c(gp)
0041d3c8  move a2,v0
0041d3cc  jalr t9
0041d3d0  _move a0,s0
0041d3d4  lw gp,0x10(sp)
0041d3d8  nop
0041d3dc  lw t9,-0x718c(gp)
0041d3e0  nop
0041d3e4  jalr t9
0041d3e8  _nop
0041d3ec  lw gp,0x10(sp)
0041d3f0  lui a1,0x5b
0041d3f4  sw v0,0x90(sp)
0041d3f8  lw t9,-0x6b6c(gp)
0041d3fc  move a0,s0
0041d400  addiu a1,a1,-0x4a20
0041d404  jalr t9
0041d408  _move a2,v0
0041d40c  lw gp,0x10(sp)
0041d410  nop
0041d414  lw s3,-0x5944(gp)
0041d418  nop
0041d41c  addiu s3,s3,0x4
0041d420  lw v0,0x0(s3)
0041d424  nop
0041d428  beq v0,zero,0x0041dd10
0041d42c  _nop
0041d430  lw t9,-0x7b84(gp)
0041d434  nop
0041d438  jalr t9
0041d43c  _clear s6
0041d440  lw gp,0x10(sp)
0041d444  lw a0,0x0(s3)
0041d448  lw t9,-0x5e1c(gp)
0041d44c  nop
0041d450  jalr t9
0041d454  _move s5,v0
0041d458  lw gp,0x10(sp)
0041d45c  lui a1,0x5d
0041d460  move a2,v0
0041d464  lw t9,-0x6b6c(gp)
0041d468  addiu a1,a1,-0x46d0
0041d46c  jalr t9
0041d470  _move a0,s5
0041d474  lw gp,0x10(sp)
0041d478  lw a0,0x4(s3)
0041d47c  lw t9,-0x6e90(gp)
0041d480  nop
0041d484  jalr t9
0041d488  _nop
0041d48c  lw gp,0x10(sp)
0041d490  lui a1,0x5b
0041d494  move a2,v0
0041d498  lw t9,-0x6b6c(gp)
0041d49c  move a0,s5
0041d4a0  jalr t9
0041d4a4  _addiu a1,a1,-0x4a14
0041d4a8  lw gp,0x10(sp)
0041d4ac  nop
0041d4b0  lw t9,-0x718c(gp)
0041d4b4  nop
0041d4b8  jalr t9
0041d4bc  _nop
0041d4c0  lw gp,0x10(sp)
0041d4c4  lui a1,0x5b
0041d4c8  sw v0,0x94(sp)
0041d4cc  lw t9,-0x6b6c(gp)
0041d4d0  move a2,v0
0041d4d4  addiu a1,a1,-0x4a10
0041d4d8  jalr t9
0041d4dc  _move a0,s5
0041d4e0  li v0,0xb5
0041d4e4  mult s4,v0
0041d4e8  lw gp,0x10(sp)
0041d4ec  nop
0041d4f0  lw v1,-0x5944(gp)
0041d4f4  mflo v0
0041d4f8  addiu v0,v0,0x1
0041d4fc  sll v0,v0,0x3
0041d500  addu v0,v1,v0
0041d504  addiu v0,v0,0x4
0041d508  sw v0,0x70(sp)
0041d50c  lw t9,-0x5cb0(gp)
0041d510  lw a1,0x70(sp)
0041d514  addiu a0,sp,0x1c
0041d518  jalr t9
0041d51c  _li a2,0x48
0041d520  lw v0,0x20(sp)
0041d524  lbu v1,0x24(sp)
0041d528  lw a0,0x1c(sp)
0041d52c  sw v0,0x88(sp)
0041d530  sw v1,0x68(sp)
0041d534  lbu v0,0x25(sp)
0041d538  lbu v1,0x30(sp)
0041d53c  lw gp,0x10(sp)
0041d540  sw v0,0x6c(sp)
0041d544  sw v1,0xac(sp)
0041d548  lbu v0,0x31(sp)
0041d54c  lbu v1,0x32(sp)
0041d550  lw s1,0x28(sp)
0041d554  sw v0,0xa8(sp)
0041d558  sw v1,0xa4(sp)
0041d55c  lbu v0,0x33(sp)
0041d560  lbu v1,0x38(sp)
0041d564  lw s8,0x5c(sp)
0041d568  sw v0,0xa0(sp)
0041d56c  sw v1,0x84(sp)
0041d570  lbu v0,0x40(sp)
0041d574  lw v1,0x4c(sp)
0041d578  lw s7,0x60(sp)
0041d57c  sw v0,0x80(sp)
0041d580  sw v1,0x7c(sp)
0041d584  lw v0,0x54(sp)
0041d588  lw v1,0x58(sp)
0041d58c  sw v0,0x78(sp)
0041d590  sw v1,0x74(sp)
0041d594  lbu v0,0x48(sp)
0041d598  lbu v1,0x50(sp)
0041d59c  sw v0,0x9c(sp)
0041d5a0  beq a0,zero,0x0041dcd4
0041d5a4  _sw v1,0x98(sp)
0041d5a8  lw t9,-0x7b84(gp)
0041d5ac  nop
0041d5b0  jalr t9
0041d5b4  _sw a0,0xb0(sp)
0041d5b8  lw gp,0x10(sp)
0041d5bc  lw a0,0xb0(sp)
0041d5c0  lw t9,-0x5e1c(gp)
0041d5c4  nop
0041d5c8  jalr t9
0041d5cc  _move s0,v0
0041d5d0  lw gp,0x10(sp)
0041d5d4  lui a1,0x5d
0041d5d8  move a2,v0
0041d5dc  lw t9,-0x6b6c(gp)
0041d5e0  addiu a1,a1,-0x46d0
0041d5e4  jalr t9
0041d5e8  _move a0,s0
0041d5ec  lw gp,0x10(sp)
0041d5f0  lw a0,0x88(sp)
0041d5f4  lw t9,-0x6e90(gp)
0041d5f8  nop
0041d5fc  jalr t9
0041d600  _nop
0041d604  lw gp,0x10(sp)
0041d608  lui a1,0x5b
0041d60c  move a2,v0
0041d610  lw t9,-0x6b6c(gp)
0041d614  move a0,s0
0041d618  jalr t9
0041d61c  _addiu a1,a1,-0x4a14
0041d620  lw v0,0x68(sp)
0041d624  lw gp,0x10(sp)
0041d628  beq v0,zero,0x0041d63c
0041d62c  _clear a0
0041d630  lw v0,0x2c(sp)
0041d634  b 0x0041d654
0041d638  _sw v0,0x18(sp)
0041d63c  lw t9,-0x5984(gp)
0041d640  lw a1,0x88(sp)
0041d644  lw a3,0xe0(sp)
0041d648  jalr t9
0041d64c  _addiu a2,sp,0x18
0041d650  lw gp,0x10(sp)
0041d654  sltiu v0,s1,0x9
0041d658  beq v0,zero,0x0041d85c
0041d65c  _lui v1,0x5b
0041d660  sll v0,s1,0x2
0041d664  addiu v1,v1,-0x4800
0041d668  addu v0,v1,v0
0041d66c  lw v0,0x0(v0)
0041d670  nop
0041d674  jr v0
0041d678  _nop
0041d67c  lui a0,0x5b
0041d680  lw t9,-0x5e1c(gp)
0041d684  b 0x0041d698
0041d688  _addiu a0,a0,-0x4a00
0041d68c  lw t9,-0x5e1c(gp)
0041d690  lui a0,0x5b
0041d694  addiu a0,a0,0x70c0
0041d698  jalr t9
0041d69c  _nop
0041d6a0  lw gp,0x10(sp)
0041d6a4  move a2,v0
0041d6a8  move a0,s0
0041d6ac  lw t9,-0x6b6c(gp)
0041d6b0  nop
0041d6b4  jalr t9
0041d6b8  _move a1,s2
0041d6bc  lw v0,0x6c(sp)
0041d6c0  lw gp,0x10(sp)
0041d6c4  bne v0,zero,0x0041d6dc
0041d6c8  _nop
0041d6cc  lw v1,0x68(sp)
0041d6d0  nop
0041d6d4  beq v1,zero,0x0041d868
0041d6d8  _nop
0041d6dc  lw a0,0x18(sp)
0041d6e0  lw t9,-0x6e90(gp)
0041d6e4  b 0x0041d7e4
0041d6e8  _nop
0041d6ec  lw t9,-0x5e1c(gp)
0041d6f0  lui a0,0x5b
0041d6f4  jalr t9
0041d6f8  _addiu a0,a0,-0x49f8
0041d6fc  lw gp,0x10(sp)
0041d700  move a2,v0
0041d704  move a0,s0
0041d708  lw t9,-0x6b6c(gp)
0041d70c  nop
0041d710  jalr t9
0041d714  _move a1,s2
0041d718  lw v0,0x6c(sp)
0041d71c  lw gp,0x10(sp)
0041d720  bne v0,zero,0x0041d738
0041d724  _nop
0041d728  lw v1,0x68(sp)
0041d72c  nop
0041d730  beq v1,zero,0x0041d868
0041d734  _nop
0041d738  lw t9,-0x7550(gp)
0041d73c  lw a0,0x18(sp)
0041d740  jalr t9
0041d744  _nop
0041d748  lw gp,0x10(sp)
0041d74c  move a1,v1
0041d750  lw t9,-0x760c(gp)
0041d754  nop
0041d758  jalr t9
0041d75c  _move a0,v0
0041d760  b 0x0041d7ec
0041d764  _nop
0041d768  lui a0,0x5c
0041d76c  lw t9,-0x5e1c(gp)
0041d770  b 0x0041d794
0041d774  _addiu a0,a0,0x75ac
0041d778  lui a0,0x5b
0041d77c  lw t9,-0x5e1c(gp)
0041d780  b 0x0041d794
0041d784  _addiu a0,a0,-0x4a44
0041d788  lw t9,-0x5e1c(gp)
0041d78c  lui a0,0x5b
0041d790  addiu a0,a0,0x24b0
0041d794  jalr t9
0041d798  _nop
0041d79c  lw gp,0x10(sp)
0041d7a0  move a2,v0
0041d7a4  move a0,s0
0041d7a8  lw t9,-0x6b6c(gp)
0041d7ac  nop
0041d7b0  jalr t9
0041d7b4  _move a1,s2
0041d7b8  lw v0,0x6c(sp)
0041d7bc  lw gp,0x10(sp)
0041d7c0  bne v0,zero,0x0041d7d8
0041d7c4  _nop
0041d7c8  lw v1,0x68(sp)
0041d7cc  nop
0041d7d0  beq v1,zero,0x0041d868
0041d7d4  _nop
0041d7d8  lw a0,0x18(sp)
0041d7dc  lw t9,-0x5e1c(gp)
0041d7e0  nop
0041d7e4  jalr t9
0041d7e8  _nop
0041d7ec  lw gp,0x10(sp)
0041d7f0  lui a1,0x5b
0041d7f4  addiu a1,a1,0x27b0
0041d7f8  lw t9,-0x6b6c(gp)
0041d7fc  move a2,v0
0041d800  jalr t9
0041d804  _move a0,s0
0041d808  lw gp,0x10(sp)
0041d80c  b 0x0041d868
0041d810  _nop
0041d814  lw v0,0x6c(sp)
0041d818  nop
0041d81c  bne v0,zero,0x0041d834
0041d820  _nop
0041d824  lw v1,0x68(sp)
0041d828  nop
0041d82c  beq v1,zero,0x0041d950
0041d830  _nop
0041d834  lw t9,-0x5e1c(gp)
0041d838  lw a0,0x18(sp)
0041d83c  jalr t9
0041d840  _nop
0041d844  lw gp,0x10(sp)
0041d848  lui a1,0x5b
0041d84c  addiu a1,a1,0x27b0
0041d850  lw t9,-0x6b6c(gp)
0041d854  b 0x0041d944
0041d858  _move a2,v0
0041d85c  li v0,0x8
0041d860  beq s1,v0,0x0041d950
0041d864  _nop
0041d868  lw t9,-0x718c(gp)
0041d86c  nop
0041d870  jalr t9
0041d874  _nop
0041d878  sw v0,0x68(sp)
0041d87c  lw v0,0xac(sp)
0041d880  lw gp,0x10(sp)
0041d884  beq v0,zero,0x0041d8b8
0041d888  _lui a0,0x5b
0041d88c  lw t9,-0x5e1c(gp)
0041d890  nop
0041d894  jalr t9
0041d898  _addiu a0,a0,-0x49f0
0041d89c  lw gp,0x10(sp)
0041d8a0  lw a0,0x68(sp)
0041d8a4  lw t9,-0x709c(gp)
0041d8a8  nop
0041d8ac  jalr t9
0041d8b0  _move a1,v0
0041d8b4  lw gp,0x10(sp)
0041d8b8  lw v1,0xa8(sp)
0041d8bc  nop
0041d8c0  beq v1,zero,0x0041d8f4
0041d8c4  _lui a0,0x5b
0041d8c8  lw t9,-0x5e1c(gp)
0041d8cc  nop
0041d8d0  jalr t9
0041d8d4  _addiu a0,a0,-0x49ec
0041d8d8  lw gp,0x10(sp)
0041d8dc  lw a0,0x68(sp)
0041d8e0  lw t9,-0x709c(gp)
0041d8e4  nop
0041d8e8  jalr t9
0041d8ec  _move a1,v0
0041d8f0  lw gp,0x10(sp)
0041d8f4  lw v0,0xa4(sp)
0041d8f8  nop
0041d8fc  beq v0,zero,0x0041d934
0041d900  _lui a0,0x5b
0041d904  lw t9,-0x5e1c(gp)
0041d908  nop
0041d90c  jalr t9
0041d910  _addiu a0,a0,-0x49e8
0041d914  lw gp,0x10(sp)
0041d918  lw a0,0x68(sp)
0041d91c  lw t9,-0x709c(gp)
0041d920  nop
0041d924  jalr t9
0041d928  _move a1,v0
0041d92c  lw gp,0x10(sp)
0041d930  nop
0041d934  lw t9,-0x6b6c(gp)
0041d938  lw a2,0x68(sp)
0041d93c  lui a1,0x5b
0041d940  addiu a1,a1,-0x49e4
0041d944  jalr t9
0041d948  _move a0,s0
0041d94c  lw gp,0x10(sp)
0041d950  lw v1,0xa0(sp)
0041d954  nop
0041d958  bne v1,zero,0x0041d9c4
0041d95c  _li v0,0x1
0041d960  lw v0,0x84(sp)
0041d964  nop
0041d968  bne v0,zero,0x0041da64
0041d96c  _li v0,0x1
0041d970  lw v1,0x80(sp)
0041d974  nop
0041d978  bne v1,zero,0x0041daec
0041d97c  _nop
0041d980  lw t9,-0x7b10(gp)
0041d984  lw a0,0x7c(sp)
0041d988  jalr t9
0041d98c  _clear a1
0041d990  lw gp,0x10(sp)
0041d994  bne v0,zero,0x0041db74
0041d998  _nop
0041d99c  lw v0,0x78(sp)
0041d9a0  nop
0041d9a4  bne v0,zero,0x0041db74
0041d9a8  _nop
0041d9ac  lw v1,0x74(sp)
0041d9b0  nop
0041d9b4  bne v1,zero,0x0041dc1c
0041d9b8  _nop
0041d9bc  b 0x0041dc4c
0041d9c0  _nop
0041d9c4  beq s1,v0,0x0041d9dc
0041d9c8  _li v0,0x2
0041d9cc  beq s1,v0,0x0041da08
0041d9d0  _nop
0041d9d4  b 0x0041da54
0041d9d8  _nop
0041d9dc  lw t9,-0x6e90(gp)
0041d9e0  lw a0,0x34(sp)
0041d9e4  jalr t9
0041d9e8  _nop
0041d9ec  lw gp,0x10(sp)
0041d9f0  move a2,v0
0041d9f4  lui v0,0x5b
0041d9f8  lw t9,-0x6b6c(gp)
0041d9fc  move a0,s0
0041da00  b 0x0041da48
0041da04  _addiu a1,v0,-0x49dc
0041da08  lw t9,-0x7550(gp)
0041da0c  lw a0,0x34(sp)
0041da10  jalr t9
0041da14  _nop
0041da18  lw gp,0x10(sp)
0041da1c  move a1,v1
0041da20  lw t9,-0x760c(gp)
0041da24  nop
0041da28  jalr t9
0041da2c  _move a0,v0
0041da30  lw gp,0x10(sp)
0041da34  lui v1,0x5b
0041da38  move a2,v0
0041da3c  lw t9,-0x6b6c(gp)
0041da40  move a0,s0
0041da44  addiu a1,v1,-0x49dc
0041da48  jalr t9
0041da4c  _nop
0041da50  lw gp,0x10(sp)
0041da54  lw v0,0x84(sp)
0041da58  nop
0041da5c  beq v0,zero,0x0041dae4
0041da60  _li v0,0x1
0041da64  beq s1,v0,0x0041da80
0041da68  _nop
0041da6c  li v0,0x2
0041da70  beq s1,v0,0x0041da9c
0041da74  _nop
0041da78  b 0x0041dae4
0041da7c  _nop
0041da80  lw a0,0x3c(sp)
0041da84  lw t9,-0x6e90(gp)
0041da88  nop
0041da8c  jalr t9
0041da90  _nop
0041da94  b 0x0041dac4
0041da98  _nop
0041da9c  lw t9,-0x7550(gp)
0041daa0  lw a0,0x3c(sp)
0041daa4  jalr t9
0041daa8  _nop
0041daac  lw gp,0x10(sp)
0041dab0  move a1,v1
0041dab4  lw t9,-0x760c(gp)
0041dab8  nop
0041dabc  jalr t9
0041dac0  _move a0,v0
0041dac4  lw gp,0x10(sp)
0041dac8  lui a1,0x5b
0041dacc  move a2,v0
0041dad0  lw t9,-0x6b6c(gp)
0041dad4  move a0,s0
0041dad8  jalr t9
0041dadc  _addiu a1,a1,-0x49d0
0041dae0  lw gp,0x10(sp)
0041dae4  lw v1,0x80(sp)
0041dae8  nop
0041daec  beq v1,zero,0x0041db74
0041daf0  _li v0,0x1
0041daf4  beq s1,v0,0x0041db10
0041daf8  _nop
0041dafc  li v0,0x2
0041db00  beq s1,v0,0x0041db2c
0041db04  _nop
0041db08  b 0x0041db74
0041db0c  _nop
0041db10  lw a0,0x44(sp)
0041db14  lw t9,-0x6e90(gp)
0041db18  nop
0041db1c  jalr t9
0041db20  _nop
0041db24  b 0x0041db54
0041db28  _nop
0041db2c  lw t9,-0x7550(gp)
0041db30  lw a0,0x44(sp)
0041db34  jalr t9
0041db38  _nop
0041db3c  lw gp,0x10(sp)
0041db40  move a1,v1
0041db44  lw t9,-0x760c(gp)
0041db48  nop
0041db4c  jalr t9
0041db50  _move a0,v0
0041db54  lw gp,0x10(sp)
0041db58  lui a1,0x5b
0041db5c  move a2,v0
0041db60  lw t9,-0x6b6c(gp)
0041db64  move a0,s0
0041db68  jalr t9
0041db6c  _addiu a1,a1,-0x49c4
0041db70  lw gp,0x10(sp)
0041db74  lw v0,0x9c(sp)
0041db78  nop
0041db7c  beq v0,zero,0x0041dbcc
0041db80  _nop
0041db84  lw t9,-0x7550(gp)
0041db88  lw a0,0x7c(sp)
0041db8c  jalr t9
0041db90  _nop
0041db94  lw gp,0x10(sp)
0041db98  move a1,v1
0041db9c  lw t9,-0x760c(gp)
0041dba0  nop
0041dba4  jalr t9
0041dba8  _move a0,v0
0041dbac  lw gp,0x10(sp)
0041dbb0  lui a1,0x5b
0041dbb4  move a2,v0
0041dbb8  lw t9,-0x6b6c(gp)
0041dbbc  move a0,s0
0041dbc0  jalr t9
0041dbc4  _addiu a1,a1,-0x49bc
0041dbc8  lw gp,0x10(sp)
0041dbcc  lw v1,0x98(sp)
0041dbd0  nop
0041dbd4  beq v1,zero,0x0041dc0c
0041dbd8  _nop
0041dbdc  lw t9,-0x6e90(gp)
0041dbe0  lw a0,0x78(sp)
0041dbe4  jalr t9
0041dbe8  _nop
0041dbec  lw gp,0x10(sp)
0041dbf0  lui a1,0x5b
0041dbf4  move a2,v0
0041dbf8  lw t9,-0x6b6c(gp)
0041dbfc  move a0,s0
0041dc00  jalr t9
0041dc04  _addiu a1,a1,-0x49b0
0041dc08  lw gp,0x10(sp)
0041dc0c  lw v0,0x74(sp)
0041dc10  nop
0041dc14  beq v0,zero,0x0041dc4c
0041dc18  _nop
0041dc1c  lw t9,-0x5e1c(gp)
0041dc20  lw a0,0x74(sp)
0041dc24  jalr t9
0041dc28  _nop
0041dc2c  lw gp,0x10(sp)
0041dc30  lui a1,0x5b
0041dc34  move a2,v0
0041dc38  lw t9,-0x6b6c(gp)
0041dc3c  move a0,s0
0041dc40  jalr t9
0041dc44  _addiu a1,a1,-0x49a8
0041dc48  lw gp,0x10(sp)
0041dc4c  beq s8,zero,0x0041dc84
0041dc50  _nop
0041dc54  lw t9,-0x5e1c(gp)
0041dc58  nop
0041dc5c  jalr t9
0041dc60  _move a0,s8
0041dc64  lw gp,0x10(sp)
0041dc68  move a2,v0
0041dc6c  move a0,s0
0041dc70  lw t9,-0x6b6c(gp)
0041dc74  nop
0041dc78  jalr t9
0041dc7c  _move a1,s2
0041dc80  lw gp,0x10(sp)
0041dc84  beq s7,zero,0x0041dcc0
0041dc88  _nop
0041dc8c  lw t9,-0x5e1c(gp)
0041dc90  nop
0041dc94  jalr t9
0041dc98  _move a0,s7
0041dc9c  lw gp,0x10(sp)
0041dca0  lui a1,0x5b
0041dca4  move a2,v0
0041dca8  lw t9,-0x6b6c(gp)
0041dcac  move a0,s0
0041dcb0  jalr t9
0041dcb4  _addiu a1,a1,-0x499c
0041dcb8  lw gp,0x10(sp)
0041dcbc  nop
0041dcc0  lw t9,-0x709c(gp)
0041dcc4  lw a0,0x94(sp)
0041dcc8  jalr t9
0041dccc  _move a1,s0
0041dcd0  lw gp,0x10(sp)
0041dcd4  lw v1,0x70(sp)
0041dcd8  addiu s6,s6,0x1
0041dcdc  li v0,0x14
0041dce0  addiu v1,v1,0x48
0041dce4  bne s6,v0,0x0041d50c
0041dce8  _sw v1,0x70(sp)
0041dcec  lw t9,-0x709c(gp)
0041dcf0  lw a0,0x90(sp)
0041dcf4  move a1,s5
0041dcf8  jalr t9
0041dcfc  _addiu s4,s4,0x1
0041dd00  li v0,0xa
0041dd04  lw gp,0x10(sp)
0041dd08  bne s4,v0,0x0041d420
0041dd0c  _addiu s3,s3,0x5a8
0041dd10  lw v1,0x8c(sp)
0041dd14  lw ra,0xdc(sp)
0041dd18  lw s8,0xd8(sp)
0041dd1c  lw s7,0xd4(sp)
0041dd20  lw s6,0xd0(sp)
0041dd24  lw s5,0xcc(sp)
0041dd28  lw s4,0xc8(sp)
0041dd2c  lw s3,0xc4(sp)
0041dd30  lw s2,0xc0(sp)
0041dd34  lw s1,0xbc(sp)
0041dd38  lw s0,0xb8(sp)
0041dd3c  lui v0,0x61
0041dd40  sw v1,0x3d44(v0)
0041dd44  clear v0
0041dd48  jr ra
0041dd4c  _addiu sp,sp,0xe0
