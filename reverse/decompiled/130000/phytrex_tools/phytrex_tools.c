/* Ghidra-generated pseudo-C; not original source or a buildable project. */
/* _init @ 00400a3c */

int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  FUN_00400c38();
  iVar1 = FUN_00404e60();
  return iVar1;
}


/* entry @ 00400ad0 */

void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_20 [16];
  undefined *local_10;
  undefined4 local_c;
  undefined1 *local_8;
  
  local_8 = auStack_20;
  local_10 = PTR__fini_00415eb8;
  local_c = param_1;
  (*(code *)PTR___uClibc_main_00415ed4)
            (PTR_main_00415ec4,param_2,&stack0x00000004,PTR__init_00415ef8);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* FUN_00400b30 @ 00400b30 */

void FUN_00400b30(void)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  code *pcVar6;
  
  if (PTR_DAT_00415e78[0x5f50] == '\0') {
    if (PTR___cxa_finalize_00415f0c != (undefined *)0x0) {
      (*(code *)PTR___cxa_finalize_00415f0c)(*(undefined4 *)PTR_LOOP_00415e7c);
    }
    puVar1 = PTR_DAT_00415e78;
    puVar4 = PTR_DAT_00415e78 + 0x5dec;
    iVar5 = (int)PTR___DTOR_END___00415e80 - (int)puVar4;
    while( true ) {
      uVar2 = *(uint *)(puVar1 + 0x5f54);
      iVar3 = uVar2 + 1;
      if ((iVar5 >> 2) - 1U <= uVar2) break;
      pcVar6 = *(code **)(puVar4 + iVar3 * 4);
      *(int *)(puVar1 + 0x5f54) = iVar3;
      (*pcVar6)();
    }
    if (PTR___deregister_frame_info_00415ef0 != (undefined *)0x0) {
      (*(code *)PTR___deregister_frame_info_00415ef0)(PTR___DT_MIPS_BASE_ADDRESS_00415e84 + 0x5de0);
    }
    PTR_DAT_00415e78[0x5f50] = 1;
  }
  return;
}


/* FUN_00400c38 @ 00400c38 */

void FUN_00400c38(void)

{
  if (PTR___register_frame_info_00415f20 != (undefined *)0x0) {
    (*(code *)PTR___register_frame_info_00415f20)
              (PTR___DT_MIPS_BASE_ADDRESS_00415e84 + 0x5de0,PTR_DAT_00415e78 + 0x5f58);
  }
  if (*(int *)(PTR_DAT_00415e78 + 0x5df4) != 0) {
    if (PTR__Jv_RegisterClasses_00415e98 != (undefined *)0x0) {
      (*(code *)PTR__Jv_RegisterClasses_00415e98)(PTR_DAT_00415e78 + 0x5df4);
      return;
    }
  }
  return;
}


/* main @ 00400cd0 */

void main(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strcmp_00415ebc)(param_2[1],&DAT_004050c0);
  if (iVar1 == 0) {
    iVar1 = (*(code *)PTR_backup_partitin_00415f18)(param_2[2]);
    if (iVar1 == 0) {
      (*(code *)PTR_fprintf_00415ee8)
                (*(undefined4 *)PTR_stderr_00415eb0,"%s:Backup partition fail!\n",*param_2);
    }
  }
  else {
    iVar1 = (*(code *)PTR_strcmp_00415ebc)(param_2[1],&DAT_004050e0);
    if (iVar1 == 0) {
      (*(code *)PTR_one_time_init_00415eac)();
    }
    else {
      iVar1 = (*(code *)PTR_strcmp_00415ebc)(param_2[1],&DAT_004050e8);
      if (iVar1 == 0) {
        (*(code *)PTR_writeProductInfo_handler_00415ed0)(param_2);
      }
      else {
        iVar1 = (*(code *)PTR_strcmp_00415ebc)(param_2[1],&DAT_004050f0);
        if (iVar1 == 0) {
          (*(code *)PTR_productInfoDel_handler_00415f28)(param_2);
        }
        else {
          iVar1 = (*(code *)PTR_strcmp_00415ebc)(param_2[1],&DAT_004050f8);
          if (iVar1 == 0) {
            (*(code *)PTR_productInfoDel_handler_00415f28)(param_2);
          }
          else {
            iVar1 = (*(code *)PTR_strcmp_00415ebc)(param_2[1],"-wsetupcode");
            if ((iVar1 == 0) && (param_1 == 3)) {
              iVar1 = (*(code *)PTR_strlen_00415ea0)(param_2[2]);
              if (iVar1 != 10) {
                (*(code *)PTR_printf_00415f30)
                          ("\n setup code\'s length is not 8 and format is xxx-xx-xxx ");
                return;
              }
              iVar1 = (*(code *)PTR_writeHomeKitSetupCode_00415f34)(param_2[2]);
              if (iVar1 == 0) {
                (*(code *)PTR_printf_00415f30)("\n setup code write failed");
                return;
              }
            }
            iVar1 = (*(code *)PTR_strcmp_00415ebc)(param_2[1],"-rsetupcode");
            if ((iVar1 == 0) && (iVar1 = (*(code *)PTR_readHomeKitSetupCode_00415eb4)(), iVar1 == 0)
               ) {
              (*(code *)PTR_printf_00415f30)("\n setup code read failed");
            }
          }
        }
      }
    }
  }
  return;
}


/* FUN_00401110 @ 00401110 */

void FUN_00401110(undefined *param_1,byte *param_2,byte *param_3,int param_4,byte param_5,
                 int param_6)

