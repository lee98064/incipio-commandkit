/* FUN_004229ec @ 004229ec */

int FUN_004229ec(undefined4 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined1 auStack_44 [4];
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  undefined4 *local_34;
  undefined1 *local_30;
  int *local_2c;
  
  local_3c = 1;
  local_38 = param_2 + 0x100;
  local_34 = &local_40;
  local_30 = auStack_44;
  local_2c = &local_50;
  local_40 = 0;
  iVar4 = param_2 + *(int *)(param_2 + 0x100);
  iVar5 = 0;
  do {
    uVar3 = *(uint *)(param_2 + 0x10c);
    uVar6 = local_38 - iVar4;
    if (uVar3 == 0) {
      (*(code *)PTR_getsockopt_00612874)(param_1,0xffff,0x1007,local_34,local_30);
      uVar6 = (*(code *)PTR_read_00612ef0)(param_1,iVar4,uVar6);
      (*(code *)PTR_setsockopt_00612b68)(param_1,6,1,&local_3c,4);
      (*(code *)PTR_setsockopt_00612b68)(param_1,6,0xc,&local_3c,4);
      if ((int)uVar6 < 1) {
        if (uVar6 == 0) {
          piVar1 = (int *)(*(code *)PTR___errno_location_0061397c)();
          if ((*piVar1 == 4) || (*piVar1 == 0xb)) goto LAB_00422b84;
        }
        if (iVar5 == 0) {
          return -0x1a61;
        }
        break;
      }
      iVar5 = iVar5 + uVar6;
      uVar3 = uVar6;
    }
    else {
      if (uVar6 < uVar3) {
        return -0x1a31;
      }
      (*(code *)PTR_memmove_00612be0)(iVar4,*(undefined4 *)(param_2 + 0x104),uVar3);
      *(undefined4 *)(param_2 + 0x10c) = 0;
    }
LAB_00422b84:
    *(uint *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + uVar3;
    iVar2 = findHeader(param_2,local_2c);
    iVar4 = iVar4 + uVar3;
  } while (iVar2 == 0);
  *(int *)(param_2 + 0x100) = local_50 - param_2;
  iVar5 = HTTPHeaderParse(param_2);
  if (iVar5 == 0) {
    *(int *)(param_2 + 0x10c) = iVar4 - local_50;
    if (*(int *)(param_2 + 0x104) != 0) {
      (*(code *)PTR_free_006119dc)();
      *(undefined4 *)(param_2 + 0x104) = 0;
    }
    if (*(int *)(param_2 + 0x108) != 0) {
      (*(code *)PTR_free_006119dc)();
      *(undefined4 *)(param_2 + 0x108) = 0;
    }
    iVar4 = HTTPGetHeaderField(param_2,*(undefined4 *)(param_2 + 0x100),"Content-Type",0,0,&local_4c
                               ,&local_48,0);
    if ((iVar4 == 0) &&
       (iVar4 = (*(code *)PTR_strnicmpx_00613008)(local_4c,local_48,"application/phytrex-ota"),
       iVar4 == 0)) {
      return 0;
    }
    iVar5 = -0x1a48;
    iVar4 = (*(code *)PTR_calloc_00613a18)(*(undefined4 *)(param_2 + 0x17c),1);
    *(int *)(param_2 + 0x104) = iVar4;
    if (iVar4 != 0) {
      (*(code *)PTR_memcpy_006137d0)(iVar4,local_50,*(undefined4 *)(param_2 + 0x10c));
      iVar5 = 0;
    }
  }
  return iVar5;
}

