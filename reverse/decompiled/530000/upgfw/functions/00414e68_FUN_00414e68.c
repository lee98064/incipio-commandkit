/* FUN_00414e68 @ 00414e68 */

void FUN_00414e68(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char local_20 [12];
  
  iVar1 = (*(code *)PTR_fopen_0057df5c)("/proc/bootbank","r");
  if (iVar1 == 0) {
    (*(code *)PTR_fprintf_0057d8e4)
              (*(undefined4 *)PTR_stderr_0057de44,"%s\n","Read /proc/bootbank failed!\n");
  }
  else {
    (*(code *)PTR_fgets_0057dc54)(local_20,2,iVar1);
    (*(code *)PTR_fclose_0057dfec)(iVar1);
  }
  if (((int)local_20[0] - 0x31U < 2) && (uVar2 = 1, local_20[0] != 0x31)) {
    uVar3 = 2;
  }
  else {
    uVar2 = 2;
    uVar3 = 1;
  }
  if (param_1 == 0) {
    uVar2 = uVar3;
  }
  *param_2 = uVar3;
  *param_3 = uVar2;
  return;
}

