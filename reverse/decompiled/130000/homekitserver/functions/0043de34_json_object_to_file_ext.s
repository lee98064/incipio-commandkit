# json_object_to_file_ext @ 0043de34
0043de34  lui gp,0x1e
0043de38  addiu gp,gp,-0x49b4
0043de3c  addu gp,gp,t9
0043de40  addiu sp,sp,-0x38
0043de44  sw ra,0x34(sp)
0043de48  sw s8,0x30(sp)
0043de4c  move s8,sp
0043de50  sw gp,0x10(sp)
0043de54  sw a0,0x38(s8)
0043de58  sw a1,0x3c(s8)
0043de5c  sw a2,0x40(s8)
0043de60  lw v0,0x3c(s8)
0043de64  nop
0043de68  bne v0,zero,0x0043dea0
0043de6c  _nop
0043de70  lw v0,-0x7fd0(gp)
0043de74  nop
0043de78  addiu a0,v0,-0x2020
0043de7c  lw v0,-0x611c(gp)
0043de80  nop
0043de84  move t9,v0
0043de88  jalr t9
0043de8c  _nop
0043de90  lw gp,0x10(s8)
0043de94  li v0,-0x1
0043de98  b 0x0043e114
0043de9c  _nop
0043dea0  lw a0,0x38(s8)
0043dea4  li a1,0x301
0043dea8  li a2,0x1a4
0043deac  lw v0,-0x5b88(gp)
0043deb0  nop
0043deb4  move t9,v0
0043deb8  jalr t9
0043debc  _nop
0043dec0  lw gp,0x10(s8)
0043dec4  sw v0,0x24(s8)
0043dec8  lw v0,0x24(s8)
0043decc  nop
0043ded0  bgez v0,0x0043df50
0043ded4  _nop
0043ded8  lw v0,-0x5b04(gp)
0043dedc  nop
0043dee0  move t9,v0
0043dee4  jalr t9
0043dee8  _nop
0043deec  lw gp,0x10(s8)
0043def0  lw v0,0x0(v0)
0043def4  nop
0043def8  move a0,v0
0043defc  lw v0,-0x7bc8(gp)
0043df00  nop
0043df04  move t9,v0
0043df08  jalr t9
0043df0c  _nop
0043df10  lw gp,0x10(s8)
0043df14  nop
0043df18  lw v1,-0x7fd0(gp)
0043df1c  nop
0043df20  addiu a0,v1,-0x1ff8
0043df24  lw a1,0x38(s8)
0043df28  move a2,v0
0043df2c  lw v0,-0x611c(gp)
0043df30  nop
0043df34  move t9,v0
0043df38  jalr t9
0043df3c  _nop
0043df40  lw gp,0x10(s8)
0043df44  li v0,-0x1
0043df48  b 0x0043e114
0043df4c  _nop
0043df50  lw a0,0x3c(s8)
0043df54  lw a1,0x40(s8)
0043df58  lw v0,-0x5f4c(gp)
0043df5c  nop
0043df60  move t9,v0
0043df64  jalr t9
0043df68  _nop
0043df6c  lw gp,0x10(s8)
0043df70  sw v0,0x28(s8)
0043df74  lw v0,0x28(s8)
0043df78  nop
0043df7c  bne v0,zero,0x0043dfac
0043df80  _nop
0043df84  lw a0,0x24(s8)
0043df88  lw v0,-0x6d14(gp)
0043df8c  nop
0043df90  move t9,v0
0043df94  jalr t9
0043df98  _nop
0043df9c  lw gp,0x10(s8)
0043dfa0  li v0,-0x1
0043dfa4  b 0x0043e114
0043dfa8  _nop
0043dfac  lw a0,0x28(s8)
0043dfb0  lw v0,-0x63cc(gp)
0043dfb4  nop
0043dfb8  move t9,v0
0043dfbc  jalr t9
0043dfc0  _nop
0043dfc4  lw gp,0x10(s8)
0043dfc8  sw v0,0x18(s8)
0043dfcc  sw zero,0x1c(s8)
0043dfd0  b 0x0043e0dc
0043dfd4  _nop
0043dfd8  lw v1,0x28(s8)
0043dfdc  lw v0,0x1c(s8)
0043dfe0  nop
0043dfe4  addu v1,v1,v0
0043dfe8  lw a0,0x18(s8)
0043dfec  lw v0,0x1c(s8)
0043dff0  nop
0043dff4  subu v0,a0,v0
0043dff8  lw a0,0x24(s8)
0043dffc  move a1,v1
0043e000  move a2,v0
0043e004  lw v0,-0x6be8(gp)
0043e008  nop
0043e00c  move t9,v0
0043e010  jalr t9
0043e014  _nop
0043e018  lw gp,0x10(s8)
0043e01c  sw v0,0x20(s8)
0043e020  lw v0,0x20(s8)
0043e024  nop
0043e028  bgez v0,0x0043e0c8
0043e02c  _nop
0043e030  lw a0,0x24(s8)
0043e034  lw v0,-0x6d14(gp)
0043e038  nop
0043e03c  move t9,v0
0043e040  jalr t9
0043e044  _nop
0043e048  lw gp,0x10(s8)
0043e04c  nop
0043e050  lw v0,-0x5b04(gp)
0043e054  nop
0043e058  move t9,v0
0043e05c  jalr t9
0043e060  _nop
0043e064  lw gp,0x10(s8)
0043e068  lw v0,0x0(v0)
0043e06c  nop
0043e070  move a0,v0
0043e074  lw v0,-0x7bc8(gp)
0043e078  nop
0043e07c  move t9,v0
0043e080  jalr t9
0043e084  _nop
0043e088  lw gp,0x10(s8)
0043e08c  nop
0043e090  lw v1,-0x7fd0(gp)
0043e094  nop
0043e098  addiu a0,v1,-0x1fc8
0043e09c  lw a1,0x38(s8)
0043e0a0  move a2,v0
0043e0a4  lw v0,-0x611c(gp)
0043e0a8  nop
0043e0ac  move t9,v0
0043e0b0  jalr t9
0043e0b4  _nop
0043e0b8  lw gp,0x10(s8)
0043e0bc  li v0,-0x1
0043e0c0  b 0x0043e114
0043e0c4  _nop
0043e0c8  lw v0,0x20(s8)
0043e0cc  lw v1,0x1c(s8)
0043e0d0  nop
0043e0d4  addu v0,v1,v0
0043e0d8  sw v0,0x1c(s8)
0043e0dc  lw v1,0x1c(s8)
0043e0e0  lw v0,0x18(s8)
0043e0e4  nop
0043e0e8  sltu v0,v1,v0
0043e0ec  bne v0,zero,0x0043dfd8
0043e0f0  _nop
0043e0f4  lw a0,0x24(s8)
0043e0f8  lw v0,-0x6d14(gp)
0043e0fc  nop
0043e100  move t9,v0
0043e104  jalr t9
0043e108  _nop
0043e10c  lw gp,0x10(s8)
0043e110  clear v0
0043e114  move sp,s8
0043e118  lw ra,0x34(sp)
0043e11c  lw s8,0x30(sp)
0043e120  addiu sp,sp,0x38
0043e124  jr ra
0043e128  _nop
