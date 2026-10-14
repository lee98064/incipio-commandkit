/* FUN_004017c0 @ 004017c0 */

bool FUN_004017c0(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  iVar1 = (*(code *)PTR_open_00423480)("/dev/mtdblock0",2);
  bVar3 = false;
  if (iVar1 != -1) {
    (*(code *)PTR_lseek_00423568)(iVar1,param_2,0);
    iVar2 = (*(code *)PTR_read_00423514)(iVar1,param_1,param_3);
    bVar3 = iVar2 == param_3;
    (*(code *)PTR_close_00423460)(iVar1);
  }
  return bVar3;
}

