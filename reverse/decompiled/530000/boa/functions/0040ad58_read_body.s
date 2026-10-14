# read_body @ 0040ad58
0040ad58  addiu sp,sp,-0x20
0040ad5c  sw ra,0x1c(sp)
0040ad60  sw s0,0x18(sp)
0040ad64  lui gp,0x47
0040ad68  addiu gp,gp,0x2630
0040ad6c  sw gp,0x10(sp)
0040ad70  lw a2,0x40(a0)
0040ad74  lw v1,0x2c(a0)
0040ad78  lw a1,0x44(a0)
0040ad7c  lw v0,0x30(a0)
0040ad80  addiu a2,a2,0x2000
0040ad84  subu a2,a2,a1
0040ad88  subu v0,v1,v0
0040ad8c  sltu v1,v0,a2
0040ad90  movn a2,v0,v1
0040ad94  bne a2,zero,0x0040ada8
0040ad98  _move s0,a0
0040ad9c  li v0,0x5
0040ada0  b 0x0040ae50
0040ada4  _sw v0,0x0(a0)
0040ada8  lw t9,-0x7cfc(gp)
0040adac  lw a0,0xb4(a0)
0040adb0  jalr t9
0040adb4  _nop
0040adb8  li v1,-0x1
0040adbc  lw gp,0x10(sp)
0040adc0  bne v0,v1,0x0040adf4
0040adc4  _nop
0040adc8  lw t9,-0x7ecc(gp)
0040adcc  nop
0040add0  jalr t9
0040add4  _nop
0040add8  lw a0,0x0(v0)
0040addc  li v1,0xb
0040ade0  beq a0,v1,0x0040ae54
0040ade4  _li v0,-0x1
0040ade8  li v0,0x190
0040adec  b 0x0040ae34
0040adf0  _sw v0,0x10(s0)
0040adf4  bne v0,zero,0x0040ae3c
0040adf8  _lui a1,0x45
0040adfc  lw v0,-0x7e40(gp)
0040ae00  lw t9,-0x7c44(gp)
0040ae04  lw a0,0x0(v0)
0040ae08  lui a2,0x45
0040ae0c  addiu a1,a1,-0x579c
0040ae10  addiu a2,a2,-0x57d0
0040ae14  jalr t9
0040ae18  _li a3,0x195
0040ae1c  lw gp,0x10(sp)
0040ae20  nop
0040ae24  lw t9,-0x7cc8(gp)
0040ae28  nop
0040ae2c  jalr t9
0040ae30  _move a0,s0
0040ae34  b 0x0040ae54
0040ae38  _clear v0
0040ae3c  lw v1,0x44(s0)
0040ae40  li a0,0x5
0040ae44  sw a0,0x0(s0)
0040ae48  addu v0,v1,v0
0040ae4c  sw v0,0x44(s0)
0040ae50  li v0,0x1
0040ae54  lw ra,0x1c(sp)
0040ae58  lw s0,0x18(sp)
0040ae5c  jr ra
0040ae60  _addiu sp,sp,0x20
