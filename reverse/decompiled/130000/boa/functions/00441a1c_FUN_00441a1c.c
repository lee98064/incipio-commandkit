/* FUN_00441a1c @ 00441a1c */

undefined4 FUN_00441a1c(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  
  iVar1 = (*(code *)PTR_strstr_0046a940)(param_1,"rlx-linux");
  if (iVar1 == 0) {
    return 0;
  }
  if (param_2 == 3) {
    iVar2 = (*(code *)PTR_strstr_0046a940)(iVar1,&DAT_0045668c);
    if ((iVar2 == 0) || (*(char *)(iVar2 + 3) != ':')) {
      iVar2 = (*(code *)PTR_strstr_0046a940)(iVar1,&DAT_00456690);
      if (iVar2 == 0) {
        return 0;
      }
      if (*(char *)(iVar2 + 5) != ':') {
        cVar4 = *(char *)(iVar2 + 9);
        goto LAB_00441b00;
      }
    }
  }
  else if (param_2 == 2) {
    iVar2 = (*(code *)PTR_strstr_0046a940)(iVar1,&DAT_0045668c);
    if (iVar2 == 0) {
      return 0;
    }
    cVar4 = *(char *)(iVar2 + 3);
LAB_00441b00:
    if (cVar4 != ':') {
      return 0;
    }
  }
  else {
    iVar2 = (*(code *)PTR_strstr_0046a940)(iVar1,&DAT_00456690);
    if ((iVar2 == 0) || ((*(char *)(iVar2 + 5) != ':' && (*(char *)(iVar2 + 9) != ':')))) {
      if (param_2 != 0) {
        return 0;
      }
      iVar2 = (*(code *)PTR_strstr_0046a940)(iVar1,"kernel: ");
      if (iVar2 == 0) {
        return 0;
      }
      iVar3 = (*(code *)PTR_strlen_0046a714)(iVar2);
      iVar2 = iVar2 + 7;
      iVar3 = iVar3 + -6;
      goto LAB_00441bbc;
    }
  }
  iVar3 = (*(code *)PTR_strlen_0046a714)(iVar2);
  iVar3 = iVar3 + 1;
LAB_00441bbc:
  (*(code *)PTR_memcpy_0046ab5c)(iVar1,iVar2,iVar3);
  return 1;
}