{
  bool bVar1;
  int iVar2;
  byte *local_res4;
  byte *local_res8;
  byte *local_30;
  uint local_2c;
  byte local_28 [24];
  byte local_10;
  
  local_10 = param_5;
  local_30 = local_28;
  if (param_2 != (byte *)0x0) {
    if ((param_5 & 1) != 0) {
      (*(code *)PTR_putchar_00415f40)(10);
    }
    local_res8 = param_3;
    if (param_3 == (byte *)0x0) {
      iVar2 = param_4;
      if (param_4 == 0) {
        iVar2 = 0x20;
      }
      local_res8 = param_2 + iVar2;
    }
    if (param_1 == (undefined *)0x0) {
      param_1 = &DAT_004051b0;
    }
    (*(code *)PTR_printf_00415f30)
              ("dump %s %p-%p len:%u flag:%u\n",param_1,param_2,local_res8,param_4,local_10);
    local_2c = 0;
    for (local_res4 = param_2; local_res4 < local_res8; local_res4 = local_res4 + 1) {
      if ((*local_res4 < 0x20) || (0x7e < *local_res4)) {
        if ((*local_res4 == 10) || (*local_res4 == 0xd)) {
          *local_30 = 0x2e;
        }
        else {
          *local_30 = 0x2e;
        }
      }
      else {
        *local_30 = *local_res4;
      }
      local_30 = local_30 + 1;
      *local_30 = 0;
      if ((local_2c & 0xf) == 0) {
        (*(code *)PTR_printf_00415f30)
                  ("%p:%08X(%010u) %02X ",local_res4,local_2c,local_2c,*local_res4);
      }
      else if ((local_2c == 0) || ((local_2c & 0xf) != 0xf)) {
        if ((local_2c & 7) == 7) {
          (*(code *)PTR_printf_00415f30)("%02X:",*local_res4);
        }
        else if ((local_2c & 3) == 3) {
          (*(code *)PTR_printf_00415f30)("%02X-",*local_res4);
        }
        else {
          (*(code *)PTR_printf_00415f30)("%02X ",*local_res4);
        }
      }
      else {
        (*(code *)PTR_printf_00415f30)("%02X %s\n",*local_res4,local_28);
        local_30 = local_28;
        local_28[0] = 0;
        if (param_6 != 0) {
          local_res4 = local_res4 + param_6 + -0x10;
          local_2c = (local_2c + param_6) - 0x10;
        }
      }
      local_2c = local_2c + 1;
    }
    local_2c = local_2c & 0xf;
    while ((local_2c != 0 && (bVar1 = local_2c != 0x10, local_2c = local_2c + 1, bVar1))) {
      (*(code *)PTR_printf_00415f30)(&DAT_004051f0);
    }
    (*(code *)PTR_printf_00415f30)(&DAT_004051f4,local_28);
    if ((local_10 & 2) != 0) {
      (*(code *)PTR_putchar_00415f40)(10);
    }
  }
  return;
}


/* FUN_0040164c @ 0040164c */

bool FUN_0040164c(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 auStack_58 [2];
  
  iVar7 = -((param_2 - param_1) + 0xeU & 0xfffffff8);
  iVar1 = (*(code *)PTR_open_00415e9c)("/dev/mtdblock0",0x80);
  if (iVar1 == -1) {
    uVar8 = *(undefined4 *)PTR_stderr_00415eb0;
    puVar2 = (undefined4 *)(*(code *)PTR___errno_location_00415ea4)();
    uVar3 = (*(code *)PTR_strerror_00415f24)(*puVar2);
    (*(code *)PTR_fprintf_00415ee8)(uVar8,&DAT_00405208,param_3,uVar3);
    return false;
  }
  iVar4 = (*(code *)PTR_open_00415e9c)("/dev/mtdblock5",2);
  if (iVar4 == -1) {
    uVar8 = *(undefined4 *)PTR_stderr_00415eb0;
    puVar2 = (undefined4 *)(*(code *)PTR___errno_location_00415ea4)();
    uVar3 = (*(code *)PTR_strerror_00415f24)(*puVar2);
    *(undefined4 *)((int)auStack_58 + iVar7) = uVar3;
    (*(code *)PTR_fprintf_00415ee8)(uVar8,&DAT_00405248,param_3,"/dev/mtdblock5");
    return false;
  }
  iVar5 = (*(code *)PTR_lseek_00415efc)(iVar1,param_1,0);
  if (iVar5 == -1) {
    uVar8 = *(undefined4 *)PTR_stderr_00415eb0;
    puVar2 = (undefined4 *)(*(code *)PTR___errno_location_00415ea4)();
    uVar3 = (*(code *)PTR_strerror_00415f24)(*puVar2);
    (*(code *)PTR_fprintf_00415ee8)(uVar8,&DAT_00405274,param_3,uVar3);
    return false;
  }
  iVar6 = (*(code *)PTR_read_00415ee0)(iVar1,&stack0xffffffb0 + iVar7,param_2 - param_1);
  if (-1 < iVar6) {
    iVar6 = (*(code *)PTR_strstr_00415ee4)(param_3,"def2backup");
    if (((iVar6 != 0) || (iVar6 = (*(code *)PTR_strstr_00415ee4)(param_3,"cur2backup"), iVar6 != 0))
       && ((*(code *)PTR_lseek_00415efc)(iVar4,param_1 + -0x6000,0), iVar5 == -1)) {
      uVar8 = *(undefined4 *)PTR_stderr_00415eb0;
      puVar2 = (undefined4 *)(*(code *)PTR___errno_location_00415ea4)();
      uVar3 = (*(code *)PTR_strerror_00415f24)(*puVar2);
      (*(code *)PTR_fprintf_00415ee8)(uVar8,&DAT_004052dc,param_3,uVar3);
      return false;
    }
    iVar7 = (*(code *)PTR_write_00415eec)(iVar4,&stack0xffffffb0 + iVar7,param_2 - param_1);
    if (-1 < iVar7) {
      (*(code *)PTR_close_00415e94)(iVar4);
      (*(code *)PTR_close_00415e94)(iVar1);
      (*(code *)PTR_printf_00415f30)
                ("Partition2Backup %s:Write to backup partition successful.\n",param_3);
    }
    else {
      uVar8 = *(undefined4 *)PTR_stderr_00415eb0;
      puVar2 = (undefined4 *)(*(code *)PTR___errno_location_00415ea4)();
      uVar3 = (*(code *)PTR_strerror_00415f24)(*puVar2);
      (*(code *)PTR_fprintf_00415ee8)(uVar8,&DAT_00405304,param_3,uVar3);
    }
    return -1 < iVar7;
  }
  uVar8 = *(undefined4 *)PTR_stderr_00415eb0;
  puVar2 = (undefined4 *)(*(code *)PTR___errno_location_00415ea4)();
  uVar3 = (*(code *)PTR_strerror_00415f24)(*puVar2);
  (*(code *)PTR_fprintf_00415ee8)(uVar8,&DAT_0040529c,param_3,uVar3);
  return false;
}


