/* FUN_00434640 @ 00434640 */

undefined4 FUN_00434640(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  
  iVar1 = (*(code *)PTR_strlen_0046a714)();
  iVar3 = 0;
  do {
    pcVar4 = (char *)(param_1 + iVar3);
    if (iVar1 <= iVar3) {
      uVar2 = (*(code *)PTR_strtol_0046aa48)(param_1,0,10);
      *param_2 = uVar2;
      return 1;
    }
    iVar3 = iVar3 + 1;
  } while ((byte)(*pcVar4 - 0x30U) < 10);
  return 0;
}

