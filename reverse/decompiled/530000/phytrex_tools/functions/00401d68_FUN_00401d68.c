/* FUN_00401d68 @ 00401d68 */

undefined4 FUN_00401d68(int param_1,int param_2,undefined4 param_3)

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
  iVar1 = (*(code *)PTR_open_0041628c)("/dev/mtdblock0",2);
  if (iVar1 == -1) {
    uVar7 = *(undefined4 *)PTR_stderr_004162a0;
    puVar2 = (undefined4 *)(*(code *)PTR___errno_location_00416294)();
    uVar3 = (*(code *)PTR_strerror_00416318)(*puVar2);
    (*(code *)PTR_fprintf_004162d8)(uVar7,&DAT_00405648,param_3,uVar3);
    return 0;
  }
  iVar4 = (*(code *)PTR_open_0041628c)("/dev/mtdblock5",0x80);
  if (iVar4 == -1) {
    uVar7 = *(undefined4 *)PTR_stderr_004162a0;
    puVar2 = (undefined4 *)(*(code *)PTR___errno_location_00416294)();
    uVar3 = (*(code *)PTR_strerror_00416318)(*puVar2);
    *(undefined4 *)((int)auStack_58 + iVar6) = uVar3;
    (*(code *)PTR_fprintf_004162d8)(uVar7,&DAT_00405678,param_3,"/dev/mtdblock5");
    return 0;
  }
  iVar5 = (*(code *)PTR_lseek_004162ec)(iVar1,param_1,0);
  if (iVar5 == -1) {
    uVar7 = *(undefined4 *)PTR_stderr_004162a0;
    puVar2 = (undefined4 *)(*(code *)PTR___errno_location_00416294)();
    uVar3 = (*(code *)PTR_strerror_00416318)(*puVar2);
    (*(code *)PTR_fprintf_004162d8)(uVar7,&DAT_004056a4,param_3,uVar3);
    return 0;
  }
  iVar5 = (*(code *)PTR_strstr_004162d4)(param_3,"backup2def");
  if (((iVar5 != 0) || (iVar5 = (*(code *)PTR_strstr_004162d4)(param_3,"backup2cur"), iVar5 != 0))
     && (iVar5 = (*(code *)PTR_lseek_004162ec)(iVar4,param_1 + -0x6000,0), iVar5 == -1)) {
    uVar7 = *(undefined4 *)PTR_stderr_004162a0;
    puVar2 = (undefined4 *)(*(code *)PTR___errno_location_00416294)();
    uVar3 = (*(code *)PTR_strerror_00416318)(*puVar2);
    (*(code *)PTR_fprintf_004162d8)(uVar7,&DAT_004056e4,param_3,uVar3);
    return 0;
  }
  iVar5 = (*(code *)PTR_read_004162d0)(iVar4,&stack0xffffffb0 + iVar6,param_2 - param_1);
  if (iVar5 < 0) {
    uVar7 = *(undefined4 *)PTR_stderr_004162a0;
    puVar2 = (undefined4 *)(*(code *)PTR___errno_location_00416294)();
    uVar3 = (*(code *)PTR_strerror_00416318)(*puVar2);
    (*(code *)PTR_fprintf_004162d8)(uVar7,&DAT_0040570c,param_3,uVar3);
    uVar3 = 0;
  }
  else {
    iVar6 = (*(code *)PTR_write_004162dc)(iVar1,&stack0xffffffb0 + iVar6,param_2 - param_1);
    if (iVar6 < 0) {
      uVar7 = *(undefined4 *)PTR_stderr_004162a0;
      puVar2 = (undefined4 *)(*(code *)PTR___errno_location_00416294)();
      uVar3 = (*(code *)PTR_strerror_00416318)(*puVar2);
      (*(code *)PTR_fprintf_004162d8)(uVar7,&DAT_00405734,param_3,uVar3);
      uVar3 = 0;
    }
    else {
      (*(code *)PTR_close_00416284)(iVar4);
      (*(code *)PTR_close_00416284)(iVar1);
      (*(code *)PTR_printf_00416324)("Backup2Partition %s:Write partition successful.\n",param_3);
      uVar3 = 1;
    }
  }
  return uVar3;
}

