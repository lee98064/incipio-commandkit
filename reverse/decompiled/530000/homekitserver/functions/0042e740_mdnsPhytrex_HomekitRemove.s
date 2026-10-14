# mdnsPhytrex_HomekitRemove @ 0042e740
0042e740  addiu sp,sp,-0x28
0042e744  sw ra,0x24(sp)
0042e748  sw s2,0x20(sp)
0042e74c  sw s1,0x1c(sp)
0042e750  sw s0,0x18(sp)
0042e754  lui gp,0x62
0042e758  addiu gp,gp,-0x5cf0
0042e75c  sw gp,0x10(sp)
0042e760  lw v0,-0x7de8(gp)
0042e764  nop
0042e768  lw v0,0x0(v0)
0042e76c  nop
0042e770  beq v0,zero,0x0042e878
0042e774  _lui a0,0x5b
0042e778  lw t9,-0x7cc0(gp)
0042e77c  addiu a0,a0,-0x2b50
0042e780  jalr t9
0042e784  _li a1,0x1
0042e788  lw gp,0x10(sp)
0042e78c  bne v0,zero,0x0042e7b4
0042e790  _move s0,v0
0042e794  lw v0,-0x6b48(gp)
0042e798  lw t9,-0x7054(gp)
0042e79c  lui a0,0x5b
0042e7a0  lw a1,0x0(v0)
0042e7a4  jalr t9
0042e7a8  _addiu a0,a0,-0x2b40
0042e7ac  lw gp,0x10(sp)
0042e7b0  nop
0042e7b4  lw t9,-0x67a8(gp)
0042e7b8  nop
0042e7bc  jalr t9
0042e7c0  _lui s1,0x61
0042e7c4  lw gp,0x10(sp)
0042e7c8  lui a1,0x5b
0042e7cc  addiu a1,a1,-0x2b28
0042e7d0  lw t9,-0x6304(gp)
0042e7d4  nop
0042e7d8  jalr t9
0042e7dc  _move a0,s0
0042e7e0  lw gp,0x10(sp)
0042e7e4  nop
0042e7e8  lw t9,-0x67a8(gp)
0042e7ec  nop
0042e7f0  jalr t9
0042e7f4  _move s2,v0
0042e7f8  lui a0,0x61
0042e7fc  move t9,s2
0042e800  jalr t9
0042e804  _addiu a0,a0,0x56c4
0042e808  lw gp,0x10(sp)
0042e80c  nop
0042e810  lw t9,-0x67a8(gp)
0042e814  nop
0042e818  jalr t9
0042e81c  _nop
0042e820  lw v0,0x56c0(s1)
0042e824  lw gp,0x10(sp)
0042e828  beq v0,zero,0x0042e858
0042e82c  _lui a1,0x5b
0042e830  lw t9,-0x6304(gp)
0042e834  addiu a1,a1,-0x2b14
0042e838  jalr t9
0042e83c  _move a0,s0
0042e840  lw a0,0x56c0(s1)
0042e844  move t9,v0
0042e848  jalr t9
0042e84c  _nop
0042e850  lw gp,0x10(sp)
0042e854  sw zero,0x56c0(s1)
0042e858  move a0,s0
0042e85c  lw t9,-0x7ea4(gp)
0042e860  lw ra,0x24(sp)
0042e864  lw s2,0x20(sp)
0042e868  lw s1,0x1c(sp)
0042e86c  lw s0,0x18(sp)
0042e870  jr t9
0042e874  _addiu sp,sp,0x28
0042e878  lw ra,0x24(sp)
0042e87c  lw s2,0x20(sp)
0042e880  lw s1,0x1c(sp)
0042e884  lw s0,0x18(sp)
0042e888  jr ra
0042e88c  _addiu sp,sp,0x28
