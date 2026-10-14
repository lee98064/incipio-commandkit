# json_object_to_json_string_ext @ 00435f20
00435f20  lui gp,0x1e
00435f24  addiu gp,gp,0x43f0
00435f28  addu gp,gp,t9
00435f2c  addiu sp,sp,-0x20
00435f30  sw ra,0x1c(sp)
00435f34  sw s8,0x18(sp)
00435f38  move s8,sp
00435f3c  sw gp,0x10(sp)
00435f40  sw a0,0x20(s8)
00435f44  sw a1,0x24(s8)
00435f48  lw v0,0x20(s8)
00435f4c  nop
00435f50  bne v0,zero,0x00435f6c
00435f54  _nop
00435f58  lw v0,-0x7fd0(gp)
00435f5c  nop
00435f60  addiu v0,v0,-0x1730
00435f64  b 0x0043605c
00435f68  _nop
00435f6c  lw v0,0x20(s8)
00435f70  nop
00435f74  lw v0,0x10(v0)
00435f78  nop
00435f7c  bne v0,zero,0x00435fd0
00435f80  _nop
00435f84  lw v0,-0x6850(gp)
00435f88  nop
00435f8c  move t9,v0
00435f90  jalr t9
00435f94  _nop
00435f98  lw gp,0x10(s8)
00435f9c  move v1,v0
00435fa0  lw v0,0x20(s8)
00435fa4  nop
00435fa8  sw v1,0x10(v0)
00435fac  lw v0,0x20(s8)
00435fb0  nop
00435fb4  lw v0,0x10(v0)
00435fb8  nop
00435fbc  bne v0,zero,0x00435fd0
00435fc0  _nop
00435fc4  clear v0
00435fc8  b 0x0043605c
00435fcc  _nop
00435fd0  lw v0,0x20(s8)
00435fd4  nop
00435fd8  lw v0,0x10(v0)
00435fdc  nop
00435fe0  move a0,v0
00435fe4  lw v0,-0x64b0(gp)
00435fe8  nop
00435fec  move t9,v0
00435ff0  jalr t9
00435ff4  _nop
00435ff8  lw gp,0x10(s8)
00435ffc  lw v0,0x20(s8)
00436000  nop
00436004  lw v0,0x8(v0)
00436008  lw v1,0x20(s8)
0043600c  nop
00436010  lw v1,0x10(v1)
00436014  lw a0,0x20(s8)
00436018  move a1,v1
0043601c  clear a2
00436020  lw a3,0x24(s8)
00436024  move t9,v0
00436028  jalr t9
0043602c  _nop
00436030  lw gp,0x10(s8)
00436034  bgez v0,0x00436048
00436038  _nop
0043603c  clear v0
00436040  b 0x0043605c
00436044  _nop
00436048  lw v0,0x20(s8)
0043604c  nop
00436050  lw v0,0x10(v0)
00436054  nop
00436058  lw v0,0x0(v0)
0043605c  move sp,s8
00436060  lw ra,0x1c(sp)
00436064  lw s8,0x18(sp)
00436068  addiu sp,sp,0x20
0043606c  jr ra
00436070  _nop
