# TLVGetNext @ 00428b10
00428b10  subu v1,a1,a0
00428b14  sltiu v1,v1,0x2
00428b18  lw t0,0x14(sp)
00428b1c  bne v1,zero,0x00428b68
00428b20  _li v0,-0x1a47
00428b24  lbu t1,0x1(a0)
00428b28  addiu t2,a0,0x2
00428b2c  addu v1,t2,t1
00428b30  sltu v0,v1,a0
00428b34  bne v0,zero,0x00428b68
00428b38  _li v0,-0x1a5e
00428b3c  sltu a1,a1,v1
00428b40  bne a1,zero,0x00428b68
00428b44  _nop
00428b48  lbu a0,0x0(a0)
00428b4c  clear v0
00428b50  sb a0,0x0(a2)
00428b54  lw a0,0x10(sp)
00428b58  sw t2,0x0(a3)
00428b5c  beq t0,zero,0x00428b68
00428b60  _sw t1,0x0(a0)
00428b64  sw v1,0x0(t0)
00428b68  jr ra
00428b6c  _nop
