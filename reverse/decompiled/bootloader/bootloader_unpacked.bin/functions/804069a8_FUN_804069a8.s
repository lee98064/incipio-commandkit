# FUN_804069a8 @ 804069a8
804069a8  lb v1,0x0(a0)
804069ac  sll a1,a1,0x18
804069b0  sra a1,a1,0x18
804069b4  beq v1,a1,0x804069ec
804069b8  _move v0,a0
804069bc  bne v1,zero,0x804069dc
804069c0  _addiu v0,v0,0x1
804069c4  addiu v0,v0,-0x1
804069c8  jr ra
804069cc  _clear v0
804069d0  beq v1,zero,0x804069f4
804069d4  _nop
804069d8  addiu v0,v0,0x1
804069dc  lb v1,0x0(v0)
804069e0  nop
804069e4  bne v1,a1,0x804069d0
804069e8  _nop
804069ec  jr ra
804069f0  _nop
804069f4  clear v0
804069f8  jr ra
804069fc  _nop
