/* HKSocketReadHTTPHeader @ 00420f88 */

int HKSocketReadHTTPHeader(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int local_38;
  undefined4 local_34;
  undefined4 local_30 [3];
  
  iVar5 = param_2 + *(int *)(param_2 + 0x100);
  iVar6 = 0;
  do {
    uVar4 = *(uint *)(param_2 + 0x10c);
    uVar2 = (param_2 + 0x100) - iVar5;
    if (uVar4 == 0) {
      uVar4 = FUN_00420648(param_3,param_1,iVar5,uVar2);
      if ((int)uVar4 < 1) {
        if (iVar6 == 0) {
          return -0x1a61;
        }
        break;
      }
      iVar6 = iVar6 + uVar4;
    }
    else {
      if (uVar2 < uVar4) {
        return -0x1a31;
      }
      (*(code *)PTR_memmove_00612be0)(iVar5,*(undefined4 *)(param_2 + 0x104),uVar4);
      *(undefined4 *)(param_2 + 0x10c) = 0;
    }
    puVar1 = PTR_findHeader_00612d08;
    *(uint *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + uVar4;
    iVar3 = (*(code *)puVar1)(param_2,&local_38);
    iVar6 = iVar6 + uVar4;
    iVar5 = iVar5 + uVar4;
  } while (iVar3 == 0);
  puVar1 = PTR_HTTPHeaderParse_00612e80;
  *(int *)(param_2 + 0x100) = local_38 - param_2;
  iVar6 = (*(code *)puVar1)(param_2);
  if (iVar6 == 0) {
    *(int *)(param_2 + 0x10c) = iVar5 - local_38;
    if (*(int *)(param_2 + 0x104) != 0) {
      (*(code *)PTR_free_006119dc)();
      *(undefined4 *)(param_2 + 0x104) = 0;
    }
    if (*(int *)(param_2 + 0x108) != 0) {
      (*(code *)PTR_free_006119dc)();
      *(undefined4 *)(param_2 + 0x108) = 0;
    }
    iVar5 = (*(code *)PTR_HTTPGetHeaderField_00612dd8)
                      (param_2,*(undefined4 *)(param_2 + 0x100),"Content-Type",0,0,&local_34,
                       local_30,0);
    if ((iVar5 == 0) &&
       (iVar5 = (*(code *)PTR_strnicmpx_00613008)(local_34,local_30[0],"application/phytrex-ota"),
       iVar5 == 0)) {
      return 0;
    }
    if (*(int *)(param_2 + 0x178) != 0 || *(int *)(param_2 + 0x17c) != 0) {
      iVar6 = -0x1a48;
      iVar5 = (*(code *)PTR_calloc_00613a18)(*(int *)(param_2 + 0x17c),1);
      *(int *)(param_2 + 0x104) = iVar5;
      if (iVar5 != 0) {
        (*(code *)PTR_memcpy_006137d0)(iVar5,local_38,*(undefined4 *)(param_2 + 0x10c));
        iVar6 = 0;
      }
    }
  }
  return iVar6;
}

