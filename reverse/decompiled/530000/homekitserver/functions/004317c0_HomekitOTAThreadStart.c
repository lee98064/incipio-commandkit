/* HomekitOTAThreadStart @ 004317c0 */

undefined4 HomekitOTAThreadStart(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_40 [40];
  undefined4 local_18;
  
  local_18 = param_1;
  (*(code *)PTR_pthread_attr_init_006143b4)(auStack_40);
  uVar2 = 0xffffffff;
  (*(code *)PTR_pthread_attr_setdetachstate_00614770)(auStack_40,1);
  iVar1 = (*(code *)PTR_pthread_create_00613740)(&DAT_00615e50,auStack_40,FUN_00431864,local_18);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  (*(code *)PTR_pthread_attr_destroy_00613830)(auStack_40);
  return uVar2;
}

