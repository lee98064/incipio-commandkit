/* Phytrex_HMGetNoOfPairList @ 00424b78 */

int Phytrex_HMGetNoOfPairList(void)

{
  char *pcVar1;
  int iVar2;
  
  (*(code *)PTR_pthread_mutex_lock_0061308c)(&DAT_00613d60);
  pcVar1 = &DAT_00613d78;
  iVar2 = 0;
  do {
    if (*pcVar1 != '\0') {
      iVar2 = iVar2 + (uint)(pcVar1[0x40] != '\0');
    }
    pcVar1 = pcVar1 + 0xa1;
  } while (pcVar1 != &DAT_00614788);
  (*(code *)PTR_pthread_mutex_unlock_00611c8c)(&DAT_00613d60);
  return iVar2;
}

