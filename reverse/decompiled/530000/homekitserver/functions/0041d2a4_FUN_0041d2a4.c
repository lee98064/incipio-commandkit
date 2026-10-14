/* FUN_0041d2a4 @ 0041d2a4 */

void FUN_0041d2a4(undefined4 *param_1)

{
  undefined4 uVar1;
  
  (*(code *)PTR_close_00613604)(*param_1);
  (*(code *)PTR_free_0061286c)(param_1);
  (*(code *)PTR_pthread_mutex_unlock_00612b1c)(&DAT_00614bb0);
  (*(code *)PTR_pthread_mutex_unlock_00612b1c)(&DAT_00614bc8);
  (*(code *)PTR_Phytrex_Cleanup_Handler_006148e4)();
  (*(code *)PTR_pthread_list_cleanup_handler_006125bc)();
  uVar1 = (*(code *)PTR_pthread_self_006134a8)();
                    /* WARNING: Could not recover jumptable at 0x0041d374. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_pthread_list_remove_byID_00613e34)(uVar1);
  return;
}

