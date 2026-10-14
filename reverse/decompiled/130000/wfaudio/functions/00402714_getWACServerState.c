/* getWACServerState @ 00402714 */

undefined4 getWACServerState(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_98;
  undefined1 auStack_94 [136];
  
  local_98 = 0xffffffff;
  (*(code *)PTR_memset_004231a8)(auStack_94,0,0x80);
  (*(code *)PTR_pthread_mutex_lock_0042312c)(PTR_WACGlobal_Lock_00423238);
  iVar1 = m_WACServerStart;
  (*(code *)PTR_pthread_mutex_unlock_00423178)(PTR_WACGlobal_Lock_00423238);
  if (iVar1 != 0) {
    iVar1 = (*(code *)PTR_access_00423138)("/tmp/net/wac_state.txt",4);
    if (iVar1 == 0) {
      iVar1 = (*(code *)PTR_fopen_004231b0)("/tmp/net/wac_state.txt",&DAT_00411d04);
      if (iVar1 != 0) {
        uVar2 = (*(code *)PTR_fileno_00423110)(iVar1);
        iVar3 = (*(code *)PTR_flock_00423208)(uVar2,2);
        if (iVar3 == 0) {
          iVar3 = (*(code *)PTR_fgets_0042329c)(auStack_94,0x80,iVar1);
          if (iVar3 != 0) {
            (*(code *)PTR_sscanf_004231cc)(auStack_94,&DAT_00411514,&local_98);
          }
          uVar2 = (*(code *)PTR_fileno_00423110)(iVar1);
          (*(code *)PTR_flock_00423208)(uVar2,8);
        }
        (*(code *)PTR_fclose_00423198)(iVar1);
      }
    }
  }
  return local_98;
}

