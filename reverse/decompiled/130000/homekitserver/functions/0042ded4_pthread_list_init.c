/* pthread_list_init @ 0042ded4 */

undefined4 pthread_list_init(void)

{
  DAT_00614814 = &DAT_00614810;
  DAT_00614810 = &DAT_00614810;
  (*(code *)PTR_pthread_mutex_init_00613634)(&DAT_006147d0,0);
  return 0;
}

