/* getPid @ 004138f4 */

undefined4 getPid(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_110 [104];
  undefined1 auStack_a8 [156];
  
  iVar1 = (*(code *)PTR_stat_0046a7a4)(param_1,auStack_a8);
  uVar2 = 0xffffffff;
  if (-1 < iVar1) {
    iVar1 = (*(code *)PTR_fopen_0046a894)(param_1,"r");
    if (iVar1 == 0) {
      (*(code *)PTR_fputs_0046a6e4)("Read pid file error!\n",*(undefined4 *)PTR_stderr_0046a7f0);
      uVar2 = 0xffffffff;
    }
    else {
      (*(code *)PTR_fgets_0046ab78)(auStack_110,100,iVar1);
      (*(code *)PTR_fclose_0046a85c)(iVar1);
      uVar2 = (*(code *)PTR_atoi_0046a73c)(auStack_110);
    }
  }
  return uVar2;
}