/* FUN_00401ce8 @ 00401ce8 */

undefined4 FUN_00401ce8(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 auStack_58 [2];
  
  iVar6 = -((param_2 - param_1) + 0xeU & 0xfffffff8);
  iVar1 = (*(code *)PTR_open_00415e9c)("/dev/mtdblock0",2);
  if (iVar1 == -1) {
    uVar7 = *(undefined4 *)PTR_stderr_00415eb0;
    puVar2 = (undefined4 *)(*(code *)PTR___errno_location_00415ea4)();
    uVar3 = (*(code *)PTR_strerror_00415f24)(*puVar2);
    (*(code *)PTR_fprintf_00415ee8)(uVar7,&DAT_00405368,param_3,uVar3);
    return 0;
  }
  iVar4 = (*(code *)PTR_open_00415e9c)("/dev/mtdblock5",0x80);
  if (iVar4 == -1) {
    uVar7 = *(undefined4 *)PTR_stderr_00415eb0;
    puVar2 = (undefined4 *)(*(code *)PTR___errno_location_00415ea4)();
    uVar3 = (*(code *)PTR_strerror_00415f24)(*puVar2);
    *(undefined4 *)((int)auStack_58 + iVar6) = uVar3;
    (*(code *)PTR_fprintf_00415ee8)(uVar7,&DAT_00405398,param_3,"/dev/mtdblock5");
    return 0;
  }
  iVar5 = (*(code *)PTR_lseek_00415efc)(iVar1,param_1,0);
  if (iVar5 == -1) {
    uVar7 = *(undefined4 *)PTR_stderr_00415eb0;
    puVar2 = (undefined4 *)(*(code *)PTR___errno_location_00415ea4)();
    uVar3 = (*(code *)PTR_strerror_00415f24)(*puVar2);
    (*(code *)PTR_fprintf_00415ee8)(uVar7,&DAT_004053c4,param_3,uVar3);
    return 0;
  }
  iVar5 = (*(code *)PTR_strstr_00415ee4)(param_3,"backup2def");
  if (((iVar5 != 0) || (iVar5 = (*(code *)PTR_strstr_00415ee4)(param_3,"backup2cur"), iVar5 != 0))
     && (iVar5 = (*(code *)PTR_lseek_00415efc)(iVar4,param_1 + -0x6000,0), iVar5 == -1)) {
    uVar7 = *(undefined4 *)PTR_stderr_00415eb0;
    puVar2 = (undefined4 *)(*(code *)PTR___errno_location_00415ea4)();
    uVar3 = (*(code *)PTR_strerror_00415f24)(*puVar2);
    (*(code *)PTR_fprintf_00415ee8)(uVar7,&DAT_00405404,param_3,uVar3);
    return 0;
  }
  iVar5 = (*(code *)PTR_read_00415ee0)(iVar4,&stack0xffffffb0 + iVar6,param_2 - param_1);
  if (iVar5 < 0) {
    uVar7 = *(undefined4 *)PTR_stderr_00415eb0;
    puVar2 = (undefined4 *)(*(code *)PTR___errno_location_00415ea4)();
    uVar3 = (*(code *)PTR_strerror_00415f24)(*puVar2);
    (*(code *)PTR_fprintf_00415ee8)(uVar7,&DAT_0040542c,param_3,uVar3);
    uVar3 = 0;
  }
  else {
    iVar6 = (*(code *)PTR_write_00415eec)(iVar1,&stack0xffffffb0 + iVar6,param_2 - param_1);
    if (iVar6 < 0) {
      uVar7 = *(undefined4 *)PTR_stderr_00415eb0;
      puVar2 = (undefined4 *)(*(code *)PTR___errno_location_00415ea4)();
      uVar3 = (*(code *)PTR_strerror_00415f24)(*puVar2);
      (*(code *)PTR_fprintf_00415ee8)(uVar7,&DAT_00405454,param_3,uVar3);
      uVar3 = 0;
    }
    else {
      (*(code *)PTR_close_00415e94)(iVar4);
      (*(code *)PTR_close_00415e94)(iVar1);
      (*(code *)PTR_printf_00415f30)("Backup2Partition %s:Write partition successful.\n",param_3);
      uVar3 = 1;
    }
  }
  return uVar3;
}


