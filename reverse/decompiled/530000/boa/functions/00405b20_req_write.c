/* req_write @ 00405b20 */

uint req_write(uint *param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (*(code *)PTR_strlen_0046a714)(param_2);
  if ((iVar1 == 0) || (10 < *param_1)) {
    uVar2 = param_1[0x14];
  }
  else {
    uVar2 = param_1[0x14];
    if (iVar1 + uVar2 < 0x2001) {
      (*(code *)PTR_memcpy_0046ab5c)(param_1[0x234] + uVar2,param_2,iVar1);
      uVar2 = iVar1 + param_1[0x14];
      param_1[0x14] = uVar2;
    }
    else {
      (*(code *)PTR_fprintf_0046a9ec)
                (*(undefined4 *)PTR_stderr_0046a7f0,
                 "There is not enough room in the buffer to copy %u bytes (%d available). Shutting down connection.\n"
                 ,iVar1,0x2000 - uVar2);
      *param_1 = 0xc;
      uVar2 = 0xffffffff;
    }
  }
  return uVar2;
}

