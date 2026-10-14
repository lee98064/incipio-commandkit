/* getWACServerState @ 00402784 */

undefined4 getWACServerState(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_98;
  undefined1 auStack_94 [136];
  
  local_98 = 0xffffffff;
  (*(code *)PTR_memset_00423490)(auStack_94,0,0x80);
  (*(code *)PTR_pthread_mutex_lock_0042340c)(PTR_WACGlobal_Lock_00423520);
  iVar1 = m_WACServerStart;
  (*(code *)PTR_pthread_mutex_unlock_00423460)(PTR_WACGlobal_Lock_00423520);
  if (iVar1 != 0) {
    iVar1 = (*(code *)PTR_access_00423418)("/tmp/net/wac_state.txt",4);
    if (iVar1 == 0) {
      iVar1 = (*(code *)PTR_fopen_00423498)("/tmp/net/wac_state.txt",&DAT_00411fe4);
      if (iVar1 != 0) {
        uVar2 = (*(code *)PTR_fileno_004233f0)(iVar1);
        iVar3 = (*(code *)PTR_flock_004234f0)(uVar2,2);
        if (iVar3 == 0) {
          iVar3 = (*(code *)PTR_fgets_00423588)(auStack_94,0x80,iVar1);
          if (iVar3 != 0) {
            (*(code *)PTR_sscanf_004234b4)(auStack_94,&DAT_004117f4,&local_98);
          }
          uVar2 = (*(code *)PTR_fileno_004233f0)(iVar1);
          (*(code *)PTR_flock_004234f0)(uVar2,8);
        }
        (*(code *)PTR_fclose_00423480)(iVar1);
      }
    }
  }
  return local_98;
}

