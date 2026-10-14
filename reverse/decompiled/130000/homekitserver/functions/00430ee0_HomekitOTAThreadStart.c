/* HomekitOTAThreadStart @ 00430ee0 */

undefined4 HomekitOTAThreadStart(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_40 [40];
  undefined4 local_18;
  
  local_18 = param_1;
  (*(code *)PTR_pthread_attr_init_00613510)(auStack_40);
  uVar2 = 0xffffffff;
  (*(code *)PTR_pthread_attr_setdetachstate_006138cc)(auStack_40,1);
  iVar1 = (*(code *)PTR_pthread_create_006128a4)(&DAT_00614fa0,auStack_40,FUN_00430f84,local_18);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  (*(code *)PTR_pthread_attr_destroy_00612994)(auStack_40);
  return uVar2;
}

