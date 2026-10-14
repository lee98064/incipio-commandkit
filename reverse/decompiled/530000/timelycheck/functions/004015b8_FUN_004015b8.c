/* FUN_004015b8 @ 004015b8 */

undefined4 FUN_004015b8(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint local_5f0;
  undefined1 auStack_5ec [4];
  undefined1 auStack_5e8 [4];
  undefined1 auStack_5e4 [4];
  undefined1 auStack_5e0 [4];
  undefined1 auStack_5dc [4];
  undefined1 auStack_5d8 [4];
  undefined4 local_5d4;
  undefined1 auStack_5d0 [16];
  undefined1 auStack_5c0 [128];
  undefined1 auStack_540 [128];
  undefined1 auStack_4c0 [128];
  undefined1 auStack_440 [1024];
  undefined1 *local_40;
  undefined1 *local_3c;
  undefined1 *local_38;
  undefined1 *local_34;
  undefined1 *local_30;
  
  iVar1 = (*(code *)PTR_fopen_0042b118)("/proc/net/route",&DAT_00418704);
  if (iVar1 == 0) {
    (*(code *)PTR_printf_0042b1f0)("Open %s file error.\n","/proc/net/route");
    uVar3 = 0;
  }
  else {
    local_40 = auStack_5ec;
    local_3c = auStack_4c0;
    local_38 = auStack_5e0;
    local_34 = auStack_5dc;
    local_30 = auStack_5d8;
    do {
      do {
        iVar2 = (*(code *)PTR_fgets_0042b1d0)(auStack_440,0x3ff,iVar1);
        if (iVar2 == 0) {
          uVar3 = 0;
          goto LAB_00401760;
        }
        iVar2 = (*(code *)PTR_sscanf_0042b130)
                          (auStack_440,"%16s %128s %128s %X %d %d %d %128s %d %d %d",auStack_5d0,
                           auStack_540,auStack_5c0,&local_5f0,auStack_5e8,auStack_5e4,local_40,
                           local_3c,local_38,local_34,local_30);
      } while ((iVar2 < 10) || ((local_5f0 & 3) != 3));
      iVar2 = (*(code *)PTR_strcmp_0042b0fc)(auStack_5d0,param_1);
    } while (iVar2 != 0);
    (*(code *)PTR_sscanf_0042b130)(auStack_5c0,&DAT_00417800,&local_5d4);
    uVar3 = 1;
    *param_2 = local_5d4;
LAB_00401760:
    (*(code *)PTR_fclose_0042b10c)(iVar1);
  }
  return uVar3;
}

