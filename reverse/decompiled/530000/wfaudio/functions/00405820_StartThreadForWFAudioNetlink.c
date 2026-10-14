/* StartThreadForWFAudioNetlink @ 00405820 */

bool StartThreadForWFAudioNetlink(void)

{
  int iVar1;
  undefined4 local_10 [3];
  
  iVar1 = (*(code *)PTR_pthread_create_004235b8)(local_10,0,FUN_00405e90,0);
  if (iVar1 == 0) {
    (*(code *)PTR_pthread_detach_0042353c)(local_10[0]);
  }
  else {
    (*(code *)PTR_fprintf_0042350c)
              (*(undefined4 *)PTR_stderr_00423444,"%s:%s:Create RTSPSinkThread Thread Fail!\n",
               "wfaudio_nl_user.c","StartThreadForWFAudioNetlink");
  }
  return iVar1 == 0;
}

