# shared_ServerWriteDetach @ 00435038
00435038  addiu sp,sp,-0x28
0043503c  sw ra,0x24(sp)
00435040  sw s1,0x20(sp)
00435044  sw s0,0x1c(sp)
00435048  lui gp,0x62
0043504c  addiu gp,gp,-0x5cf0
00435050  sw gp,0x10(sp)
00435054  lui s0,0x60
00435058  lw a0,0xb9c(s0)
0043505c  li s1,-0x1
00435060  beq a0,s1,0x004350a4
00435064  _li v1,-0x1
00435068  lw t9,-0x7c4c(gp)
0043506c  nop
00435070  jalr t9
00435074  _nop
00435078  lw gp,0x10(sp)
0043507c  bne v0,zero,0x004350a4
00435080  _li v1,-0x1
00435084  lw t9,-0x61e8(gp)
00435088  lui a0,0x5b
0043508c  sw s1,0xb9c(s0)
00435090  jalr t9
00435094  _addiu a0,a0,-0x17b8
00435098  beq v0,zero,0x004350a4
0043509c  _clear v1
004350a0  li v1,-0x1
004350a4  lw ra,0x24(sp)
004350a8  lw s1,0x20(sp)
004350ac  lw s0,0x1c(sp)
004350b0  move v0,v1
004350b4  jr ra
004350b8  _addiu sp,sp,0x28
