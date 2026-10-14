/* req_flush @ 0040574c */

uint req_flush(uint *param_1)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  
  uVar5 = param_1[0x13];
  uVar2 = 0xfffffffe;
  if (*param_1 < 0xb) {
    if (param_1[0x14] != uVar5) {
      iVar3 = (*(code *)PTR_write_0046a9fc)(param_1[0x2d],param_1[0x234] + uVar5);
      if (iVar3 < 0) {
        piVar4 = (int *)(*(code *)PTR___errno_location_0046a764)();
        puVar1 = PTR_perror_0046ab44;
        if (*piVar4 == 0xb) {
          return 0xffffffff;
        }
        param_1[0x14] = 0;
        param_1[0x13] = 0;
        (*(code *)puVar1)("buffer flush");
        *param_1 = 0xc;
        param_1[0x14] = 0;
        return 0xfffffffe;
      }
      param_1[0x13] = param_1[0x13] + iVar3;
      uVar5 = param_1[0x13];
    }
    uVar2 = param_1[0x14];
    if (uVar5 == uVar2) {
      param_1[0x14] = 0;
      param_1[0x13] = 0;
      uVar2 = param_1[0x14];
    }
  }
  return uVar2;
}

