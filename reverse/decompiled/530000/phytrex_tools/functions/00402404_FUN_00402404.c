/* FUN_00402404 @ 00402404 */

undefined4 FUN_00402404(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 local_2028;
  undefined1 auStack_2010 [8192];
  
  iVar1 = (*(code *)PTR_strcmp_004162ac)(param_1,&DAT_00405790);
  if (iVar1 == 0) {
    local_2028 = 0x6000;
  }
  else {
    iVar1 = (*(code *)PTR_strcmp_004162ac)(param_1,&DAT_00405794);
    if (iVar1 == 0) {
      local_2028 = 0x8000;
    }
    else {
      iVar1 = (*(code *)PTR_strcmp_004162ac)(param_1,&DAT_00405798);
      if (iVar1 != 0) {
        return 0;
      }
      local_2028 = 0xc000;
    }
  }
  iVar1 = (*(code *)PTR_open_0041628c)("/dev/mtdblock0",2);
  if (iVar1 == -1) {
    uVar6 = *(undefined4 *)PTR_stderr_004162a0;
    puVar2 = (undefined4 *)(*(code *)PTR___errno_location_00416294)();
    uVar3 = (*(code *)PTR_strerror_00416318)(*puVar2);
    (*(code *)PTR_fprintf_004162d8)(uVar6,&DAT_0040579c,uVar3);
    uVar3 = 0;
  }
  else {
    iVar4 = (*(code *)PTR_open_0041628c)("/dev/mtdblock5",0x80);
    if (iVar4 == -1) {
      uVar6 = *(undefined4 *)PTR_stderr_004162a0;
      puVar2 = (undefined4 *)(*(code *)PTR___errno_location_00416294)();
      uVar3 = (*(code *)PTR_strerror_00416318)(*puVar2);
      (*(code *)PTR_fprintf_004162d8)(uVar6,&DAT_004057c8,param_1,"/dev/mtdblock5",uVar3);
      uVar3 = 0;
    }
    else {
      iVar5 = (*(code *)PTR_lseek_004162ec)(iVar1,local_2028,0);
      if (iVar5 == -1) {
        uVar6 = *(undefined4 *)PTR_stderr_004162a0;
        puVar2 = (undefined4 *)(*(code *)PTR___errno_location_00416294)();
        uVar3 = (*(code *)PTR_strerror_00416318)(*puVar2);
        (*(code *)PTR_fprintf_004162d8)(uVar6,&DAT_004057f4,param_1,uVar3);
        uVar3 = 0;
      }
      else {
        (*(code *)PTR_lseek_004162ec)(iVar4,0x1000,0);
        if (iVar5 == -1) {
          uVar6 = *(undefined4 *)PTR_stderr_004162a0;
          puVar2 = (undefined4 *)(*(code *)PTR___errno_location_00416294)();
          uVar3 = (*(code *)PTR_strerror_00416318)(*puVar2);
          (*(code *)PTR_fprintf_004162d8)(uVar6,&DAT_004057f4,param_1,uVar3);
          uVar3 = 0;
        }
        else {
          iVar5 = (*(code *)PTR_read_004162d0)(iVar4,auStack_2010,0x1000);
          if (iVar5 < 0) {
            uVar6 = *(undefined4 *)PTR_stderr_004162a0;
            puVar2 = (undefined4 *)(*(code *)PTR___errno_location_00416294)();
            uVar3 = (*(code *)PTR_strerror_00416318)(*puVar2);
            (*(code *)PTR_fprintf_004162d8)(uVar6,&DAT_0040581c,param_1,uVar3);
            uVar3 = 0;
          }
          else {
            iVar5 = (*(code *)PTR_write_004162dc)(iVar1,auStack_2010,0x1000);
            if (iVar5 < 0) {
              uVar6 = *(undefined4 *)PTR_stderr_004162a0;
              puVar2 = (undefined4 *)(*(code *)PTR___errno_location_00416294)();
              uVar3 = (*(code *)PTR_strerror_00416318)(*puVar2);
              (*(code *)PTR_fprintf_004162d8)(uVar6,&DAT_0040584c,param_1,uVar3);
              uVar3 = 0;
            }
            else {
              (*(code *)PTR_close_00416284)(iVar4);
              (*(code *)PTR_close_00416284)(iVar1);
              (*(code *)PTR_printf_00416324)
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

