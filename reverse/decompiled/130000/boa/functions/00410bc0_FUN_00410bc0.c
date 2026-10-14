/* FUN_00410bc0 @ 00410bc0 */

uint FUN_00410bc0(undefined4 param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  char *pcVar6;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  undefined1 auStack_3c [12];
  undefined1 *local_30;
  
  pcVar6 = param_2;
  while( true ) {
    cVar1 = *pcVar6;
    if (cVar1 == ' ') break;
    pcVar6 = pcVar6 + 1;
    if (cVar1 == '\0') {
      return 0xffffffff;
    }
  }
  iVar3 = (*(code *)PTR_sscanf_0046a8c4)
                    (pcVar6,"%d %3s %d %d:%d:%d GMT",&local_50,auStack_3c,&local_4c,&local_48,
                     &local_44,&local_40);
  if ((((iVar3 == 6) ||
       (iVar3 = (*(code *)PTR_sscanf_0046a8c4)
                          (pcVar6,"%d-%3s-%d %d:%d:%d GMT",&local_50,auStack_3c,&local_4c,&local_48,
                           &local_44,&local_40), iVar3 == 6)) ||
      (iVar3 = (*(code *)PTR_sscanf_0046a8c4)
                         (pcVar6,"%3s %d %d:%d:%d %d",auStack_3c,&local_50,&local_48,&local_44,
                          &local_40,&local_4c), iVar3 == 6)) ||
     (iVar3 = (*(code *)PTR_sscanf_0046a8c4)
                        (param_2,"%d %10s %d %d:%d:%d GMT",&local_50,auStack_3c,&local_4c,&local_48,
                         &local_44,&local_40), iVar3 == 6)) {
    if ((int)local_4c < 0x46) {
      local_4c = local_4c + 100;
    }
    local_30 = auStack_3c;
    if (0x76c < (int)local_4c) {
      local_4c = local_4c - 0x76c;
    }
    uVar4 = FUN_00410020(local_30);
    uVar2 = local_4c;
    if (uVar4 != 0xffffffff) {
      if (0x3b < local_40) {
        return 0xffffffff;
      }
      if (0x3b < local_44) {
        return 0xffffffff;
      }
      if (0x17 < local_48) {
        return 0xffffffff;
      }
      if (0x1e < local_50 - 1) {
        return 0xffffffff;
      }
      if (0xb < uVar4) {
        return 0xffffffff;
      }
      if (0x32 < local_4c - 0x46) {
        return 0xffffffff;
      }
      puVar5 = (uint *)(*(code *)PTR_gmtime_0046a71c)
                                 (param_1,"les is larger than the total downlink bandwidth!",
                                  local_30);
      if (puVar5[5] != uVar2) {
        return (uint)(0 < (int)(puVar5[5] - uVar2));
      }
      if (puVar5[4] != uVar4) {
        return (uint)(0 < (int)(puVar5[4] - uVar4));
      }
      if (puVar5[3] != local_50) {
        return (uint)(0 < (int)(puVar5[3] - local_50));
      }
      if (puVar5[2] != local_48) {
        return (uint)(0 < (int)(puVar5[2] - local_48));
      }
      if (puVar5[1] != local_44) {
        return (uint)(0 < (int)(puVar5[1] - local_44));
      }
      if (*puVar5 != local_40) {
        return (uint)(0 < (int)(*puVar5 - local_40));
      }
      return 0;
    }
    (*(code *)PTR_fprintf_0046a9ec)
              (*(undefined4 *)PTR_stderr_0046a7f0,"Invalid month name: \"%s\"\n");
  }
  else {
    (*(code *)PTR_fprintf_0046a9ec)
              (*(undefined4 *)PTR_stderr_0046a7f0,"Error in %s, line %d: Unable to sscanf \"%s\"\n",
               "util.c",0x11b,pcVar6);
  }
  return 0xffffffff;
}

