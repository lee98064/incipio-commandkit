# FUN_0041e9e0 @ 0041e9e0
0041e9e0  addiu sp,sp,-0x1e8
0041e9e4  sw ra,0x1e4(sp)
0041e9e8  sw s8,0x1e0(sp)
0041e9ec  sw s7,0x1dc(sp)
0041e9f0  sw s6,0x1d8(sp)
0041e9f4  sw s5,0x1d4(sp)
0041e9f8  sw s4,0x1d0(sp)
0041e9fc  sw s3,0x1cc(sp)
0041ea00  sw s2,0x1c8(sp)
0041ea04  sw s1,0x1c4(sp)
0041ea08  sw s0,0x1c0(sp)
0041ea0c  lui gp,0x62
0041ea10  addiu gp,gp,-0x5cf0
0041ea14  sw gp,0x18(sp)
0041ea18  lw t9,-0x5c44(gp)
0041ea1c  move s0,a2
0041ea20  lw a2,0xc(a2)
0041ea24  move s4,a3
0041ea28  move s1,a0
0041ea2c  move s2,a1
0041ea30  lw s7,0x1f8(sp)
0041ea34  jalr t9
0041ea38  _li s6,-0x1a61
0041ea3c  lw gp,0x18(sp)
0041ea40  beq v0,s6,0x0041fccc
0041ea44  _move s5,v0
0041ea48  bne v0,zero,0x0041fd04
0041ea4c  _move a0,s1
0041ea50  lw t9,-0x6a54(gp)
0041ea54  lw a2,0xc(s0)
0041ea58  jalr t9
0041ea5c  _move a1,s2
0041ea60  lw gp,0x18(sp)
0041ea64  bne v0,zero,0x0041fd04
0041ea68  _move s5,v0
0041ea6c  lw t9,-0x7d9c(gp)
0041ea70  lui a1,0x5b
0041ea74  addiu a1,a1,-0x3b0c
0041ea78  jalr t9
0041ea7c  _move a0,s2
0041ea80  lw gp,0x18(sp)
0041ea84  bne v0,zero,0x0041eaf4
0041ea88  _lui a1,0x5b
0041ea8c  lw t9,-0x69f8(gp)
0041ea90  sw s7,0x10(sp)
0041ea94  move a2,s0
0041ea98  move a0,s1
0041ea9c  move a1,s2
0041eaa0  jalr t9
0041eaa4  _move a3,s4
0041eaa8  lw gp,0x18(sp)
0041eaac  beq v0,zero,0x0041eae0
0041eab0  _move s5,v0
0041eab4  lui a2,0x5b
0041eab8  lui a3,0xfffe
0041eabc  move a0,s1
0041eac0  addiu a2,a2,-0x3c28
0041eac4  ori a3,a3,0xecf3
0041eac8  li a1,0x190
0041eacc  sw zero,0x10(sp)
0041ead0  jal 0x0041c9b8
0041ead4  _sw zero,0x14(sp)
0041ead8  b 0x0041fcf4
0041eadc  _nop
0041eae0  lbu s5,0x110(s4)
0041eae4  nop
0041eae8  movn s6,zero,s5
0041eaec  b 0x0041fd04
0041eaf0  _move s5,s6
0041eaf4  lw t9,-0x7d9c(gp)
0041eaf8  addiu a1,a1,-0x3b00
0041eafc  jalr t9
0041eb00  _move a0,s2
0041eb04  lw gp,0x18(sp)
0041eb08  bne v0,zero,0x0041ebe0
0041eb0c  _lui a1,0x5b
0041eb10  lw v0,0x4(s0)
0041eb14  nop
0041eb18  bne v0,zero,0x0041eb3c
0041eb1c  _nop
0041eb20  lw t9,-0x6f7c(gp)
0041eb24  nop
0041eb28  jalr t9
0041eb2c  _nop
0041eb30  lw gp,0x18(sp)
0041eb34  beq v0,zero,0x0041fd00
0041eb38  _sw v0,0x4(s0)
0041eb3c  lw t9,-0x5974(gp)
0041eb40  lw a2,0x4(s0)
0041eb44  move a0,s1
0041eb48  sw s7,0x10(sp)
0041eb4c  move a3,s4
0041eb50  jalr t9
0041eb54  _move a1,s2
0041eb58  lw gp,0x18(sp)
0041eb5c  bne v0,zero,0x0041ebc8
0041eb60  _move s5,v0
0041eb64  lw v0,0x4(s0)
0041eb68  nop
0041eb6c  lbu v0,0x0(v0)
0041eb70  nop
0041eb74  beq v0,zero,0x0041fd04
0041eb78  _li v1,0x1
0041eb7c  lw v0,0xc(s0)
0041eb80  lw t9,-0x5c9c(gp)
0041eb84  sb v1,0x0(v0)
0041eb88  lw v0,0x4(s0)
0041eb8c  lw a0,0xc(s0)
0041eb90  li a2,0x20
0041eb94  lw a1,0x24(v0)
0041eb98  jalr t9
0041eb9c  _addiu a0,a0,0x21
0041eba0  lw gp,0x18(sp)
0041eba4  lw v0,0x4(s0)
0041eba8  lw a0,0xc(s0)
0041ebac  lw t9,-0x5c9c(gp)
0041ebb0  lw a1,0x20(v0)
0041ebb4  addiu a0,a0,0x1
0041ebb8  jalr t9
0041ebbc  _li a2,0x20
0041ebc0  lw gp,0x18(sp)
0041ebc4  nop
0041ebc8  lw t9,-0x7548(gp)
0041ebcc  nop
0041ebd0  jalr t9
0041ebd4  _addiu a0,s0,0x4
0041ebd8  b 0x0041fcf4
0041ebdc  _nop
0041ebe0  lw t9,-0x7d9c(gp)
0041ebe4  addiu a1,a1,-0x3af0
0041ebe8  jalr t9
0041ebec  _move a0,s2
0041ebf0  lw gp,0x18(sp)
0041ebf4  bne v0,zero,0x0041ec64
0041ebf8  _lui s8,0x5b
0041ebfc  lw t9,-0x7ca0(gp)
0041ec00  lui a0,0x5b
0041ec04  jalr t9
0041ec08  _addiu a0,a0,-0x3ae0
0041ec0c  jal 0x0041d478
0041ec10  _move a0,s4
0041ec14  lw gp,0x18(sp)
0041ec18  bne v0,zero,0x0041fd04
0041ec1c  _move s5,v0
0041ec20  lui s3,0x61
0041ec24  lw t9,-0x7e9c(gp)
0041ec28  lw a0,0x4be4(s3)
0041ec2c  jalr t9
0041ec30  _nop
0041ec34  lw gp,0x18(sp)
0041ec38  move a0,v0
0041ec3c  lw t9,-0x63c4(gp)
0041ec40  nop
0041ec44  jalr t9
0041ec48  _sw v0,0x1b4(sp)
0041ec4c  lui a2,0x5b
0041ec50  move a0,s1
0041ec54  addiu a2,a2,-0x3ad4
0041ec58  lw a3,0x1b4(sp)
0041ec5c  b 0x0041f310
0041ec60  _clear a1
0041ec64  lw t9,-0x649c(gp)
0041ec68  move a0,s2
0041ec6c  jalr t9
0041ec70  _addiu a1,s8,-0x3abc
0041ec74  lw gp,0x18(sp)
0041ec78  beq v0,zero,0x0041f34c
0041ec7c  _lui a1,0x5b
0041ec80  lw t9,-0x6878(gp)
0041ec84  addiu a1,a1,-0x3aa8
0041ec88  jalr t9
0041ec8c  _move a0,s2
0041ec90  move s6,v0
0041ec94  li v0,-0x1a47
0041ec98  lw gp,0x18(sp)
0041ec9c  beq s6,v0,0x0041f244
0041eca0  _addiu v0,sp,0x3c
0041eca4  lw t9,-0x649c(gp)
0041eca8  addiu a1,s8,-0x3abc
0041ecac  move a0,s2
0041ecb0  sw v0,0x40(sp)
0041ecb4  jalr t9
0041ecb8  _sw v0,0x3c(sp)
0041ecbc  lw gp,0x18(sp)
0041ecc0  addiu s5,v0,0x14
0041ecc4  movz s5,zero,v0
0041ecc8  lw t9,-0x7b28(gp)
0041eccc  move a0,s5
0041ecd0  jalr t9
0041ecd4  _li a1,0x20
0041ecd8  lw gp,0x18(sp)
0041ecdc  beq v0,zero,0x0041ece8
0041ece0  _nop
0041ece4  sb zero,0x0(v0)
0041ece8  lw t9,-0x6b74(gp)
0041ecec  lui s7,0x5d
0041ecf0  addiu s7,s7,-0x76dc
0041ecf4  move a0,s5
0041ecf8  jalr t9
0041ecfc  _move a1,s7
0041ed00  lw gp,0x18(sp)
0041ed04  move s5,v0
0041ed08  addiu s6,sp,0x8c
0041ed0c  b 0x0041edf4
0041ed10  _addiu s8,sp,0x3c
0041ed14  lw t9,-0x7244(gp)
0041ed18  move a0,s6
0041ed1c  jalr t9
0041ed20  _clear a1
0041ed24  lw gp,0x18(sp)
0041ed28  move a1,s5
0041ed2c  lw t9,-0x7eac(gp)
0041ed30  nop
0041ed34  jalr t9
0041ed38  _move a0,s6
0041ed3c  lw gp,0x18(sp)
0041ed40  move a0,s5
0041ed44  lw t9,-0x7b28(gp)
0041ed48  nop
0041ed4c  jalr t9
0041ed50  _li a1,0x2e
0041ed54  lw gp,0x18(sp)
0041ed58  li a2,0x64
0041ed5c  move a0,s6
0041ed60  lw t9,-0x7244(gp)
0041ed64  clear a1
0041ed68  jalr t9
0041ed6c  _sw v0,0x1b8(sp)
0041ed70  lw gp,0x18(sp)
0041ed74  li a1,0x1
0041ed78  lw t9,-0x5a50(gp)
0041ed7c  nop
0041ed80  jalr t9
0041ed84  _li a0,0x10
0041ed88  lw gp,0x18(sp)
0041ed8c  move a0,s5
0041ed90  lw t9,-0x7ac0(gp)
0041ed94  nop
0041ed98  jalr t9
0041ed9c  _move s5,v0
0041eda0  lw gp,0x18(sp)
0041eda4  sw v0,0x0(s5)
0041eda8  lw v1,0x1b8(sp)
0041edac  lw t9,-0x7ac0(gp)
0041edb0  nop
0041edb4  jalr t9
0041edb8  _addiu a0,v1,0x1
0041edbc  lw gp,0x18(sp)
0041edc0  lw a0,0x3c(sp)
0041edc4  addiu v1,s5,0x8
0041edc8  lw t9,-0x6b74(gp)
0041edcc  sw v0,0x4(s5)
0041edd0  move a1,s7
0041edd4  sw v1,0x4(a0)
0041edd8  sw a0,0x8(s5)
0041eddc  sw s8,0xc(s5)
0041ede0  clear a0
0041ede4  jalr t9
0041ede8  _sw v1,0x3c(sp)
0041edec  lw gp,0x18(sp)
0041edf0  move s5,v0
0041edf4  bne s5,zero,0x0041ed14
0041edf8  _li a2,0x64
0041edfc  addiu v0,sp,0x34
0041ee00  addiu v1,sp,0x20
0041ee04  sw v0,0x20(sp)
0041ee08  beq v0,v1,0x0041f1bc
0041ee0c  _clear s7
0041ee10  lw t9,-0x7b84(gp)
0041ee14  sw zero,0x19c(sp)
0041ee18  jalr t9
0041ee1c  _lui s5,0x5b
0041ee20  lw gp,0x18(sp)
0041ee24  lui v1,0x61
0041ee28  sw v0,0x4be4(v1)
0041ee2c  lw t9,-0x718c(gp)
0041ee30  nop
0041ee34  jalr t9
0041ee38  _addiu s5,s5,0x3650
0041ee3c  sw v0,0x1a4(sp)
0041ee40  lw v0,0x20(sp)
0041ee44  addiu v1,sp,0x24
0041ee48  lw gp,0x18(sp)
0041ee4c  lw s6,0x8(v0)
0041ee50  addiu v0,sp,0x44
0041ee54  sw v0,0x1ac(sp)
0041ee58  b 0x0041f174
0041ee5c  _sw v1,0x1b0(sp)
0041ee60  lw a0,-0x8(s6)
0041ee64  lw a1,-0x592c(gp)
0041ee68  clear s8
0041ee6c  sw a0,0x1a8(sp)
0041ee70  addiu a1,a1,0x4
0041ee74  lw s7,-0x4(s6)
0041ee78  sw a1,0x198(sp)
0041ee7c  lw v1,0x198(sp)
0041ee80  nop
0041ee84  lw v0,0x0(v1)
0041ee88  nop
0041ee8c  beq v0,zero,0x0041f140
0041ee90  _nop
0041ee94  li v0,0xb5
0041ee98  mult s8,v0
0041ee9c  lw a0,-0x592c(gp)
0041eea0  clear a3
0041eea4  mflo v1
0041eea8  addiu v1,v1,0x1
0041eeac  sll v1,v1,0x3
0041eeb0  addu v1,a0,v1
0041eeb4  addiu v1,v1,0x4
0041eeb8  lw t9,-0x5c9c(gp)
0041eebc  lw a0,0x1ac(sp)
0041eec0  move a1,v1
0041eec4  sw v1,0x1b8(sp)
0041eec8  sw a3,0x1b4(sp)
0041eecc  jalr t9
0041eed0  _li a2,0x48
0041eed4  lw a1,0x50(sp)
0041eed8  lw gp,0x18(sp)
0041eedc  lw a0,0x48(sp)
0041eee0  sw a1,0x1a0(sp)
0041eee4  lw a1,0x44(sp)
0041eee8  lbu v0,0x58(sp)
0041eeec  lbu t0,0x4c(sp)
0041eef0  lw v1,0x1b8(sp)
0041eef4  lw a3,0x1b4(sp)
0041eef8  beq a1,zero,0x0041f118
0041eefc  _nop
0041ef00  bne a0,s7,0x0041f11c
0041ef04  _addiu a3,a3,0x1
0041ef08  lw t9,-0x7b84(gp)
0041ef0c  bne v0,zero,0x0041efc4
0041ef10  _nop
0041ef14  jalr t9
0041ef18  _nop
0041ef1c  lw gp,0x18(sp)
0041ef20  li a0,0x1
0041ef24  lw t9,-0x6e8c(gp)
0041ef28  nop
0041ef2c  jalr t9
0041ef30  _move s3,v0
0041ef34  lw gp,0x18(sp)
0041ef38  lui a1,0x5b
0041ef3c  addiu a1,a1,-0x3bf4
0041ef40  lw t9,-0x6b5c(gp)
0041ef44  move a2,v0
0041ef48  jalr t9
0041ef4c  _move a0,s3
0041ef50  lw gp,0x18(sp)
0041ef54  move a0,s7
0041ef58  lw t9,-0x6e8c(gp)
0041ef5c  nop
0041ef60  jalr t9
0041ef64  _lui s7,0xfffe
0041ef68  lw gp,0x18(sp)
0041ef6c  lui a1,0x5b
0041ef70  addiu a1,a1,-0x3be4
0041ef74  lw t9,-0x6b5c(gp)
0041ef78  move a2,v0
0041ef7c  jalr t9
0041ef80  _move a0,s3
0041ef84  lw gp,0x18(sp)
0041ef88  ori a0,s7,0xecfb
0041ef8c  lw t9,-0x6e8c(gp)
0041ef90  nop
0041ef94  jalr t9
0041ef98  _move s7,a0
0041ef9c  lw gp,0x18(sp)
0041efa0  lui a1,0x5d
0041efa4  move a2,v0
0041efa8  lw t9,-0x6b5c(gp)
0041efac  move a0,s3
0041efb0  jalr t9
0041efb4  _addiu a1,a1,-0x2f9c
0041efb8  lw gp,0x18(sp)
0041efbc  b 0x0041f144
0041efc0  _nop
0041efc4  jalr t9
0041efc8  _sw t0,0x1b4(sp)
0041efcc  lw gp,0x18(sp)
0041efd0  li a0,0x1
0041efd4  lw t9,-0x6e8c(gp)
0041efd8  nop
0041efdc  jalr t9
0041efe0  _move s3,v0
0041efe4  lw gp,0x18(sp)
0041efe8  lui a1,0x5b
0041efec  move a2,v0
0041eff0  lw t9,-0x6b5c(gp)
0041eff4  addiu a1,a1,-0x3bf4
0041eff8  jalr t9
0041effc  _move a0,s3
0041f000  lw gp,0x18(sp)
0041f004  nop
0041f008  lw t9,-0x6e8c(gp)
0041f00c  nop
0041f010  jalr t9
0041f014  _move a0,s7
0041f018  lw gp,0x18(sp)
0041f01c  lui a1,0x5b
0041f020  move a2,v0
0041f024  lw t9,-0x6b5c(gp)
0041f028  move a0,s3
0041f02c  jalr t9
0041f030  _addiu a1,a1,-0x3be4
0041f034  lw t0,0x1b4(sp)
0041f038  lw gp,0x18(sp)
0041f03c  beq t0,zero,0x0041f050
0041f040  _nop
0041f044  lw v0,0x54(sp)
0041f048  b 0x0041f06c
0041f04c  _sw v0,0x24(sp)
0041f050  lw t9,-0x596c(gp)
0041f054  lw a0,0x1a8(sp)
0041f058  lw a2,0x1b0(sp)
0041f05c  move a1,s7
0041f060  jalr t9
0041f064  _move a3,s4
0041f068  lw gp,0x18(sp)
0041f06c  lw v1,0x1a0(sp)
0041f070  nop
0041f074  sltiu v0,v1,0x6
0041f078  beq v0,zero,0x0041f128
0041f07c  _lui a0,0x5b
0041f080  sll v0,v1,0x2
0041f084  addiu a0,a0,-0x397c
0041f088  addu v0,a0,v0
0041f08c  lw v0,0x0(v0)
0041f090  nop
0041f094  jr v0
0041f098  _nop
0041f09c  lw a0,0x24(sp)
0041f0a0  lw t9,-0x6e8c(gp)
0041f0a4  b 0x0041f0e8
0041f0a8  _nop
0041f0ac  lw t9,-0x7550(gp)
0041f0b0  lw a0,0x24(sp)
0041f0b4  jalr t9
0041f0b8  _nop
0041f0bc  lw gp,0x18(sp)
0041f0c0  move a1,v1
0041f0c4  lw t9,-0x760c(gp)
0041f0c8  nop
0041f0cc  jalr t9
0041f0d0  _move a0,v0
0041f0d4  b 0x0041f0f0
0041f0d8  _nop
0041f0dc  lw a0,0x24(sp)
0041f0e0  lw t9,-0x5e08(gp)
0041f0e4  nop
0041f0e8  jalr t9
0041f0ec  _nop
0041f0f0  lw gp,0x18(sp)
0041f0f4  move a2,v0
0041f0f8  move a0,s3
0041f0fc  lw t9,-0x6b5c(gp)
0041f100  nop
0041f104  jalr t9
0041f108  _move a1,s5
0041f10c  lw gp,0x18(sp)
0041f110  b 0x0041f128
0041f114  _nop
0041f118  addiu a3,a3,0x1
0041f11c  li a1,0x14
0041f120  bne a3,a1,0x0041eeb8
0041f124  _addiu v1,v1,0x48
0041f128  lw v0,0x198(sp)
0041f12c  addiu s8,s8,0x1
0041f130  li v1,0xa
0041f134  addiu v0,v0,0x5a8
0041f138  bne s8,v1,0x0041ee7c
0041f13c  _sw v0,0x198(sp)
0041f140  clear s7
0041f144  beq s3,zero,0x0041f1a4
0041f148  _nop
0041f14c  lw t9,-0x7098(gp)
0041f150  lw a0,0x1a4(sp)
0041f154  jalr t9
0041f158  _move a1,s3
0041f15c  lw a0,0x19c(sp)
0041f160  sltu v0,zero,s7
0041f164  lw gp,0x18(sp)
0041f168  addu a0,a0,v0
0041f16c  lw s6,0x0(s6)
0041f170  sw a0,0x19c(sp)
0041f174  lw v0,0x20(sp)
0041f178  nop
0041f17c  addiu v0,v0,0x8
0041f180  bne s6,v0,0x0041ee60
0041f184  _lui v0,0x61
0041f188  lw t9,-0x6b5c(gp)
0041f18c  lw a0,0x4be4(v0)
0041f190  lw a2,0x1a4(sp)
0041f194  lui a1,0x5b
0041f198  jalr t9
0041f19c  _addiu a1,a1,-0x3be0
0041f1a0  lw gp,0x18(sp)
0041f1a4  lw a1,0x19c(sp)
0041f1a8  nop
0041f1ac  beq a1,zero,0x0041f1c0
0041f1b0  _lui v0,0x61
0041f1b4  lui s7,0xfffe
0041f1b8  ori s7,s7,0xecfe
0041f1bc  lui v0,0x61
0041f1c0  lw t9,-0x7e9c(gp)
0041f1c4  lw a0,0x4be4(v0)
0041f1c8  jalr t9
0041f1cc  _addiu s3,sp,0x3c
0041f1d0  lw v1,0x3c(sp)
0041f1d4  lw gp,0x18(sp)
0041f1d8  lw s5,0x0(v1)
0041f1dc  b 0x0041f214
0041f1e0  _move s4,v0
0041f1e4  lw v0,0x4(v1)
0041f1e8  lw a1,0x0(v1)
0041f1ec  lw t9,-0x7aa4(gp)
0041f1f0  addiu a0,v1,-0x8
0041f1f4  sw v0,0x4(a1)
0041f1f8  sw a1,0x0(v0)
0041f1fc  sw v1,0x0(v1)
0041f200  jalr t9
0041f204  _sw v1,0x4(v1)
0041f208  move v1,s5
0041f20c  lw gp,0x18(sp)
0041f210  lw s5,0x0(s5)
0041f214  bne v1,s3,0x0041f1e4
0041f218  _move a0,s4
0041f21c  lw t9,-0x63c4(gp)
0041f220  nop
0041f224  jalr t9
0041f228  _lui s3,0x61
0041f22c  lui a2,0x5b
0041f230  move a0,s1
0041f234  move a1,s7
0041f238  addiu a2,a2,-0x3aa4
0041f23c  b 0x0041f310
0041f240  _move a3,s4
0041f244  lw t9,-0x6878(gp)
0041f248  lui a1,0x5b
0041f24c  addiu a1,a1,-0x3a88
0041f250  jalr t9
0041f254  _move a0,s2
0041f258  lw gp,0x18(sp)
0041f25c  beq v0,s6,0x0041fca0
0041f260  _lui a1,0xfffe
0041f264  lw t9,-0x682c(gp)
0041f268  lw a0,0x104(s2)
0041f26c  jalr t9
0041f270  _nop
0041f274  lui v1,0x61
0041f278  lw gp,0x18(sp)
0041f27c  beq v0,zero,0x0041fd04
0041f280  _sw v0,0x4be0(v1)
0041f284  move a1,s4
0041f288  move a0,v0
0041f28c  jal 0x0041dee0
0041f290  _move a2,s7
0041f294  lw gp,0x18(sp)
0041f298  lui v1,0x61
0041f29c  lw a0,0x4be0(v1)
0041f2a0  lw t9,-0x7dec(gp)
0041f2a4  lui s3,0x61
0041f2a8  jalr t9
0041f2ac  _sw v0,0x1b8(sp)
0041f2b0  lw a0,0x4be4(s3)
0041f2b4  lw gp,0x18(sp)
0041f2b8  lw a1,0x1b8(sp)
0041f2bc  beq a0,zero,0x0041f340
0041f2c0  _lui a2,0x5b
0041f2c4  lw t9,-0x7e9c(gp)
0041f2c8  nop
0041f2cc  jalr t9
0041f2d0  _nop
0041f2d4  lw gp,0x18(sp)
0041f2d8  lw a1,0x1b8(sp)
0041f2dc  move a3,v0
0041f2e0  move a0,v0
0041f2e4  lw t9,-0x63c4(gp)
0041f2e8  li v0,0x10
0041f2ec  movz a1,v0,a1
0041f2f0  sw a1,0x1b8(sp)
0041f2f4  jalr t9
0041f2f8  _sw a3,0x1b4(sp)
0041f2fc  lw a1,0x1b8(sp)
0041f300  lw a3,0x1b4(sp)
0041f304  lui a2,0x5b
0041f308  move a0,s1
0041f30c  addiu a2,a2,-0x3a84
0041f310  sw v0,0x10(sp)
0041f314  jal 0x0041caf4
0041f318  _sw s0,0x14(sp)
0041f31c  lw gp,0x18(sp)
0041f320  lw a0,0x4be4(s3)
0041f324  lw t9,-0x7dec(gp)
0041f328  nop
0041f32c  jalr t9
0041f330  _move s5,v0
0041f334  lw gp,0x18(sp)
0041f338  b 0x0041fd04
0041f33c  _sw zero,0x4be4(s3)
0041f340  move a0,s1
0041f344  b 0x0041fcb0
0041f348  _addiu a2,a2,-0x3a84
0041f34c  lw t9,-0x7d9c(gp)
0041f350  lui a1,0x5b
0041f354  addiu a1,a1,-0x3a50
0041f358  jalr t9
0041f35c  _move a0,s2
0041f360  lw gp,0x18(sp)
0041f364  bne v0,zero,0x0041fbe0
0041f368  _lui a1,0x5b
0041f36c  lw t9,-0x7ca0(gp)
0041f370  lui a0,0x5b
0041f374  jalr t9
0041f378  _addiu a0,a0,-0x3a44
0041f37c  lw v0,0xc(s0)
0041f380  lw gp,0x18(sp)
0041f384  lbu v0,0x0(v0)
0041f388  nop
0041f38c  beq v0,zero,0x0041fca0
0041f390  _lui a1,0xfffe
0041f394  lw v0,0x8(s0)
0041f398  nop
0041f39c  bne v0,zero,0x0041f3b8
0041f3a0  _nop
0041f3a4  jal 0x0041c630
0041f3a8  _nop
0041f3ac  lw gp,0x18(sp)
0041f3b0  beq v0,zero,0x0041fd00
0041f3b4  _sw v0,0x8(s0)
0041f3b8  lw v0,0x104(s2)
0041f3bc  lw v1,0x10c(s2)
0041f3c0  addiu s8,sp,0x30
0041f3c4  sw v0,0x28(sp)
0041f3c8  addu v1,v0,v1
0041f3cc  sw v1,0x198(sp)
0041f3d0  addiu v0,sp,0x2c
0041f3d4  lw s3,0x8(s0)
0041f3d8  addiu s6,sp,0x28
0041f3dc  sw v0,0x19c(sp)
0041f3e0  b 0x0041f4c4
0041f3e4  _addiu s4,sp,0x20
0041f3e8  lw a0,0x30(sp)
0041f3ec  lw t9,-0x5a50(gp)
0041f3f0  nop
0041f3f4  jalr t9
0041f3f8  _addiu a0,a0,0x1
0041f3fc  lw gp,0x18(sp)
0041f400  bne v0,zero,0x0041f410
0041f404  _move a0,v0
0041f408  b 0x0041fbd0
0041f40c  _li s5,-0x1a48
0041f410  lw t9,-0x5c9c(gp)
0041f414  lw a1,0x2c(sp)
0041f418  lw a2,0x30(sp)
0041f41c  jalr t9
0041f420  _sw v0,0x1b8(sp)
0041f424  lbu v0,0x20(sp)
0041f428  lw gp,0x18(sp)
0041f42c  lw v1,0x1b8(sp)
0041f430  sltiu a0,v0,0xc
0041f434  beq a0,zero,0x0041f4c4
0041f438  _lui a0,0x5b
0041f43c  sll v0,v0,0x2
0041f440  addiu a0,a0,-0x3964
0041f444  addu v0,a0,v0
0041f448  lw v0,0x0(v0)
0041f44c  nop
0041f450  jr v0
0041f454  _nop
0041f458  lbu v0,0x0(v1)
0041f45c  lw a0,0x4(s3)
0041f460  nop
0041f464  beq a0,v0,0x0041f474
0041f468  _nop
0041f46c  b 0x0041fbd0
0041f470  _li s5,-0x1a51
0041f474  lw t9,-0x7aa4(gp)
0041f478  b 0x0041f4b4
0041f47c  _move a0,v1
0041f480  lbu v0,0x0(v1)
0041f484  lw t9,-0x7aa4(gp)
0041f488  move a0,v1
0041f48c  b 0x0041f4b4
0041f490  _sw v0,0x8(s3)
0041f494  b 0x0041f4c4
0041f498  _sw v1,0xc(s3)
0041f49c  b 0x0041f4c4
0041f4a0  _sw v1,0x10(s3)
0041f4a4  lbu v0,0x0(v1)
0041f4a8  lw t9,-0x7aa4(gp)
0041f4ac  move a0,v1
0041f4b0  sb v0,0x14(s3)
0041f4b4  jalr t9
0041f4b8  _nop
0041f4bc  lw gp,0x18(sp)
0041f4c0  nop
0041f4c4  lw t9,-0x656c(gp)
0041f4c8  lw a0,0x28(sp)
0041f4cc  lw a1,0x198(sp)
0041f4d0  lw a3,0x19c(sp)
0041f4d4  sw s8,0x10(sp)
0041f4d8  sw s6,0x14(sp)
0041f4dc  jalr t9
0041f4e0  _move a2,s4
0041f4e4  lw gp,0x18(sp)
0041f4e8  beq v0,zero,0x0041f3e8
0041f4ec  _li a1,0x1
0041f4f0  lw v0,0x8(s3)
0041f4f4  nop
0041f4f8  addiu v0,v0,-0x3
0041f4fc  sltiu v0,v0,0x3
0041f500  bne v0,zero,0x0041fd6c
0041f504  _li v1,0x3
0041f508  b 0x0041fbd0
0041f50c  _li s5,-0x1a3d
0041f510  lbu v1,0x4(s7)
0041f514  nop
0041f518  beq v1,v0,0x0041f530
0041f51c  _addiu s3,sp,0xf0
0041f520  li v0,0x2
0041f524  sb v0,0x0(s4)
0041f528  b 0x0041f5a8
0041f52c  _clear s8
0041f530  lw t9,-0x7244(gp)
0041f534  li a2,0x40
0041f538  move a0,s3
0041f53c  jalr t9
0041f540  _clear a1
0041f544  lw gp,0x18(sp)
0041f548  lw a1,0xc(s4)
0041f54c  lw t9,-0x7eac(gp)
0041f550  nop
0041f554  jalr t9
0041f558  _move a0,s3
0041f55c  lw gp,0x18(sp)
0041f560  lw a1,0x10(s4)
0041f564  addiu a0,sp,0x130
0041f568  lw t9,-0x5c9c(gp)
0041f56c  nop
0041f570  jalr t9
0041f574  _li a2,0x20
0041f578  lw gp,0x18(sp)
0041f57c  lbu v0,0x14(s4)
0041f580  move a0,s3
0041f584  lw t9,-0x763c(gp)
0041f588  nop
0041f58c  jalr t9
0041f590  _sb v0,0x150(sp)
0041f594  move s8,v0
0041f598  li v0,-0x1a48
0041f59c  lw gp,0x18(sp)
0041f5a0  bne s8,v0,0x0041f5b4
0041f5a4  _nop
0041f5a8  li v1,0x1
0041f5ac  b 0x0041f5d8
0041f5b0  _li s6,0x6
0041f5b4  lw t9,-0x7644(gp)
0041f5b8  nop
0041f5bc  jalr t9
0041f5c0  _nop
0041f5c4  lw gp,0x18(sp)
0041f5c8  bne v0,zero,0x0041f6a0
0041f5cc  _move s8,v0
0041f5d0  clear v1
0041f5d4  li s6,0x3
0041f5d8  lw t9,-0x5a50(gp)
0041f5dc  sw v1,0x1b8(sp)
0041f5e0  move a0,s6
0041f5e4  jalr t9
0041f5e8  _li a1,0x1
0041f5ec  lw v1,0x1b8(sp)
0041f5f0  beq v0,zero,0x0041f69c
0041f5f4  _move s3,v0
0041f5f8  li a1,0x1
0041f5fc  li a0,0x2
0041f600  li v0,0x6
0041f604  sb v0,0x0(s3)
0041f608  sb a1,0x1(s3)
0041f60c  beq v1,zero,0x0041f648
0041f610  _sb a0,0x2(s3)
0041f614  lbu v0,0x4(s7)
0041f618  li v1,0x7
0041f61c  sb v1,0x3(s3)
0041f620  li v1,0x1
0041f624  beq v0,v1,0x0041f634
0041f628  _sb a1,0x4(s3)
0041f62c  b 0x0041f648
0041f630  _sb a0,0x5(s3)
0041f634  li v1,-0x1a48
0041f638  bne s8,v1,0x0041f644
0041f63c  _nop
0041f640  li v0,0x4
0041f644  sb v0,0x5(s3)
0041f648  li v0,0x1
0041f64c  lui a2,0x5b
0041f650  sb v0,0x0(s4)
0041f654  move a0,s1
0041f658  addiu a2,a2,-0x3a28
0041f65c  clear a1
0041f660  move a3,s3
0041f664  sw s6,0x10(sp)
0041f668  jal 0x0041c860
0041f66c  _sw s0,0x14(sp)
0041f670  lw gp,0x18(sp)
0041f674  move s8,v0
0041f678  lw t9,-0x7aa4(gp)
0041f67c  nop
0041f680  jalr t9
0041f684  _move a0,s3
0041f688  lw gp,0x18(sp)
0041f68c  beq s8,zero,0x0041fbb8
0041f690  _nop
0041f694  b 0x0041f6a0
0041f698  _nop
0041f69c  li s8,-0x1a48
0041f6a0  jal 0x0041c7c0
0041f6a4  _addiu a0,s0,0x8
0041f6a8  lw gp,0x18(sp)
0041f6ac  lw v0,0x8(s0)
0041f6b0  b 0x0041f944
0041f6b4  _move s5,s8
0041f6b8  bne v0,v1,0x0041f950
0041f6bc  _li v1,0x5
0041f6c0  lw t9,-0x6e68(gp)
0041f6c4  sb zero,0x20(sp)
0041f6c8  jalr t9
0041f6cc  _addiu s3,sp,0xf0
0041f6d0  lw gp,0x18(sp)
0041f6d4  move a0,v0
0041f6d8  move a1,s3
0041f6dc  lw t9,-0x6ec0(gp)
0041f6e0  nop
0041f6e4  jalr t9
0041f6e8  _clear s8
0041f6ec  lw gp,0x18(sp)
0041f6f0  bne v0,zero,0x0041f710
0041f6f4  _move a0,s3
0041f6f8  lw t9,-0x74a4(gp)
0041f6fc  lw a1,0xc(s4)
0041f700  jalr t9
0041f704  _li a2,0x24
0041f708  lw gp,0x18(sp)
0041f70c  sltiu s8,v0,0x1
0041f710  lbu v1,0x4(s7)
0041f714  li v0,0x1
0041f718  beq v1,v0,0x0041f73c
0041f71c  _nop
0041f720  bne s8,zero,0x0041f73c
0041f724  _li v0,0x2
0041f728  li a1,0x1
0041f72c  sb v0,0x0(s4)
0041f730  li s6,0x6
0041f734  b 0x0041f778
0041f738  _sw a1,0x19c(sp)
0041f73c  lw t9,-0x79b4(gp)
0041f740  lw a0,0xc(s4)
0041f744  addiu a1,sp,0x20
0041f748  jalr t9
0041f74c  _li s6,0x3
0041f750  lw gp,0x18(sp)
0041f754  li v1,0x6
0041f758  movn s6,v1,v0
0041f75c  lw t9,-0x7644(gp)
0041f760  sltu v0,zero,v0
0041f764  jalr t9
0041f768  _sw v0,0x19c(sp)
0041f76c  lw gp,0x18(sp)
0041f770  bne v0,zero,0x0041f930
0041f774  _sw v0,0x198(sp)
0041f778  lw t9,-0x5a50(gp)
0041f77c  move a0,s6
0041f780  jalr t9
0041f784  _li a1,0x1
0041f788  beq v0,zero,0x0041f928
0041f78c  _move s3,v0
0041f790  li a0,0x6
0041f794  li v1,0x1
0041f798  li v0,0x2
0041f79c  sb a0,0x0(s3)
0041f7a0  sb v1,0x1(s3)
0041f7a4  sb v0,0x2(s3)
0041f7a8  lw a0,0x19c(sp)
0041f7ac  nop
0041f7b0  beq a0,zero,0x0041f7dc
0041f7b4  _li a1,0x7
0041f7b8  lbu a0,0x4(s7)
0041f7bc  sb v1,0x4(s3)
0041f7c0  li v1,0x1
0041f7c4  beq a0,v1,0x0041f7d4
0041f7c8  _sb a1,0x3(s3)
0041f7cc  beq s8,zero,0x0041f7d8
0041f7d0  _nop
0041f7d4  li v0,0x1
0041f7d8  sb v0,0x5(s3)
0041f7dc  li v0,0x1
0041f7e0  lui a2,0x5b
0041f7e4  sb v0,0x0(s4)
0041f7e8  move a0,s1
0041f7ec  addiu a2,a2,-0x3a14
0041f7f0  clear a1
0041f7f4  move a3,s3
0041f7f8  sw s6,0x10(sp)
0041f7fc  jal 0x0041c860
0041f800  _sw s0,0x14(sp)
0041f804  lw gp,0x18(sp)
0041f808  bne v0,zero,0x0041fd8c
0041f80c  _sw v0,0x198(sp)
0041f810  lbu v1,0x4(s7)
0041f814  li v0,0x1
0041f818  beq v1,v0,0x0041f828
0041f81c  _nop
0041f820  beq s8,zero,0x0041fd8c
0041f824  _nop
0041f828  lbu v0,0x20(sp)
0041f82c  nop
0041f830  beq v0,zero,0x0041f854
0041f834  _nop
0041f838  lw t9,-0x5870(gp)
0041f83c  nop
0041f840  jalr t9
0041f844  _nop
0041f848  lw gp,0x18(sp)
0041f84c  bne v0,zero,0x0041f86c
0041f850  _nop
0041f854  lw t9,-0x64b8(gp)
0041f858  lw a0,0xc(s4)
0041f85c  jalr t9
0041f860  _nop
0041f864  lw gp,0x18(sp)
0041f868  nop
0041f86c  lw t9,-0x5870(gp)
0041f870  nop
0041f874  jalr t9
0041f878  _nop
0041f87c  lw gp,0x18(sp)
0041f880  beq v0,zero,0x0041f900
0041f884  _nop
0041f888  lbu v0,0x20(sp)
0041f88c  nop
0041f890  beq v0,zero,0x0041f8ec
0041f894  _lui a0,0x5b
0041f898  lw t9,-0x5c1c(gp)
0041f89c  nop
0041f8a0  jalr t9
0041f8a4  _nop
0041f8a8  lw gp,0x18(sp)
0041f8ac  nop
0041f8b0  lw t9,-0x5e44(gp)
0041f8b4  nop
0041f8b8  jalr t9
0041f8bc  _nop
0041f8c0  lw gp,0x18(sp)
0041f8c4  nop
0041f8c8  lw t9,-0x7644(gp)
0041f8cc  nop
0041f8d0  jalr t9
0041f8d4  _nop
0041f8d8  lw gp,0x18(sp)
0041f8dc  bne v0,zero,0x0041fd8c
0041f8e0  _sw v0,0x198(sp)
0041f8e4  b 0x0041f900
0041f8e8  _nop
0041f8ec  lui a1,0x5b
0041f8f0  lw t9,-0x73b0(gp)
0041f8f4  addiu a0,a0,-0x3c0c
0041f8f8  b 0x0041f914
0041f8fc  _addiu a1,a1,0x1a18
0041f900  lw t9,-0x73b0(gp)
0041f904  lui a0,0x5b
0041f908  lui a1,0x5b
0041f90c  addiu a0,a0,-0x3c0c
0041f910  addiu a1,a1,-0x1930
0041f914  jalr t9
0041f918  _nop
0041f91c  lw gp,0x18(sp)
0041f920  b 0x0041fd8c
0041f924  _nop
0041f928  li a1,-0x1a48
0041f92c  sw a1,0x198(sp)
0041f930  jal 0x0041c7c0
0041f934  _addiu a0,s0,0x8
0041f938  lw gp,0x18(sp)
0041f93c  lw v0,0x8(s0)
0041f940  lw s5,0x198(sp)
0041f944  li v1,0x1
0041f948  b 0x0041fd04
0041f94c  _sw v1,0x4(v0)
0041f950  bne v0,v1,0x0041fbb8
0041f954  _li v0,0x1
0041f958  lbu v1,0x4(s7)
0041f95c  nop
0041f960  beq v1,v0,0x0041f974
0041f964  _li v0,0x2
0041f968  sb v0,0x0(s4)
0041f96c  b 0x0041f990
0041f970  _clear s8
0041f974  lw t9,-0x5970(gp)
0041f978  nop
0041f97c  jalr t9
0041f980  _nop
0041f984  lw gp,0x18(sp)
0041f988  bne v0,zero,0x0041f99c
0041f98c  _move s8,v0
0041f990  li v1,0x1
0041f994  b 0x0041f9b0
0041f998  _li s6,0x6
0041f99c  li s6,0x4d
0041f9a0  mult v0,s6
0041f9a4  clear v1
0041f9a8  mflo s6
0041f9ac  addiu s6,s6,0x1
0041f9b0  lw t9,-0x5a50(gp)
0041f9b4  addiu a2,s6,0x1
0041f9b8  move a0,a2
0041f9bc  sw v1,0x1b8(sp)
0041f9c0  sw a2,0x1b4(sp)
0041f9c4  jalr t9
0041f9c8  _li a1,0x1
0041f9cc  move s3,v0
0041f9d0  lw gp,0x18(sp)
0041f9d4  lw v1,0x1b8(sp)
0041f9d8  lw a2,0x1b4(sp)
0041f9dc  beq s3,zero,0x0041fba4
0041f9e0  _li v0,-0x1a48
0041f9e4  beq v1,zero,0x0041fa24
0041f9e8  _li v1,0x6
0041f9ec  li v0,0x1
0041f9f0  sb v1,0x0(s3)
0041f9f4  li v1,0x7
0041f9f8  sb v1,0x3(s3)
0041f9fc  sb v0,0x4(s3)
0041fa00  sb v0,0x1(s3)
0041fa04  sb v0,0x2(s3)
0041fa08  lbu v0,0x4(s7)
0041fa0c  li v1,0x1
0041fa10  beq v0,v1,0x0041fa1c
0041fa14  _nop
0041fa18  li v0,0x2
0041fa1c  b 0x0041fb4c
0041fa20  _sb v0,0x5(s3)
0041fa24  lw t9,-0x5ddc(gp)
0041fa28  move a1,a2
0041fa2c  jalr t9
0041fa30  _move a0,s3
0041fa34  sw v0,0x1a0(sp)
0041fa38  addiu v1,sp,0x130
0041fa3c  addiu v0,sp,0xf0
0041fa40  lw gp,0x18(sp)
0041fa44  sw zero,0x198(sp)
0041fa48  clear s7
0041fa4c  sw v0,0x19c(sp)
0041fa50  b 0x0041fb10
0041fa54  _sw v1,0x1a4(sp)
0041fa58  lw t9,-0x6c3c(gp)
0041fa5c  lw a0,0x19c(sp)
0041fa60  jalr t9
0041fa64  _move a1,s7
0041fa68  lw gp,0x18(sp)
0041fa6c  bne v0,zero,0x0041fb0c
0041fa70  _li a0,0x1
0041fa74  li a1,0x24
0041fa78  sb a0,0x0(s3)
0041fa7c  sb a1,0x1(s3)
0041fa80  lw t9,-0x5c9c(gp)
0041fa84  lw a1,0x19c(sp)
0041fa88  addiu a0,s3,0x2
0041fa8c  jalr t9
0041fa90  _li a2,0x24
0041fa94  lw gp,0x18(sp)
0041fa98  li v1,0x20
0041fa9c  li v0,0x3
0041faa0  sb v1,0x27(s3)
0041faa4  sb v0,0x26(s3)
0041faa8  lw t9,-0x5c9c(gp)
0041faac  lw a1,0x1a4(sp)
0041fab0  addiu a0,s3,0x28
0041fab4  jalr t9
0041fab8  _li a2,0x20
0041fabc  li a0,0xb
0041fac0  li a1,0x1
0041fac4  lw gp,0x18(sp)
0041fac8  sb a0,0x48(s3)
0041facc  sb a1,0x49(s3)
0041fad0  lw v0,0x198(sp)
0041fad4  nop
0041fad8  addiu v0,v0,0x1
0041fadc  sw v0,0x198(sp)
0041fae0  lbu v0,0x150(sp)
0041fae4  nop
0041fae8  sb v0,0x4a(s3)
0041faec  lw v1,0x198(sp)
0041faf0  nop
0041faf4  beq v1,s8,0x0041fb30
0041faf8  _addiu s3,s3,0x4b
0041fafc  li a0,-0x1
0041fb00  sb a0,0x0(s3)
0041fb04  sb zero,0x1(s3)
0041fb08  addiu s3,s3,0x2
0041fb0c  addiu s7,s7,0x1
0041fb10  lw t9,-0x7234(gp)
0041fb14  nop
0041fb18  jalr t9
0041fb1c  _nop
0041fb20  slt v0,s7,v0
0041fb24  lw gp,0x18(sp)
0041fb28  bne v0,zero,0x0041fa58
0041fb2c  _nop
0041fb30  li v0,0x2
0041fb34  sb v0,0x2(s3)
0041fb38  li v0,0x6
0041fb3c  sb v0,0x0(s3)
0041fb40  li v0,0x1
0041fb44  sb v0,0x1(s3)
0041fb48  lw s3,0x1a0(sp)
0041fb4c  li v0,0x1
0041fb50  lui a2,0x5b
0041fb54  sb v0,0x0(s4)
0041fb58  move a0,s1
0041fb5c  addiu a2,a2,-0x3a14
0041fb60  clear a1
0041fb64  move a3,s3
0041fb68  sw s6,0x10(sp)
0041fb6c  jal 0x0041c860
0041fb70  _sw s0,0x14(sp)
0041fb74  lw gp,0x18(sp)
0041fb78  beq s3,zero,0x0041fb9c
0041fb7c  _nop
0041fb80  lw t9,-0x7aa4(gp)
0041fb84  sw v0,0x1b4(sp)
0041fb88  jalr t9
0041fb8c  _move a0,s3
0041fb90  lw gp,0x18(sp)
0041fb94  lw v0,0x1b4(sp)
0041fb98  nop
0041fb9c  beq v0,zero,0x0041fbb8
0041fba0  _nop
0041fba4  lw v1,0x8(s0)
0041fba8  move s5,v0
0041fbac  li v0,0x1
0041fbb0  b 0x0041fd04
0041fbb4  _sw v0,0x4(v1)
0041fbb8  lw v0,0x8(s0)
0041fbbc  nop
0041fbc0  lbu v0,0x0(v0)
0041fbc4  nop
0041fbc8  beq v0,zero,0x0041fd04
0041fbcc  _nop
0041fbd0  jal 0x0041c7c0
0041fbd4  _addiu a0,s0,0x8
0041fbd8  b 0x0041fcf4
0041fbdc  _nop
0041fbe0  lw t9,-0x7d9c(gp)
0041fbe4  addiu a1,a1,-0x39fc
0041fbe8  jalr t9
0041fbec  _move a0,s2
0041fbf0  lw gp,0x18(sp)
0041fbf4  bne v0,zero,0x0041fca0
0041fbf8  _lui a1,0xfffe
0041fbfc  lw v0,0xc(s0)
0041fc00  nop
0041fc04  lbu v0,0x0(v0)
0041fc08  nop
0041fc0c  beq v0,zero,0x0041fc1c
0041fc10  _move a0,s1
0041fc14  b 0x0041fca8
0041fc18  _ori a1,a1,0xecff
0041fc1c  lw t9,-0x5870(gp)
0041fc20  nop
0041fc24  jalr t9
0041fc28  _nop
0041fc2c  lw gp,0x18(sp)
0041fc30  bne v0,zero,0x0041fc68
0041fc34  _nop
0041fc38  lw t9,-0x66cc(gp)
0041fc3c  nop
0041fc40  jalr t9
0041fc44  _nop
0041fc48  lui a2,0x5b
0041fc4c  move a0,s1
0041fc50  addiu a2,a2,-0x3c28
0041fc54  li a1,0xcc
0041fc58  clear a3
0041fc5c  sw zero,0x10(sp)
0041fc60  b 0x0041fc90
0041fc64  _sw zero,0x14(sp)
0041fc68  lui v0,0x5b
0041fc6c  addiu v0,v0,-0x39f0
0041fc70  lui a2,0x5b
0041fc74  sw v0,0x10(sp)
0041fc78  li v0,0x11
0041fc7c  move a0,s1
0041fc80  addiu a2,a2,-0x3c40
0041fc84  li a1,0x190
0041fc88  clear a3
0041fc8c  sw v0,0x14(sp)
0041fc90  jal 0x0041c9b8
0041fc94  _nop
0041fc98  b 0x0041fcc0
0041fc9c  _nop
0041fca0  move a0,s1
0041fca4  ori a1,a1,0xecf3
0041fca8  lui a2,0x5b
0041fcac  addiu a2,a2,-0x3a68
0041fcb0  clear a3
0041fcb4  sw s0,0x14(sp)
0041fcb8  jal 0x0041caf4
0041fcbc  _sw zero,0x10(sp)
0041fcc0  lw gp,0x18(sp)
0041fcc4  b 0x0041fd04
0041fcc8  _move s5,v0
0041fccc  lw t9,-0x6e68(gp)
0041fcd0  nop
0041fcd4  jalr t9
0041fcd8  _nop
0041fcdc  lw gp,0x18(sp)
0041fce0  move a0,v0
0041fce4  lw t9,-0x65ec(gp)
0041fce8  nop
0041fcec  jalr t9
0041fcf0  _li a1,0x3
0041fcf4  lw gp,0x18(sp)
0041fcf8  b 0x0041fd04
0041fcfc  _nop
0041fd00  li s5,-0x1a48
0041fd04  lw t9,-0x5ff0(gp)
0041fd08  nop
0041fd0c  jalr t9
0041fd10  _move a0,s2
0041fd14  lui v0,0x61
0041fd18  lw a0,0x4be4(v0)
0041fd1c  lw gp,0x18(sp)
0041fd20  beq a0,zero,0x0041fd3c
0041fd24  _move v0,s5
0041fd28  lw t9,-0x7dec(gp)
0041fd2c  nop
0041fd30  jalr t9
0041fd34  _nop
0041fd38  move v0,s5
0041fd3c  lw ra,0x1e4(sp)
0041fd40  lw s8,0x1e0(sp)
0041fd44  lw s7,0x1dc(sp)
0041fd48  lw s6,0x1d8(sp)
0041fd4c  lw s5,0x1d4(sp)
0041fd50  lw s4,0x1d0(sp)
0041fd54  lw s3,0x1cc(sp)
0041fd58  lw s2,0x1c8(sp)
0041fd5c  lw s1,0x1c4(sp)
0041fd60  lw s0,0x1c0(sp)
0041fd64  jr ra
0041fd68  _addiu sp,sp,0x1e8
0041fd6c  lw s4,0x8(s0)
0041fd70  nop
0041fd74  lw v0,0x8(s4)
0041fd78  nop
0041fd7c  bne v0,v1,0x0041f6b8
0041fd80  _li v1,0x4
0041fd84  b 0x0041f510
0041fd88  _li v0,0x1
0041fd8c  lw t9,-0x7aa4(gp)
0041fd90  nop
0041fd94  jalr t9
0041fd98  _move a0,s3
0041fd9c  lw a1,0x198(sp)
0041fda0  lw gp,0x18(sp)
0041fda4  beq a1,zero,0x0041fbb8
0041fda8  _nop
0041fdac  b 0x0041f930
0041fdb0  _nop
