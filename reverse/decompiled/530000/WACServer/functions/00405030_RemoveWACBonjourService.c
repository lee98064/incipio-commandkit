/* RemoveWACBonjourService @ 00405030 */

undefined4 RemoveWACBonjourService(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffe5cf;
  if (param_1 != 0) {
    uVar1 = 0;
    if (*(int *)(param_1 + 0x38) != 0) {
      (*(code *)PTR_DNSServiceRefDeallocate_00433250)();
      *(undefined4 *)(param_1 + 0x38) = 0;
      uVar1 = 0;
    }
  }
  return uVar1;
}

