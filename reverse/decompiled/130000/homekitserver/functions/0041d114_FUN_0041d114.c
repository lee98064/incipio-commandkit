/* FUN_0041d114 @ 0041d114 */

void FUN_0041d114(undefined4 *param_1)

{
  undefined4 uVar1;
  
  (*(code *)PTR_close_0061276c)(*param_1);
  (*(code *)PTR_free_006119dc)(param_1);
  (*(code *)PTR_pthread_mutex_unlock_00611c8c)(&DAT_00613d10);
  (*(code *)PTR_pthread_mutex_unlock_00611c8c)(&DAT_00613d28);
  (*(code *)PTR_Phytrex_Cleanup_Handler_00613a3c)();
  (*(code *)PTR_pthread_list_cleanup_handler_0061172c)();
  uVar1 = (*(code *)PTR_pthread_self_00612614)();
                    /* WARNING: Could not recover jumptable at 0x0041d1e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_pthread_list_remove_byID_00612f9c)(uVar1);
  return;
}

