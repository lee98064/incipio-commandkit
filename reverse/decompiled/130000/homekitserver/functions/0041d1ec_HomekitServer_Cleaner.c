/* HomekitServer_Cleaner @ 0041d1ec */

void HomekitServer_Cleaner(void)

{
  (*(code *)PTR_pthread_mutex_destroy_00612c4c)(&DAT_00613d10);
  (*(code *)PTR_pthread_mutex_destroy_00612c4c)(&DAT_00613d28);
                    /* WARNING: Could not recover jumptable at 0x0041d238. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_Phytrex_HMEnd_00613908)();
  return;
}

