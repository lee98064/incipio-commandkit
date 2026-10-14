/* FUN_804025ac @ 804025ac */

void FUN_804025ac(byte *param_1,undefined4 *param_2)

{
  int iVar1;
  char *pcVar2;
  uint uVar3;
  char cVar4;
  char *pcVar5;
  char local_20 [4];
  ushort local_1c;
  ushort local_1a;
  
  iVar1 = FUN_80404a94(local_20,0xc000,6);
  if (iVar1 == 0) {
    return;
  }
  if (local_20[0] != '6') {
    return;
  }
  local_1a = local_1c;
  if (0x4000 < local_1c) {
    return;
  }
  pcVar2 = (char *)FUN_80406604();
  if (pcVar2 == (char *)0x0) {
    return;
  }
  FUN_80404a94(pcVar2,0xc006,local_1a);
  uVar3 = (uint)local_1a;
  if ((uVar3 != 0) && (uVar3 < 0x4001)) {
    if (uVar3 != 0) {
      cVar4 = '\0';
      pcVar5 = pcVar2;
      do {
        cVar4 = cVar4 + *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (pcVar5 != pcVar2 + uVar3);
      if (cVar4 != '\0') goto LAB_804027a8;
    }
    *param_2 = *(undefined4 *)pcVar2;
    *(undefined4 *)param_1 = *(undefined4 *)(pcVar2 + 0x15);
    param_1[4] = pcVar2[0x19];
    param_1[5] = pcVar2[0x1a];
    iVar1 = FUN_80406a80(param_2,&DAT_8040a768,4);
    if ((iVar1 == 0) || (0xfd < (byte)(*(char *)((int)param_2 + 3) - 1U))) {
      *(undefined1 *)param_2 = 0;
      *(undefined1 *)((int)param_2 + 1) = 0;
      *(undefined1 *)((int)param_2 + 2) = 0;
      *(undefined1 *)((int)param_2 + 3) = 0;
    }
    else {
      iVar1 = FUN_80406a80(param_1,&DAT_8040a760,6);
      if ((iVar1 == 0) || ((*param_1 & 1) != 0)) {
        FUN_80402448(param_1);
      }
      iVar1 = FUN_80406a80(param_2,&DAT_8040a770,4);
      if (iVar1 == 0) {
        FUN_80402448(&DAT_8040e8f0);
      }
      else {
        DAT_8040e8f0 = 0x56;
        DAT_8040e8f1 = 0xaa;
        DAT_8040e8f2 = 0xa5;
        DAT_8040e8f3 = 0x5a;
        DAT_8040e8f4 = 0x7d;
        DAT_8040e8f5 = 0xe8;
      }
    }
  }
LAB_804027a8:
  FUN_804066ec(pcVar2);
  return;
}

