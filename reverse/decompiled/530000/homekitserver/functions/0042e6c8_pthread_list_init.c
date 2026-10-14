/* pthread_list_init @ 0042e6c8 */

undefined4 pthread_list_init(void)

{
  DAT_006156b4 = &DAT_006156b0;
  DAT_006156b0 = &DAT_006156b0;
  (*(code *)PTR_pthread_mutex_init_006144d8)(&DAT_00615670,0);
  return 0;
}

