# run_init_script @ 0043c378
0043c378  addiu sp,sp,-0x130
0043c37c  sw ra,0x12c(sp)
0043c380  sw s1,0x128(sp)
0043c384  sw s0,0x124(sp)
0043c388  lui gp,0x47
0043c38c  addiu gp,gp,0x2630
0043c390  sw gp,0x18(sp)
0043c394  lw v0,-0x7e50(gp)
0043c398  nop
0043c39c  lw v1,0x0(v0)
0043c3a0  li v0,0x1
0043c3a4  bne v1,v0,0x0043c5f0
0043c3a8  _move s1,a0
0043c3ac  lw t9,-0x7db4(gp)
0043c3b0  addiu s0,sp,0x20
0043c3b4  clear a1
0043c3b8  li a2,0x100
0043c3bc  jalr t9
0043c3c0  _move a0,s0
0043c3c4  lw gp,0x18(sp)
0043c3c8  lui a0,0x45
0043c3cc  lw t9,-0x7b18(gp)
0043c3d0  nop
0043c3d4  jalr t9
0043c3d8  _addiu a0,a0,0x5928
0043c3dc  lw gp,0x18(sp)
0043c3e0  lui a0,0x45
0043c3e4  lw t9,-0x7b18(gp)
0043c3e8  nop
0043c3ec  jalr t9
0043c3f0  _addiu a0,a0,0x5948
0043c3f4  lw gp,0x18(sp)
0043c3f8  lui a0,0x45
0043c3fc  lw t9,-0x7b18(gp)
0043c400  nop
0043c404  jalr t9
0043c408  _addiu a0,a0,0x596c
0043c40c  lw gp,0x18(sp)
0043c410  lui a0,0x45
0043c414  lw t9,-0x7b18(gp)
0043c418  nop
0043c41c  jalr t9
0043c420  _addiu a0,a0,0x2e54
0043c424  lw gp,0x18(sp)
0043c428  lui a0,0x45
0043c42c  lw t9,-0x7b18(gp)
0043c430  nop
0043c434  jalr t9
0043c438  _addiu a0,a0,-0x2834
0043c43c  lw gp,0x18(sp)
0043c440  lui a0,0x45
0043c444  lw t9,-0x7b18(gp)
0043c448  nop
0043c44c  jalr t9
0043c450  _addiu a0,a0,-0x3ac0
0043c454  lw gp,0x18(sp)
0043c458  lui v0,0x45
0043c45c  addiu v0,v0,-0x371c
0043c460  lw t9,-0x7a4c(gp)
0043c464  lui a2,0x45
0043c468  lui a3,0x45
0043c46c  move a0,s0
0043c470  addiu a2,a2,-0x3734
0043c474  addiu a3,a3,-0x3728
0043c478  li a1,0x100
0043c47c  jalr t9
0043c480  _sw v0,0x10(sp)
0043c484  lw gp,0x18(sp)
0043c488  nop
0043c48c  lw t9,-0x7f54(gp)
0043c490  nop
0043c494  jalr t9
0043c498  _move a0,s0
0043c49c  lw gp,0x18(sp)
0043c4a0  blez v0,0x0043c4c0
0043c4a4  _move s0,v0
0043c4a8  lw t9,-0x7c4c(gp)
0043c4ac  move a0,v0
0043c4b0  jalr t9
0043c4b4  _li a1,0x10
0043c4b8  lw gp,0x18(sp)
0043c4bc  nop
0043c4c0  lw t9,-0x7a90(gp)
0043c4c4  nop
0043c4c8  jalr t9
0043c4cc  _li a0,0x3e8
0043c4d0  lw gp,0x18(sp)
0043c4d4  blez s0,0x0043c504
0043c4d8  _lui a0,0x45
0043c4dc  lw t9,-0x7b18(gp)
0043c4e0  nop
0043c4e4  jalr t9
0043c4e8  _addiu a0,a0,0x35c
0043c4ec  lw gp,0x18(sp)
0043c4f0  lui a0,0x45
0043c4f4  lw t9,-0x7b18(gp)
0043c4f8  nop
0043c4fc  jalr t9
0043c500  _addiu a0,a0,0x5994
0043c504  jal 0x00433c3c
0043c508  _nop
0043c50c  lw gp,0x18(sp)
0043c510  lui a0,0x45
0043c514  lw t9,-0x7b18(gp)
0043c518  nop
0043c51c  jalr t9
0043c520  _addiu a0,a0,0x26c
0043c524  lw gp,0x18(sp)
0043c528  nop
0043c52c  lw v0,-0x7e50(gp)
0043c530  lw t9,-0x7d68(gp)
0043c534  sw zero,0x0(v0)
0043c538  lw v0,-0x7c7c(gp)
0043c53c  jalr t9
0043c540  _sw zero,0x0(v0)
0043c544  lw gp,0x18(sp)
0043c548  bne v0,zero,0x0043c5f0
0043c54c  _lui a1,0x45
0043c550  lw t9,-0x7e28(gp)
0043c554  lui a2,0x45
0043c558  addiu a1,a1,0x59bc
0043c55c  addiu a2,a2,0x59c8
0043c560  move a3,s1
0043c564  jalr t9
0043c568  _addiu a0,sp,0x20
0043c56c  lw gp,0x18(sp)
0043c570  b 0x0043c590
0043c574  _li s0,0x3
0043c578  lw t9,-0x7f9c(gp)
0043c57c  nop
0043c580  jalr t9
0043c584  _addiu s0,s0,0x1
0043c588  lw gp,0x18(sp)
0043c58c  nop
0043c590  lw t9,-0x7a04(gp)
0043c594  nop
0043c598  jalr t9
0043c59c  _li a0,0x4
0043c5a0  slt v0,s0,v0
0043c5a4  lw gp,0x18(sp)
0043c5a8  bne v0,zero,0x0043c578
0043c5ac  _move a0,s0
0043c5b0  lw t9,-0x7b24(gp)
0043c5b4  nop
0043c5b8  jalr t9
0043c5bc  _li a0,0x1
0043c5c0  lw gp,0x18(sp)
0043c5c4  nop
0043c5c8  lw t9,-0x7b18(gp)
0043c5cc  nop
0043c5d0  jalr t9
0043c5d4  _addiu a0,sp,0x20
0043c5d8  lw gp,0x18(sp)
0043c5dc  nop
0043c5e0  lw t9,-0x7ed4(gp)
0043c5e4  nop
0043c5e8  jalr t9
0043c5ec  _li a0,0x1
0043c5f0  lw ra,0x12c(sp)
0043c5f4  lw s1,0x128(sp)
0043c5f8  lw s0,0x124(sp)
0043c5fc  jr ra
0043c600  _addiu sp,sp,0x130
