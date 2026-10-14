/* Ghidra-generated pseudo-C; not original source or a buildable project. */
/* _init @ 00400628 */

int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  FUN_00400828();
  iVar1 = FUN_00400d00();
  return iVar1;
}


/* entry @ 004006c0 */

void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_20 [16];
  undefined *local_10;
  undefined4 local_c;
  undefined1 *local_8;
  
  local_8 = auStack_20;
  local_10 = PTR__fini_00410f10;
  local_c = param_1;
  (*(code *)PTR___uClibc_main_00410f1c)
            (PTR_main_00410f18,param_2,&stack0x00000004,PTR__init_00410f2c);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* FUN_00400720 @ 00400720 */

void FUN_00400720(void)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  code *pcVar6;
  
  if (PTR_DAT_00410ee8[0xf50] == '\0') {
    if (PTR___cxa_finalize_00410f30 != (undefined *)0x0) {
      (*(code *)PTR___cxa_finalize_00410f30)(*(undefined4 *)PTR_LOOP_00410eec);
    }
    puVar1 = PTR_DAT_00410ee8;
    puVar4 = PTR_DAT_00410ee8 + 0xeac;
    iVar5 = (int)PTR___DTOR_END___00410ef0 - (int)puVar4;
    while( true ) {
      uVar2 = *(uint *)(puVar1 + 0xf54);
      iVar3 = uVar2 + 1;
      if ((iVar5 >> 2) - 1U <= uVar2) break;
      pcVar6 = *(code **)(puVar4 + iVar3 * 4);
      *(int *)(puVar1 + 0xf54) = iVar3;
      (*pcVar6)();
    }
    if (PTR___deregister_frame_info_00410f28 != (undefined *)0x0) {
      (*(code *)PTR___deregister_frame_info_00410f28)(PTR___DT_MIPS_BASE_ADDRESS_00410ef4 + 0xea0);
    }
    PTR_DAT_00410ee8[0xf50] = 1;
  }
  return;
}


/* FUN_00400828 @ 00400828 */

void FUN_00400828(void)

{
  if (PTR___register_frame_info_00410f38 != (undefined *)0x0) {
    (*(code *)PTR___register_frame_info_00410f38)
              (PTR___DT_MIPS_BASE_ADDRESS_00410ef4 + 0xea0,PTR_DAT_00410ee8 + 0xf58);
  }
  if (*(int *)(PTR_DAT_00410ee8 + 0xeb4) != 0) {
    if (PTR__Jv_RegisterClasses_00410f08 != (undefined *)0x0) {
      (*(code *)PTR__Jv_RegisterClasses_00410f08)(PTR_DAT_00410ee8 + 0xeb4);
      return;
    }
  }
  return;
}


/* FUN_004008c0 @ 004008c0 */

undefined4 FUN_004008c0(int param_1)

{
  int iVar1;
  int iVar2;
  char *local_48;
  undefined1 auStack_44 [10];
  undefined1 auStack_3a [50];
  
  if (*(int *)(param_1 + 4) != 0) {
    iVar1 = (*(code *)PTR_open_00410f0c)("/proc/OTP",0x82);
    if (iVar1 < 0) {
      (*(code *)PTR_puts_00410f34)("/proc open error");
    }
    else {
      (*(code *)PTR_strcpy_00410f3c)(auStack_44,*(undefined4 *)(param_1 + 4));
      iVar2 = (*(code *)PTR_strcmp_00410f14)(auStack_44,&DAT_00400e70);
      if (iVar2 == 0) {
        if (*(int *)(param_1 + 8) == 0) {
          return 1;
        }
        for (local_48 = *(char **)(param_1 + 8); (*local_48 != '\0' && (*local_48 != '='));
            local_48 = local_48 + 1) {
        }
        if (*local_48 == '\0') {
          local_48 = "None";
        }
        else {
          local_48 = local_48 + 1;
        }
        (*(code *)PTR_strcpy_00410f3c)(auStack_3a,local_48);
        (*(code *)PTR_strcat_00410f20)(auStack_3a,&DAT_00400e7c);
        (*(code *)PTR_strcat_00410f20)(auStack_3a,&DAT_00400e80);
      }
      else {
        iVar2 = (*(code *)PTR_strcmp_00410f14)(auStack_44,&DAT_00400e88);
        if (iVar2 == 0) {
          if (*(int *)(param_1 + 8) == 0) {
            return 1;
          }
          for (local_48 = *(char **)(param_1 + 8); (*local_48 != '\0' && (*local_48 != '='));
              local_48 = local_48 + 1) {
          }
          if (*local_48 == '\0') {
            local_48 = "None";
          }
          else {
            local_48 = local_48 + 1;
          }
          (*(code *)PTR_strcpy_00410f3c)(auStack_3a,local_48);
        }
      }
      iVar2 = (*(code *)PTR_write_00410f24)(iVar1,auStack_44,0x3c);
      if (iVar2 < 1) {
        (*(code *)PTR_puts_00410f34)("write error");
      }
      (*(code *)PTR_close_00410f04)(iVar1);
    }
  }
  return 1;
}


/* main @ 00400cc0 */

undefined4 main(undefined4 param_1,undefined4 param_2)

{
  FUN_004008c0(param_2);
  return 0;
}


/* FUN_00400d00 @ 00400d00 */

void FUN_00400d00(void)

{
  undefined4 *puVar1;
  code *pcVar2;
  
  puVar1 = (undefined4 *)(PTR_DAT_00410ee8 + 0xea4);
  while( true ) {
    pcVar2 = (code *)*puVar1;
    puVar1 = puVar1 + -1;
    if (pcVar2 == (code *)0xffffffff) break;
    (*pcVar2)();
  }
  return;
}


/* _fini @ 00400df0 */

void _fini(void)

{
  FUN_00400720();
  return;
}


