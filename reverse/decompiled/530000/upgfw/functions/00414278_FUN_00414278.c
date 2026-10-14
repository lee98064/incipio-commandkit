/* FUN_00414278 @ 00414278 */

bool FUN_00414278(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  iVar1 = (*(code *)PTR_open_0057e884)("/dev/mtdblock0",2);
  bVar3 = false;
  if (iVar1 != -1) {
    (*(code *)PTR_lseek_0057e290)(iVar1,param_2,0);
    iVar2 = (*(code *)PTR_write_0057dde4)(iVar1,param_1,param_3);
    bVar3 = iVar2 == param_3;
    (*(code *)PTR_close_0057dd2c)(iVar1);
    (*(code *)PTR_sync_0057da18)();
  }
  return bVar3;
}

