# pidfile_write_release @ 004087ac
004087ac  addiu sp,sp,-0x28
004087b0  sw ra,0x24(sp)
004087b4  sw s1,0x20(sp)
004087b8  sw s0,0x1c(sp)
004087bc  lui gp,0x43
004087c0  addiu gp,gp,-0x4c90
004087c4  sw gp,0x10(sp)
004087c8  bltz a0,0x0040886c
004087cc  _move s0,a0
004087d0  lw t9,-0x7eb4(gp)
004087d4  lui a1,0x41
004087d8  jalr t9
004087dc  _addiu a1,a1,0x1144
004087e0  lw gp,0x10(sp)
004087e4  beq v0,zero,0x00408838
004087e8  _move s1,v0
004087ec  lw t9,-0x7ddc(gp)
004087f0  nop
004087f4  jalr t9
004087f8  _nop
004087fc  lw gp,0x10(sp)
00408800  lui a1,0x41
00408804  addiu a1,a1,0x1140
00408808  lw t9,-0x7e64(gp)
0040880c  move a2,v0
00408810  jalr t9
00408814  _move a0,s1
00408818  lw gp,0x10(sp)
0040881c  nop
00408820  lw t9,-0x7ef0(gp)
00408824  nop
00408828  jalr t9
0040882c  _move a0,s1
00408830  lw gp,0x10(sp)
00408834  nop
00408838  lw t9,-0x7ee8(gp)
0040883c  move a0,s0
00408840  li a1,0x2
00408844  jalr t9
00408848  _clear a2
0040884c  lw gp,0x10(sp)
00408850  move a0,s0
00408854  lw ra,0x24(sp)
00408858  lw t9,-0x7fc4(gp)
0040885c  lw s1,0x20(sp)
00408860  lw s0,0x1c(sp)
00408864  jr t9
00408868  _addiu sp,sp,0x28
0040886c  lw ra,0x24(sp)
00408870  lw s1,0x20(sp)
00408874  lw s0,0x1c(sp)
00408878  jr ra
0040887c  _addiu sp,sp,0x28
