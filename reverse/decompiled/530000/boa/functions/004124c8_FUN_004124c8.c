/* FUN_004124c8 @ 004124c8 */

int FUN_004124c8(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_40 [31];
  undefined1 local_21;
  
  iVar1 = (*(code *)PTR_strstr_0046a940)(*(undefined4 *)(param_1 + 0x8d0),"Content-Length:");
  iVar6 = 0;
  if (iVar1 != 0) {
    iVar6 = (*(code *)PTR_strstr_0046a940)(iVar1,"\r\n");
    iVar1 = iVar1 + 0x10;
    uVar5 = iVar6 - iVar1;
    iVar6 = (*(code *)PTR_strstr_0046a940)(iVar6 + 2,"\r\n");
    if ((int)uVar5 < 0x20) {
      (*(code *)PTR_memcpy_0046ab5c)(auStack_40,iVar1,uVar5);
      auStack_40[uVar5] = 0;
    }
    else {
      (*(code *)PTR_memcpy_0046ab5c)(auStack_40,iVar1,0x1f);
      local_21 = 0;
    }
    iVar2 = *(int *)(param_1 + 0x50);
    iVar7 = *(int *)(param_1 + 0x8d0);
    iVar3 = (*(code *)PTR_atoi_0046a73c)(auStack_40);
    iVar6 = (iVar7 + iVar2) - (iVar6 + 2);
    if (iVar3 != iVar6) {
      (*(code *)PTR_sprintf_0046a808)(auStack_40,"%d",iVar6);
      iVar2 = (*(code *)PTR_strlen_0046a714)(auStack_40);
      if (iVar2 + 1U <= uVar5) {
        (*(code *)PTR_memset_0046a87c)(iVar1,0,uVar5);
        uVar4 = (*(code *)PTR_strlen_0046a714)(auStack_40);
        (*(code *)PTR_memcpy_0046ab5c)(iVar1,auStack_40,uVar4);
      }
    }
  }
  return iVar6;
}

