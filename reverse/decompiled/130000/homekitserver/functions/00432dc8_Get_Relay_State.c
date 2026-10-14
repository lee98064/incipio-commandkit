/* Get_Relay_State @ 00432dc8 */

undefined4 Get_Relay_State(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_108 [256];
  
  DAT_0061504c = 1;
  (*(code *)PTR_write_00612898)(DAT_0061505c,&DAT_005ffcb8,0xe);
  iVar1 = FUN_00432754(auStack_108,0xff,&DAT_005ffcc8,0xe);
  if (0 < iVar1) {
    iVar1 = (*(code *)PTR_memchr_00611e1c)(auStack_108,0xfe,iVar1);
    if ((*(char *)(iVar1 + 1) == '0') && (*(char *)(iVar1 + 2) == '0')) {
      DAT_00615049 = 0;
      uVar2 = 0;
    }
    else {
      DAT_00615049 = 1;
      uVar2 = 1;
    }
    (*(code *)PTR_fprintf_006120cc)
              (*(undefined4 *)PTR_stdout_00612c98,"relay_switchstate = %d\n",DAT_00615049);
    (*(code *)PTR_HKUpdateValueToGlobalEventTable_00613b54)(9,uVar2);
  }
  DAT_0061504c = 0;
  return 1;
}

