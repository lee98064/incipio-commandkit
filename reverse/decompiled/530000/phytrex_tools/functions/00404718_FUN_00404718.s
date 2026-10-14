# FUN_00404718 @ 00404718
00404718  addiu sp,sp,-0x38
0040471c  sw ra,0x34(sp)
00404720  sw s8,0x30(sp)
00404724  move s8,sp
00404728  lui gp,0x42
0040472c  addiu gp,gp,-0x1db0
00404730  sw gp,0x10(sp)
00404734  sw a0,0x38(s8)
00404738  sw a1,0x3c(s8)
0040473c  lw a0,0x3c(s8)
00404740  lui v0,0x5555
00404744  ori v0,v0,0x5556
00404748  mult a0,v0
0040474c  mfhi v1
00404750  sra v0,a0,0x1f
00404754  subu v1,v1,v0
00404758  move v0,v1
0040475c  sll v0,v0,0x1
00404760  addu v0,v0,v1
00404764  subu v1,a0,v0
00404768  sw v1,0x2c(s8)
0040476c  lw a0,0x3c(s8)
00404770  lui v0,0x5555
00404774  ori v0,v0,0x5556
00404778  mult a0,v0
0040477c  mfhi v1
00404780  sra v0,a0,0x1f
00404784  subu v1,v1,v0
00404788  move v0,v1
0040478c  sll v0,v0,0x1
00404790  addu v0,v0,v1
00404794  subu v1,a0,v0
00404798  beq v1,zero,0x004047cc
0040479c  _nop
004047a0  lw v0,0x3c(s8)
004047a4  lui v1,0x5555
004047a8  ori v1,v1,0x5556
004047ac  mult v0,v1
004047b0  mfhi v1
004047b4  sra v0,v0,0x1f
004047b8  subu v0,v1,v0
004047bc  addiu v0,v0,0x1
004047c0  sll v0,v0,0x2
004047c4  b 0x004047ec
004047c8  _nop
004047cc  lw v0,0x3c(s8)
004047d0  lui v1,0x5555
004047d4  ori v1,v1,0x5556
004047d8  mult v0,v1
004047dc  mfhi v1
004047e0  sra v0,v0,0x1f
004047e4  subu v0,v1,v0
004047e8  sll v0,v0,0x2
004047ec  sw v0,0x28(s8)
004047f0  sw zero,0x24(s8)
004047f4  sw zero,0x20(s8)
004047f8  lw v0,0x28(s8)
004047fc  nop
00404800  addiu v0,v0,0x1
00404804  move a0,v0
00404808  lw v0,-0x7f5c(gp)
0040480c  nop
00404810  move t9,v0
00404814  jalr t9
00404818  _nop
0040481c  lw gp,0x10(s8)
00404820  sw v0,0x1c(s8)
00404824  lw v0,0x28(s8)
00404828  nop
0040482c  addiu v0,v0,0x1
00404830  lw a0,0x1c(s8)
00404834  clear a1
00404838  move a2,v0
0040483c  lw v0,-0x7f98(gp)
00404840  nop
00404844  move t9,v0
00404848  jalr t9
0040484c  _nop
00404850  lw gp,0x10(s8)
00404854  sb zero,0x18(s8)
00404858  sw zero,0x24(s8)
0040485c  sw zero,0x20(s8)
00404860  b 0x00404c30
00404864  _nop
00404868  lw v0,0x24(s8)
0040486c  nop
00404870  addiu v1,v0,0x2
00404874  lw v0,0x3c(s8)
00404878  nop
0040487c  sltu v0,v1,v0
00404880  bne v0,zero,0x00404a74
00404884  _nop
00404888  lw v1,0x1c(s8)
0040488c  lw v0,0x20(s8)
00404890  nop
00404894  addu v0,v1,v0
00404898  lw a0,0x38(s8)
0040489c  lw v1,0x24(s8)
004048a0  nop
004048a4  addu v1,a0,v1
004048a8  lb v1,0x0(v1)
004048ac  nop
004048b0  andi v1,v1,0xff
004048b4  srl v1,v1,0x2
004048b8  andi v1,v1,0xff
004048bc  sb v1,0x0(v0)
004048c0  lw v1,0x2c(s8)
004048c4  li v0,0x1
004048c8  bne v1,v0,0x00404960
004048cc  _nop
004048d0  lw v0,0x20(s8)
004048d4  nop
004048d8  addiu v0,v0,0x1
004048dc  lw v1,0x1c(s8)
004048e0  nop
004048e4  addu v1,v1,v0
004048e8  lw a0,0x38(s8)
004048ec  lw v0,0x24(s8)
004048f0  nop
004048f4  addu v0,a0,v0
004048f8  lb v0,0x0(v0)
004048fc  nop
00404900  andi v0,v0,0xff
00404904  andi v0,v0,0x3
00404908  sll v0,v0,0x4
0040490c  andi v0,v0,0xff
00404910  andi v0,v0,0x3f
00404914  sb v0,0x0(v1)
00404918  lw v0,0x20(s8)
0040491c  nop
00404920  addiu v0,v0,0x2
00404924  lw v1,0x1c(s8)
00404928  nop
0040492c  addu v0,v1,v0
00404930  li v1,0x40
00404934  sb v1,0x0(v0)
00404938  lw v0,0x20(s8)
0040493c  nop
00404940  addiu v0,v0,0x3
00404944  lw v1,0x1c(s8)
00404948  nop
0040494c  addu v0,v1,v0
00404950  li v1,0x40
00404954  sb v1,0x0(v0)
00404958  b 0x00404c48
0040495c  _nop
00404960  lw v1,0x2c(s8)
00404964  li v0,0x2
00404968  bne v1,v0,0x00404a74
0040496c  _nop
00404970  lw v0,0x20(s8)
00404974  nop
00404978  addiu v0,v0,0x1
0040497c  lw v1,0x1c(s8)
00404980  nop
00404984  addu v0,v1,v0
00404988  lw a0,0x38(s8)
0040498c  lw v1,0x24(s8)
00404990  nop
00404994  addu v1,a0,v1
00404998  lb v1,0x0(v1)
0040499c  nop
004049a0  andi v1,v1,0xff
004049a4  andi v1,v1,0x3
004049a8  sll v1,v1,0x4
004049ac  sll a0,v1,0x18
004049b0  sra a0,a0,0x18
004049b4  lw v1,0x24(s8)
004049b8  nop
004049bc  addiu v1,v1,0x1
004049c0  lw a1,0x38(s8)
004049c4  nop
004049c8  addu v1,a1,v1
004049cc  lb v1,0x0(v1)
004049d0  nop
004049d4  andi v1,v1,0xff
004049d8  srl v1,v1,0x4
004049dc  andi v1,v1,0xff
004049e0  sll v1,v1,0x18
004049e4  sra v1,v1,0x18
004049e8  or v1,a0,v1
004049ec  sll v1,v1,0x18
004049f0  sra v1,v1,0x18
004049f4  andi v1,v1,0xff
004049f8  sb v1,0x0(v0)
004049fc  lw v0,0x20(s8)
00404a00  nop
00404a04  addiu v0,v0,0x2
00404a08  lw v1,0x1c(s8)
00404a0c  nop
00404a10  addu v1,v1,v0
00404a14  lw v0,0x24(s8)
00404a18  nop
00404a1c  addiu v0,v0,0x1
00404a20  lw a0,0x38(s8)
00404a24  nop
00404a28  addu v0,a0,v0
00404a2c  lb v0,0x0(v0)
00404a30  nop
00404a34  andi v0,v0,0xff
00404a38  andi v0,v0,0xf
00404a3c  sll v0,v0,0x2
00404a40  andi v0,v0,0xff
00404a44  andi v0,v0,0x3f
00404a48  sb v0,0x0(v1)
00404a4c  lw v0,0x20(s8)
00404a50  nop
00404a54  addiu v0,v0,0x3
00404a58  lw v1,0x1c(s8)
00404a5c  nop
00404a60  addu v0,v1,v0
00404a64  li v1,0x40
00404a68  sb v1,0x0(v0)
00404a6c  b 0x00404c48
00404a70  _nop
00404a74  lw v1,0x1c(s8)
00404a78  lw v0,0x20(s8)
00404a7c  nop
00404a80  addu v0,v1,v0
00404a84  lw a0,0x38(s8)
00404a88  lw v1,0x24(s8)
00404a8c  nop
00404a90  addu v1,a0,v1
00404a94  lb v1,0x0(v1)
00404a98  nop
00404a9c  andi v1,v1,0xff
00404aa0  srl v1,v1,0x2
00404aa4  andi v1,v1,0xff
00404aa8  sb v1,0x0(v0)
00404aac  lw v0,0x20(s8)
00404ab0  nop
00404ab4  addiu v0,v0,0x1
00404ab8  lw v1,0x1c(s8)
00404abc  nop
00404ac0  addu v0,v1,v0
00404ac4  lw a0,0x38(s8)
00404ac8  lw v1,0x24(s8)
00404acc  nop
00404ad0  addu v1,a0,v1
00404ad4  lb v1,0x0(v1)
00404ad8  nop
00404adc  andi v1,v1,0xff
00404ae0  andi v1,v1,0x3
00404ae4  sll v1,v1,0x4
00404ae8  sll a0,v1,0x18
00404aec  sra a0,a0,0x18
00404af0  lw v1,0x24(s8)
00404af4  nop
00404af8  addiu v1,v1,0x1
00404afc  lw a1,0x38(s8)
00404b00  nop
00404b04  addu v1,a1,v1
00404b08  lb v1,0x0(v1)
00404b0c  nop
00404b10  andi v1,v1,0xff
00404b14  srl v1,v1,0x4
00404b18  andi v1,v1,0xff
00404b1c  sll v1,v1,0x18
00404b20  sra v1,v1,0x18
00404b24  or v1,a0,v1
00404b28  sll v1,v1,0x18
00404b2c  sra v1,v1,0x18
00404b30  andi v1,v1,0xff
00404b34  sb v1,0x0(v0)
00404b38  lw v0,0x20(s8)
00404b3c  nop
00404b40  addiu v0,v0,0x2
00404b44  lw v1,0x1c(s8)
00404b48  nop
00404b4c  addu v0,v1,v0
00404b50  lw v1,0x24(s8)
00404b54  nop
00404b58  addiu v1,v1,0x1
00404b5c  lw a0,0x38(s8)
00404b60  nop
00404b64  addu v1,a0,v1
00404b68  lb v1,0x0(v1)
00404b6c  nop
00404b70  andi v1,v1,0xff
00404b74  andi v1,v1,0xf
00404b78  sll v1,v1,0x2
00404b7c  sll a0,v1,0x18
00404b80  sra a0,a0,0x18
00404b84  lw v1,0x24(s8)
00404b88  nop
00404b8c  addiu v1,v1,0x2
00404b90  lw a1,0x38(s8)
00404b94  nop
00404b98  addu v1,a1,v1
00404b9c  lb v1,0x0(v1)
00404ba0  nop
00404ba4  andi v1,v1,0xff
00404ba8  srl v1,v1,0x6
00404bac  andi v1,v1,0xff
00404bb0  sll v1,v1,0x18
00404bb4  sra v1,v1,0x18
00404bb8  or v1,a0,v1
00404bbc  sll v1,v1,0x18
00404bc0  sra v1,v1,0x18
00404bc4  andi v1,v1,0xff
00404bc8  sb v1,0x0(v0)
00404bcc  lw v0,0x20(s8)
00404bd0  nop
00404bd4  addiu v0,v0,0x3
00404bd8  lw v1,0x1c(s8)
00404bdc  nop
00404be0  addu v1,v1,v0
00404be4  lw v0,0x24(s8)
00404be8  nop
00404bec  addiu v0,v0,0x2
00404bf0  lw a0,0x38(s8)
00404bf4  nop
00404bf8  addu v0,a0,v0
00404bfc  lb v0,0x0(v0)
00404c00  nop
00404c04  andi v0,v0,0xff
00404c08  andi v0,v0,0x3f
00404c0c  sb v0,0x0(v1)
00404c10  lw v0,0x24(s8)
00404c14  nop
00404c18  addiu v0,v0,0x3
00404c1c  sw v0,0x24(s8)
00404c20  lw v0,0x20(s8)
00404c24  nop
00404c28  addiu v0,v0,0x4
00404c2c  sw v0,0x20(s8)
00404c30  lw v1,0x3c(s8)
00404c34  lw v0,0x24(s8)
00404c38  nop
00404c3c  sltu v0,v0,v1
00404c40  bne v0,zero,0x00404868
00404c44  _nop
00404c48  sw zero,0x20(s8)
00404c4c  b 0x00404cac
00404c50  _nop
00404c54  lw v1,0x1c(s8)
00404c58  lw v0,0x20(s8)
00404c5c  nop
00404c60  addu v0,v1,v0
00404c64  lw a0,0x1c(s8)
00404c68  lw v1,0x20(s8)
00404c6c  nop
00404c70  addu v1,a0,v1
00404c74  lbu v1,0x0(v1)
00404c78  nop
00404c7c  move a0,v1
00404c80  lui v1,0x41
00404c84  addiu v1,v1,0x6200
00404c88  addu v1,a0,v1
00404c8c  lb v1,0x0(v1)
00404c90  nop
00404c94  andi v1,v1,0xff
00404c98  sb v1,0x0(v0)
00404c9c  lw v0,0x20(s8)
00404ca0  nop
00404ca4  addiu v0,v0,0x1
00404ca8  sw v0,0x20(s8)
00404cac  lw v1,0x20(s8)
00404cb0  lw v0,0x28(s8)
00404cb4  nop
00404cb8  sltu v0,v1,v0
00404cbc  bne v0,zero,0x00404c54
00404cc0  _nop
00404cc4  lw v0,0x1c(s8)
00404cc8  move sp,s8
00404ccc  lw ra,0x34(sp)
00404cd0  lw s8,0x30(sp)
00404cd4  addiu sp,sp,0x38
00404cd8  jr ra
00404cdc  _nop
