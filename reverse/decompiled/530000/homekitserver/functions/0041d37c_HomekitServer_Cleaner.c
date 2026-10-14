/* HomekitServer_Cleaner @ 0041d37c */

void HomekitServer_Cleaner(void)

{
  (*(code *)PTR_pthread_mutex_destroy_00613ae8)(&DAT_00614bb0);
  (*(code *)PTR_pthread_mutex_destroy_00613ae8)(&DAT_00614bc8);
                    /* WARNING: Could not recover jumptable at 0x0041d3c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_Phytrex_HMEnd_006147ac)();
  return;
}

