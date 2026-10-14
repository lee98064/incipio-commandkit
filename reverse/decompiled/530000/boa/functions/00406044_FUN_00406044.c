/* FUN_00406044 @ 00406044 */

void FUN_00406044(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  if ((*(uint *)PTR_debug_level_0046abf4 & 0x100) != 0) {
    (*(code *)PTR_printf_0046ac28)
              ("Calling add_alias with args \"%s\", \"%s\", and %d\n",param_1,param_2,*param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x004060c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_add_alias_0046a794)(param_1,param_2,*param_3);
  return;
}

