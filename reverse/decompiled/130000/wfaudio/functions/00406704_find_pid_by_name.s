# find_pid_by_name @ 00406704
00406704  addiu sp,sp,-0xe0
00406708  sw ra,0xdc(sp)
0040670c  sw s8,0xd8(sp)
00406710  sw s7,0xd4(sp)
00406714  sw s6,0xd0(sp)
00406718  sw s5,0xcc(sp)
0040671c  sw s4,0xc8(sp)
00406720  sw s3,0xc4(sp)
00406724  sw s2,0xc0(sp)
00406728  sw s1,0xbc(sp)
0040672c  sw s0,0xb8(sp)
00406730  lui gp,0x43
00406734  addiu gp,gp,-0x4f70
00406738  sw gp,0x10(sp)
0040673c  lw t9,-0x7f08(gp)
00406740  move s2,a0
00406744  lui a0,0x41
00406748  jalr t9
0040674c  _addiu a0,a0,0xf44
00406750  lw gp,0x10(sp)
00406754  bne v0,zero,0x00406888
00406758  _move s6,v0
0040675c  lw t9,-0x7dbc(gp)
00406760  lui a0,0x41
00406764  jalr t9
00406768  _addiu a0,a0,0xf38
0040676c  b 0x004068e8
00406770  _clear v0
00406774  jalr t9
00406778  _nop
0040677c  lw gp,0x10(sp)
00406780  beq v0,zero,0x004068a4
00406784  _nop
00406788  lw a0,-0x7dd8(gp)
0040678c  lb v0,0xb(s0)
00406790  lw v1,0x0(a0)
00406794  sll v0,v0,0x1
00406798  addu v0,v1,v0
0040679c  lhu v0,0x0(v0)
004067a0  nop
004067a4  andi v0,v0,0x8
004067a8  beq v0,zero,0x004068a4
004067ac  _lui a1,0x41
004067b0  lw t9,-0x7f2c(gp)
004067b4  move a2,s1
004067b8  move a0,s5
004067bc  jalr t9
004067c0  _addiu a1,a1,0xf50
004067c4  lw gp,0x10(sp)
004067c8  move a0,s5
004067cc  lw t9,-0x7ee0(gp)
004067d0  nop
004067d4  jalr t9
004067d8  _move a1,s8
004067dc  lw gp,0x10(sp)
004067e0  li a1,0x31
004067e4  move a0,s4
004067e8  lw t9,-0x7df4(gp)
004067ec  move s0,v0
004067f0  beq v0,zero,0x004068a4
004067f4  _move a2,v0
004067f8  jalr t9
004067fc  _nop
00406800  lw gp,0x10(sp)
00406804  nop
00406808  lw t9,-0x7ef8(gp)
0040680c  bne v0,zero,0x00406828
00406810  _move a0,s0
00406814  jalr t9
00406818  _nop
0040681c  lw gp,0x10(sp)
00406820  b 0x004068a4
00406824  _nop
00406828  jalr t9
0040682c  _nop
00406830  lw gp,0x10(sp)
00406834  move a0,s4
00406838  move a1,s7
0040683c  lw t9,-0x7ec4(gp)
00406840  nop
00406844  jalr t9
00406848  _move a2,s3
0040684c  lw gp,0x10(sp)
00406850  move a0,s3
00406854  lw t9,-0x7f14(gp)
00406858  nop
0040685c  jalr t9
00406860  _move a1,s2
00406864  lw gp,0x10(sp)
00406868  bne v0,zero,0x004068a4
0040686c  _move a0,s1
00406870  lw t9,-0x7e44(gp)
00406874  clear a1
00406878  jalr t9
0040687c  _clear a2
00406880  b 0x004068e8
00406884  _nop
00406888  lui s8,0x41
0040688c  lui s7,0x41
00406890  addiu s8,s8,0x1d04
00406894  addiu s7,s7,0xf60
00406898  addiu s5,sp,0x18
0040689c  addiu s4,sp,0x4c
004068a0  addiu s3,sp,0x80
004068a4  lw t9,-0x7e34(gp)
004068a8  nop
004068ac  jalr t9
004068b0  _move a0,s6
004068b4  lw gp,0x10(sp)
004068b8  lui a1,0x41
004068bc  addiu s1,v0,0xb
004068c0  addiu a1,a1,0xf4c
004068c4  move s0,v0
004068c8  lw t9,-0x7f14(gp)
004068cc  bne v0,zero,0x00406774
004068d0  _move a0,s1
004068d4  lui a1,0x41
004068d8  move a0,s2
004068dc  jalr t9
004068e0  _addiu a1,a1,0x1cf0
004068e4  sltiu v0,v0,0x1
004068e8  lw ra,0xdc(sp)
004068ec  lw s8,0xd8(sp)
004068f0  lw s7,0xd4(sp)
004068f4  lw s6,0xd0(sp)
004068f8  lw s5,0xcc(sp)
004068fc  lw s4,0xc8(sp)
00406900  lw s3,0xc4(sp)
00406904  lw s2,0xc0(sp)
00406908  lw s1,0xbc(sp)
0040690c  lw s0,0xb8(sp)
00406910  jr ra
00406914  _addiu sp,sp,0xe0
