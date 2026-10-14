# FUN_004448e4 @ 004448e4
004448e4  addiu sp,sp,-0x140
004448e8  sw ra,0x13c(sp)
004448ec  sw s3,0x138(sp)
004448f0  sw s2,0x134(sp)
004448f4  sw s1,0x130(sp)
004448f8  sw s0,0x12c(sp)
004448fc  lui gp,0x47
00444900  addiu gp,gp,0x2630
00444904  sw gp,0x10(sp)
00444908  lw t9,-0x7e5c(gp)
0044490c  move s0,a0
00444910  sw zero,0x18(sp)
00444914  jalr t9
00444918  _sw zero,0x1c(sp)
0044491c  lw s2,0x98(s0)
00444920  move s1,v0
00444924  jal 0x00442e04
00444928  _move a0,s2
0044492c  move s3,v0
00444930  li v0,-0x1
00444934  lw gp,0x10(sp)
00444938  bne s3,v0,0x00444950
0044493c  _addu s2,s2,s3
00444940  lui a1,0x45
00444944  lw t9,-0x79d0(gp)
00444948  b 0x004449fc
0044494c  _addiu a1,a1,0x6b08
00444950  lw t9,-0x7d60(gp)
00444954  lui a1,0x45
00444958  addiu a1,a1,0x6820
0044495c  move a0,s2
00444960  jalr t9
00444964  _li a2,0x6
00444968  lw gp,0x10(sp)
0044496c  beq v0,zero,0x004449b4
00444970  _lui a1,0x45
00444974  lw t9,-0x7d60(gp)
00444978  addiu a1,a1,0x6828
0044497c  move a0,s2
00444980  jalr t9
00444984  _li a2,0x6
00444988  lw gp,0x10(sp)
0044498c  beq v0,zero,0x004449b4
00444990  _lui a1,0x45
00444994  lw t9,-0x7d60(gp)
00444998  addiu a1,a1,0x6830
0044499c  move a0,s2
004449a0  jalr t9
004449a4  _li a2,0x6
004449a8  lw gp,0x10(sp)
004449ac  bne v0,zero,0x004449d0
004449b0  _nop
004449b4  lw a1,0x9c(s0)
004449b8  move a0,s2
004449bc  addiu a2,sp,0x1c
004449c0  subu a1,a1,s3
004449c4  jal 0x004428e4
004449c8  _addiu a3,sp,0x18
004449cc  lw gp,0x10(sp)
004449d0  lw v0,0x18(sp)
004449d4  nop
004449d8  beq v0,zero,0x004449f0
004449dc  _nop
004449e0  lw v0,0x1c(sp)
004449e4  nop
004449e8  bne v0,zero,0x00444a64
004449ec  _addiu s2,sp,0x60
004449f0  lw t9,-0x79d0(gp)
004449f4  lui a1,0x45
004449f8  addiu a1,a1,0x6b20
004449fc  jalr t9
00444a00  _addiu a0,sp,0x60
00444a04  lw gp,0x10(sp)
00444a08  nop
00444a0c  lw t9,-0x7d78(gp)
00444a10  nop
00444a14  jalr t9
00444a18  _move a0,s1
00444a1c  jal 0x00441988
00444a20  _move a0,s0
00444a24  lw gp,0x10(sp)
00444a28  lui a1,0x45
00444a2c  addiu a1,a1,-0x271c
00444a30  lw t9,-0x7cd4(gp)
00444a34  move a0,s0
00444a38  jalr t9
00444a3c  _addiu a2,sp,0x60
00444a40  lw gp,0x10(sp)
00444a44  lui a1,0x45
00444a48  move a0,s0
00444a4c  lw t9,-0x7cd4(gp)
00444a50  nop
00444a54  jalr t9
00444a58  _addiu a1,a1,-0x2050
00444a5c  b 0x00444b6c
00444a60  _nop
00444a64  lw t9,-0x79d0(gp)
00444a68  lui a1,0x45
00444a6c  addiu a1,a1,0x6fb0
00444a70  jalr t9
00444a74  _move a0,s2
00444a78  lw gp,0x10(sp)
00444a7c  lui s1,0x47
00444a80  li v0,0x2d
00444a84  lw t9,-0x7fbc(gp)
00444a88  lui a2,0x45
00444a8c  lui a1,0x45
00444a90  addiu a2,a2,-0x4cd4
00444a94  addiu a1,a1,-0x3b10
00444a98  move a0,s0
00444a9c  jalr t9
00444aa0  _sw v0,-0xba0(s1)
00444aa4  lw gp,0x10(sp)
00444aa8  nop
00444aac  lw t9,-0x7bc4(gp)
00444ab0  nop
00444ab4  jalr t9
00444ab8  _move s3,v0
00444abc  jal 0x00444434
00444ac0  _nop
00444ac4  lw gp,0x10(sp)
00444ac8  addiu a1,sp,0x20
00444acc  lw t9,-0x7b54(gp)
00444ad0  nop
00444ad4  jalr t9
00444ad8  _li a0,0xaa
00444adc  lw gp,0x10(sp)
00444ae0  lw a0,0x20(sp)
00444ae4  lw t9,-0x7ddc(gp)
00444ae8  nop
00444aec  jalr t9
00444af0  _nop
00444af4  lw gp,0x10(sp)
00444af8  move a1,v0
00444afc  lw t9,-0x79d0(gp)
00444b00  nop
00444b04  jalr t9
00444b08  _addiu a0,sp,0x40
00444b0c  lw gp,0x10(sp)
00444b10  nop
00444b14  lw t9,-0x79d0(gp)
00444b18  lw a0,-0x79f4(gp)
00444b1c  jalr t9
00444b20  _move a1,s3
00444b24  lw gp,0x10(sp)
00444b28  nop
00444b2c  lw t9,-0x79d0(gp)
00444b30  lw a0,-0x7ad8(gp)
00444b34  jalr t9
00444b38  _move a1,s2
00444b3c  lw gp,0x10(sp)
00444b40  lw v1,-0xba0(s1)
00444b44  lui a1,0x45
00444b48  lw v0,-0x7f34(gp)
00444b4c  lw t9,-0x79b8(gp)
00444b50  move a0,s0
00444b54  sw v1,0x0(v0)
00444b58  jalr t9
00444b5c  _addiu a1,a1,-0x6b10
00444b60  li v1,0x1
00444b64  lui v0,0x47
00444b68  sw v1,-0xba8(v0)
00444b6c  lw ra,0x13c(sp)
00444b70  lw s3,0x138(sp)
00444b74  lw s2,0x134(sp)
00444b78  lw s1,0x130(sp)
00444b7c  lw s0,0x12c(sp)
00444b80  jr ra
00444b84  _addiu sp,sp,0x140
