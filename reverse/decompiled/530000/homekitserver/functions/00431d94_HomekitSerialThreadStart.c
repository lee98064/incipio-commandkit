/* HomekitSerialThreadStart @ 00431d94 */

undefined4 HomekitSerialThreadStart(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_38 [44];
  
  DAT_00615e60 = 0;
  DAT_00615e6c = 0;
  DAT_00615e64 = 0;
  DAT_00615e68 = 0;
  (*(code *)PTR_pthread_mutex_init_006144d8)(&DAT_00615e74,0);
  (*(code *)PTR_sem_init_00614ae4)(&DAT_00615e8c,0,0);
  (*(code *)PTR_sem_init_00614ae4)(&DAT_00615e9c,0,0);
  uVar2 = 0xffffffff;
  (*(code *)PTR_pthread_attr_init_006143b4)(auStack_38);
  (*(code *)PTR_pthread_attr_setdetachstate_00614770)(auStack_38,1);
  iVar1 = (*(code *)PTR_pthread_create_00613740)(&DAT_00615e70,auStack_38,FUN_00431eb4,0);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  (*(code *)PTR_meterHandlerInit_00613fd8)();
  (*(code *)PTR_pthread_attr_destroy_00613830)(auStack_38);
  return uVar2;
}

