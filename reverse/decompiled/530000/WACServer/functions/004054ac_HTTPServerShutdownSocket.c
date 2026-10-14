/* HTTPServerShutdownSocket @ 004054ac */

undefined4 HTTPServerShutdownSocket(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    return 0xffffe5cf;
  }
                    /* WARNING: Could not recover jumptable at 0x004054cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)PTR_close_00433098)(*(undefined4 *)(param_1 + 0x10));
  return uVar1;
}

