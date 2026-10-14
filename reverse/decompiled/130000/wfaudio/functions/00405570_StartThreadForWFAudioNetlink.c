/* StartThreadForWFAudioNetlink @ 00405570 */

bool StartThreadForWFAudioNetlink(void)

{
  int iVar1;
  undefined4 local_10 [3];
  
  iVar1 = (*(code *)PTR_pthread_create_004232cc)(local_10,0,FUN_00405be0,0);
  if (iVar1 == 0) {
    (*(code *)PTR_pthread_detach_00423254)(local_10[0]);
  }
  else {
    (*(code *)PTR_fprintf_00423224)
              (*(undefined4 *)PTR_stderr_00423160,"%s:%s:Create RTSPSinkThread Thread Fail!\n",
               "wfaudio_nl_user.c","StartThreadForWFAudioNetlink");
  }
  return iVar1 == 0;
}

