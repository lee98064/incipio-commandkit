# lh_table_delete_entry @ 0043f774
0043f774  addiu sp,sp,-0x28
0043f778  sw ra,0x24(sp)
0043f77c  sw s8,0x20(sp)
0043f780  move s8,sp
0043f784  sw a0,0x28(s8)
0043f788  sw a1,0x2c(s8)
0043f78c  lw v1,0x2c(s8)
0043f790  lw v0,0x28(s8)
0043f794  nop
0043f798  lw v0,0x28(v0)
0043f79c  nop
0043f7a0  subu v0,v1,v0
0043f7a4  sra v0,v0,0x4
0043f7a8  sw v0,0x18(s8)
0043f7ac  lw v0,0x18(s8)
0043f7b0  nop
0043f7b4  bgez v0,0x0043f7c8
0043f7b8  _nop
0043f7bc  li v0,-0x2
0043f7c0  b 0x0043fb14
0043f7c4  _nop
0043f7c8  lw v0,0x28(s8)
0043f7cc  nop
0043f7d0  lw v1,0x28(v0)
0043f7d4  lw v0,0x18(s8)
0043f7d8  nop
0043f7dc  sll v0,v0,0x4
0043f7e0  addu v0,v1,v0
0043f7e4  lw v1,0x0(v0)
0043f7e8  li v0,-0x1
0043f7ec  beq v1,v0,0x0043f820
0043f7f0  _nop
0043f7f4  lw v0,0x28(s8)
0043f7f8  nop
0043f7fc  lw v1,0x28(v0)
0043f800  lw v0,0x18(s8)
0043f804  nop
0043f808  sll v0,v0,0x4
0043f80c  addu v0,v1,v0
0043f810  lw v1,0x0(v0)
0043f814  li v0,-0x2
0043f818  bne v1,v0,0x0043f82c
0043f81c  _nop
0043f820  li v0,-0x1
0043f824  b 0x0043fb14
0043f828  _nop
0043f82c  lw v0,0x28(s8)
0043f830  nop
0043f834  lw v0,0x4(v0)
0043f838  nop
0043f83c  addiu v1,v0,-0x1
0043f840  lw v0,0x28(s8)
0043f844  nop
0043f848  sw v1,0x4(v0)
0043f84c  lw v0,0x28(s8)
0043f850  nop
0043f854  lw v0,0x2c(v0)
0043f858  nop
0043f85c  beq v0,zero,0x0043f880
0043f860  _nop
0043f864  lw v0,0x28(s8)
0043f868  nop
0043f86c  lw v0,0x2c(v0)
0043f870  lw a0,0x2c(s8)
0043f874  move t9,v0
0043f878  jalr t9
0043f87c  _nop
0043f880  lw v0,0x28(s8)
0043f884  nop
0043f888  lw v1,0x28(v0)
0043f88c  lw v0,0x18(s8)
0043f890  nop
0043f894  sll v0,v0,0x4
0043f898  addu v0,v1,v0
0043f89c  sw zero,0x4(v0)
0043f8a0  lw v0,0x28(s8)
0043f8a4  nop
0043f8a8  lw v1,0x28(v0)
0043f8ac  lw v0,0x18(s8)
0043f8b0  nop
0043f8b4  sll v0,v0,0x4
0043f8b8  addu v0,v1,v0
0043f8bc  li v1,-0x2
0043f8c0  sw v1,0x0(v0)
0043f8c4  lw v0,0x28(s8)
0043f8c8  nop
0043f8cc  lw v1,0x24(v0)
0043f8d0  lw v0,0x28(s8)
0043f8d4  nop
0043f8d8  lw a0,0x28(v0)
0043f8dc  lw v0,0x18(s8)
0043f8e0  nop
0043f8e4  sll v0,v0,0x4
0043f8e8  addu v0,a0,v0
0043f8ec  bne v1,v0,0x0043f950
0043f8f0  _nop
0043f8f4  lw v0,0x28(s8)
0043f8f8  nop
0043f8fc  lw v1,0x20(v0)
0043f900  lw v0,0x28(s8)
0043f904  nop
0043f908  lw a0,0x28(v0)
0043f90c  lw v0,0x18(s8)
0043f910  nop
0043f914  sll v0,v0,0x4
0043f918  addu v0,a0,v0
0043f91c  bne v1,v0,0x0043f950
0043f920  _nop
0043f924  lw v0,0x28(s8)
0043f928  nop
0043f92c  sw zero,0x24(v0)
0043f930  lw v0,0x28(s8)
0043f934  nop
0043f938  lw v1,0x24(v0)
0043f93c  lw v0,0x28(s8)
0043f940  nop
0043f944  sw v1,0x20(v0)
0043f948  b 0x0043fac8
0043f94c  _nop
0043f950  lw v0,0x28(s8)
0043f954  nop
0043f958  lw v1,0x20(v0)
0043f95c  lw v0,0x28(s8)
0043f960  nop
0043f964  lw a0,0x28(v0)
0043f968  lw v0,0x18(s8)
0043f96c  nop
0043f970  sll v0,v0,0x4
0043f974  addu v0,a0,v0
0043f978  bne v1,v0,0x0043f9c4
0043f97c  _nop
0043f980  lw v0,0x28(s8)
0043f984  nop
0043f988  lw v0,0x20(v0)
0043f98c  nop
0043f990  lw v0,0x8(v0)
0043f994  nop
0043f998  sw zero,0xc(v0)
0043f99c  lw v0,0x28(s8)
0043f9a0  nop
0043f9a4  lw v0,0x20(v0)
0043f9a8  nop
0043f9ac  lw v1,0x8(v0)
0043f9b0  lw v0,0x28(s8)
0043f9b4  nop
0043f9b8  sw v1,0x20(v0)
0043f9bc  b 0x0043fac8
0043f9c0  _nop
0043f9c4  lw v0,0x28(s8)
0043f9c8  nop
0043f9cc  lw v1,0x24(v0)
0043f9d0  lw v0,0x28(s8)
0043f9d4  nop
0043f9d8  lw a0,0x28(v0)
0043f9dc  lw v0,0x18(s8)
0043f9e0  nop
0043f9e4  sll v0,v0,0x4
0043f9e8  addu v0,a0,v0
0043f9ec  bne v1,v0,0x0043fa38
0043f9f0  _nop
0043f9f4  lw v0,0x28(s8)
0043f9f8  nop
0043f9fc  lw v0,0x24(v0)
0043fa00  nop
0043fa04  lw v0,0xc(v0)
0043fa08  nop
0043fa0c  sw zero,0x8(v0)
0043fa10  lw v0,0x28(s8)
0043fa14  nop
0043fa18  lw v0,0x24(v0)
0043fa1c  nop
0043fa20  lw v1,0xc(v0)
0043fa24  lw v0,0x28(s8)
0043fa28  nop
0043fa2c  sw v1,0x24(v0)
0043fa30  b 0x0043fac8
0043fa34  _nop
0043fa38  lw v0,0x28(s8)
0043fa3c  nop
0043fa40  lw v1,0x28(v0)
0043fa44  lw v0,0x18(s8)
0043fa48  nop
0043fa4c  sll v0,v0,0x4
0043fa50  addu v0,v1,v0
0043fa54  lw v0,0xc(v0)
0043fa58  lw v1,0x28(s8)
0043fa5c  nop
0043fa60  lw a0,0x28(v1)
0043fa64  lw v1,0x18(s8)
0043fa68  nop
0043fa6c  sll v1,v1,0x4
0043fa70  addu v1,a0,v1
0043fa74  lw v1,0x8(v1)
0043fa78  nop
0043fa7c  sw v1,0x8(v0)
0043fa80  lw v0,0x28(s8)
0043fa84  nop
0043fa88  lw v1,0x28(v0)
0043fa8c  lw v0,0x18(s8)
0043fa90  nop
0043fa94  sll v0,v0,0x4
0043fa98  addu v0,v1,v0
0043fa9c  lw v0,0x8(v0)
0043faa0  lw v1,0x28(s8)
0043faa4  nop
0043faa8  lw a0,0x28(v1)
0043faac  lw v1,0x18(s8)
0043fab0  nop
0043fab4  sll v1,v1,0x4
0043fab8  addu v1,a0,v1
0043fabc  lw v1,0xc(v1)
0043fac0  nop
0043fac4  sw v1,0xc(v0)
0043fac8  lw v0,0x28(s8)
0043facc  nop
0043fad0  lw v1,0x28(v0)
0043fad4  lw v0,0x18(s8)
0043fad8  nop
0043fadc  sll v0,v0,0x4
0043fae0  addu v1,v1,v0
0043fae4  lw v0,0x28(s8)
0043fae8  nop
0043faec  lw a0,0x28(v0)
0043faf0  lw v0,0x18(s8)
0043faf4  nop
0043faf8  sll v0,v0,0x4
0043fafc  addu v0,a0,v0
0043fb00  sw zero,0xc(v0)
0043fb04  lw v0,0xc(v0)
0043fb08  nop
0043fb0c  sw v0,0x8(v1)
0043fb10  clear v0
0043fb14  move sp,s8
0043fb18  lw ra,0x24(sp)
0043fb1c  lw s8,0x20(sp)
0043fb20  addiu sp,sp,0x28
0043fb24  jr ra
0043fb28  _nop
