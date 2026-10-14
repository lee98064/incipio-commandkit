/* FUN_00413bcc @ 00413bcc */

bool FUN_00413bcc(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  iVar1 = (*(code *)PTR_open_0057e750)("/dev/mtdblock0",0);
  bVar3 = false;
  if (iVar1 != -1) {
    (*(code *)PTR_lseek_0057e15c)(iVar1,param_2,0);
    iVar2 = (*(code *)PTR_read_0057e0d0)(iVar1,param_1,param_3);
    bVar3 = iVar2 == param_3;
    (*(code *)PTR_close_0057dbfc)(iVar1);
  }
  return bVar3;
}

