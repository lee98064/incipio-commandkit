/* HomekitSerialThreadStart @ 004314b4 */

undefined4 HomekitSerialThreadStart(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_38 [44];
  
  DAT_00614fb0 = 0;
  DAT_00614fbc = 0;
  DAT_00614fb4 = 0;
  DAT_00614fb8 = 0;
  (*(code *)PTR_pthread_mutex_init_00613634)(&DAT_00614fc4,0);
  (*(code *)PTR_sem_init_00613c3c)(&DAT_00614fdc,0,0);
  (*(code *)PTR_sem_init_00613c3c)(&DAT_00614fec,0,0);
  uVar2 = 0xffffffff;
  (*(code *)PTR_pthread_attr_init_00613510)(auStack_38);
  (*(code *)PTR_pthread_attr_setdetachstate_006138cc)(auStack_38,1);
  iVar1 = (*(code *)PTR_pthread_create_006128a4)(&DAT_00614fc0,auStack_38,FUN_004315bc,0);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  (*(code *)PTR_pthread_attr_destroy_00612994)(auStack_38);
  return uVar2;
}

