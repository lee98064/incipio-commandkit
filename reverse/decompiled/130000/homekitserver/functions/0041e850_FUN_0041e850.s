# FUN_0041e850 @ 0041e850
0041e850  addiu sp,sp,-0x1e8
0041e854  sw ra,0x1e4(sp)
0041e858  sw s8,0x1e0(sp)
0041e85c  sw s7,0x1dc(sp)
0041e860  sw s6,0x1d8(sp)
0041e864  sw s5,0x1d4(sp)
0041e868  sw s4,0x1d0(sp)
0041e86c  sw s3,0x1cc(sp)
0041e870  sw s2,0x1c8(sp)
0041e874  sw s1,0x1c4(sp)
0041e878  sw s0,0x1c0(sp)
0041e87c  lui gp,0x62
0041e880  addiu gp,gp,-0x6b80
0041e884  sw gp,0x18(sp)
0041e888  lw t9,-0x5c58(gp)
0041e88c  move s0,a2
0041e890  lw a2,0xc(a2)
0041e894  move s4,a3
0041e898  move s1,a0
0041e89c  move s2,a1
0041e8a0  lw s7,0x1f8(sp)
0041e8a4  jalr t9
0041e8a8  _li s6,-0x1a61
0041e8ac  lw gp,0x18(sp)
0041e8b0  beq v0,s6,0x0041faac
0041e8b4  _move s5,v0
0041e8b8  bne v0,zero,0x0041fae4
0041e8bc  _move a0,s1
0041e8c0  lw t9,-0x6a60(gp)
0041e8c4  lw a2,0xc(s0)
0041e8c8  jalr t9
0041e8cc  _move a1,s2
0041e8d0  lw gp,0x18(sp)
0041e8d4  bne v0,zero,0x0041fae4
0041e8d8  _move s5,v0
0041e8dc  lw t9,-0x7d9c(gp)
0041e8e0  lui a1,0x5b
0041e8e4  addiu a1,a1,-0x493c
0041e8e8  jalr t9
0041e8ec  _move a0,s2
0041e8f0  lw gp,0x18(sp)
0041e8f4  bne v0,zero,0x0041e964
0041e8f8  _lui a1,0x5b
0041e8fc  lw t9,-0x6a04(gp)
0041e900  sw s7,0x10(sp)
0041e904  move a2,s0
0041e908  move a0,s1
0041e90c  move a1,s2
0041e910  jalr t9
0041e914  _move a3,s4
0041e918  lw gp,0x18(sp)
0041e91c  beq v0,zero,0x0041e950
0041e920  _move s5,v0
0041e924  lui a2,0x5b
0041e928  lui a3,0xfffe
0041e92c  move a0,s1
0041e930  addiu a2,a2,-0x4a58
0041e934  ori a3,a3,0xecf3
0041e938  li a1,0x190
0041e93c  sw zero,0x10(sp)
0041e940  jal 0x0041c828
0041e944  _sw zero,0x14(sp)
0041e948  b 0x0041fad4
0041e94c  _nop
0041e950  lbu s5,0x110(s4)
0041e954  nop
0041e958  movn s6,zero,s5
0041e95c  b 0x0041fae4
0041e960  _move s5,s6
0041e964  lw t9,-0x7d9c(gp)
0041e968  addiu a1,a1,-0x4930
0041e96c  jalr t9
0041e970  _move a0,s2
0041e974  lw gp,0x18(sp)
0041e978  bne v0,zero,0x0041ea50
0041e97c  _lui a1,0x5b
0041e980  lw v0,0x4(s0)
0041e984  nop
0041e988  bne v0,zero,0x0041e9ac
0041e98c  _nop
0041e990  lw t9,-0x6f80(gp)
0041e994  nop
0041e998  jalr t9
0041e99c  _nop
0041e9a0  lw gp,0x18(sp)
0041e9a4  beq v0,zero,0x0041fae0
0041e9a8  _sw v0,0x4(s0)
0041e9ac  lw t9,-0x598c(gp)
0041e9b0  lw a2,0x4(s0)
0041e9b4  move a0,s1
0041e9b8  sw s7,0x10(sp)
0041e9bc  move a3,s4
0041e9c0  jalr t9
0041e9c4  _move a1,s2
0041e9c8  lw gp,0x18(sp)
0041e9cc  bne v0,zero,0x0041ea38
0041e9d0  _move s5,v0
0041e9d4  lw v0,0x4(s0)
0041e9d8  nop
0041e9dc  lbu v0,0x0(v0)
0041e9e0  nop
0041e9e4  beq v0,zero,0x0041fae4
0041e9e8  _li v1,0x1
0041e9ec  lw v0,0xc(s0)
0041e9f0  lw t9,-0x5cb0(gp)
0041e9f4  sb v1,0x0(v0)
0041e9f8  lw v0,0x4(s0)
0041e9fc  lw a0,0xc(s0)
0041ea00  li a2,0x20
0041ea04  lw a1,0x24(v0)
0041ea08  jalr t9
0041ea0c  _addiu a0,a0,0x21
0041ea10  lw gp,0x18(sp)
0041ea14  lw v0,0x4(s0)
0041ea18  lw a0,0xc(s0)
0041ea1c  lw t9,-0x5cb0(gp)
0041ea20  lw a1,0x20(v0)
0041ea24  addiu a0,a0,0x1
0041ea28  jalr t9
0041ea2c  _li a2,0x20
0041ea30  lw gp,0x18(sp)
0041ea34  nop
0041ea38  lw t9,-0x7548(gp)
0041ea3c  nop
0041ea40  jalr t9
0041ea44  _addiu a0,s0,0x4
0041ea48  b 0x0041fad4
0041ea4c  _nop
0041ea50  lw t9,-0x7d9c(gp)
0041ea54  addiu a1,a1,-0x4920
0041ea58  jalr t9
0041ea5c  _move a0,s2
0041ea60  lw gp,0x18(sp)
0041ea64  bne v0,zero,0x0041ead4
0041ea68  _lui s8,0x5b
0041ea6c  lw t9,-0x7c9c(gp)
0041ea70  lui a0,0x5b
0041ea74  jalr t9
0041ea78  _addiu a0,a0,-0x4910
0041ea7c  jal 0x0041d2e8
0041ea80  _move a0,s4
0041ea84  lw gp,0x18(sp)
0041ea88  bne v0,zero,0x0041fae4
0041ea8c  _move s5,v0
0041ea90  lui s3,0x61
0041ea94  lw t9,-0x7ea0(gp)
0041ea98  lw a0,0x3d44(s3)
0041ea9c  jalr t9
0041eaa0  _nop
0041eaa4  lw gp,0x18(sp)
0041eaa8  move a0,v0
0041eaac  lw t9,-0x63cc(gp)
0041eab0  nop
0041eab4  jalr t9
0041eab8  _sw v0,0x1b4(sp)
0041eabc  lui a2,0x5b
0041eac0  move a0,s1
0041eac4  addiu a2,a2,-0x4904
0041eac8  lw a3,0x1b4(sp)
0041eacc  b 0x0041f180
0041ead0  _clear a1
0041ead4  lw t9,-0x64a4(gp)
0041ead8  move a0,s2
0041eadc  jalr t9
0041eae0  _addiu a1,s8,-0x48ec
0041eae4  lw gp,0x18(sp)
0041eae8  beq v0,zero,0x0041f1bc
0041eaec  _lui a1,0x5b
0041eaf0  lw t9,-0x6884(gp)
0041eaf4  addiu a1,a1,-0x48d8
0041eaf8  jalr t9
0041eafc  _move a0,s2
0041eb00  move s6,v0
0041eb04  li v0,-0x1a47
0041eb08  lw gp,0x18(sp)
0041eb0c  beq s6,v0,0x0041f0b4
0041eb10  _addiu v0,sp,0x3c
0041eb14  lw t9,-0x64a4(gp)
0041eb18  addiu a1,s8,-0x48ec
0041eb1c  move a0,s2
0041eb20  sw v0,0x40(sp)
0041eb24  jalr t9
0041eb28  _sw v0,0x3c(sp)
0041eb2c  lw gp,0x18(sp)
0041eb30  addiu s5,v0,0x14
0041eb34  movz s5,zero,v0
0041eb38  lw t9,-0x7b28(gp)
0041eb3c  move a0,s5
0041eb40  jalr t9
0041eb44  _li a1,0x20
0041eb48  lw gp,0x18(sp)
0041eb4c  beq v0,zero,0x0041eb58
0041eb50  _nop
0041eb54  sb zero,0x0(v0)
0041eb58  lw t9,-0x6b84(gp)
0041eb5c  lui s7,0x5c
0041eb60  addiu s7,s7,0x7a84
0041eb64  move a0,s5
0041eb68  jalr t9
0041eb6c  _move a1,s7
0041eb70  lw gp,0x18(sp)
0041eb74  move s5,v0
0041eb78  addiu s6,sp,0x8c
0041eb7c  b 0x0041ec64
0041eb80  _addiu s8,sp,0x3c
0041eb84  lw t9,-0x7244(gp)
0041eb88  move a0,s6
0041eb8c  jalr t9
0041eb90  _clear a1
0041eb94  lw gp,0x18(sp)
0041eb98  move a1,s5
0041eb9c  lw t9,-0x7eb0(gp)
0041eba0  nop
0041eba4  jalr t9
0041eba8  _move a0,s6
0041ebac  lw gp,0x18(sp)
0041ebb0  move a0,s5
0041ebb4  lw t9,-0x7b28(gp)
0041ebb8  nop
0041ebbc  jalr t9
0041ebc0  _li a1,0x2e
0041ebc4  lw gp,0x18(sp)
0041ebc8  li a2,0x64
0041ebcc  move a0,s6
0041ebd0  lw t9,-0x7244(gp)
0041ebd4  clear a1
0041ebd8  jalr t9
0041ebdc  _sw v0,0x1b8(sp)
0041ebe0  lw gp,0x18(sp)
0041ebe4  li a1,0x1
0041ebe8  lw t9,-0x5a68(gp)
0041ebec  nop
0041ebf0  jalr t9
0041ebf4  _li a0,0x10
0041ebf8  lw gp,0x18(sp)
0041ebfc  move a0,s5
0041ec00  lw t9,-0x7ac0(gp)
0041ec04  nop
0041ec08  jalr t9
0041ec0c  _move s5,v0
0041ec10  lw gp,0x18(sp)
0041ec14  sw v0,0x0(s5)
0041ec18  lw v1,0x1b8(sp)
0041ec1c  lw t9,-0x7ac0(gp)
0041ec20  nop
0041ec24  jalr t9
0041ec28  _addiu a0,v1,0x1
0041ec2c  lw gp,0x18(sp)
0041ec30  lw a0,0x3c(sp)
0041ec34  addiu v1,s5,0x8
0041ec38  lw t9,-0x6b84(gp)
0041ec3c  sw v0,0x4(s5)
0041ec40  move a1,s7
0041ec44  sw v1,0x4(a0)
0041ec48  sw a0,0x8(s5)
0041ec4c  sw s8,0xc(s5)
0041ec50  clear a0
0041ec54  jalr t9
0041ec58  _sw v1,0x3c(sp)
0041ec5c  lw gp,0x18(sp)
0041ec60  move s5,v0
0041ec64  bne s5,zero,0x0041eb84
0041ec68  _li a2,0x64
0041ec6c  addiu v0,sp,0x34
0041ec70  addiu v1,sp,0x20
0041ec74  sw v0,0x20(sp)
0041ec78  beq v0,v1,0x0041f02c
0041ec7c  _clear s7
0041ec80  lw t9,-0x7b84(gp)
0041ec84  sw zero,0x19c(sp)
0041ec88  jalr t9
0041ec8c  _lui s5,0x5b
0041ec90  lw gp,0x18(sp)
0041ec94  lui v1,0x61
0041ec98  sw v0,0x3d44(v1)
0041ec9c  lw t9,-0x718c(gp)
0041eca0  nop
0041eca4  jalr t9
0041eca8  _addiu s5,s5,0x27b0
0041ecac  sw v0,0x1a4(sp)
0041ecb0  lw v0,0x20(sp)
0041ecb4  addiu v1,sp,0x24
0041ecb8  lw gp,0x18(sp)
0041ecbc  lw s6,0x8(v0)
0041ecc0  addiu v0,sp,0x44
0041ecc4  sw v0,0x1ac(sp)
0041ecc8  b 0x0041efe4
0041eccc  _sw v1,0x1b0(sp)
0041ecd0  lw a0,-0x8(s6)
0041ecd4  lw a1,-0x5944(gp)
0041ecd8  clear s8
0041ecdc  sw a0,0x1a8(sp)
0041ece0  addiu a1,a1,0x4
0041ece4  lw s7,-0x4(s6)
0041ece8  sw a1,0x198(sp)
0041ecec  lw v1,0x198(sp)
0041ecf0  nop
0041ecf4  lw v0,0x0(v1)
0041ecf8  nop
0041ecfc  beq v0,zero,0x0041efb0
0041ed00  _nop
0041ed04  li v0,0xb5
0041ed08  mult s8,v0
0041ed0c  lw a0,-0x5944(gp)
0041ed10  clear a3
0041ed14  mflo v1
0041ed18  addiu v1,v1,0x1
0041ed1c  sll v1,v1,0x3
0041ed20  addu v1,a0,v1
0041ed24  addiu v1,v1,0x4
0041ed28  lw t9,-0x5cb0(gp)
0041ed2c  lw a0,0x1ac(sp)
0041ed30  move a1,v1
0041ed34  sw v1,0x1b8(sp)
0041ed38  sw a3,0x1b4(sp)
0041ed3c  jalr t9
0041ed40  _li a2,0x48
0041ed44  lw a1,0x50(sp)
0041ed48  lw gp,0x18(sp)
0041ed4c  lw a0,0x48(sp)
0041ed50  sw a1,0x1a0(sp)
0041ed54  lw a1,0x44(sp)
0041ed58  lbu v0,0x58(sp)
0041ed5c  lbu t0,0x4c(sp)
0041ed60  lw v1,0x1b8(sp)
0041ed64  lw a3,0x1b4(sp)
0041ed68  beq a1,zero,0x0041ef88
0041ed6c  _nop
0041ed70  bne a0,s7,0x0041ef8c
0041ed74  _addiu a3,a3,0x1
0041ed78  lw t9,-0x7b84(gp)
0041ed7c  bne v0,zero,0x0041ee34
0041ed80  _nop
0041ed84  jalr t9
0041ed88  _nop
0041ed8c  lw gp,0x18(sp)
0041ed90  li a0,0x1
0041ed94  lw t9,-0x6e90(gp)
0041ed98  nop
0041ed9c  jalr t9
0041eda0  _move s3,v0
0041eda4  lw gp,0x18(sp)
0041eda8  lui a1,0x5b
0041edac  addiu a1,a1,-0x4a24
0041edb0  lw t9,-0x6b6c(gp)
0041edb4  move a2,v0
0041edb8  jalr t9
0041edbc  _move a0,s3
0041edc0  lw gp,0x18(sp)
0041edc4  move a0,s7
0041edc8  lw t9,-0x6e90(gp)
0041edcc  nop
0041edd0  jalr t9
0041edd4  _lui s7,0xfffe
0041edd8  lw gp,0x18(sp)
0041eddc  lui a1,0x5b
0041ede0  addiu a1,a1,-0x4a14
0041ede4  lw t9,-0x6b6c(gp)
0041ede8  move a2,v0
0041edec  jalr t9
0041edf0  _move a0,s3
0041edf4  lw gp,0x18(sp)
0041edf8  ori a0,s7,0xecfb
0041edfc  lw t9,-0x6e90(gp)
0041ee00  nop
0041ee04  jalr t9
0041ee08  _move s7,a0
0041ee0c  lw gp,0x18(sp)
0041ee10  lui a1,0x5d
0041ee14  move a2,v0
0041ee18  lw t9,-0x6b6c(gp)
0041ee1c  move a0,s3
0041ee20  jalr t9
0041ee24  _addiu a1,a1,-0x3e3c
0041ee28  lw gp,0x18(sp)
0041ee2c  b 0x0041efb4
0041ee30  _nop
0041ee34  jalr t9
0041ee38  _sw t0,0x1b4(sp)
0041ee3c  lw gp,0x18(sp)
0041ee40  li a0,0x1
0041ee44  lw t9,-0x6e90(gp)
0041ee48  nop
0041ee4c  jalr t9
0041ee50  _move s3,v0
0041ee54  lw gp,0x18(sp)
0041ee58  lui a1,0x5b
0041ee5c  move a2,v0
0041ee60  lw t9,-0x6b6c(gp)
0041ee64  addiu a1,a1,-0x4a24
0041ee68  jalr t9
0041ee6c  _move a0,s3
0041ee70  lw gp,0x18(sp)
0041ee74  nop
0041ee78  lw t9,-0x6e90(gp)
0041ee7c  nop
0041ee80  jalr t9
0041ee84  _move a0,s7
0041ee88  lw gp,0x18(sp)
0041ee8c  lui a1,0x5b
0041ee90  move a2,v0
0041ee94  lw t9,-0x6b6c(gp)
0041ee98  move a0,s3
0041ee9c  jalr t9
0041eea0  _addiu a1,a1,-0x4a14
0041eea4  lw t0,0x1b4(sp)
0041eea8  lw gp,0x18(sp)
0041eeac  beq t0,zero,0x0041eec0
0041eeb0  _nop
0041eeb4  lw v0,0x54(sp)
0041eeb8  b 0x0041eedc
0041eebc  _sw v0,0x24(sp)
0041eec0  lw t9,-0x5984(gp)
0041eec4  lw a0,0x1a8(sp)
0041eec8  lw a2,0x1b0(sp)
0041eecc  move a1,s7
0041eed0  jalr t9
0041eed4  _move a3,s4
0041eed8  lw gp,0x18(sp)
0041eedc  lw v1,0x1a0(sp)
0041eee0  nop
0041eee4  sltiu v0,v1,0x6
0041eee8  beq v0,zero,0x0041ef98
0041eeec  _lui a0,0x5b
0041eef0  sll v0,v1,0x2
0041eef4  addiu a0,a0,-0x47ac
0041eef8  addu v0,a0,v0
0041eefc  lw v0,0x0(v0)
0041ef00  nop
0041ef04  jr v0
0041ef08  _nop
0041ef0c  lw a0,0x24(sp)
0041ef10  lw t9,-0x6e90(gp)
0041ef14  b 0x0041ef58
0041ef18  _nop
0041ef1c  lw t9,-0x7550(gp)
0041ef20  lw a0,0x24(sp)
0041ef24  jalr t9
0041ef28  _nop
0041ef2c  lw gp,0x18(sp)
0041ef30  move a1,v1
0041ef34  lw t9,-0x760c(gp)
0041ef38  nop
0041ef3c  jalr t9
0041ef40  _move a0,v0
0041ef44  b 0x0041ef60
0041ef48  _nop
0041ef4c  lw a0,0x24(sp)
0041ef50  lw t9,-0x5e1c(gp)
0041ef54  nop
0041ef58  jalr t9
0041ef5c  _nop
0041ef60  lw gp,0x18(sp)
0041ef64  move a2,v0
0041ef68  move a0,s3
0041ef6c  lw t9,-0x6b6c(gp)
0041ef70  nop
0041ef74  jalr t9
0041ef78  _move a1,s5
0041ef7c  lw gp,0x18(sp)
0041ef80  b 0x0041ef98
0041ef84  _nop
0041ef88  addiu a3,a3,0x1
0041ef8c  li a1,0x14
0041ef90  bne a3,a1,0x0041ed28
0041ef94  _addiu v1,v1,0x48
0041ef98  lw v0,0x198(sp)
0041ef9c  addiu s8,s8,0x1
0041efa0  li v1,0xa
0041efa4  addiu v0,v0,0x5a8
0041efa8  bne s8,v1,0x0041ecec
0041efac  _sw v0,0x198(sp)
0041efb0  clear s7
0041efb4  beq s3,zero,0x0041f014
0041efb8  _nop
0041efbc  lw t9,-0x709c(gp)
0041efc0  lw a0,0x1a4(sp)
0041efc4  jalr t9
0041efc8  _move a1,s3
0041efcc  lw a0,0x19c(sp)
0041efd0  sltu v0,zero,s7
0041efd4  lw gp,0x18(sp)
0041efd8  addu a0,a0,v0
0041efdc  lw s6,0x0(s6)
0041efe0  sw a0,0x19c(sp)
0041efe4  lw v0,0x20(sp)
0041efe8  nop
0041efec  addiu v0,v0,0x8
0041eff0  bne s6,v0,0x0041ecd0
0041eff4  _lui v0,0x61
0041eff8  lw t9,-0x6b6c(gp)
0041effc  lw a0,0x3d44(v0)
0041f000  lw a2,0x1a4(sp)
0041f004  lui a1,0x5b
0041f008  jalr t9
0041f00c  _addiu a1,a1,-0x4a10
0041f010  lw gp,0x18(sp)
0041f014  lw a1,0x19c(sp)
0041f018  nop
0041f01c  beq a1,zero,0x0041f030
0041f020  _lui v0,0x61
0041f024  lui s7,0xfffe
0041f028  ori s7,s7,0xecfe
0041f02c  lui v0,0x61
0041f030  lw t9,-0x7ea0(gp)
0041f034  lw a0,0x3d44(v0)
0041f038  jalr t9
0041f03c  _addiu s3,sp,0x3c
0041f040  lw v1,0x3c(sp)
0041f044  lw gp,0x18(sp)
0041f048  lw s5,0x0(v1)
0041f04c  b 0x0041f084
0041f050  _move s4,v0
0041f054  lw v0,0x4(v1)
0041f058  lw a1,0x0(v1)
0041f05c  lw t9,-0x7aa4(gp)
0041f060  addiu a0,v1,-0x8
0041f064  sw v0,0x4(a1)
0041f068  sw a1,0x0(v0)
0041f06c  sw v1,0x0(v1)
0041f070  jalr t9
0041f074  _sw v1,0x4(v1)
0041f078  move v1,s5
0041f07c  lw gp,0x18(sp)
0041f080  lw s5,0x0(s5)
0041f084  bne v1,s3,0x0041f054
0041f088  _move a0,s4
0041f08c  lw t9,-0x63cc(gp)
0041f090  nop
0041f094  jalr t9
0041f098  _lui s3,0x61
0041f09c  lui a2,0x5b
0041f0a0  move a0,s1
0041f0a4  move a1,s7
0041f0a8  addiu a2,a2,-0x48d4
0041f0ac  b 0x0041f180
0041f0b0  _move a3,s4
0041f0b4  lw t9,-0x6884(gp)
0041f0b8  lui a1,0x5b
0041f0bc  addiu a1,a1,-0x48b8
0041f0c0  jalr t9
0041f0c4  _move a0,s2
0041f0c8  lw gp,0x18(sp)
0041f0cc  beq v0,s6,0x0041fa80
0041f0d0  _lui a1,0xfffe
0041f0d4  lw t9,-0x6838(gp)
0041f0d8  lw a0,0x104(s2)
0041f0dc  jalr t9
0041f0e0  _nop
0041f0e4  lui v1,0x61
0041f0e8  lw gp,0x18(sp)
0041f0ec  beq v0,zero,0x0041fae4
0041f0f0  _sw v0,0x3d40(v1)
0041f0f4  move a1,s4
0041f0f8  move a0,v0
0041f0fc  jal 0x0041dd50
0041f100  _move a2,s7
0041f104  lw gp,0x18(sp)
0041f108  lui v1,0x61
0041f10c  lw a0,0x3d40(v1)
0041f110  lw t9,-0x7dec(gp)
0041f114  lui s3,0x61
0041f118  jalr t9
0041f11c  _sw v0,0x1b8(sp)
0041f120  lw a0,0x3d44(s3)
0041f124  lw gp,0x18(sp)
0041f128  lw a1,0x1b8(sp)
0041f12c  beq a0,zero,0x0041f1b0
0041f130  _lui a2,0x5b
0041f134  lw t9,-0x7ea0(gp)
0041f138  nop
0041f13c  jalr t9
0041f140  _nop
0041f144  lw gp,0x18(sp)
0041f148  lw a1,0x1b8(sp)
0041f14c  move a3,v0
0041f150  move a0,v0
0041f154  lw t9,-0x63cc(gp)
0041f158  li v0,0x10
0041f15c  movz a1,v0,a1
0041f160  sw a1,0x1b8(sp)
0041f164  jalr t9
0041f168  _sw a3,0x1b4(sp)
0041f16c  lw a1,0x1b8(sp)
0041f170  lw a3,0x1b4(sp)
0041f174  lui a2,0x5b
0041f178  move a0,s1
0041f17c  addiu a2,a2,-0x48b4
0041f180  sw v0,0x10(sp)
0041f184  jal 0x0041c964
0041f188  _sw s0,0x14(sp)
0041f18c  lw gp,0x18(sp)
0041f190  lw a0,0x3d44(s3)
0041f194  lw t9,-0x7dec(gp)
0041f198  nop
0041f19c  jalr t9
0041f1a0  _move s5,v0
0041f1a4  lw gp,0x18(sp)
0041f1a8  b 0x0041fae4
0041f1ac  _sw zero,0x3d44(s3)
0041f1b0  move a0,s1
0041f1b4  b 0x0041fa90
0041f1b8  _addiu a2,a2,-0x48b4
0041f1bc  lw t9,-0x7d9c(gp)
0041f1c0  lui a1,0x5b
0041f1c4  addiu a1,a1,-0x4880
0041f1c8  jalr t9
0041f1cc  _move a0,s2
0041f1d0  lw gp,0x18(sp)
0041f1d4  bne v0,zero,0x0041f9c0
0041f1d8  _lui a1,0x5b
0041f1dc  lw t9,-0x7c9c(gp)
0041f1e0  lui a0,0x5b
0041f1e4  jalr t9
0041f1e8  _addiu a0,a0,-0x4874
0041f1ec  lw v0,0xc(s0)
0041f1f0  lw gp,0x18(sp)
0041f1f4  lbu v0,0x0(v0)
0041f1f8  nop
0041f1fc  beq v0,zero,0x0041fa80
0041f200  _lui a1,0xfffe
0041f204  lw v0,0x8(s0)
0041f208  nop
0041f20c  bne v0,zero,0x0041f228
0041f210  _nop
0041f214  jal 0x0041c4a0
0041f218  _nop
0041f21c  lw gp,0x18(sp)
0041f220  beq v0,zero,0x0041fae0
0041f224  _sw v0,0x8(s0)
0041f228  lw v0,0x104(s2)
0041f22c  lw v1,0x10c(s2)
0041f230  addiu s8,sp,0x30
0041f234  sw v0,0x28(sp)
0041f238  addu v1,v0,v1
0041f23c  sw v1,0x198(sp)
0041f240  addiu v0,sp,0x2c
0041f244  lw s3,0x8(s0)
0041f248  addiu s6,sp,0x28
0041f24c  sw v0,0x19c(sp)
0041f250  b 0x0041f334
0041f254  _addiu s4,sp,0x20
0041f258  lw a0,0x30(sp)
0041f25c  lw t9,-0x5a68(gp)
0041f260  nop
0041f264  jalr t9
0041f268  _addiu a0,a0,0x1
0041f26c  lw gp,0x18(sp)
0041f270  bne v0,zero,0x0041f280
0041f274  _move a0,v0
0041f278  b 0x0041f9b0
0041f27c  _li s5,-0x1a48
0041f280  lw t9,-0x5cb0(gp)
0041f284  lw a1,0x2c(sp)
0041f288  lw a2,0x30(sp)
0041f28c  jalr t9
0041f290  _sw v0,0x1b8(sp)
0041f294  lbu v0,0x20(sp)
0041f298  lw gp,0x18(sp)
0041f29c  lw v1,0x1b8(sp)
0041f2a0  sltiu a0,v0,0xc
0041f2a4  beq a0,zero,0x0041f334
0041f2a8  _lui a0,0x5b
0041f2ac  sll v0,v0,0x2
0041f2b0  addiu a0,a0,-0x4794
0041f2b4  addu v0,a0,v0
0041f2b8  lw v0,0x0(v0)
0041f2bc  nop
0041f2c0  jr v0
0041f2c4  _nop
0041f2c8  lbu v0,0x0(v1)
0041f2cc  lw a0,0x4(s3)
0041f2d0  nop
0041f2d4  beq a0,v0,0x0041f2e4
0041f2d8  _nop
0041f2dc  b 0x0041f9b0
0041f2e0  _li s5,-0x1a51
0041f2e4  lw t9,-0x7aa4(gp)
0041f2e8  b 0x0041f324
0041f2ec  _move a0,v1
0041f2f0  lbu v0,0x0(v1)
0041f2f4  lw t9,-0x7aa4(gp)
0041f2f8  move a0,v1
0041f2fc  b 0x0041f324
0041f300  _sw v0,0x8(s3)
0041f304  b 0x0041f334
0041f308  _sw v1,0xc(s3)
0041f30c  b 0x0041f334
0041f310  _sw v1,0x10(s3)
0041f314  lbu v0,0x0(v1)
0041f318  lw t9,-0x7aa4(gp)
0041f31c  move a0,v1
0041f320  sb v0,0x14(s3)
0041f324  jalr t9
0041f328  _nop
0041f32c  lw gp,0x18(sp)
0041f330  nop
0041f334  lw t9,-0x6574(gp)
0041f338  lw a0,0x28(sp)
0041f33c  lw a1,0x198(sp)
0041f340  lw a3,0x19c(sp)
0041f344  sw s8,0x10(sp)
0041f348  sw s6,0x14(sp)
0041f34c  jalr t9
0041f350  _move a2,s4
0041f354  lw gp,0x18(sp)
0041f358  beq v0,zero,0x0041f258
0041f35c  _li a1,0x1
0041f360  lw v0,0x8(s3)
0041f364  nop
0041f368  addiu v0,v0,-0x3
0041f36c  sltiu v0,v0,0x3
0041f370  bne v0,zero,0x0041fb4c
0041f374  _li v1,0x3
0041f378  b 0x0041f9b0
0041f37c  _li s5,-0x1a3d
0041f380  lbu v1,0x4(s7)
0041f384  nop
0041f388  beq v1,v0,0x0041f3a0
0041f38c  _addiu s3,sp,0xf0
0041f390  li v0,0x2
0041f394  sb v0,0x0(s6)
0041f398  b 0x0041f418
0041f39c  _clear s8
0041f3a0  lw t9,-0x7244(gp)
0041f3a4  li a2,0x40
0041f3a8  move a0,s3
0041f3ac  jalr t9
0041f3b0  _clear a1
0041f3b4  lw gp,0x18(sp)
0041f3b8  lw a1,0xc(s6)
0041f3bc  lw t9,-0x7eb0(gp)
0041f3c0  nop
0041f3c4  jalr t9
0041f3c8  _move a0,s3
0041f3cc  lw gp,0x18(sp)
0041f3d0  lw a1,0x10(s6)
0041f3d4  addiu a0,sp,0x130
0041f3d8  lw t9,-0x5cb0(gp)
0041f3dc  nop
0041f3e0  jalr t9
0041f3e4  _li a2,0x20
0041f3e8  lw gp,0x18(sp)
0041f3ec  lbu v0,0x14(s6)
0041f3f0  move a0,s3
0041f3f4  lw t9,-0x763c(gp)
0041f3f8  nop
0041f3fc  jalr t9
0041f400  _sb v0,0x150(sp)
0041f404  move s8,v0
0041f408  li v0,-0x1a48
0041f40c  lw gp,0x18(sp)
0041f410  bne s8,v0,0x0041f424
0041f414  _nop
0041f418  li v1,0x1
0041f41c  b 0x0041f448
0041f420  _li s4,0x6
0041f424  lw t9,-0x7644(gp)
0041f428  nop
0041f42c  jalr t9
0041f430  _nop
0041f434  lw gp,0x18(sp)
0041f438  bne v0,zero,0x0041f510
0041f43c  _move s8,v0
0041f440  clear v1
0041f444  li s4,0x3
0041f448  lw t9,-0x5a68(gp)
0041f44c  sw v1,0x1b8(sp)
0041f450  move a0,s4
0041f454  jalr t9
0041f458  _li a1,0x1
0041f45c  lw v1,0x1b8(sp)
0041f460  beq v0,zero,0x0041f50c
0041f464  _move s3,v0
0041f468  li a1,0x1
0041f46c  li a0,0x2
0041f470  li v0,0x6
0041f474  sb v0,0x0(s3)
0041f478  sb a1,0x1(s3)
0041f47c  beq v1,zero,0x0041f4b8
0041f480  _sb a0,0x2(s3)
0041f484  lbu v0,0x4(s7)
0041f488  li v1,0x7
0041f48c  sb v1,0x3(s3)
0041f490  li v1,0x1
0041f494  beq v0,v1,0x0041f4a4
0041f498  _sb a1,0x4(s3)
0041f49c  b 0x0041f4b8
0041f4a0  _sb a0,0x5(s3)
0041f4a4  li v1,-0x1a48
0041f4a8  bne s8,v1,0x0041f4b4
0041f4ac  _nop
0041f4b0  li v0,0x4
0041f4b4  sb v0,0x5(s3)
0041f4b8  li v0,0x1
0041f4bc  lui a2,0x5b
0041f4c0  sb v0,0x0(s6)
0041f4c4  move a0,s1
0041f4c8  addiu a2,a2,-0x4858
0041f4cc  clear a1
0041f4d0  move a3,s3
0041f4d4  sw s4,0x10(sp)
0041f4d8  jal 0x0041c6d0
0041f4dc  _sw s0,0x14(sp)
0041f4e0  lw gp,0x18(sp)
0041f4e4  move s8,v0
0041f4e8  lw t9,-0x7aa4(gp)
0041f4ec  nop
0041f4f0  jalr t9
0041f4f4  _move a0,s3
0041f4f8  lw gp,0x18(sp)
0041f4fc  beq s8,zero,0x0041f998
0041f500  _nop
0041f504  b 0x0041f510
0041f508  _nop
0041f50c  li s8,-0x1a48
0041f510  jal 0x0041c630
0041f514  _addiu a0,s0,0x8
0041f518  lw v0,0x8(s0)
0041f51c  li v1,0x1
0041f520  lw gp,0x18(sp)
0041f524  move s5,s8
0041f528  b 0x0041fae4
0041f52c  _sw v1,0x4(v0)
0041f530  bne v0,v1,0x0041f730
0041f534  _li v1,0x5
0041f538  lw t9,-0x6e6c(gp)
0041f53c  addiu s3,sp,0xf0
0041f540  jalr t9
0041f544  _clear s8
0041f548  lw gp,0x18(sp)
0041f54c  move a0,v0
0041f550  lw t9,-0x6ec4(gp)
0041f554  nop
0041f558  jalr t9
0041f55c  _move a1,s3
0041f560  lw gp,0x18(sp)
0041f564  bne v0,zero,0x0041f584
0041f568  _move a0,s3
0041f56c  lw t9,-0x74a4(gp)
0041f570  lw a1,0xc(s6)
0041f574  jalr t9
0041f578  _li a2,0x24
0041f57c  lw gp,0x18(sp)
0041f580  sltiu s8,v0,0x1
0041f584  lbu v1,0x4(s7)
0041f588  li v0,0x1
0041f58c  beq v1,v0,0x0041f5b0
0041f590  _nop
0041f594  bne s8,zero,0x0041f5b0
0041f598  _li v0,0x2
0041f59c  li a1,0x1
0041f5a0  sb v0,0x0(s6)
0041f5a4  li s4,0x6
0041f5a8  b 0x0041f650
0041f5ac  _sw a1,0x198(sp)
0041f5b0  lw t9,-0x79b4(gp)
0041f5b4  lw a0,0xc(s6)
0041f5b8  jalr t9
0041f5bc  _li s4,0x3
0041f5c0  lw gp,0x18(sp)
0041f5c4  li v1,0x6
0041f5c8  movn s4,v1,v0
0041f5cc  lw t9,-0x7644(gp)
0041f5d0  sltu v0,zero,v0
0041f5d4  jalr t9
0041f5d8  _sw v0,0x198(sp)
0041f5dc  lw gp,0x18(sp)
0041f5e0  bne v0,zero,0x0041f710
0041f5e4  _nop
0041f5e8  lw t9,-0x64c0(gp)
0041f5ec  lw a0,0xc(s6)
0041f5f0  jalr t9
0041f5f4  _nop
0041f5f8  lw gp,0x18(sp)
0041f5fc  nop
0041f600  lw t9,-0x5888(gp)
0041f604  nop
0041f608  jalr t9
0041f60c  _nop
0041f610  lw gp,0x18(sp)
0041f614  nop
0041f618  lw t9,-0x73b0(gp)
0041f61c  beq v0,zero,0x0041f634
0041f620  _lui a0,0x5b
0041f624  lui a1,0x5b
0041f628  addiu a0,a0,-0x4a3c
0041f62c  b 0x0041f640
0041f630  _addiu a1,a1,0xb78
0041f634  lui a1,0x5b
0041f638  addiu a0,a0,-0x4a3c
0041f63c  addiu a1,a1,-0x28a8
0041f640  jalr t9
0041f644  _nop
0041f648  lw gp,0x18(sp)
0041f64c  nop
0041f650  lw t9,-0x5a68(gp)
0041f654  move a0,s4
0041f658  jalr t9
0041f65c  _li a1,0x1
0041f660  beq v0,zero,0x0041f70c
0041f664  _move s3,v0
0041f668  li a0,0x6
0041f66c  li v1,0x1
0041f670  li v0,0x2
0041f674  sb a0,0x0(s3)
0041f678  sb v1,0x1(s3)
0041f67c  sb v0,0x2(s3)
0041f680  lw a0,0x198(sp)
0041f684  nop
0041f688  beq a0,zero,0x0041f6b4
0041f68c  _li a1,0x7
0041f690  lbu a0,0x4(s7)
0041f694  sb v1,0x4(s3)
0041f698  li v1,0x1
0041f69c  beq a0,v1,0x0041f6ac
0041f6a0  _sb a1,0x3(s3)
0041f6a4  beq s8,zero,0x0041f6b0
0041f6a8  _nop
0041f6ac  li v0,0x1
0041f6b0  sb v0,0x5(s3)
0041f6b4  li v0,0x1
0041f6b8  lui a2,0x5b
0041f6bc  sb v0,0x0(s6)
0041f6c0  move a0,s1
0041f6c4  addiu a2,a2,-0x4844
0041f6c8  clear a1
0041f6cc  move a3,s3
0041f6d0  sw s4,0x10(sp)
0041f6d4  jal 0x0041c6d0
0041f6d8  _sw s0,0x14(sp)
0041f6dc  lw gp,0x18(sp)
0041f6e0  sw v0,0x1b4(sp)
0041f6e4  lw t9,-0x7aa4(gp)
0041f6e8  nop
0041f6ec  jalr t9
0041f6f0  _move a0,s3
0041f6f4  lw v0,0x1b4(sp)
0041f6f8  lw gp,0x18(sp)
0041f6fc  beq v0,zero,0x0041f998
0041f700  _addiu a0,s0,0x8
0041f704  b 0x0041f714
0041f708  _nop
0041f70c  li v0,-0x1a48
0041f710  addiu a0,s0,0x8
0041f714  jal 0x0041c630
0041f718  _sw v0,0x1b4(sp)
0041f71c  lw gp,0x18(sp)
0041f720  lw v1,0x8(s0)
0041f724  lw v0,0x1b4(sp)
0041f728  b 0x0041f98c
0041f72c  _move s5,v0
0041f730  bne v0,v1,0x0041f998
0041f734  _li v0,0x1
0041f738  lbu v1,0x4(s7)
0041f73c  nop
0041f740  beq v1,v0,0x0041f754
0041f744  _li v0,0x2
0041f748  sb v0,0x0(s6)
0041f74c  b 0x0041f770
0041f750  _clear s8
0041f754  lw t9,-0x5988(gp)
0041f758  nop
0041f75c  jalr t9
0041f760  _nop
0041f764  lw gp,0x18(sp)
0041f768  bne v0,zero,0x0041f77c
0041f76c  _move s8,v0
0041f770  li v1,0x1
0041f774  b 0x0041f790
0041f778  _li s4,0x6
0041f77c  li s4,0x4d
0041f780  mult v0,s4
0041f784  clear v1
0041f788  mflo s4
0041f78c  addiu s4,s4,0x1
0041f790  lw t9,-0x5a68(gp)
0041f794  addiu a2,s4,0x1
0041f798  move a0,a2
0041f79c  sw v1,0x1b8(sp)
0041f7a0  sw a2,0x1b4(sp)
0041f7a4  jalr t9
0041f7a8  _li a1,0x1
0041f7ac  move s3,v0
0041f7b0  lw gp,0x18(sp)
0041f7b4  lw v1,0x1b8(sp)
0041f7b8  lw a2,0x1b4(sp)
0041f7bc  beq s3,zero,0x0041f984
0041f7c0  _li v0,-0x1a48
0041f7c4  beq v1,zero,0x0041f804
0041f7c8  _li v1,0x6
0041f7cc  li v0,0x1
0041f7d0  sb v1,0x0(s3)
0041f7d4  li v1,0x7
0041f7d8  sb v1,0x3(s3)
0041f7dc  sb v0,0x4(s3)
0041f7e0  sb v0,0x1(s3)
0041f7e4  sb v0,0x2(s3)
0041f7e8  lbu v0,0x4(s7)
0041f7ec  li v1,0x1
0041f7f0  beq v0,v1,0x0041f7fc
0041f7f4  _nop
0041f7f8  li v0,0x2
0041f7fc  b 0x0041f92c
0041f800  _sb v0,0x5(s3)
0041f804  lw t9,-0x5df0(gp)
0041f808  move a1,a2
0041f80c  jalr t9
0041f810  _move a0,s3
0041f814  sw v0,0x1a0(sp)
0041f818  addiu v1,sp,0x130
0041f81c  addiu v0,sp,0xf0
0041f820  lw gp,0x18(sp)
0041f824  sw zero,0x198(sp)
0041f828  clear s7
0041f82c  sw v0,0x19c(sp)
0041f830  b 0x0041f8f0
0041f834  _sw v1,0x1a4(sp)
0041f838  lw t9,-0x6c44(gp)
0041f83c  lw a0,0x19c(sp)
0041f840  jalr t9
0041f844  _move a1,s7
0041f848  lw gp,0x18(sp)
0041f84c  bne v0,zero,0x0041f8ec
0041f850  _li a0,0x1
0041f854  li a1,0x24
0041f858  sb a0,0x0(s3)
0041f85c  sb a1,0x1(s3)
0041f860  lw t9,-0x5cb0(gp)
0041f864  lw a1,0x19c(sp)
0041f868  addiu a0,s3,0x2
0041f86c  jalr t9
0041f870  _li a2,0x24
0041f874  lw gp,0x18(sp)
0041f878  li v1,0x20
0041f87c  li v0,0x3
0041f880  sb v1,0x27(s3)
0041f884  sb v0,0x26(s3)
0041f888  lw t9,-0x5cb0(gp)
0041f88c  lw a1,0x1a4(sp)
0041f890  addiu a0,s3,0x28
0041f894  jalr t9
0041f898  _li a2,0x20
0041f89c  li a0,0xb
0041f8a0  li a1,0x1
0041f8a4  lw gp,0x18(sp)
0041f8a8  sb a0,0x48(s3)
0041f8ac  sb a1,0x49(s3)
0041f8b0  lw v0,0x198(sp)
0041f8b4  nop
0041f8b8  addiu v0,v0,0x1
0041f8bc  sw v0,0x198(sp)
0041f8c0  lbu v0,0x150(sp)
0041f8c4  nop
0041f8c8  sb v0,0x4a(s3)
0041f8cc  lw v1,0x198(sp)
0041f8d0  nop
0041f8d4  beq v1,s8,0x0041f910
0041f8d8  _addiu s3,s3,0x4b
0041f8dc  li a0,-0x1
0041f8e0  sb a0,0x0(s3)
0041f8e4  sb zero,0x1(s3)
0041f8e8  addiu s3,s3,0x2
0041f8ec  addiu s7,s7,0x1
0041f8f0  lw t9,-0x7234(gp)
0041f8f4  nop
0041f8f8  jalr t9
0041f8fc  _nop
0041f900  slt v0,s7,v0
0041f904  lw gp,0x18(sp)
0041f908  bne v0,zero,0x0041f838
0041f90c  _nop
0041f910  li v0,0x2
0041f914  sb v0,0x2(s3)
0041f918  li v0,0x6
0041f91c  sb v0,0x0(s3)
0041f920  li v0,0x1
0041f924  sb v0,0x1(s3)
0041f928  lw s3,0x1a0(sp)
0041f92c  li v0,0x1
0041f930  lui a2,0x5b
0041f934  sb v0,0x0(s6)
0041f938  move a0,s1
0041f93c  addiu a2,a2,-0x4844
0041f940  clear a1
0041f944  move a3,s3
0041f948  sw s4,0x10(sp)
0041f94c  jal 0x0041c6d0
0041f950  _sw s0,0x14(sp)
0041f954  lw gp,0x18(sp)
0041f958  beq s3,zero,0x0041f97c
0041f95c  _nop
0041f960  lw t9,-0x7aa4(gp)
0041f964  sw v0,0x1b4(sp)
0041f968  jalr t9
0041f96c  _move a0,s3
0041f970  lw gp,0x18(sp)
0041f974  lw v0,0x1b4(sp)
0041f978  nop
0041f97c  beq v0,zero,0x0041f998
0041f980  _nop
0041f984  lw v1,0x8(s0)
0041f988  move s5,v0
0041f98c  li v0,0x1
0041f990  b 0x0041fae4
0041f994  _sw v0,0x4(v1)
0041f998  lw v0,0x8(s0)
0041f99c  nop
0041f9a0  lbu v0,0x0(v0)
0041f9a4  nop
0041f9a8  beq v0,zero,0x0041fae4
0041f9ac  _nop
0041f9b0  jal 0x0041c630
0041f9b4  _addiu a0,s0,0x8
0041f9b8  b 0x0041fad4
0041f9bc  _nop
0041f9c0  lw t9,-0x7d9c(gp)
0041f9c4  addiu a1,a1,-0x482c
0041f9c8  jalr t9
0041f9cc  _move a0,s2
0041f9d0  lw gp,0x18(sp)
0041f9d4  bne v0,zero,0x0041fa80
0041f9d8  _lui a1,0xfffe
0041f9dc  lw v0,0xc(s0)
0041f9e0  nop
0041f9e4  lbu v0,0x0(v0)
0041f9e8  nop
0041f9ec  beq v0,zero,0x0041f9fc
0041f9f0  _move a0,s1
0041f9f4  b 0x0041fa88
0041f9f8  _ori a1,a1,0xecff
0041f9fc  lw t9,-0x66d4(gp)
0041fa00  nop
0041fa04  jalr t9
0041fa08  _nop
0041fa0c  lw gp,0x18(sp)
0041fa10  nop
0041fa14  lw t9,-0x5888(gp)
0041fa18  nop
0041fa1c  jalr t9
0041fa20  _nop
0041fa24  bne v0,zero,0x0041fa48
0041fa28  _lui a2,0x5b
0041fa2c  move a0,s1
0041fa30  addiu a2,a2,-0x4a58
0041fa34  li a1,0xcc
0041fa38  clear a3
0041fa3c  sw zero,0x10(sp)
0041fa40  b 0x0041fa70
0041fa44  _sw zero,0x14(sp)
0041fa48  lui v0,0x5b
0041fa4c  addiu v0,v0,-0x4820
0041fa50  lui a2,0x5b
0041fa54  sw v0,0x10(sp)
0041fa58  li v0,0x11
0041fa5c  move a0,s1
0041fa60  addiu a2,a2,-0x4a70
0041fa64  li a1,0x190
0041fa68  clear a3
0041fa6c  sw v0,0x14(sp)
0041fa70  jal 0x0041c828
0041fa74  _nop
0041fa78  b 0x0041faa0
0041fa7c  _nop
0041fa80  move a0,s1
0041fa84  ori a1,a1,0xecf3
0041fa88  lui a2,0x5b
0041fa8c  addiu a2,a2,-0x4898
0041fa90  clear a3
0041fa94  sw s0,0x14(sp)
0041fa98  jal 0x0041c964
0041fa9c  _sw zero,0x10(sp)
0041faa0  lw gp,0x18(sp)
0041faa4  b 0x0041fae4
0041faa8  _move s5,v0
0041faac  lw t9,-0x6e6c(gp)
0041fab0  nop
0041fab4  jalr t9
0041fab8  _nop
0041fabc  lw gp,0x18(sp)
0041fac0  move a0,v0
0041fac4  lw t9,-0x65f4(gp)
0041fac8  nop
0041facc  jalr t9
0041fad0  _li a1,0x3
0041fad4  lw gp,0x18(sp)
0041fad8  b 0x0041fae4
0041fadc  _nop
0041fae0  li s5,-0x1a48
0041fae4  lw t9,-0x6004(gp)
0041fae8  nop
0041faec  jalr t9
0041faf0  _move a0,s2
0041faf4  lui v0,0x61
0041faf8  lw a0,0x3d44(v0)
0041fafc  lw gp,0x18(sp)
0041fb00  beq a0,zero,0x0041fb1c
0041fb04  _move v0,s5
0041fb08  lw t9,-0x7dec(gp)
0041fb0c  nop
0041fb10  jalr t9
0041fb14  _nop
0041fb18  move v0,s5
0041fb1c  lw ra,0x1e4(sp)
0041fb20  lw s8,0x1e0(sp)
0041fb24  lw s7,0x1dc(sp)
0041fb28  lw s6,0x1d8(sp)
0041fb2c  lw s5,0x1d4(sp)
0041fb30  lw s4,0x1d0(sp)
0041fb34  lw s3,0x1cc(sp)
0041fb38  lw s2,0x1c8(sp)
0041fb3c  lw s1,0x1c4(sp)
0041fb40  lw s0,0x1c0(sp)
0041fb44  jr ra
0041fb48  _addiu sp,sp,0x1e8
0041fb4c  lw s6,0x8(s0)
0041fb50  nop
0041fb54  lw v0,0x8(s6)
0041fb58  nop
0041fb5c  bne v0,v1,0x0041f530
0041fb60  _li v1,0x4
0041fb64  b 0x0041f380
0041fb68  _li v0,0x1