/* FUN_00402384 @ 00402384 */

undefined4 FUN_00402384(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 local_2028;
  undefined1 auStack_2010 [8192];
  
  iVar1 = (*(code *)PTR_strcmp_00415ebc)(param_1,&DAT_004054b0);
  if (iVar1 == 0) {
    local_2028 = 0x6000;
  }
  else {
    iVar1 = (*(code *)PTR_strcmp_00415ebc)(param_1,&DAT_004054b4);
    if (iVar1 == 0) {
      local_2028 = 0x8000;
    }
    else {
      iVar1 = (*(code *)PTR_strcmp_00415ebc)(param_1,&DAT_004054b8);
      if (iVar1 != 0) {
        return 0;
      }
      local_2028 = 0xc000;
    }
  }
  iVar1 = (*(code *)PTR_open_00415e9c)("/dev/mtdblock0",2);
  if (iVar1 == -1) {
    uVar6 = *(undefined4 *)PTR_stderr_00415eb0;
    puVar2 = (undefined4 *)(*(code *)PTR___errno_location_00415ea4)();
    uVar3 = (*(code *)PTR_strerror_00415f24)(*puVar2);
    (*(code *)PTR_fprintf_00415ee8)(uVar6,&DAT_004054bc,uVar3);
    uVar3 = 0;
  }
  else {
    iVar4 = (*(code *)PTR_open_00415e9c)("/dev/mtdblock5",0x80);
    if (iVar4 == -1) {
      uVar6 = *(undefined4 *)PTR_stderr_00415eb0;
      puVar2 = (undefined4 *)(*(code *)PTR___errno_location_00415ea4)();
      uVar3 = (*(code *)PTR_strerror_00415f24)(*puVar2);
      (*(code *)PTR_fprintf_00415ee8)(uVar6,&DAT_004054e8,param_1,"/dev/mtdblock5",uVar3);
      uVar3 = 0;
    }
    else {
      iVar5 = (*(code *)PTR_lseek_00415efc)(iVar1,local_2028,0);
      if (iVar5 == -1) {
        uVar6 = *(undefined4 *)PTR_stderr_00415eb0;
        puVar2 = (undefined4 *)(*(code *)PTR___errno_location_00415ea4)();
        uVar3 = (*(code *)PTR_strerror_00415f24)(*puVar2);
        (*(code *)PTR_fprintf_00415ee8)(uVar6,&DAT_00405514,param_1,uVar3);
        uVar3 = 0;
      }
      else {
        (*(code *)PTR_lseek_00415efc)(iVar4,0x1000,0);
        if (iVar5 == -1) {
          uVar6 = *(undefined4 *)PTR_stderr_00415eb0;
          puVar2 = (undefined4 *)(*(code *)PTR___errno_location_00415ea4)();
          uVar3 = (*(code *)PTR_strerror_00415f24)(*puVar2);
          (*(code *)PTR_fprintf_00415ee8)(uVar6,&DAT_00405514,param_1,uVar3);
          uVar3 = 0;
        }
        else {
          iVar5 = (*(code *)PTR_read_00415ee0)(iVar4,auStack_2010,0x1000);
          if (iVar5 < 0) {
            uVar6 = *(undefined4 *)PTR_stderr_00415eb0;
            puVar2 = (undefined4 *)(*(code *)PTR___errno_location_00415ea4)();
            uVar3 = (*(code *)PTR_strerror_00415f24)(*puVar2);
            (*(code *)PTR_fprintf_00415ee8)(uVar6,&DAT_0040553c,param_1,uVar3);
            uVar3 = 0;
          }
          else {
            iVar5 = (*(code *)PTR_write_00415eec)(iVar1,auStack_2010,0x1000);
            if (iVar5 < 0) {
              uVar6 = *(undefined4 *)PTR_stderr_00415eb0;
              puVar2 = (undefined4 *)(*(code *)PTR___errno_location_00415ea4)();
              uVar3 = (*(code *)PTR_strerror_00415f24)(*puVar2);
              (*(code *)PTR_fprintf_00415ee8)(uVar6,&DAT_0040556c,param_1,uVar3);
              uVar3 = 0;
            }
            else {
              (*(code *)PTR_close_00415e94)(iVar4);
              (*(code *)PTR_close_00415e94)(iVar1);
              (*(code *)PTR_printf_00415f30)
                        ("Damage-partition:Broken %s setting partition successful.\n",param_1);
              uVar3 = 1;
            }
          }
        }
      }
    }
  }
  return uVar3;
}


/* backup_partitin @ 00402964 */

