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

