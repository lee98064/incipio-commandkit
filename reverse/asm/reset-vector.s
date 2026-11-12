        ┌─< 0xbfc00000      0bf00004       j 0xbfc00010
        │   0xbfc00004      00000000       nop
        │   0xbfc00008      00000000       nop
        │   0xbfc0000c      00000000       nop
        └─> 0xbfc00010      00004021       move t0, zero
            0xbfc00014      40886000       mtc0 t0, t4, 0
            0xbfc00018      00000000       nop
            0xbfc0001c      3c01b800       lui at, 0xb800
            0xbfc00020      00017825       or t7, zero, at
            0xbfc00024      8dee0000       lw t6, (t7)
            0xbfc00028      00000000       nop
            0xbfc0002c      000e7025       or t6, zero, t6
            0xbfc00030      3c018196       lui at, 0x8196
            0xbfc00034      3421e000       ori at, at, 0xe000
            0xbfc00038      00017825       or t7, zero, at
        ┌─< 0xbfc0003c      15cf000a       bne t6, t7, 0xbfc00068
        │   0xbfc00040      00000000       nop
        │   0xbfc00044      3c0fb800       lui t7, 0xb800
        │   0xbfc00048      35ef0008       ori t7, t7, 8
        │   0xbfc0004c      8dee0000       lw t6, (t7)
        │   0xbfc00050      2401ffff       addiu at, zero, -1
        │   0xbfc00054      01c17024       and t6, t6, at
        │   0xbfc00058      3c010008       lui at, 8
        │   0xbfc0005c      01c17025       or t6, t6, at
        │   0xbfc00060      adee0000       sw t6, (t7)
        │   0xbfc00064      00000000       nop
        └─> 0xbfc00068      00000000       nop
            0xbfc0006c      00000000       nop
            0xbfc00070      0ff000da       jal 0xbfc00368
            0xbfc00074      00000000       nop
            0xbfc00078      00000000       nop
            0xbfc0007c      3c013fff       lui at, 0x3fff
            0xbfc00080      3421ff80       ori at, at, 0xff80
            0xbfc00084      00017025       or t6, zero, at
            0xbfc00088      3c01b800       lui at, 0xb800
            0xbfc0008c      34211040       ori at, at, 0x1040
            0xbfc00090      00017825       or t7, zero, at
            0xbfc00094      adee0000       sw t6, (t7)
            0xbfc00098      00000000       nop
            0xbfc0009c      00000000       nop
            0xbfc000a0      3c017fff       lui at, 0x7fff
            0xbfc000a4      3421ff80       ori at, at, 0xff80
            0xbfc000a8      00017025       or t6, zero, at
            0xbfc000ac      3c01b800       lui at, 0xb800
            0xbfc000b0      34211040       ori at, at, 0x1040
            0xbfc000b4      00017825       or t7, zero, at
            0xbfc000b8      adee0000       sw t6, (t7)
            0xbfc000bc      00000000       nop
            0xbfc000c0      00000000       nop
            0xbfc000c4      3c015080       lui at, 0x5080
            0xbfc000c8      00017025       or t6, zero, at
            0xbfc000cc      3c01b800       lui at, 0xb800
            0xbfc000d0      34211050       ori at, at, 0x1050
            0xbfc000d4      00017825       or t7, zero, at
            0xbfc000d8      adee0000       sw t6, (t7)
            0xbfc000dc      00000000       nop
            0xbfc000e0      00000000       nop
            0xbfc000e4      340e0b08       ori t6, zero, 0xb08
            0xbfc000e8      3c01b800       lui at, 0xb800
            0xbfc000ec      34210010       ori at, at, 0x10
            0xbfc000f0      00017825       or t7, zero, at
            0xbfc000f4      adee0000       sw t6, (t7)
            0xbfc000f8      00000000       nop
            0xbfc000fc      00000000       nop
            0xbfc00100      3c01b800       lui at, 0xb800
            0xbfc00104      3421000c       ori at, at, 0xc
            0xbfc00108      00017825       or t7, zero, at
            0xbfc0010c      8dee0000       lw t6, (t7)
            0xbfc00110      00000000       nop
            0xbfc00114      00000000       nop
            0xbfc00118      000e7025       or t6, zero, t6
            0xbfc0011c      340f0007       ori t7, zero, 7
            0xbfc00120      15cf000e       bne t6, t7, 0xbfc0015c
            0xbfc00124      00000000       nop
            0xbfc00128      00000000       nop
            0xbfc0012c      000e7025       or t6, zero, t6
            0xbfc00130      340f0004       ori t7, zero, 4
            0xbfc00134      15cf0009       bne t6, t7, 0xbfc0015c
            0xbfc00138      00000000       nop
            0xbfc0013c      00000000       nop
            0xbfc00140      340e0ac8       ori t6, zero, 0xac8
            0xbfc00144      3c01b800       lui at, 0xb800
            0xbfc00148      34210010       ori at, at, 0x10
            0xbfc0014c      00017825       or t7, zero, at
            0xbfc00150      adee0000       sw t6, (t7)
            0xbfc00154      00000000       nop
            0xbfc00158      00000000       nop
            0xbfc0015c      3c0190e3       lui at, 0x90e3
            0xbfc00160      34216920       ori at, at, 0x6920
            0xbfc00164      00017025       or t6, zero, at
            0xbfc00168      3c01b800       lui at, 0xb800
            0xbfc0016c      34211008       ori at, at, 0x1008
            0xbfc00170      00017825       or t7, zero, at
            0xbfc00174      adee0000       sw t6, (t7)
            0xbfc00178      00000000       nop
            0xbfc0017c      3c015448       lui at, 0x5448
            0xbfc00180      00017025       or t6, zero, at
            0xbfc00184      3c01b800       lui at, 0xb800
            0xbfc00188      34211004       ori at, at, 0x1004
            0xbfc0018c      00017825       or t7, zero, at
            0xbfc00190      adee0000       sw t6, (t7)
            0xbfc00194      00000000       nop
            0xbfc00198      00000000       nop
            0xbfc0019c      00000000       nop
            0xbfc001a0      3c0fb800       lui t7, 0xb800
            0xbfc001a4      35ef0048       ori t7, t7, 0x48
            0xbfc001a8      8dee0000       lw t6, (t7)
            0xbfc001ac      3c01ff3f       lui at, 0xff3f
            0xbfc001b0      3421ffff       ori at, at, 0xffff
            0xbfc001b4      01c17024       and t6, t6, at
            0xbfc001b8      3c010080       lui at, 0x80
            0xbfc001bc      01c17025       or t6, t6, at
            0xbfc001c0      adee0000       sw t6, (t7)
            0xbfc001c4      00000000       nop
            0xbfc001c8      00000000       nop
            0xbfc001cc      3c0fb800       lui t7, 0xb800
            0xbfc001d0      35ef0088       ori t7, t7, 0x88
            0xbfc001d4      8dee0000       lw t6, (t7)
            0xbfc001d8      3c019fff       lui at, 0x9fff
            0xbfc001dc      3421ffff       ori at, at, 0xffff
            0xbfc001e0      01c17024       and t6, t6, at
            0xbfc001e4      35ce0000       ori t6, t6, 0
            0xbfc001e8      adee0000       sw t6, (t7)
            0xbfc001ec      00000000       nop
            0xbfc001f0      00000000       nop
            0xbfc001f4      3c0fb800       lui t7, 0xb800
            0xbfc001f8      35ef008c       ori t7, t7, 0x8c
            0xbfc001fc      8dee0000       lw t6, (t7)
            0xbfc00200      2401ff83       addiu at, zero, -0x7d
            0xbfc00204      01c17024       and t6, t6, at
            0xbfc00208      35ce007c       ori t6, t6, 0x7c
            0xbfc0020c      adee0000       sw t6, (t7)
            0xbfc00210      00000000       nop
            0xbfc00214      00000000       nop
            0xbfc00218      0ff000a2       jal 0xbfc00288
            0xbfc0021c      00000000       nop
            0xbfc00220      4080a000       mtc0 zero, s4, 0
            0xbfc00224      00000000       nop
            0xbfc00228      24080003       addiu t0, zero, 3
            0xbfc0022c      4088a000       mtc0 t0, s4, 0
            0xbfc00230      00000000       nop
            0xbfc00234      4080a000       mtc0 zero, s4, 0
            0xbfc00238      00000000       nop
            0xbfc0023c      00000000       nop
            0xbfc00240      00000000       nop
            0xbfc00244      00000000       nop
            0xbfc00248      3c1abfc0       lui k0, 0xbfc0
            0xbfc0024c      275a0580       addiu k0, k0, 0x580
            0xbfc00250      3c1bbfc0       lui k1, 0xbfc0
            0xbfc00254      277b5b68       addiu k1, k1, 0x5b68
            0xbfc00258      3c098010       lui t1, 0x8010
            0xbfc0025c      8f480000       lw t0, (k0)
            0xbfc00260      00000000       nop
            0xbfc00264      ad280000       sw t0, (t1)
            0xbfc00268      00000000       nop
            0xbfc0026c      25290004       addiu t1, t1, 4
            0xbfc00270      275a0004       addiu k0, k0, 4
            0xbfc00274      177afff9       bne k1, k0, 0xbfc0025c
            0xbfc00278      00000000       nop
            0xbfc0027c      3c1a8010       lui k0, 0x8010
            0xbfc00280      03400008       jr k0
            0xbfc00284      00000000       nop
            0xbfc00288      3c0ba000       lui t3, 0xa000
            0xbfc0028c      3c025a5a       lui v0, 0x5a5a
            0xbfc00290      3442a5a5       ori v0, v0, 0xa5a5
            0xbfc00294      3c0ab800       lui t2, 0xb800
            0xbfc00298      354a1050       ori t2, t2, 0x1050
            0xbfc0029c      3c098000       lui t1, 0x8000
            0xbfc002a0      24060000       addiu a2, zero, 0
            0xbfc002a4      240e0021       addiu t6, zero, 0x21
            0xbfc002a8      240d0000       addiu t5, zero, 0
            0xbfc002ac      240f0021       addiu t7, zero, 0x21
            0xbfc002b0      ad620000       sw v0, (t3)
            0xbfc002b4      24030001       addiu v1, zero, 1
            0xbfc002b8      01202021       move a0, t1
            0xbfc002bc      3c0c00ff       lui t4, 0xff
            0xbfc002c0      358c00ff       ori t4, t4, 0xff
            0xbfc002c4      3c08005a       lui t0, 0x5a
            0xbfc002c8      350800a5       ori t0, t0, 0xa5
            0xbfc002cc      01803821       move a3, t4
            0xbfc002d0      01002821       move a1, t0
            0xbfc002d4      2462ffff       addiu v0, v1, -1
            0xbfc002d8      00031640       sll v0, v1, 0x19
            0xbfc002dc      00821025       or v0, a0, v0
            0xbfc002e0      14c00008       bnez a2, 0xbfc00304
            0xbfc002e4      ad420000       sw v0, (t2)
            0xbfc002e8      8d620000       lw v0, (t3)
            0xbfc002ec      00000000       nop
            0xbfc002f0      004c1024       and v0, v0, t4
            0xbfc002f4      14480008       bne v0, t0, 0xbfc00318
            0xbfc002f8      00000000       nop
            0xbfc002fc      0bf000c6       j 0xbfc00318
            0xbfc00300      00603021       move a2, v1
            0xbfc00304      8d620000       lw v0, (t3)
            0xbfc00308      00000000       nop
            0xbfc0030c      00471024       and v0, v0, a3
            0xbfc00310      14450004       bne v0, a1, 0xbfc00324
            0xbfc00314      00000000       nop
            0xbfc00318      24630001       addiu v1, v1, 1
            0xbfc0031c      2c620021       sltiu v0, v1, 0x21
            0xbfc00320      1440ffed       bnez v0, 0xbfc002d8
            0xbfc00324      2478ffff       addiu t8, v1, -1
            0xbfc00328      3c02c000       lui v0, 0xc000
            0xbfc0032c      01224824       and t1, t1, v0
            0xbfc00330      03061020       add v0, t8, a2
            0xbfc00334      00021042       srl v0, v0, 1
            0xbfc00338      0040c821       move t9, v0
            0xbfc0033c      00021640       sll v0, v0, 0x19
            0xbfc00340      0019cd00       sll t9, t9, 0x14
            0xbfc00344      01224825       or t1, t1, v0
            0xbfc00348      01394825       or t1, t1, t9
            0xbfc0034c      ad490000       sw t1, (t2)
            0xbfc00350      00000000       nop
            0xbfc00354      00000000       nop
            0xbfc00358      0bf000d8       j 0xbfc00360
            0xbfc0035c      00000000       nop
            0xbfc00360      03e00008       jr ra
            0xbfc00364      00000000       nop
            0xbfc00368      3c010300       lui at, 0x300
            0xbfc0036c      00017025       or t6, zero, at
            0xbfc00370      3c01b800       lui at, 0xb800
            0xbfc00374      3421200c       ori at, at, 0x200c
            0xbfc00378      00017825       or t7, zero, at
            0xbfc0037c      adee0000       sw t6, (t7)
            0xbfc00380      00000000       nop
            0xbfc00384      3c01c700       lui at, 0xc700
            0xbfc00388      00017025       or t6, zero, at
            0xbfc0038c      3c01b800       lui at, 0xb800
            0xbfc00390      34212008       ori at, at, 0x2008
            0xbfc00394      00017825       or t7, zero, at
            0xbfc00398      adee0000       sw t6, (t7)
            0xbfc0039c      00000000       nop
            0xbfc003a0      340e0000       ori t6, zero, 0
            0xbfc003a4      3c01b800       lui at, 0xb800
            0xbfc003a8      34212004       ori at, at, 0x2004
            0xbfc003ac      00017825       or t7, zero, at
            0xbfc003b0      adee0000       sw t6, (t7)
            0xbfc003b4      00000000       nop
            0xbfc003b8      3c018300       lui at, 0x8300
            0xbfc003bc      00017025       or t6, zero, at
            0xbfc003c0      3c01b800       lui at, 0xb800
            0xbfc003c4      3421200c       ori at, at, 0x200c
            0xbfc003c8      00017825       or t7, zero, at
            0xbfc003cc      adee0000       sw t6, (t7)
            0xbfc003d0      00000000       nop
            0xbfc003d4      3c014400       lui at, 0x4400
            0xbfc003d8      00017025       or t6, zero, at
            0xbfc003dc      3c01b800       lui at, 0xb800
            0xbfc003e0      34212000       ori at, at, 0x2000
            0xbfc003e4      00017825       or t7, zero, at
            0xbfc003e8      adee0000       sw t6, (t7)
            0xbfc003ec      00000000       nop
            0xbfc003f0      3c010100       lui at, 0x100
            0xbfc003f4      00017025       or t6, zero, at
            0xbfc003f8      3c01b800       lui at, 0xb800
            0xbfc003fc      34212004       ori at, at, 0x2004
            0xbfc00400      00017825       or t7, zero, at
            0xbfc00404      adee0000       sw t6, (t7)
            0xbfc00408      00000000       nop
            0xbfc0040c      3c010300       lui at, 0x300
            0xbfc00410      00017025       or t6, zero, at
            0xbfc00414      3c01b800       lui at, 0xb800
            0xbfc00418      3421200c       ori at, at, 0x200c
            0xbfc0041c      00017825       or t7, zero, at
            0xbfc00420      adee0000       sw t6, (t7)
            0xbfc00424      00000000       nop
            0xbfc00428      3c0dbfc0       lui t5, 0xbfc0
            0xbfc0042c      25ad0468       addiu t5, t5, 0x468
            0xbfc00430      91ae0000       lbu t6, (t5)
            0xbfc00434      11c0000a       beqz t6, 0xbfc00460
            0xbfc00438      25ad0001       addiu t5, t5, 1
            0xbfc0043c      000e7600       sll t6, t6, 0x18
            0xbfc00440      000e7025       or t6, zero, t6
            0xbfc00444      3c01b800       lui at, 0xb800
            0xbfc00448      34212000       ori at, at, 0x2000
            0xbfc0044c      00017825       or t7, zero, at
            0xbfc00450      adee0000       sw t6, (t7)
            0xbfc00454      00000000       nop
            0xbfc00458      0bf0010c       j 0xbfc00430
            0xbfc0045c      00000000       nop
            0xbfc00460      03e00008       jr ra
            0xbfc00464      00000000       nop
            0xbfc00468      0d0a426f       jal 0xb42909bc
            0xbfc0046c      6f74696e       invalid
            0xbfc00470      672e2e2e       invalid
            0xbfc00474      0d0a0054       jal 0xb4280150
            0xbfc00478      5c527c20       invalid
            0xbfc0047c      30203120       andi zero, at, 0x3120
            0xbfc00480      32203320       andi zero, s1, 0x3320
            0xbfc00484      34203520       ori zero, at, 0x3520
            0xbfc00488      36203720       ori zero, s1, 0x3720
            0xbfc0048c      38203920       xori zero, at, 0x3920
            0xbfc00490      61206220       invalid
            0xbfc00494      63206420       invalid
            0xbfc00498      65206620       invalid
            0xbfc0049c      30203120       andi zero, at, 0x3120
            0xbfc004a0      32203320       andi zero, s1, 0x3320
            0xbfc004a4      34203520       ori zero, at, 0x3520
            0xbfc004a8      36203720       ori zero, s1, 0x3720
            0xbfc004ac      38203920       xori zero, at, 0x3920
            0xbfc004b0      61206220       invalid
            0xbfc004b4      63206420       invalid
            0xbfc004b8      6520660d       invalid
            0xbfc004bc      0a002d2d       j 0xb800b4b4
            0xbfc004c0      2d2b2d2d       sltiu t3, t1, 0x2d2d
            0xbfc004c4      2d2d2d2d       sltiu t5, t1, 0x2d2d
            0xbfc004c8      2d2d2d2d       sltiu t5, t1, 0x2d2d
            0xbfc004cc      2d2d2d2d       sltiu t5, t1, 0x2d2d
            0xbfc004d0      2d2d2d2d       sltiu t5, t1, 0x2d2d
            0xbfc004d4      2d2d2d2d       sltiu t5, t1, 0x2d2d
            0xbfc004d8      2d2d2d2d       sltiu t5, t1, 0x2d2d
            0xbfc004dc      2d2d2d2d       sltiu t5, t1, 0x2d2d
            0xbfc004e0      2d2d2d2d       sltiu t5, t1, 0x2d2d
            0xbfc004e4      2d2d2d2d       sltiu t5, t1, 0x2d2d
            0xbfc004e8      2d2d2d2d       sltiu t5, t1, 0x2d2d
            0xbfc004ec      2d2d2d2d       sltiu t5, t1, 0x2d2d
            0xbfc004f0      2d2d2d2d       sltiu t5, t1, 0x2d2d
            0xbfc004f4      2d2d2d2d       sltiu t5, t1, 0x2d2d
            0xbfc004f8      2d2d2d2d       sltiu t5, t1, 0x2d2d
            0xbfc004fc      2d2d2d2d       sltiu t5, t1, 0x2d2d
            0xbfc00500      2d2d2d0d       sltiu t5, t1, 0x2d0d
            0xbfc00504      0a006162       j 0xb8018588
            0xbfc00508      63646566       invalid
            0xbfc0050c      6768696a       invalid
            0xbfc00510      6b003031       invalid
            0xbfc00514      32333435       andi s3, s1, 0x3435
            0xbfc00518      36373839       ori s7, s1, 0x3839
            0xbfc0051c      61626364       invalid
            0xbfc00520      65660000       invalid
            0xbfc00524      00000000       nop
            0xbfc00528      00000000       nop
            0xbfc0052c      00000000       nop
            0xbfc00530      0d0a4454       jal 0xb4291150
            0xbfc00534      5220446f       beql s1, zero, 0xbfc116f4
            0xbfc00538      6e652e0d       invalid
            0xbfc0053c      0a000d0a       j 0xb8003428
            0xbfc00540      44435220       invalid
            0xbfc00544      446f6e65       invalid
            0xbfc00548      2e0d0a00       sltiu t5, s0, 0xa00
            0xbfc0054c      0d0a4444       jal 0xb4291110
