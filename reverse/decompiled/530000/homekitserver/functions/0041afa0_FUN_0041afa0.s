# FUN_0041afa0 @ 0041afa0
0041afa0  lui gp,0x20
0041afa4  addiu gp,gp,-0xc90
0041afa8  addu gp,gp,t9
0041afac  addiu sp,sp,-0x28
0041afb0  sw ra,0x24(sp)
0041afb4  sw s2,0x20(sp)
0041afb8  sw s1,0x1c(sp)
0041afbc  sw s0,0x18(sp)
0041afc0  sw gp,0x10(sp)
0041afc4  lw v0,-0x7fe8(gp)
0041afc8  nop
0041afcc  lbu v0,0x4b60(v0)
0041afd0  nop
0041afd4  bne v0,zero,0x0041b090
0041afd8  _nop
0041afdc  lw v0,-0x60e8(gp)
0041afe0  nop
0041afe4  beq v0,zero,0x0041b008
0041afe8  _nop
0041afec  lw v0,-0x7fe4(gp)
0041aff0  lw t9,-0x60e8(gp)
0041aff4  lw a0,0x0(v0)
0041aff8  jalr t9
0041affc  _nop
0041b000  lw gp,0x10(sp)
0041b004  nop
0041b008  lw s1,-0x7fdc(gp)
0041b00c  lw s2,-0x7fe0(gp)
0041b010  lw s0,-0x7fe8(gp)
0041b014  addiu s1,s1,-0x19a4
0041b018  subu s2,s2,s1
0041b01c  sra s2,s2,0x2
0041b020  b 0x0041b03c
0041b024  _addiu s2,s2,-0x1
0041b028  lw t9,0x0(a0)
0041b02c  nop
0041b030  jalr t9
0041b034  _sw v1,0x4b64(s0)
0041b038  lw gp,0x10(sp)
0041b03c  lw v0,0x4b64(s0)
0041b040  nop
0041b044  addiu v1,v0,0x1
0041b048  sll a0,v1,0x2
0041b04c  sltu v0,v0,s2
0041b050  bne v0,zero,0x0041b028
0041b054  _addu a0,a0,s1
0041b058  lw v0,-0x5908(gp)
0041b05c  nop
0041b060  beq v0,zero,0x0041b084
0041b064  _nop
0041b068  lw a0,-0x7fd8(gp)
0041b06c  lw t9,-0x5908(gp)
0041b070  nop
0041b074  jalr t9
0041b078  _addiu a0,a0,-0x19b0
0041b07c  lw gp,0x10(sp)
0041b080  nop
0041b084  lw v0,-0x7fe8(gp)
0041b088  li v1,0x1
0041b08c  sb v1,0x4b60(v0)
0041b090  lw ra,0x24(sp)
0041b094  lw s2,0x20(sp)
0041b098  lw s1,0x1c(sp)
0041b09c  lw s0,0x18(sp)
0041b0a0  jr ra
0041b0a4  _addiu sp,sp,0x28