undefined4 backup_partitin(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar1 = (*(code *)PTR_strcmp_00415ebc)(param_1,&DAT_004055d0);
  if (iVar1 == 0) {
    iVar1 = FUN_0040164c(0x6000,0x8000,"hw2backup");
  }
  else {
    iVar1 = (*(code *)PTR_strcmp_00415ebc)(param_1,&DAT_004055e4);
    if (iVar1 == 0) {
      iVar1 = FUN_0040164c(0x8000,0xc000,"def2backup");
    }
    else {
      iVar1 = (*(code *)PTR_strcmp_00415ebc)(param_1,&DAT_004055ec);
      if (iVar1 == 0) {
        iVar1 = FUN_0040164c(0xc000,0x10000,"cur2backup");
      }
      else {
        iVar1 = (*(code *)PTR_strcmp_00415ebc)(param_1,&DAT_004055f4);
        if (iVar1 == 0) {
          iVar1 = FUN_00401ce8(0x6000,0x8000,"backup2hw");
        }
        else {
          iVar1 = (*(code *)PTR_strcmp_00415ebc)(param_1,&DAT_00405608);
          if (iVar1 == 0) {
            iVar1 = FUN_00401ce8(0x8000,0xc000,"backup2def");
          }
          else {
            iVar1 = (*(code *)PTR_strcmp_00415ebc)(param_1,&DAT_00405610);
            if (iVar1 == 0) {
              iVar1 = FUN_00401ce8(0xc000,0x10000,"backup2cur");
            }
            else {
              iVar1 = (*(code *)PTR_strcmp_00415ebc)(param_1,&DAT_00405618);
              if (iVar1 == 0) {
                iVar1 = FUN_00402384(&DAT_004054b0);
              }
              else {
                iVar1 = (*(code *)PTR_strcmp_00415ebc)(param_1,&DAT_0040561c);
                if (iVar1 == 0) {
                  iVar1 = FUN_00402384(&DAT_004054b4);
                }
                else {
                  iVar1 = (*(code *)PTR_strcmp_00415ebc)(param_1,&DAT_00405620);
                  if (iVar1 != 0) {
                    (*(code *)PTR_puts_00415f10)("Backup partition tools for backup MIB value. ");
                    (*(code *)PTR_puts_00415f10)
                              (
                              "phytrex_tools -bp: usage: phytrex_tools -bp [-h2b|-d2b|-c2b|-b2h|-b2d|-b2c]"
                              );
                    (*(code *)PTR_puts_00415f10)("          -h2b:Backup HW MIB value.");
                    (*(code *)PTR_puts_00415f10)("          -d2b:Backup Default MIB value.");
                    (*(code *)PTR_puts_00415f10)("          -c2b:Backup Current MIB value.");
                    (*(code *)PTR_puts_00415f10)
                              ("          -b2h:Restore HW MIB value from backup partition.");
                    (*(code *)PTR_puts_00415f10)
                              ("          -b2d:Restore Default MIB value from backup partition.");
                    (*(code *)PTR_puts_00415f10)
                              ("          -b2c:Restore Current MIB value from backup partition.");
                    return 1;
                  }
                  iVar1 = FUN_00402384(&DAT_004054b8);
                }
              }
            }
          }
        }
      }
    }
  }
  if (iVar1 != 0) {
    return 1;
  }
  uVar4 = *(undefined4 *)PTR_stderr_00415eb0;
  puVar2 = (undefined4 *)(*(code *)PTR___errno_location_00415ea4)();
  uVar3 = (*(code *)PTR_strerror_00415f24)(*puVar2);
  (*(code *)PTR_fprintf_00415ee8)(uVar4,&DAT_004057d8,param_1,uVar3);
  return 0;
}


/* one_time_init @ 00402e40 */

void one_time_init(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char local_48;
  char local_47;
  
  (*(code *)PTR_system_00415f08)("gigadevice_chk  chk `flash get HW_WLAN0_WLAN_ADDR`");
  iVar1 = (*(code *)PTR_fopen_00415ecc)("/proc/OTP",&DAT_00405840);
  if (iVar1 == 0) {
    uVar4 = *(undefined4 *)PTR_stderr_00415eb0;
    puVar2 = (undefined4 *)(*(code *)PTR___errno_location_00415ea4)();
    uVar3 = (*(code *)PTR_strerror_00415f24)(*puVar2);
    (*(code *)PTR_fprintf_00415ee8)(uVar4,&DAT_004058d4,uVar3);
  }
  else {
    (*(code *)PTR_fgets_00415f1c)(&local_48,10,iVar1);
    if ((local_48 == 'O') && (local_47 == 'K')) {
      (*(code *)PTR_puts_00415f10)("OTP Check pass!");
    }
    else {
      (*(code *)PTR_system_00415f08)("killall -9 WACServer 2> /dev/null");
      (*(code *)PTR_system_00415f08)("killall -9 homekitserver 2> /dev/null");
      (*(code *)PTR_system_00415f08)("killall -9 wfaudio 2> /dev/null");
      (*(code *)PTR_fwrite_00415ea8)(&DAT_004058b0,1,0x11,*(undefined4 *)PTR_stderr_00415eb0);
    }
    (*(code *)PTR_fclose_00415ec0)(iVar1);
  }
  return;
}


/* writeProductInfo_handler @ 00403090 */

void writeProductInfo_handler(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 8) == 0) {
    (*(code *)PTR_puts_00415f10)("argv[2] error.");
  }
  else {
    iVar1 = (*(code *)PTR_strcmp_00415ebc)(*(undefined4 *)(param_1 + 8),"PARCE");
    if (iVar1 == 0) {
      (*(code *)PTR_write_productInfo_parce_00415f2c)(param_1);
    }
    else {
      iVar1 = (*(code *)PTR_strcmp_00415ebc)(*(undefined4 *)(param_1 + 8),"PHYTREX");
      if (iVar1 == 0) {
        (*(code *)PTR_write_productInfo_phytrex_00415ef4)(param_1);
      }
      else {
        iVar1 = (*(code *)PTR_strcmp_00415ebc)(*(undefined4 *)(param_1 + 8),"INCIPIO");
        if (iVar1 == 0) {
          (*(code *)PTR_write_productInfo_incipio_00415ed8)(param_1);
        }
      }
    }
  }
  return;
}


/* write_productInfo_parce @ 00403230 */

