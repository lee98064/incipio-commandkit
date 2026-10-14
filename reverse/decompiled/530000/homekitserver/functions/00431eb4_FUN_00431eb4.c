/* FUN_00431eb4 @ 00431eb4 */

void FUN_00431eb4(void)

{
  int iVar1;
  int *piVar2;
  undefined1 auStack_40 [4];
  int local_3c;
  undefined1 auStack_38 [16];
  
  (*(code *)PTR_pthread_setcancelstate_006124f0)(0,0);
  (*(code *)PTR_pthread_setcanceltype_00614a1c)(1,0);
  (*(code *)PTR__pthread_cleanup_push_0061428c)(auStack_38,&LAB_00432084,0);
LAB_00431f64:
  do {
    (*(code *)PTR_clock_gettime_006147a0)(0,auStack_40);
    local_3c = local_3c + 49999999;
    do {
      iVar1 = (*(code *)PTR_sem_timedwait_00613900)(&DAT_00615e8c,auStack_40);
      if (iVar1 != -1) {
        if (DAT_00615e64 != (code *)0x0) {
          (*DAT_00615e64)(DAT_00615eac);
        }
        if (DAT_00615e68 != (code *)0x0) {
          (*DAT_00615e68)(DAT_00615eac);
        }
        (*(code *)PTR_sem_post_00612ac8)(&DAT_00615e9c);
        goto LAB_00431f64;
      }
      piVar2 = (int *)(*(code *)PTR___errno_location_00614824)();
    } while (*piVar2 == 4);
    if (*piVar2 == 0x91) {
      if (DAT_00615e68 != (code *)0x0) {
        (*DAT_00615e68)(DAT_00615eac);
      }
      if (DAT_00615e64 != (code *)0x0) {
        (*DAT_00615e64)(DAT_00615eac);
      }
    }
  } while( true );
}

