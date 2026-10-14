/* Phytrex_HMPairListIsEmpty @ 00424d88 */

undefined4 Phytrex_HMPairListIsEmpty(void)

{
  char cVar1;
  char *pcVar2;
  short sVar3;
  undefined4 uVar4;
  
  (*(code *)PTR_pthread_mutex_lock_00613f24)(&DAT_00614c00);
  pcVar2 = &DAT_00614c58;
  sVar3 = 0;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 0xa1;
    if (cVar1 != '\0') {
      sVar3 = sVar3 + 1;
    }
    uVar4 = 0xffffe5b7;
  } while (pcVar2 != (char *)&DAT_00615668);
  if (sVar3 == 0) {
    uVar4 = 0;
  }
  (*(code *)PTR_pthread_mutex_unlock_00612b1c)(&DAT_00614c00);
  return uVar4;
}