void write_productInfo_parce(int param_1)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_44 [13];
  undefined1 auStack_37 [20];
  undefined1 auStack_23 [27];
  
  (*(code *)PTR_memset_00415ec8)(auStack_44,0,0x35);
  if (((*(int *)(param_1 + 0xc) == 0) || (*(int *)(param_1 + 0x10) == 0)) ||
     (*(int *)(param_1 + 0x14) == 0)) {
    (*(code *)PTR_puts_00415f10)("argv 3, 4, 5 error.");
  }
  else {
    iVar1 = (*(code *)PTR_memcmp_00415edc)(*(undefined4 *)(param_1 + 0xc),"hardwareInfo",0xd);
    if (iVar1 == 0) {
      (*(code *)PTR_strcpy_00415f38)(auStack_44,*(undefined4 *)(param_1 + 0xc));
      (*(code *)PTR_strcpy_00415f38)(auStack_37,*(undefined4 *)(param_1 + 0x10));
      (*(code *)PTR_strcpy_00415f38)(auStack_23,*(undefined4 *)(param_1 + 0x14));
      (*(code *)PTR_puts_00415f10)("[METER] write production info:");
      (*(code *)PTR_printf_00415f30)("              signature : [%s] \n",auStack_44);
      (*(code *)PTR_printf_00415f30)("              Serial NUM : [%s] \n",auStack_37);
      (*(code *)PTR_printf_00415f30)("              Write perimt : [%s] \n",auStack_23);
      iVar1 = (*(code *)PTR_open_00415e9c)("/dev/mtdblock5",2);
      if (iVar1 < 1) {
        (*(code *)PTR_puts_00415f10)("write production to flash open fail......");
      }
      else {
        iVar2 = (*(code *)PTR_lseek_00415efc)(iVar1,0x18000,0);
        if (iVar2 == -1) {
          (*(code *)PTR_puts_00415f10)("write production to flash lseek fail......");
        }
        iVar2 = (*(code *)PTR_write_00415eec)(iVar1,auStack_44,0x35);
        if (iVar2 == -1) {
          (*(code *)PTR_puts_00415f10)("write production to flash fail.......");
        }
      }
      (*(code *)PTR_close_00415e94)(iVar1);
    }
    else {
      (*(code *)PTR_puts_00415f10)("signature fail");
    }
  }
  return;
}


/* write_productInfo_phytrex @ 00403600 */

void write_productInfo_phytrex(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_1c [20];
  
  (*(code *)PTR_strcpy_00415f38)(auStack_1c,*(undefined4 *)(param_2 + 0xc));
  iVar1 = (*(code *)PTR_open_00415e9c)("/dev/mtdblock5",2);
  if (iVar1 < 1) {
    (*(code *)PTR_puts_00415f10)("write production to flash open fail......");
  }
  else {
    iVar2 = (*(code *)PTR_lseek_00415efc)(iVar1,0x10000,0);
    if (iVar2 == -1) {
      (*(code *)PTR_puts_00415f10)("write production to flash lseek fail......");
    }
    iVar1 = (*(code *)PTR_write_00415eec)(iVar1,auStack_1c,0x14);
    if (iVar1 == -1) {
      (*(code *)PTR_puts_00415f10)("write production to flash write fail.......");
    }
  }
  return;
}


/* write_productInfo_incipio @ 00403780 */

void write_productInfo_incipio(int param_1)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_2c [14];
  undefined1 auStack_1e [22];
  
  (*(code *)PTR_memset_00415ec8)(auStack_2c,0,0x22);
  if ((*(int *)(param_1 + 0xc) == 0) || (*(int *)(param_1 + 0x10) == 0)) {
    (*(code *)PTR_puts_00415f10)("argv 3, 4 error.");
  }
  else {
    iVar1 = (*(code *)PTR_memcmp_00415edc)(*(undefined4 *)(param_1 + 0xc),"AccessoryInfo",0xe);
    if (iVar1 == 0) {
      (*(code *)PTR_strcpy_00415f38)(auStack_2c,*(undefined4 *)(param_1 + 0xc));
      (*(code *)PTR_strcpy_00415f38)(auStack_1e,*(undefined4 *)(param_1 + 0x10));
      (*(code *)PTR_puts_00415f10)("[METER] write production info:");
      (*(code *)PTR_printf_00415f30)("              signature : [%s] \n",auStack_2c);
      (*(code *)PTR_printf_00415f30)("              Serial NUM : [%s] \n",auStack_1e);
      iVar1 = (*(code *)PTR_open_00415e9c)("/dev/mtdblock5",2);
      if (iVar1 < 1) {
        (*(code *)PTR_puts_00415f10)("write production to flash open fail......");
      }
      else {
        iVar2 = (*(code *)PTR_lseek_00415efc)(iVar1,0x18000,0);
        if (iVar2 == -1) {
          (*(code *)PTR_puts_00415f10)("write production to flash lseek fail......");
        }
        iVar2 = (*(code *)PTR_write_00415eec)(iVar1,auStack_2c,0x22);
        if (iVar2 == -1) {
          (*(code *)PTR_puts_00415f10)("write production to flash fail.......");
        }
      }
      (*(code *)PTR_close_00415e94)(iVar1);
    }
    else {
      (*(code *)PTR_puts_00415f10)("signature fail");
    }
  }
  return;
}


/* productInfoDel_handler @ 00403ad0 */

void productInfoDel_handler(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 8) == 0) {
    (*(code *)PTR_puts_00415f10)("argv[2] error.");
  }
  else {
    iVar1 = (*(code *)PTR_strcmp_00415ebc)(*(undefined4 *)(param_1 + 8),"WDATA");
    if (iVar1 == 0) {
      (*(code *)PTR_wPartionDataDel_00415f00)(param_1);
    }
    else {
      iVar1 = (*(code *)PTR_strcmp_00415ebc)(*(undefined4 *)(param_1 + 8),"HWINFO");
      if (iVar1 == 0) {
        (*(code *)PTR_hwInfoDel_00415f3c)(param_1);
      }
      else {
        (*(code *)PTR_puts_00415f10)("InfoDel argv error");
      }
    }
  }
  return;
}


