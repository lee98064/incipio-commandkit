# FUN_00433820 @ 00433820
00433820  addiu sp,sp,-0x28
00433824  sw ra,0x24(sp)
00433828  sw s1,0x20(sp)
0043382c  sw s0,0x1c(sp)
00433830  lui gp,0x47
00433834  addiu gp,gp,0x2630
00433838  sw gp,0x10(sp)
0043383c  lw t9,-0x7fbc(gp)
00433840  lui s0,0x45
00433844  lui a1,0x45
00433848  addiu a2,s0,-0x4cd4
0043384c  addiu a1,a1,0x2df4
00433850  jalr t9
00433854  _move s1,a0
00433858  lw gp,0x10(sp)
0043385c  lui a1,0x45
00433860  addiu a2,s0,-0x4cd4
00433864  lw t9,-0x7fbc(gp)
00433868  addiu a1,a1,0x2e04
0043386c  move a0,s1
00433870  jalr t9
00433874  _move s0,v0
00433878  lb v1,0x0(v0)
0043387c  lw gp,0x10(sp)
00433880  beq v1,zero,0x004338c4
00433884  _nop
00433888  lw t9,-0x7ef4(gp)
0043388c  nop
00433890  jalr t9
00433894  _move a0,v0
00433898  lw gp,0x10(sp)
0043389c  lui a1,0x45
004338a0  addiu a1,a1,0x5e80
004338a4  lw v1,-0x7cf4(gp)
004338a8  lw t9,-0x7e28(gp)
004338ac  lw a0,-0x7da0(gp)
004338b0  sw v0,0x0(v1)
004338b4  jalr t9
004338b8  _move a2,v0
004338bc  lw gp,0x10(sp)
004338c0  nop
004338c4  lw v0,-0x7da4(gp)
004338c8  nop
004338cc  sw zero,0x0(v0)
004338d0  lb v0,0x0(s0)
004338d4  nop
004338d8  beq v0,zero,0x004338fc
004338dc  _move a0,s1
004338e0  move a1,s0
004338e4  lw t9,-0x79b8(gp)
004338e8  lw ra,0x24(sp)
004338ec  lw s1,0x20(sp)
004338f0  lw s0,0x1c(sp)
004338f4  jr t9
004338f8  _addiu sp,sp,0x28
004338fc  lw ra,0x24(sp)
00433900  lw s1,0x20(sp)
00433904  lw s0,0x1c(sp)
00433908  jr ra
0043390c  _addiu sp,sp,0x28
