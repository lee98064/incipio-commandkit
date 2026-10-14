/* write_from_pipe @ 00409c38 */

undefined4 write_from_pipe(undefined4 *param_1)

{
  undefined *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = param_1[0x11] - param_1[0x10];
  if (iVar4 == 0) {
    if (param_1[6] == 2) {
      return 0;
    }
  }
  else {
    iVar2 = (*(code *)PTR_write_0046a9fc)(param_1[0x2d],param_1[0x10],iVar4);
    if (iVar2 == -1) {
      piVar3 = (int *)(*(code *)PTR___errno_location_0046a764)();
      puVar1 = PTR_perror_0046ab44;
      if (*piVar3 == 0xb) {
        return 0xffffffff;
      }
      if (*piVar3 == 4) {
        return 1;
      }
      *param_1 = 0xc;
      (*(code *)puVar1)("pipe write");
      return 0;
    }
    param_1[0x10] = param_1[0x10] + iVar2;
    param_1[0xd] = param_1[0xd] + iVar2;
    if (iVar2 != iVar4) {
      return 1;
    }
  }
  *param_1 = 7;
  param_1[0x11] = param_1[0x234];
  param_1[0x10] = param_1[0x234];
  return 1;
}

