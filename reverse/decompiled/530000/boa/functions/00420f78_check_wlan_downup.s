# check_wlan_downup @ 00420f78
00420f78  addiu sp,sp,-0x50
00420f7c  sw ra,0x4c(sp)
00420f80  sw s1,0x48(sp)
00420f84  sw s0,0x44(sp)
00420f88  lui gp,0x47
00420f8c  addiu gp,gp,0x2630
00420f90  sw gp,0x10(sp)
00420f94  lw t9,-0x7db4(gp)
00420f98  sll a3,a0,0x18
00420f9c  sra a3,a3,0x18
00420fa0  addiu s0,sp,0x18
00420fa4  clear a1
00420fa8  move a0,s0
00420fac  li a2,0x20
00420fb0  jalr t9
00420fb4  _sw a3,0x38(sp)
00420fb8  lw gp,0x10(sp)
00420fbc  lw a3,0x38(sp)
00420fc0  lui a2,0x45
00420fc4  lw t9,-0x7a4c(gp)
00420fc8  addiu a2,a2,0x5e80
00420fcc  move a0,s0
00420fd0  jalr t9
00420fd4  _li a1,0x10
00420fd8  lw gp,0x10(sp)
00420fdc  li a0,0x2
00420fe0  li a1,0x1
00420fe4  lw t9,-0x7b5c(gp)
00420fe8  nop
00420fec  jalr t9
00420ff0  _clear a2
00420ff4  lw gp,0x10(sp)
00420ff8  bgez v0,0x00421010
00420ffc  _move s1,v0
00421000  lui a0,0x45
00421004  lw t9,-0x7af4(gp)
00421008  b 0x00421050
0042100c  _addiu a0,a0,0x948
00421010  lw t9,-0x79f0(gp)
00421014  move a2,s0
00421018  move a0,v0
0042101c  jalr t9
00421020  _ori a1,zero,0x8913
00421024  lw gp,0x10(sp)
00421028  bgez v0,0x00421060
0042102c  _lui a0,0x45
00421030  lw t9,-0x7af4(gp)
00421034  nop
00421038  jalr t9
0042103c  _addiu a0,a0,0x958
00421040  lw gp,0x10(sp)
00421044  move a0,s1
00421048  lw t9,-0x7f9c(gp)
0042104c  nop
00421050  jalr t9
00421054  _nop
00421058  b 0x0042107c
0042105c  _li v0,-0x1
00421060  lw t9,-0x7f9c(gp)
00421064  nop
00421068  jalr t9
0042106c  _move a0,s1
00421070  lhu v0,0x28(sp)
00421074  nop
00421078  andi v0,v0,0x1
0042107c  lw ra,0x4c(sp)
00421080  lw s1,0x48(sp)
00421084  lw s0,0x44(sp)
00421088  jr ra
0042108c  _addiu sp,sp,0x50
