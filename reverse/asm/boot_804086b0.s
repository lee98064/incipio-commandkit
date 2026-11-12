            ; CALL XREF from fcn.804019e8 @ 0x80401a1c(x)
            ; CALL XREF from fcn.8040880c @ 0x80408814(x)
┌ 348: fcn.804086b0 (int32_t arg1);
│ `- args(a0) vars(13:sp[0x4..0x50])
│           0x804086b0      27bdffa0       addiu sp, sp, -0x60
│           0x804086b4      afbf005c       sw ra, (var_5ch)
│           0x804086b8      afb60058       sw s6, (var_58h)
│           0x804086bc      afb50054       sw s5, (var_54h)
│           0x804086c0      afb40050       sw s4, (var_50h)
│           0x804086c4      afb3004c       sw s3, (var_4ch)
│           0x804086c8      afb20048       sw s2, (var_48h)
│           0x804086cc      afb10044       sw s1, (var_44h)
│           0x804086d0      afb00040       sw s0, (var_40h)
│           0x804086d4      0080a021       move s4, a0                 ; arg1
│           0x804086d8      27b00010       addiu s0, sp, 0x10
│           0x804086dc      02002021       move a0, s0                 ; int32_t arg1
│           0x804086e0      00002821       move a1, zero               ; int32_t arg2
│           0x804086e4      0c10200a       jal fcn.80408028
│           0x804086e8      27a60038       addiu a2, sp, 0x38          ; int32_t arg3
│           0x804086ec      00409021       move s2, v0
│           0x804086f0      27b10020       addiu s1, sp, 0x20
│           0x804086f4      02202021       move a0, s1                 ; int32_t arg1
│           0x804086f8      3c050040       lui a1, 0x40                ; int32_t arg2
│           0x804086fc      0c10200a       jal fcn.80408028
│           0x80408700      27a6003c       addiu a2, sp, 0x3c
│           0x80408704      00409821       move s3, v0
│           0x80408708      02402021       move a0, s2                 ; int32_t arg1
│           0x8040870c      0c101eaa       jal fcn.80407aa8
│           0x80408710      02002821       move a1, s0
│           0x80408714      00408021       move s0, v0
│           0x80408718      02602021       move a0, s3                 ; int32_t arg1
│           0x8040871c      0c101eaa       jal fcn.80407aa8
│           0x80408720      02202821       move a1, s1
│           0x80408724      0202182b       sltu v1, s0, v0
│       ┌─< 0x80408728      1060000a       beqz v1, 0x80408754
│       │   0x8040872c      3c038041       lui v1, 0x8041
│       │   0x80408730      24040002       addiu a0, zero, 2
│       │   0x80408734      ac64fdb0       sw a0, -0x250(v1)
│       │   0x80408738      3c038041       lui v1, 0x8041
│       │   0x8040873c      ac62fdb4       sw v0, -0x24c(v1)
│       │   0x80408740      0200b021       move s6, s0
│       │   0x80408744      3c100040       lui s0, 0x40
│       │   0x80408748      24150001       addiu s5, zero, 1
│      ┌──< 0x8040874c      081021dd       j 0x80408774
│      ││   0x80408750      00008821       move s1, zero
│      ││   ; CODE XREF from fcn.804086b0 @ 0x80408728(x)
│      │└─> 0x80408754      24040001       addiu a0, zero, 1
│      │    0x80408758      ac64fdb0       sw a0, -0x250(v1)
│      │    0x8040875c      3c038041       lui v1, 0x8041
│      │    0x80408760      ac70fdb4       sw s0, -0x24c(v1)
│      │    0x80408764      0040b021       move s6, v0
│      │    0x80408768      00008021       move s0, zero
│      │    0x8040876c      24150002       addiu s5, zero, 2
│      │    0x80408770      3c110040       lui s1, 0x40
│      │    ; CODE XREF from fcn.804086b0 @ 0x8040874c(x)
│      └──> 0x80408774      3c048041       lui a0, 0x8041              ; int32_t arg1
│           0x80408778      3c028041       lui v0, 0x8041
│           0x8040877c      8c45fdb0       lw a1, -0x250(v0)           ; int32_t arg_18h
│           0x80408780      3c028041       lui v0, 0x8041
│           0x80408784      8c46fdb4       lw a2, -0x24c(v0)           ; int32_t arg_1ch
│           0x80408788      0c101e73       jal fcn.804079cc
│           0x8040878c      2484dc90       addiu a0, a0, -0x2370       ; 0x8040dc90 ; "bootbank is %d, bankmark %X │           ; "                                                        ; str.bootbank_is__d__bankmark__X
│       ┌─< 0x80408790      16800007       bnez s4, 0x804087b0
│       │   0x80408794      27a50030       addiu a1, sp, 0x30
│      ┌──< 0x80408798      12400003       beqz s2, 0x804087a8
│      ││   0x8040879c      00000000       nop
│     ┌───< 0x804087a0      081021f9       j 0x804087e4
│     │││   0x804087a4      24020001       addiu v0, zero, 1
│     │││   ; CODE XREF from fcn.804086b0 @ 0x80408798(x)
│    ┌─└──> 0x804087a8      081021f9       j 0x804087e4
│    ││ │   0x804087ac      0013102b       sltu v0, zero, s3
│    ││ │   ; CODE XREF from fcn.804086b0 @ 0x80408790(x)
│    ││ └─> 0x804087b0      27a40020       addiu a0, sp, 0x20          ; int32_t arg1
│    ││     0x804087b4      0c10212f       jal fcn.804084bc
│    ││     0x804087b8      02003021       move a2, s0
│    ││ ┌─< 0x804087bc      14400009       bnez v0, 0x804087e4
│    ││ │   0x804087c0      27a40020       addiu a0, sp, 0x20
│    ││ │   0x804087c4      27a50030       addiu a1, sp, 0x30          ; int32_t arg2
│    ││ │   0x804087c8      0c10212f       jal fcn.804084bc
│    ││ │   0x804087cc      02203021       move a2, s1
│    ││┌──< 0x804087d0      10400004       beqz v0, 0x804087e4
│    ││││   0x804087d4      3c038041       lui v1, 0x8041
│    ││││   0x804087d8      ac75fdb0       sw s5, -0x250(v1)
│    ││││   0x804087dc      3c038041       lui v1, 0x8041
│    ││││   0x804087e0      ac76fdb4       sw s6, -0x24c(v1)
│    ││││   ; CODE XREFS from fcn.804086b0 @ 0x804087a0(x), 0x804087a8(x), 0x804087bc(x), 0x804087d0(x)
│    └└└└─> 0x804087e4      8fbf005c       lw ra, (var_5ch)
│           0x804087e8      8fb60058       lw s6, (var_58h)
│           0x804087ec      8fb50054       lw s5, (var_54h)
│           0x804087f0      8fb40050       lw s4, (var_50h)
│           0x804087f4      8fb3004c       lw s3, (var_4ch)
│           0x804087f8      8fb20048       lw s2, (var_48h)
│           0x804087fc      8fb10044       lw s1, (var_44h)
│           0x80408800      8fb00040       lw s0, (var_40h)
│           0x80408804      03e00008       jr ra
└           0x80408808      27bd0060       addiu sp, sp, 0x60
