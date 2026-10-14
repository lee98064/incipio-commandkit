# FUN_0041d478 @ 0041d478
0041d478  addiu sp,sp,-0xe0
0041d47c  sw ra,0xdc(sp)
0041d480  sw s8,0xd8(sp)
0041d484  sw s7,0xd4(sp)
0041d488  sw s6,0xd0(sp)
0041d48c  sw s5,0xcc(sp)
0041d490  sw s4,0xc8(sp)
0041d494  sw s3,0xc4(sp)
0041d498  sw s2,0xc0(sp)
0041d49c  sw s1,0xbc(sp)
0041d4a0  sw s0,0xb8(sp)
0041d4a4  lui gp,0x62
0041d4a8  addiu gp,gp,-0x5cf0
0041d4ac  sw gp,0x10(sp)
0041d4b0  lw t9,-0x7b84(gp)
0041d4b4  sw a0,0xe0(sp)
0041d4b8  jalr t9
0041d4bc  _lui s2,0x5d
0041d4c0  lw gp,0x10(sp)
0041d4c4  sw v0,0x8c(sp)
0041d4c8  clear s4
0041d4cc  lw t9,-0x718c(gp)
0041d4d0  nop
0041d4d4  jalr t9
0041d4d8  _addiu s2,s2,-0x7e88
0041d4dc  lw gp,0x10(sp)
0041d4e0  lw a0,0x8c(sp)
0041d4e4  lui a1,0x5b
0041d4e8  lw t9,-0x6b5c(gp)
0041d4ec  move a2,v0
0041d4f0  addiu a1,a1,-0x3c00
0041d4f4  jalr t9
0041d4f8  _move s1,v0
0041d4fc  lw gp,0x10(sp)
0041d500  nop
0041d504  lw t9,-0x7b84(gp)
0041d508  nop
0041d50c  jalr t9
0041d510  _nop
0041d514  lw gp,0x10(sp)
0041d518  move a1,v0
0041d51c  move a0,s1
0041d520  lw t9,-0x7098(gp)
0041d524  nop
0041d528  jalr t9
0041d52c  _move s0,v0
0041d530  lw gp,0x10(sp)
0041d534  nop
0041d538  lw t9,-0x6e8c(gp)
0041d53c  nop
0041d540  jalr t9
0041d544  _li a0,0x1
0041d548  lw gp,0x10(sp)
0041d54c  lui a1,0x5b
0041d550  addiu a1,a1,-0x3bf4
0041d554  lw t9,-0x6b5c(gp)
0041d558  move a2,v0
0041d55c  jalr t9
0041d560  _move a0,s0
0041d564  lw gp,0x10(sp)
0041d568  nop
0041d56c  lw t9,-0x718c(gp)
0041d570  nop
0041d574  jalr t9
0041d578  _nop
0041d57c  lw gp,0x10(sp)
0041d580  lui a1,0x5b
0041d584  sw v0,0x90(sp)
0041d588  lw t9,-0x6b5c(gp)
0041d58c  move a0,s0
0041d590  addiu a1,a1,-0x3bf0
0041d594  jalr t9
0041d598  _move a2,v0
0041d59c  lw gp,0x10(sp)
0041d5a0  nop
0041d5a4  lw s3,-0x592c(gp)
0041d5a8  nop
0041d5ac  addiu s3,s3,0x4
0041d5b0  lw v0,0x0(s3)
0041d5b4  nop
0041d5b8  beq v0,zero,0x0041dea0
0041d5bc  _nop
0041d5c0  lw t9,-0x7b84(gp)
0041d5c4  nop
0041d5c8  jalr t9
0041d5cc  _clear s6
0041d5d0  lw gp,0x10(sp)
0041d5d4  lw a0,0x0(s3)
0041d5d8  lw t9,-0x5e08(gp)
0041d5dc  nop
0041d5e0  jalr t9
0041d5e4  _move s5,v0
0041d5e8  lw gp,0x10(sp)
0041d5ec  lui a1,0x5d
0041d5f0  move a2,v0
0041d5f4  lw t9,-0x6b5c(gp)
0041d5f8  addiu a1,a1,-0x3830
0041d5fc  jalr t9
0041d600  _move a0,s5
0041d604  lw gp,0x10(sp)
0041d608  lw a0,0x4(s3)
0041d60c  lw t9,-0x6e8c(gp)
0041d610  nop
0041d614  jalr t9
0041d618  _nop
0041d61c  lw gp,0x10(sp)
0041d620  lui a1,0x5b
0041d624  move a2,v0
0041d628  lw t9,-0x6b5c(gp)
0041d62c  move a0,s5
0041d630  jalr t9
0041d634  _addiu a1,a1,-0x3be4
0041d638  lw gp,0x10(sp)
0041d63c  nop
0041d640  lw t9,-0x718c(gp)
0041d644  nop
0041d648  jalr t9
0041d64c  _nop
0041d650  lw gp,0x10(sp)
0041d654  lui a1,0x5b
0041d658  sw v0,0x94(sp)
0041d65c  lw t9,-0x6b5c(gp)
0041d660  move a2,v0
0041d664  addiu a1,a1,-0x3be0
0041d668  jalr t9
0041d66c  _move a0,s5
0041d670  li v0,0xb5
0041d674  mult s4,v0
0041d678  lw gp,0x10(sp)
0041d67c  nop
0041d680  lw v1,-0x592c(gp)
0041d684  mflo v0
0041d688  addiu v0,v0,0x1
0041d68c  sll v0,v0,0x3
0041d690  addu v0,v1,v0
0041d694  addiu v0,v0,0x4
0041d698  sw v0,0x70(sp)
0041d69c  lw t9,-0x5c9c(gp)
0041d6a0  lw a1,0x70(sp)
0041d6a4  addiu a0,sp,0x1c
0041d6a8  jalr t9
0041d6ac  _li a2,0x48
0041d6b0  lw v0,0x20(sp)
0041d6b4  lbu v1,0x24(sp)
0041d6b8  lw a0,0x1c(sp)
0041d6bc  sw v0,0x88(sp)
0041d6c0  sw v1,0x68(sp)
0041d6c4  lbu v0,0x25(sp)
0041d6c8  lbu v1,0x30(sp)
0041d6cc  lw gp,0x10(sp)
0041d6d0  sw v0,0x6c(sp)
0041d6d4  sw v1,0xac(sp)
0041d6d8  lbu v0,0x31(sp)
0041d6dc  lbu v1,0x32(sp)
0041d6e0  lw s1,0x28(sp)
0041d6e4  sw v0,0xa8(sp)
0041d6e8  sw v1,0xa4(sp)
0041d6ec  lbu v0,0x33(sp)
0041d6f0  lbu v1,0x38(sp)
0041d6f4  lw s8,0x5c(sp)
0041d6f8  sw v0,0xa0(sp)
0041d6fc  sw v1,0x84(sp)
0041d700  lbu v0,0x40(sp)
0041d704  lw v1,0x4c(sp)
0041d708  lw s7,0x60(sp)
0041d70c  sw v0,0x80(sp)
0041d710  sw v1,0x7c(sp)
0041d714  lw v0,0x54(sp)
0041d718  lw v1,0x58(sp)
0041d71c  sw v0,0x78(sp)
0041d720  sw v1,0x74(sp)
0041d724  lbu v0,0x48(sp)
0041d728  lbu v1,0x50(sp)
0041d72c  sw v0,0x9c(sp)
0041d730  beq a0,zero,0x0041de64
0041d734  _sw v1,0x98(sp)
0041d738  lw t9,-0x7b84(gp)
0041d73c  nop
0041d740  jalr t9
0041d744  _sw a0,0xb0(sp)
0041d748  lw gp,0x10(sp)
0041d74c  lw a0,0xb0(sp)
0041d750  lw t9,-0x5e08(gp)
0041d754  nop
0041d758  jalr t9
0041d75c  _move s0,v0
0041d760  lw gp,0x10(sp)
0041d764  lui a1,0x5d
0041d768  move a2,v0
0041d76c  lw t9,-0x6b5c(gp)
0041d770  addiu a1,a1,-0x3830
0041d774  jalr t9
0041d778  _move a0,s0
0041d77c  lw gp,0x10(sp)
0041d780  lw a0,0x88(sp)
0041d784  lw t9,-0x6e8c(gp)
0041d788  nop
0041d78c  jalr t9
0041d790  _nop
0041d794  lw gp,0x10(sp)
0041d798  lui a1,0x5b
0041d79c  move a2,v0
0041d7a0  lw t9,-0x6b5c(gp)
0041d7a4  move a0,s0
0041d7a8  jalr t9
0041d7ac  _addiu a1,a1,-0x3be4
0041d7b0  lw v0,0x68(sp)
0041d7b4  lw gp,0x10(sp)
0041d7b8  beq v0,zero,0x0041d7cc
0041d7bc  _clear a0
0041d7c0  lw v0,0x2c(sp)
0041d7c4  b 0x0041d7e4
0041d7c8  _sw v0,0x18(sp)
0041d7cc  lw t9,-0x596c(gp)
0041d7d0  lw a1,0x88(sp)
0041d7d4  lw a3,0xe0(sp)
0041d7d8  jalr t9
0041d7dc  _addiu a2,sp,0x18
0041d7e0  lw gp,0x10(sp)
0041d7e4  sltiu v0,s1,0x9
0041d7e8  beq v0,zero,0x0041d9ec
0041d7ec  _lui v1,0x5b
0041d7f0  sll v0,s1,0x2
0041d7f4  addiu v1,v1,-0x39d0
0041d7f8  addu v0,v1,v0
0041d7fc  lw v0,0x0(v0)
0041d800  nop
0041d804  jr v0
0041d808  _nop
0041d80c  lui a0,0x5b
0041d810  lw t9,-0x5e08(gp)
0041d814  b 0x0041d828
0041d818  _addiu a0,a0,-0x3bd0
0041d81c  lw t9,-0x5e08(gp)
0041d820  lui a0,0x5b
0041d824  addiu a0,a0,0x7f60
0041d828  jalr t9
0041d82c  _nop
0041d830  lw gp,0x10(sp)
0041d834  move a2,v0
0041d838  move a0,s0
0041d83c  lw t9,-0x6b5c(gp)
0041d840  nop
0041d844  jalr t9
0041d848  _move a1,s2
0041d84c  lw v0,0x6c(sp)
0041d850  lw gp,0x10(sp)
0041d854  bne v0,zero,0x0041d86c
0041d858  _nop
0041d85c  lw v1,0x68(sp)
0041d860  nop
0041d864  beq v1,zero,0x0041d9f8
0041d868  _nop
0041d86c  lw a0,0x18(sp)
0041d870  lw t9,-0x6e8c(gp)
0041d874  b 0x0041d974
0041d878  _nop
0041d87c  lw t9,-0x5e08(gp)
0041d880  lui a0,0x5b
0041d884  jalr t9
0041d888  _addiu a0,a0,-0x3bc8
0041d88c  lw gp,0x10(sp)
0041d890  move a2,v0
0041d894  move a0,s0
0041d898  lw t9,-0x6b5c(gp)
0041d89c  nop
0041d8a0  jalr t9
0041d8a4  _move a1,s2
0041d8a8  lw v0,0x6c(sp)
0041d8ac  lw gp,0x10(sp)
0041d8b0  bne v0,zero,0x0041d8c8
0041d8b4  _nop
0041d8b8  lw v1,0x68(sp)
0041d8bc  nop
0041d8c0  beq v1,zero,0x0041d9f8
0041d8c4  _nop
0041d8c8  lw t9,-0x7550(gp)
0041d8cc  lw a0,0x18(sp)
0041d8d0  jalr t9
0041d8d4  _nop
0041d8d8  lw gp,0x10(sp)
0041d8dc  move a1,v1
0041d8e0  lw t9,-0x760c(gp)
0041d8e4  nop
0041d8e8  jalr t9
0041d8ec  _move a0,v0
0041d8f0  b 0x0041d97c
0041d8f4  _nop
0041d8f8  lui a0,0x5d
0041d8fc  lw t9,-0x5e08(gp)
0041d900  b 0x0041d924
0041d904  _addiu a0,a0,-0x7bb4
0041d908  lui a0,0x5b
0041d90c  lw t9,-0x5e08(gp)
0041d910  b 0x0041d924
0041d914  _addiu a0,a0,-0x3c14
0041d918  lw t9,-0x5e08(gp)
0041d91c  lui a0,0x5b
0041d920  addiu a0,a0,0x3350
0041d924  jalr t9
0041d928  _nop
0041d92c  lw gp,0x10(sp)
0041d930  move a2,v0
0041d934  move a0,s0
0041d938  lw t9,-0x6b5c(gp)
0041d93c  nop
0041d940  jalr t9
0041d944  _move a1,s2
0041d948  lw v0,0x6c(sp)
0041d94c  lw gp,0x10(sp)
0041d950  bne v0,zero,0x0041d968
0041d954  _nop
0041d958  lw v1,0x68(sp)
0041d95c  nop
0041d960  beq v1,zero,0x0041d9f8
0041d964  _nop
0041d968  lw a0,0x18(sp)
0041d96c  lw t9,-0x5e08(gp)
0041d970  nop
0041d974  jalr t9
0041d978  _nop
0041d97c  lw gp,0x10(sp)
0041d980  lui a1,0x5b
0041d984  addiu a1,a1,0x3650
0041d988  lw t9,-0x6b5c(gp)
0041d98c  move a2,v0
0041d990  jalr t9
0041d994  _move a0,s0
0041d998  lw gp,0x10(sp)
0041d99c  b 0x0041d9f8
0041d9a0  _nop
0041d9a4  lw v0,0x6c(sp)
0041d9a8  nop
0041d9ac  bne v0,zero,0x0041d9c4
0041d9b0  _nop
0041d9b4  lw v1,0x68(sp)
0041d9b8  nop
0041d9bc  beq v1,zero,0x0041dae0
0041d9c0  _nop
0041d9c4  lw t9,-0x5e08(gp)
0041d9c8  lw a0,0x18(sp)
0041d9cc  jalr t9
0041d9d0  _nop
0041d9d4  lw gp,0x10(sp)
0041d9d8  lui a1,0x5b
0041d9dc  addiu a1,a1,0x3650
0041d9e0  lw t9,-0x6b5c(gp)
0041d9e4  b 0x0041dad4
0041d9e8  _move a2,v0
0041d9ec  li v0,0x8
0041d9f0  beq s1,v0,0x0041dae0
0041d9f4  _nop
0041d9f8  lw t9,-0x718c(gp)
0041d9fc  nop
0041da00  jalr t9
0041da04  _nop
0041da08  sw v0,0x68(sp)
0041da0c  lw v0,0xac(sp)
0041da10  lw gp,0x10(sp)
0041da14  beq v0,zero,0x0041da48
0041da18  _lui a0,0x5b
0041da1c  lw t9,-0x5e08(gp)
0041da20  nop
0041da24  jalr t9
0041da28  _addiu a0,a0,-0x3bc0
0041da2c  lw gp,0x10(sp)
0041da30  lw a0,0x68(sp)
0041da34  lw t9,-0x7098(gp)
0041da38  nop
0041da3c  jalr t9
0041da40  _move a1,v0
0041da44  lw gp,0x10(sp)
0041da48  lw v1,0xa8(sp)
0041da4c  nop
0041da50  beq v1,zero,0x0041da84
0041da54  _lui a0,0x5b
0041da58  lw t9,-0x5e08(gp)
0041da5c  nop
0041da60  jalr t9
0041da64  _addiu a0,a0,-0x3bbc
0041da68  lw gp,0x10(sp)
0041da6c  lw a0,0x68(sp)
0041da70  lw t9,-0x7098(gp)
0041da74  nop
0041da78  jalr t9
0041da7c  _move a1,v0
0041da80  lw gp,0x10(sp)
0041da84  lw v0,0xa4(sp)
0041da88  nop
0041da8c  beq v0,zero,0x0041dac4
0041da90  _lui a0,0x5b
0041da94  lw t9,-0x5e08(gp)
0041da98  nop
0041da9c  jalr t9
0041daa0  _addiu a0,a0,-0x3bb8
0041daa4  lw gp,0x10(sp)
0041daa8  lw a0,0x68(sp)
0041daac  lw t9,-0x7098(gp)
0041dab0  nop
0041dab4  jalr t9
0041dab8  _move a1,v0
0041dabc  lw gp,0x10(sp)
0041dac0  nop
0041dac4  lw t9,-0x6b5c(gp)
0041dac8  lw a2,0x68(sp)
0041dacc  lui a1,0x5b
0041dad0  addiu a1,a1,-0x3bb4
0041dad4  jalr t9
0041dad8  _move a0,s0
0041dadc  lw gp,0x10(sp)
0041dae0  lw v1,0xa0(sp)
0041dae4  nop
0041dae8  bne v1,zero,0x0041db54
0041daec  _li v0,0x1
0041daf0  lw v0,0x84(sp)
0041daf4  nop
0041daf8  bne v0,zero,0x0041dbf4
0041dafc  _li v0,0x1
0041db00  lw v1,0x80(sp)
0041db04  nop
0041db08  bne v1,zero,0x0041dc7c
0041db0c  _nop
0041db10  lw t9,-0x7b10(gp)
0041db14  lw a0,0x7c(sp)
0041db18  jalr t9
0041db1c  _clear a1
0041db20  lw gp,0x10(sp)
0041db24  bne v0,zero,0x0041dd04
0041db28  _nop
0041db2c  lw v0,0x78(sp)
0041db30  nop
0041db34  bne v0,zero,0x0041dd04
0041db38  _nop
0041db3c  lw v1,0x74(sp)
0041db40  nop
0041db44  bne v1,zero,0x0041ddac
0041db48  _nop
0041db4c  b 0x0041dddc
0041db50  _nop
0041db54  beq s1,v0,0x0041db6c
0041db58  _li v0,0x2
0041db5c  beq s1,v0,0x0041db98
0041db60  _nop
0041db64  b 0x0041dbe4
0041db68  _nop
0041db6c  lw t9,-0x6e8c(gp)
0041db70  lw a0,0x34(sp)
0041db74  jalr t9
0041db78  _nop
0041db7c  lw gp,0x10(sp)
0041db80  move a2,v0
0041db84  lui v0,0x5b
0041db88  lw t9,-0x6b5c(gp)
0041db8c  move a0,s0
0041db90  b 0x0041dbd8
0041db94  _addiu a1,v0,-0x3bac
0041db98  lw t9,-0x7550(gp)
0041db9c  lw a0,0x34(sp)
0041dba0  jalr t9
0041dba4  _nop
0041dba8  lw gp,0x10(sp)
0041dbac  move a1,v1
0041dbb0  lw t9,-0x760c(gp)
0041dbb4  nop
0041dbb8  jalr t9
0041dbbc  _move a0,v0
0041dbc0  lw gp,0x10(sp)
0041dbc4  lui v1,0x5b
0041dbc8  move a2,v0
0041dbcc  lw t9,-0x6b5c(gp)
0041dbd0  move a0,s0
0041dbd4  addiu a1,v1,-0x3bac
0041dbd8  jalr t9
0041dbdc  _nop
0041dbe0  lw gp,0x10(sp)
0041dbe4  lw v0,0x84(sp)
0041dbe8  nop
0041dbec  beq v0,zero,0x0041dc74
0041dbf0  _li v0,0x1
0041dbf4  beq s1,v0,0x0041dc10
0041dbf8  _nop
0041dbfc  li v0,0x2
0041dc00  beq s1,v0,0x0041dc2c
0041dc04  _nop
0041dc08  b 0x0041dc74
0041dc0c  _nop
0041dc10  lw a0,0x3c(sp)
0041dc14  lw t9,-0x6e8c(gp)
0041dc18  nop
0041dc1c  jalr t9
0041dc20  _nop
0041dc24  b 0x0041dc54
0041dc28  _nop
0041dc2c  lw t9,-0x7550(gp)
0041dc30  lw a0,0x3c(sp)
0041dc34  jalr t9
0041dc38  _nop
0041dc3c  lw gp,0x10(sp)
0041dc40  move a1,v1
0041dc44  lw t9,-0x760c(gp)
0041dc48  nop
0041dc4c  jalr t9
0041dc50  _move a0,v0
0041dc54  lw gp,0x10(sp)
0041dc58  lui a1,0x5b
0041dc5c  move a2,v0
0041dc60  lw t9,-0x6b5c(gp)
0041dc64  move a0,s0
0041dc68  jalr t9
0041dc6c  _addiu a1,a1,-0x3ba0
0041dc70  lw gp,0x10(sp)
0041dc74  lw v1,0x80(sp)
0041dc78  nop
0041dc7c  beq v1,zero,0x0041dd04
0041dc80  _li v0,0x1
0041dc84  beq s1,v0,0x0041dca0
0041dc88  _nop
0041dc8c  li v0,0x2
0041dc90  beq s1,v0,0x0041dcbc
0041dc94  _nop
0041dc98  b 0x0041dd04
0041dc9c  _nop
0041dca0  lw a0,0x44(sp)
0041dca4  lw t9,-0x6e8c(gp)
0041dca8  nop
0041dcac  jalr t9
0041dcb0  _nop
0041dcb4  b 0x0041dce4
0041dcb8  _nop
0041dcbc  lw t9,-0x7550(gp)
0041dcc0  lw a0,0x44(sp)
0041dcc4  jalr t9
0041dcc8  _nop
0041dccc  lw gp,0x10(sp)
0041dcd0  move a1,v1
0041dcd4  lw t9,-0x760c(gp)
0041dcd8  nop
0041dcdc  jalr t9
0041dce0  _move a0,v0
0041dce4  lw gp,0x10(sp)
0041dce8  lui a1,0x5b
0041dcec  move a2,v0
0041dcf0  lw t9,-0x6b5c(gp)
0041dcf4  move a0,s0
0041dcf8  jalr t9
0041dcfc  _addiu a1,a1,-0x3b94
0041dd00  lw gp,0x10(sp)
0041dd04  lw v0,0x9c(sp)
0041dd08  nop
0041dd0c  beq v0,zero,0x0041dd5c
0041dd10  _nop
0041dd14  lw t9,-0x7550(gp)
0041dd18  lw a0,0x7c(sp)
0041dd1c  jalr t9
0041dd20  _nop
0041dd24  lw gp,0x10(sp)
0041dd28  move a1,v1
0041dd2c  lw t9,-0x760c(gp)
0041dd30  nop
0041dd34  jalr t9
0041dd38  _move a0,v0
0041dd3c  lw gp,0x10(sp)
0041dd40  lui a1,0x5b
0041dd44  move a2,v0
0041dd48  lw t9,-0x6b5c(gp)
0041dd4c  move a0,s0
0041dd50  jalr t9
0041dd54  _addiu a1,a1,-0x3b8c
0041dd58  lw gp,0x10(sp)
0041dd5c  lw v1,0x98(sp)
0041dd60  nop
0041dd64  beq v1,zero,0x0041dd9c
0041dd68  _nop
0041dd6c  lw t9,-0x6e8c(gp)
0041dd70  lw a0,0x78(sp)
0041dd74  jalr t9
0041dd78  _nop
0041dd7c  lw gp,0x10(sp)
0041dd80  lui a1,0x5b
0041dd84  move a2,v0
0041dd88  lw t9,-0x6b5c(gp)
0041dd8c  move a0,s0
0041dd90  jalr t9
0041dd94  _addiu a1,a1,-0x3b80
0041dd98  lw gp,0x10(sp)
0041dd9c  lw v0,0x74(sp)
0041dda0  nop
0041dda4  beq v0,zero,0x0041dddc
0041dda8  _nop
0041ddac  lw t9,-0x5e08(gp)
0041ddb0  lw a0,0x74(sp)
0041ddb4  jalr t9
0041ddb8  _nop
0041ddbc  lw gp,0x10(sp)
0041ddc0  lui a1,0x5b
0041ddc4  move a2,v0
0041ddc8  lw t9,-0x6b5c(gp)
0041ddcc  move a0,s0
0041ddd0  jalr t9
0041ddd4  _addiu a1,a1,-0x3b78
0041ddd8  lw gp,0x10(sp)
0041dddc  beq s8,zero,0x0041de14
0041dde0  _nop
0041dde4  lw t9,-0x5e08(gp)
0041dde8  nop
0041ddec  jalr t9
0041ddf0  _move a0,s8
0041ddf4  lw gp,0x10(sp)
0041ddf8  move a2,v0
0041ddfc  move a0,s0
0041de00  lw t9,-0x6b5c(gp)
0041de04  nop
0041de08  jalr t9
0041de0c  _move a1,s2
0041de10  lw gp,0x10(sp)
0041de14  beq s7,zero,0x0041de50
0041de18  _nop
0041de1c  lw t9,-0x5e08(gp)
0041de20  nop
0041de24  jalr t9
0041de28  _move a0,s7
0041de2c  lw gp,0x10(sp)
0041de30  lui a1,0x5b
0041de34  move a2,v0
0041de38  lw t9,-0x6b5c(gp)
0041de3c  move a0,s0
0041de40  jalr t9
0041de44  _addiu a1,a1,-0x3b6c
0041de48  lw gp,0x10(sp)
0041de4c  nop
0041de50  lw t9,-0x7098(gp)
0041de54  lw a0,0x94(sp)
0041de58  jalr t9
0041de5c  _move a1,s0
0041de60  lw gp,0x10(sp)
0041de64  lw v1,0x70(sp)
0041de68  addiu s6,s6,0x1
0041de6c  li v0,0x14
0041de70  addiu v1,v1,0x48
0041de74  bne s6,v0,0x0041d69c
0041de78  _sw v1,0x70(sp)
0041de7c  lw t9,-0x7098(gp)
0041de80  lw a0,0x90(sp)
0041de84  move a1,s5
0041de88  jalr t9
0041de8c  _addiu s4,s4,0x1
0041de90  li v0,0xa
0041de94  lw gp,0x10(sp)
0041de98  bne s4,v0,0x0041d5b0
0041de9c  _addiu s3,s3,0x5a8
0041dea0  lw v1,0x8c(sp)
0041dea4  lw ra,0xdc(sp)
0041dea8  lw s8,0xd8(sp)
0041deac  lw s7,0xd4(sp)
0041deb0  lw s6,0xd0(sp)
0041deb4  lw s5,0xcc(sp)
0041deb8  lw s4,0xc8(sp)
0041debc  lw s3,0xc4(sp)
0041dec0  lw s2,0xc0(sp)
0041dec4  lw s1,0xbc(sp)
0041dec8  lw s0,0xb8(sp)
0041decc  lui v0,0x61
0041ded0  sw v1,0x4be4(v0)
0041ded4  clear v0
0041ded8  jr ra
0041dedc  _addiu sp,sp,0xe0