/* FUN_00403c40 @ 00403c40 */

void FUN_00403c40(void)

{
  int iVar1;
  int iVar2;
  undefined4 local_c;
  
  local_c = 100;
  iVar1 = (*(code *)PTR_open_00415e9c)("/dev/mtdblock5",2);
  if (iVar1 < 1) {
    (*(code *)PTR_puts_00415f10)("open initFd fail");
  }
  else {
    (*(code *)PTR_lseek_00415efc)(iVar1,0x10000,0);
    iVar2 = (*(code *)PTR_write_00415eec)(iVar1,&local_c,4);
    if (iVar2 == -1) {
      (*(code *)PTR_puts_00415f10)("Initial hksettinginfo to flash fail.......");
    }
    (*(code *)PTR_puts_00415f10)("Initial hksettinginfo done");
  }
  (*(code *)PTR_close_00415e94)(iVar1);
  return;
}


/* wPartionDataDel @ 00403d94 */

void wPartionDataDel(void)

{
  int iVar1;
  undefined1 auStack_800c [32772];
  
  (*(code *)PTR_memset_00415ec8)(auStack_800c,0,0x8000);
  iVar1 = (*(code *)PTR_open_00415e9c)("/dev/mtdblock5",2);
  if (iVar1 < 1) {
    (*(code *)PTR_puts_00415f10)("open keyFd fail");
  }
  else {
    (*(code *)PTR_lseek_00415efc)(iVar1,0x10000,0);
    (*(code *)PTR_write_00415eec)(iVar1,auStack_800c,0x8000);
    (*(code *)PTR_puts_00415f10)("clean parce write key");
    (*(code *)PTR_system_00415f08)("echo 1 > /var/cleanWriteablePartition");
  }
  (*(code *)PTR_close_00415e94)(iVar1);
  FUN_00403c40();
  return;
}


/* hwInfoDel @ 00403f20 */

void hwInfoDel(void)

{
  int iVar1;
  undefined1 auStack_44 [60];
  
  (*(code *)PTR_memset_00415ec8)(auStack_44,0,0x35);
  iVar1 = (*(code *)PTR_open_00415e9c)("/dev/mtdblock5",2);
  if (0 < iVar1) {
    (*(code *)PTR_lseek_00415efc)(iVar1,0x18000,0);
    (*(code *)PTR_write_00415eec)(iVar1,auStack_44,0x35);
    (*(code *)PTR_close_00415e94)(iVar1);
  }
  return;
}


/* FUN_00404030 @ 00404030 */

int FUN_00404030(char param_1)

{
  int local_10;
  
  local_10 = 0;
  while( true ) {
    if (0x40 < local_10) {
      return -1;
    }
    if (param_1 == s_ABCDEFGHIJKLMNOPQRSTUVWXYZabcdef_00415e10[local_10]) break;
    local_10 = local_10 + 1;
  }
  return local_10;
}


/* FUN_004040bc @ 004040bc */

int FUN_004040bc(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_40;
  uint local_2c;
  uint local_28;
  int local_20 [5];
  
  iVar1 = param_2;
  if (param_2 < 0) {
    iVar1 = param_2 + 3;
  }
  iVar1 = (iVar1 >> 2) * 3;
  iVar2 = (*(code *)PTR_malloc_00415f04)(iVar1 + 1);
  (*(code *)PTR_memset_00415ec8)(iVar2,0,iVar1 + 1);
  if (param_2 < 0) {
    param_2 = param_2 + 3;
  }
  local_28 = 0;
  while( true ) {
    if ((uint)(param_2 >> 2) <= local_28) {
      return iVar2;
    }
    iVar1 = local_28 * 3;
    local_40 = 0;
    for (local_2c = 0; local_2c < 4; local_2c = local_2c + 1) {
      iVar3 = FUN_00404030((int)*(char *)(param_1 + local_28 * 4 + local_2c));
      local_20[local_2c] = iVar3;
    }
    if ((param_2 >> 2) - 1U == local_28) {
      for (local_2c = 0; local_2c < 4; local_2c = local_2c + 1) {
        if (local_20[local_2c] == 0x40) {
          local_40 = local_40 + 1;
        }
      }
    }
    *(byte *)(iVar2 + iVar1) =
         (byte)((uint)(local_20[0] << 0x1a) >> 0x18) | (byte)((int)(local_20[1] & 0x30U) >> 4);
    if (local_40 == 2) break;
    *(byte *)(iVar2 + iVar1 + 1) =
         (byte)((uint)(local_20[1] << 0x1c) >> 0x18) | (byte)((int)(local_20[2] & 0x3cU) >> 2);
    if (local_40 == 1) {
      return iVar2;
    }
    *(byte *)(iVar2 + iVar1 + 2) =
         (byte)((uint)(local_20[2] << 0x1e) >> 0x18) | (byte)local_20[3] & 0x3f;
    local_28 = local_28 + 1;
  }
  return iVar2;
}


/* FUN_00404448 @ 00404448 */

