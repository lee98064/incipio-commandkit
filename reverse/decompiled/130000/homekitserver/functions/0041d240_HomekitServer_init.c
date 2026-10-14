/* HomekitServer_init @ 0041d240 */

void HomekitServer_init(void)

{
  (*(code *)PTR_Phytrex_HMCreatPairList_00612650)();
  (*(code *)PTR_pthread_mutex_init_00613634)(&DAT_00613d10,0);
  (*(code *)PTR_pthread_mutex_init_00613634)(&DAT_00613d28,0);
  (*(code *)PTR_pthread_cond_init_006124c8)(&DAT_005ffb60,0);
                    /* WARNING: Could not recover jumptable at 0x0041d2c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_Phytrex_HMStart_00613878)();
  return;
}

