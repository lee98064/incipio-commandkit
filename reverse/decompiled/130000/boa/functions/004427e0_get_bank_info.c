/* get_bank_info @ 004427e0 */

void get_bank_info(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char local_20 [12];
  
  iVar1 = (*(code *)PTR_fopen_0046a894)("/proc/bootbank","r");
  if (iVar1 == 0) {
    (*(code *)PTR_fprintf_0046a9ec)
              (*(undefined4 *)PTR_stderr_0046a7f0,"%s\n","Read /proc/bootbank failed!\n");
  }
  else {
    (*(code *)PTR_fgets_0046ab78)(local_20,2,iVar1);
    (*(code *)PTR_fclose_0046a85c)(iVar1);
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

