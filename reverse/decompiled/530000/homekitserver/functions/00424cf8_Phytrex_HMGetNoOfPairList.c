/* Phytrex_HMGetNoOfPairList @ 00424cf8 */

int Phytrex_HMGetNoOfPairList(void)

{
  char *pcVar1;
  int iVar2;
  
  (*(code *)PTR_pthread_mutex_lock_00613f24)(&DAT_00614c00);
  pcVar1 = &DAT_00614c18;
  iVar2 = 0;
  do {
    if (*pcVar1 != '\0') {
      iVar2 = iVar2 + (uint)(pcVar1[0x40] != '\0');
    }
    pcVar1 = pcVar1 + 0xa1;
  } while (pcVar1 != &DAT_00615628);
  (*(code *)PTR_pthread_mutex_unlock_00612b1c)(&DAT_00614c00);
  return iVar2;
}

