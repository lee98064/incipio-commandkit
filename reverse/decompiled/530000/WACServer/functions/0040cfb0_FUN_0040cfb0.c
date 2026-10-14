/* FUN_0040cfb0 @ 0040cfb0 */

int FUN_0040cfb0(int param_1,undefined1 param_2,undefined1 *param_3,int param_4)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x104);
  if (iVar3 == 0) {
    if (param_4 == -1) {
      param_4 = (*(code *)PTR_strlen_004330cc)(param_3);
    }
    iVar1 = *(int *)(param_1 + 0x100) + 2;
    puVar2 = (undefined1 *)(param_1 + *(int *)(param_1 + 0x100));
    if ((uint)(iVar1 + param_4) < 0x100) {
      puVar2[1] = (char)param_4;
      *puVar2 = param_2;
      puVar2 = param_3 + param_4;
      *(int *)(param_1 + 0x100) = iVar1;
      for (; param_3 < puVar2; param_3 = param_3 + 1) {
        iVar1 = *(int *)(param_1 + 0x100);
        *(undefined1 *)(param_1 + iVar1) = *param_3;
        *(int *)(param_1 + 0x100) = iVar1 + 1;
      }
    }
    else {
      iVar3 = -0x1a57;
    }
    if (*(int *)(param_1 + 0x104) == 0) {
      *(int *)(param_1 + 0x104) = iVar3;
    }
  }
  return iVar3;
}

