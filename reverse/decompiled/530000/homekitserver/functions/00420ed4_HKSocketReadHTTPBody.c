/* HKSocketReadHTTPBody @ 00420ed4 */

int HKSocketReadHTTPBody(uint param_1,int param_2,int param_3)

{
  undefined *puVar1;
  uint *puVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  uint local_c0 [32];
  uint local_40;
  uint *local_3c;
  int local_38;
  undefined4 *local_34;
  undefined4 *local_30;
  
  iVar6 = -0x1a31;
  if (param_2 != 0) {
    local_40 = 1 << (param_1 & 0x1f);
    local_3c = &local_40;
    local_38 = param_1 + 1;
    iVar7 = 0;
    iVar6 = -0x1a52;
    local_34 = &local_c8;
    local_30 = &local_cc;
    while( true ) {
      while( true ) {
        if ((*(int *)(param_2 + 0x178) == 0) &&
           (*(uint *)(param_2 + 0x17c) <= *(uint *)(param_2 + 0x10c))) {
          iVar6 = 0;
          goto LAB_00421170;
        }
        puVar3 = local_c0;
        if (*(int *)(param_3 + 0x48) == 0 && *(int *)(param_3 + 0x4c) == 0) {
          do {
            puVar2 = local_3c;
            *puVar3 = 0;
            iVar4 = local_38;
            puVar3 = puVar3 + 1;
          } while (puVar3 != puVar2);
          local_c0[param_1 >> 5] = local_c0[param_1 >> 5] | local_40;
          local_c8 = 2;
          local_c4 = 0;
          iVar4 = (*(code *)PTR_select_00613cc4)(iVar4,local_c0,0,0,local_34);
          if (iVar4 < 1) goto LAB_00421170;
        }
        iVar6 = (*(code *)PTR_HTTPGetHeaderField_00613c70)
                          (param_2,*(undefined4 *)(param_2 + 0x100),"Content-Type",0,0,&local_d0,
                           local_30,0);
        if (iVar6 != 0) goto LAB_00421170;
        iVar4 = (*(code *)PTR_strnicmpx_00613ea0)(local_d0,local_cc,"application/phytrex-ota");
        if (iVar4 != 0) break;
        iVar4 = (*(code *)PTR_calloc_006148c0)(0x400,1);
        *(int *)(param_2 + 0x108) = iVar4;
        if (iVar4 == 0) {
          iVar6 = -0x1a48;
          goto LAB_00421170;
        }
        uVar5 = *(uint *)(param_2 + 0x17c) - *(int *)(param_2 + 0x10c);
        if ((*(uint *)(param_2 + 0x178) != (uint)(*(uint *)(param_2 + 0x17c) < uVar5)) ||
           (0x3ff < uVar5)) {
          uVar5 = 0x400;
        }
        iVar4 = FUN_00420888(param_3,param_1,iVar4,uVar5);
        puVar1 = PTR_free_0061286c;
        if (iVar4 < 1) {
          if (iVar7 == 0) {
            iVar6 = -0x1a61;
          }
          else {
            (*(code *)PTR_free_0061286c)(*(undefined4 *)(param_2 + 0x108));
            *(undefined4 *)(param_2 + 0x108) = 0;
          }
          goto LAB_00421170;
        }
        *(int *)(param_2 + 0x10c) = *(int *)(param_2 + 0x10c) + iVar4;
        iVar7 = iVar7 + iVar4;
        (*(code *)puVar1)(*(undefined4 *)(param_2 + 0x108));
        *(undefined4 *)(param_2 + 0x108) = 0;
      }
      iVar4 = FUN_00420888(param_3,param_1,*(int *)(param_2 + 0x104) + *(int *)(param_2 + 0x10c),
                           *(int *)(param_2 + 0x17c) - *(int *)(param_2 + 0x10c));
      if (iVar4 < 1) break;
      iVar7 = iVar7 + iVar4;
      *(int *)(param_2 + 0x10c) = *(int *)(param_2 + 0x10c) + iVar4;
    }
    if (iVar7 == 0) {
      iVar6 = -0x1a61;
    }
  }
LAB_00421170:
  if (*(int *)(param_2 + 0x108) != 0) {
    (*(code *)PTR_free_0061286c)();
    *(undefined4 *)(param_2 + 0x108) = 0;
  }
  return iVar6;
}

