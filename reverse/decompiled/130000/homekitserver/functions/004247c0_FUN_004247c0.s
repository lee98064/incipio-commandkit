# FUN_004247c0 @ 004247c0
004247c0  addiu sp,sp,-0x98
004247c4  sw ra,0x94(sp)
004247c8  lui gp,0x62
004247cc  addiu gp,gp,-0x6b80
004247d0  sw gp,0x18(sp)
004247d4  blez a0,0x00424810
004247d8  _clear v0
004247dc  lw t9,-0x6c0c(gp)
004247e0  li v0,0x68
004247e4  sw v0,0x20(sp)
004247e8  addiu v0,sp,0x20
004247ec  sw v0,0x10(sp)
004247f0  li a1,0x6
004247f4  li a2,0xb
004247f8  jalr t9
004247fc  _addiu a3,sp,0x24
00424800  lbu v0,0x24(sp)
00424804  nop
00424808  xori v0,v0,0x1
0042480c  sltiu v0,v0,0x1
00424810  lw ra,0x94(sp)
00424814  nop
00424818  jr ra
0042481c  _addiu sp,sp,0x98
