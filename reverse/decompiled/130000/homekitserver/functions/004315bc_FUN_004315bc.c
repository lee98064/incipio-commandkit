/* FUN_004315bc @ 004315bc */

void FUN_004315bc(void)

{
  int iVar1;
  int *piVar2;
  undefined1 auStack_40 [4];
  int local_3c;
  undefined1 auStack_38 [16];
  
  (*(code *)PTR_pthread_setcancelstate_00611660)(0,0);
  (*(code *)PTR_pthread_setcanceltype_00613b74)(1,0);
  (*(code *)PTR__pthread_cleanup_push_006133e8)(auStack_38,&LAB_0043178c,0);
LAB_0043166c:
  do {
    (*(code *)PTR_clock_gettime_006138fc)(0,auStack_40);
    local_3c = local_3c + 49999999;
    do {
      iVar1 = (*(code *)PTR_sem_timedwait_00612a64)(&DAT_00614fdc,auStack_40);
      if (iVar1 != -1) {
        if (DAT_00614fb4 != (code *)0x0) {
          (*DAT_00614fb4)(DAT_00614ffc);
        }
        if (DAT_00614fb8 != (code *)0x0) {
          (*DAT_00614fb8)(DAT_00614ffc);
        }
        (*(code *)PTR_sem_post_00611c38)(&DAT_00614fec);
        goto LAB_0043166c;
      }
      piVar2 = (int *)(*(code *)PTR___errno_location_0061397c)();
    } while (*piVar2 == 4);
    if (*piVar2 == 0x91) {
      if (DAT_00614fb8 != (code *)0x0) {
        (*DAT_00614fb8)(DAT_00614ffc);
      }
      if (DAT_00614fb4 != (code *)0x0) {
        (*DAT_00614fb4)(DAT_00614ffc);
      }
    }
  } while( true );
}