int FUN_00404448(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint local_18;
  uint local_14;
  
  if ((int)param_2 % 3 == 0) {
    iVar1 = (int)param_2 / 3;
  }
  else {
    iVar1 = (int)param_2 / 3 + 1;
  }
  uVar2 = iVar1 * 4;
  iVar1 = (*(code *)PTR_malloc_00415f04)(uVar2 + 1);
  (*(code *)PTR_memset_00415ec8)(iVar1,0,uVar2 + 1);
  local_14 = 0;
  local_18 = 0;
  do {
    if (param_2 <= local_14) {
LAB_00404978:
      for (local_18 = 0; local_18 < uVar2; local_18 = local_18 + 1) {
        *(char *)(iVar1 + local_18) =
             s_ABCDEFGHIJKLMNOPQRSTUVWXYZabcdef_00415e10[*(byte *)(iVar1 + local_18)];
      }
      return iVar1;
    }
    if (param_2 <= local_14 + 2) {
      *(byte *)(iVar1 + local_18) = *(byte *)(param_1 + local_14) >> 2;
      if ((int)param_2 % 3 == 1) {
        *(byte *)(iVar1 + local_18 + 1) = (*(byte *)(param_1 + local_14) & 3) << 4;
        *(undefined1 *)(iVar1 + local_18 + 2) = 0x40;
        *(undefined1 *)(iVar1 + local_18 + 3) = 0x40;
        goto LAB_00404978;
      }
      if ((int)param_2 % 3 == 2) {
        *(byte *)(iVar1 + local_18 + 1) =
             (byte)(((*(byte *)(param_1 + local_14) & 3) << 0x1c) >> 0x18) |
             *(byte *)(param_1 + local_14 + 1) >> 4;
        *(byte *)(iVar1 + local_18 + 2) = (*(byte *)(param_1 + local_14 + 1) & 0xf) << 2;
        *(undefined1 *)(iVar1 + local_18 + 3) = 0x40;
        goto LAB_00404978;
      }
    }
    *(byte *)(iVar1 + local_18) = *(byte *)(param_1 + local_14) >> 2;
    *(byte *)(iVar1 + local_18 + 1) =
         (byte)(((*(byte *)(param_1 + local_14) & 3) << 0x1c) >> 0x18) |
         *(byte *)(param_1 + local_14 + 1) >> 4;
    *(byte *)(iVar1 + local_18 + 2) =
         (byte)(((*(byte *)(param_1 + local_14 + 1) & 0xf) << 0x1a) >> 0x18) |
         *(byte *)(param_1 + local_14 + 2) >> 6;
    *(byte *)(iVar1 + local_18 + 3) = *(byte *)(param_1 + local_14 + 2) & 0x3f;
    local_14 = local_14 + 3;
    local_18 = local_18 + 4;
  } while( true );
}


/* writeHomeKitSetupCode @ 00404a10 */

undefined4 writeHomeKitSetupCode(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [17];
  undefined1 local_b;
  
  (*(code *)PTR_memcpy_00415f14)(auStack_20,&DAT_00405d50,5);
  uVar1 = (*(code *)PTR_strlen_00415ea0)(param_1);
  uVar1 = FUN_00404448(param_1,uVar1);
  (*(code *)PTR_strcpy_00415f38)(auStack_1c,uVar1);
  local_b = 0;
  iVar2 = (*(code *)PTR_open_00415e9c)("/dev/mtdblock2",2);
  if (iVar2 == 0) {
    (*(code *)PTR_puts_00415f10)("open fail........");
  }
  else {
    iVar3 = (*(code *)PTR_lseek_00415efc)(iVar2,0x10000,0);
    if (iVar3 != -1) {
      iVar3 = (*(code *)PTR_write_00415eec)(iVar2,auStack_20,0x18);
      if (iVar3 != -1) {
        (*(code *)PTR_puts_00415f10)("[HOMEKIT] Store setup code to flash success");
        if (iVar2 != 0) {
          (*(code *)PTR_close_00415e94)(iVar2);
        }
        return 1;
      }
      (*(code *)PTR_puts_00415f10)("write fail........");
    }
  }
  if (iVar2 != 0) {
    (*(code *)PTR_close_00415e94)(iVar2);
  }
  return 0;
}


/* readHomeKitSetupCode @ 00404c60 */

undefined4 readHomeKitSetupCode(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [17];
  undefined1 local_13;
  
  iVar1 = (*(code *)PTR_open_00415e9c)("/dev/mtdblock2",2);
  if (iVar1 < 1) {
    (*(code *)PTR_printf_00415f30)("open MTD device %s fail...\n","/dev/mtdblock2");
  }
  else {
    iVar2 = (*(code *)PTR_lseek_00415efc)(iVar1,0x10000,0);
    if ((iVar2 != -1) && (iVar2 = (*(code *)PTR_read_00415ee0)(iVar1,auStack_28,0x18), iVar2 != -1))
    {
      local_13 = 0;
      uVar3 = (*(code *)PTR_strlen_00415ea0)(auStack_24);
      uVar3 = FUN_004040bc(auStack_24,uVar3);
      (*(code *)PTR_printf_00415f30)(&DAT_00405dd8,uVar3);
      if (0 < iVar1) {
        (*(code *)PTR_close_00415e94)(iVar1);
      }
      return 1;
    }
  }
  if (0 < iVar1) {
    (*(code *)PTR_close_00415e94)(iVar1);
  }
  return 0;
}


/* FUN_00404e60 @ 00404e60 */

void FUN_00404e60(void)

{
  undefined4 *puVar1;
  code *pcVar2;
  
  puVar1 = (undefined4 *)(PTR_DAT_00415e78 + 0x5de4);
  while( true ) {
    pcVar2 = (code *)*puVar1;
    puVar1 = puVar1 + -1;
    if (pcVar2 == (code *)0xffffffff) break;
    (*pcVar2)();
  }
  return;
}


/* _fini @ 00405060 */

void _fini(void)

{
  FUN_00400b30();
  return;
}


