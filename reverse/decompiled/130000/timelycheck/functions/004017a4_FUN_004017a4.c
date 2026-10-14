/* FUN_004017a4 @ 004017a4 */

undefined4 FUN_004017a4(undefined4 param_1,undefined4 param_2,undefined4 param_3,char param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 auStack_128 [64];
  undefined1 auStack_e8 [64];
  undefined1 auStack_a8 [128];
  
  (*(code *)PTR_memset_0042b114)(auStack_a8,0,0x80);
  (*(code *)PTR_memset_0042b114)(auStack_128,0,0x40);
  (*(code *)PTR_memset_0042b114)(auStack_e8,0,0x40);
  iVar1 = (*(code *)PTR_fopen_0042b118)(param_1,&DAT_004187f4);
  if (iVar1 == 0) {
    (*(code *)PTR_printf_0042b1f0)("Open %s file error.\n",param_1);
LAB_00401914:
    uVar3 = 0;
  }
  else {
    iVar4 = 0;
    do {
      iVar2 = (*(code *)PTR_fgets_0042b1d0)(auStack_a8,0x7f,iVar1);
      if (iVar2 == 0) {
        (*(code *)PTR_fclose_0042b10c)(iVar1);
        goto LAB_00401914;
      }
      (*(code *)PTR_sscanf_0042b130)(auStack_a8,"%s %s",auStack_128,auStack_e8);
      iVar2 = (*(code *)PTR_strcmp_0042b0fc)(param_2,auStack_128);
    } while ((iVar2 != 0) ||
            ((iVar4 = (iVar4 + 1) * 0x1000000 >> 0x18, param_4 != 0 && (iVar4 != param_4))));
    (*(code *)PTR_strcpy_0042b208)(param_3,auStack_e8);
    (*(code *)PTR_fclose_0042b10c)(iVar1);
    uVar3 = 1;
  }
  return uVar3;
}

