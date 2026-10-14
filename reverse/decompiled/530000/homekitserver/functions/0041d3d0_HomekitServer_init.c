/* HomekitServer_init @ 0041d3d0 */

void HomekitServer_init(void)

{
  (*(code *)PTR_Phytrex_HMCreatPairList_006134e4)();
  (*(code *)PTR_pthread_mutex_init_006144d8)(&DAT_00614bb0,0);
  (*(code *)PTR_pthread_mutex_init_006144d8)(&DAT_00614bc8,0);
  (*(code *)PTR_pthread_cond_init_00613358)(&DAT_00600a00,0);
                    /* WARNING: Could not recover jumptable at 0x0041d458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_Phytrex_HMStart_0061471c)();
  return;
}

