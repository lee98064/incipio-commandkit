/* read_body @ 0040ad58 */

undefined4 read_body(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  
  uVar4 = (param_1[0x10] + 0x2000) - param_1[0x11];
  if ((uint)(param_1[0xb] - param_1[0xc]) < uVar4) {
    uVar4 = param_1[0xb] - param_1[0xc];
  }
  if (uVar4 == 0) {
    *param_1 = 5;
LAB_0040ae50:
    uVar3 = 1;
  }
  else {
    iVar1 = (*(code *)PTR_read_0046a934)(param_1[0x2d]);
    if (iVar1 == -1) {
      piVar2 = (int *)(*(code *)PTR___errno_location_0046a764)();
      if (*piVar2 == 0xb) {
        return 0xffffffff;
      }
      param_1[4] = 400;
    }
    else {
      if (iVar1 != 0) {
        *param_1 = 5;
        param_1[0x11] = param_1[0x11] + iVar1;
        goto LAB_0040ae50;
      }
      (*(code *)PTR_fprintf_0046a9ec)
                (*(undefined4 *)PTR_stderr_0046a7f0,"%s:%d - Premature end of body!!\n","read.c",
                 0x195);
      (*(code *)PTR_send_r_bad_request_0046a968)(param_1);
    }
    uVar3 = 0;
  }
  return uVar3;
}

