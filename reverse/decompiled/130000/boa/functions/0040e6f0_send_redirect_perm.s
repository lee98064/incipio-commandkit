# send_redirect_perm @ 0040e6f0
0040e6f0  addiu sp,sp,-0x28
0040e6f4  sw ra,0x24(sp)
0040e6f8  sw s2,0x20(sp)
0040e6fc  sw s1,0x1c(sp)
0040e700  sw s0,0x18(sp)
0040e704  lui gp,0x47
0040e708  addiu gp,gp,0x2630
0040e70c  sw gp,0x10(sp)
0040e710  lw t9,-0x7a44(gp)
0040e714  li v0,0x2
0040e718  sw v0,0x4(a0)
0040e71c  move s1,a1
0040e720  li v0,0x12d
0040e724  lui a1,0x45
0040e728  move s0,a0
0040e72c  addiu a1,a1,-0x4824
0040e730  sw v0,0x10(a0)
0040e734  jalr t9
0040e738  _sw zero,0x50(a0)
0040e73c  jal 0x0040d688
0040e740  _move a0,s0
0040e744  lw gp,0x10(sp)
0040e748  lui a1,0x45
0040e74c  addiu a1,a1,-0x4d08
0040e750  lw t9,-0x7a44(gp)
0040e754  move a0,s0
0040e758  jalr t9
0040e75c  _clear s2
0040e760  lw gp,0x10(sp)
0040e764  lui a1,0x45
0040e768  addiu a1,a1,-0x66dc
0040e76c  lw t9,-0x7a44(gp)
0040e770  nop
0040e774  jalr t9
0040e778  _move a0,s0
0040e77c  lw gp,0x10(sp)
0040e780  lui a1,0x45
0040e784  addiu a1,a1,-0x5e84
0040e788  lw t9,-0x7cf0(gp)
0040e78c  nop
0040e790  jalr t9
0040e794  _move a0,s1
0040e798  lw gp,0x10(sp)
0040e79c  bne v0,zero,0x0040e8bc
0040e7a0  _nop
0040e7a4  lb v0,0x0(s1)
0040e7a8  lw a0,0x70(s0)
0040e7ac  xori v0,v0,0x2f
0040e7b0  sltiu v0,v0,0x1
0040e7b4  beq a0,zero,0x0040e834
0040e7b8  _addu s1,s1,v0
0040e7bc  lw t9,-0x7f1c(gp)
0040e7c0  nop
0040e7c4  jalr t9
0040e7c8  _nop
0040e7cc  addiu s2,v0,0x64
0040e7d0  lw gp,0x10(sp)
0040e7d4  beq s1,zero,0x0040e7f4
0040e7d8  _move a0,s2
0040e7dc  lw t9,-0x7f1c(gp)
0040e7e0  nop
0040e7e4  jalr t9
0040e7e8  _move a0,s1
0040e7ec  lw gp,0x10(sp)
0040e7f0  addu a0,v0,s2
0040e7f4  lw t9,-0x7b1c(gp)
0040e7f8  nop
0040e7fc  jalr t9
0040e800  _nop
0040e804  lw gp,0x10(sp)
0040e808  lw a2,0x70(s0)
0040e80c  lui a1,0x45
0040e810  lw t9,-0x7e28(gp)
0040e814  move s2,v0
0040e818  move a3,s1
0040e81c  addiu a1,a1,-0x480c
0040e820  jalr t9
0040e824  _move a0,v0
0040e828  lw gp,0x10(sp)
0040e82c  b 0x0040e8bc
0040e830  _move s1,s2
0040e834  lw a0,0x60(s0)
0040e838  nop
0040e83c  beq a0,zero,0x0040e85c
0040e840  _li s2,0x64
0040e844  lw t9,-0x7f1c(gp)
0040e848  nop
0040e84c  jalr t9
0040e850  _nop
0040e854  lw gp,0x10(sp)
0040e858  addiu s2,v0,0x64
0040e85c  beq s1,zero,0x0040e87c
0040e860  _nop
0040e864  lw t9,-0x7f1c(gp)
0040e868  nop
0040e86c  jalr t9
0040e870  _move a0,s1
0040e874  lw gp,0x10(sp)
0040e878  addu s2,v0,s2
0040e87c  lw t9,-0x7b1c(gp)
0040e880  nop
0040e884  jalr t9
0040e888  _move a0,s2
0040e88c  lw gp,0x10(sp)
0040e890  lw a2,0x60(s0)
0040e894  lui a1,0x45
0040e898  lw t9,-0x7e28(gp)
0040e89c  move a3,s1
0040e8a0  addiu a1,a1,-0x480c
0040e8a4  move a0,v0
0040e8a8  move s2,v0
0040e8ac  jalr t9
0040e8b0  _move s1,v0
0040e8b4  lw gp,0x10(sp)
0040e8b8  nop
0040e8bc  lw t9,-0x7c10(gp)
0040e8c0  move a0,s0
0040e8c4  jalr t9
0040e8c8  _move a1,s1
0040e8cc  lw gp,0x10(sp)
0040e8d0  lui a1,0x45
0040e8d4  addiu a1,a1,-0x4cd8
0040e8d8  lw t9,-0x7a44(gp)
0040e8dc  nop
0040e8e0  jalr t9
0040e8e4  _move a0,s0
0040e8e8  lw gp,0x10(sp)
0040e8ec  lui a1,0x45
0040e8f0  addiu a1,a1,-0x47fc
0040e8f4  lw t9,-0x7a44(gp)
0040e8f8  nop
0040e8fc  jalr t9
0040e900  _move a0,s0
0040e904  lw gp,0x10(sp)
0040e908  move a1,s1
0040e90c  lw t9,-0x7ef8(gp)
0040e910  nop
0040e914  jalr t9
0040e918  _move a0,s0
0040e91c  lw gp,0x10(sp)
0040e920  lui a1,0x45
0040e924  addiu a1,a1,-0x4840
0040e928  lw t9,-0x7a44(gp)
0040e92c  nop
0040e930  jalr t9
0040e934  _move a0,s0
0040e938  lw gp,0x10(sp)
0040e93c  nop
0040e940  lw t9,-0x7f98(gp)
0040e944  nop
0040e948  jalr t9
0040e94c  _move a0,s0
0040e950  lw gp,0x10(sp)
0040e954  beq s2,zero,0x0040e978
0040e958  _move a0,s2
0040e95c  lw t9,-0x7fb0(gp)
0040e960  lw ra,0x24(sp)
0040e964  lw s2,0x20(sp)
0040e968  lw s1,0x1c(sp)
0040e96c  lw s0,0x18(sp)
0040e970  jr t9
0040e974  _addiu sp,sp,0x28
0040e978  lw ra,0x24(sp)
0040e97c  lw s2,0x20(sp)
0040e980  lw s1,0x1c(sp)
0040e984  lw s0,0x18(sp)
0040e988  jr ra
0040e98c  _addiu sp,sp,0x28
