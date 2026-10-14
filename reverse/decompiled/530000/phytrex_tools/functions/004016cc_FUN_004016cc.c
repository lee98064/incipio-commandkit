/* FUN_004016cc @ 004016cc */

bool FUN_004016cc(int param_1,int param_2,undefined4 param_3)

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
  iVar1 = (*(code *)PTR_open_0041628c)("/dev/mtdblock0",0x80);
  if (iVar1 == -1) {
    uVar8 = *(undefined4 *)PTR_stderr_004162a0;
    puVar2 = (undefined4 *)(*(code *)PTR___errno_location_00416294)();
    uVar3 = (*(code *)PTR_strerror_00416318)(*puVar2);
    (*(code *)PTR_fprintf_004162d8)(uVar8,&DAT_004054e8,param_3,uVar3);
    return false;
  }
  iVar4 = (*(code *)PTR_open_0041628c)("/dev/mtdblock5",2);
  if (iVar4 == -1) {
    uVar8 = *(undefined4 *)PTR_stderr_004162a0;
    puVar2 = (undefined4 *)(*(code *)PTR___errno_location_00416294)();
    uVar3 = (*(code *)PTR_strerror_00416318)(*puVar2);
    *(undefined4 *)((int)auStack_58 + iVar7) = uVar3;
    (*(code *)PTR_fprintf_004162d8)(uVar8,&DAT_00405528,param_3,"/dev/mtdblock5");
    return false;
  }
  iVar5 = (*(code *)PTR_lseek_004162ec)(iVar1,param_1,0);
  if (iVar5 == -1) {
    uVar8 = *(undefined4 *)PTR_stderr_004162a0;
    puVar2 = (undefined4 *)(*(code *)PTR___errno_location_00416294)();
    uVar3 = (*(code *)PTR_strerror_00416318)(*puVar2);
    (*(code *)PTR_fprintf_004162d8)(uVar8,&DAT_00405554,param_3,uVar3);
    return false;
  }
  iVar6 = (*(code *)PTR_read_004162d0)(iVar1,&stack0xffffffb0 + iVar7,param_2 - param_1);
  if (-1 < iVar6) {
    iVar6 = (*(code *)PTR_strstr_004162d4)(param_3,"def2backup");
    if (((iVar6 != 0) || (iVar6 = (*(code *)PTR_strstr_004162d4)(param_3,"cur2backup"), iVar6 != 0))
       && ((*(code *)PTR_lseek_004162ec)(iVar4,param_1 + -0x6000,0), iVar5 == -1)) {
      uVar8 = *(undefined4 *)PTR_stderr_004162a0;
      puVar2 = (undefined4 *)(*(code *)PTR___errno_location_00416294)();
      uVar3 = (*(code *)PTR_strerror_00416318)(*puVar2);
      (*(code *)PTR_fprintf_004162d8)(uVar8,&DAT_004055bc,param_3,uVar3);
      return false;
    }
    iVar7 = (*(code *)PTR_write_004162dc)(iVar4,&stack0xffffffb0 + iVar7,param_2 - param_1);
    if (-1 < iVar7) {
      (*(code *)PTR_close_00416284)(iVar4);
      (*(code *)PTR_close_00416284)(iVar1);
      (*(code *)PTR_printf_00416324)
                ("Partition2Backup %s:Write to backup partition successful.\n",param_3);
    }
    else {
      uVar8 = *(undefined4 *)PTR_stderr_004162a0;
      puVar2 = (undefined4 *)(*(code *)PTR___errno_location_00416294)();
      uVar3 = (*(code *)PTR_strerror_00416318)(*puVar2);
      (*(code *)PTR_fprintf_004162d8)(uVar8,&DAT_004055e4,param_3,uVar3);
    }
    return -1 < iVar7;
  }
  uVar8 = *(undefined4 *)PTR_stderr_004162a0;
  puVar2 = (undefined4 *)(*(code *)PTR___errno_location_00416294)();
  uVar3 = (*(code *)PTR_strerror_00416318)(*puVar2);
  (*(code *)PTR_fprintf_004162d8)(uVar8,&DAT_0040557c,param_3,uVar3);
  return false;
}

