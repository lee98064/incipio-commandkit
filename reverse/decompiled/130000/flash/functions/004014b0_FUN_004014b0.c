/* FUN_004014b0 @ 004014b0 */

undefined4 FUN_004014b0(int param_1,undefined4 param_2,int param_3,undefined1 *param_4)

{
  undefined1 uVar1;
  ushort uVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  char *pcVar10;
  undefined1 auStack_40 [6];
  short local_3a;
  uint local_38;
  undefined4 local_30;
  
  uVar1 = *param_4;
  local_30 = param_2;
  iVar4 = (*(code *)PTR_mib_get_flash_offset_004234f8)();
  if (-1 < iVar4) {
    if (param_1 == 2) {
      pcVar10 = "COMPDS";
    }
    else if (param_1 == 4) {
      pcVar10 = "COMPCS";
    }
    else {
      if (param_1 != 1) {
        return 0;
      }
      pcVar10 = "COMPHS";
    }
    uVar2 = *(ushort *)(param_3 + 4);
    iVar5 = (*(code *)PTR_mib_get_real_len_004235a0)(param_1);
    if (iVar5 != 0) {
      uVar9 = uVar2 + 6;
      iVar5 = (*(code *)PTR_malloc_00423588)(iVar5);
      iVar6 = (*(code *)PTR_malloc_00423588)(uVar9);
      if (iVar6 == 0) {
        if (iVar5 != 0) {
          (*(code *)PTR_free_0042345c)(iVar5);
          return 0;
        }
      }
      else if (iVar5 != 0) {
        (*(code *)PTR_memcpy_004235a4)(iVar6 + 6,local_30,*(ushort *)(param_3 + 4) - 1);
        puVar3 = PTR_memcpy_004235a4;
        *(undefined1 *)(iVar6 + 6 + (uint)*(ushort *)(param_3 + 4) + -1) = uVar1;
        (*(code *)puVar3)(iVar6,param_3,6);
        uVar7 = (*(code *)PTR_Encode_00423570)(iVar6,uVar9,iVar5 + 0xc);
        (*(code *)PTR_strcpy_004235d0)(auStack_40,pcVar10);
        if (uVar7 == 0) {
          trap(0x1c00);
        }
        local_3a = (short)(uVar9 / uVar7) + 1;
        local_38 = uVar7;
        (*(code *)PTR_memcpy_004235a4)(iVar5,auStack_40,0xc);
        iVar8 = (*(code *)PTR_open_00423480)("/dev/mtdblock0",2);
        if (iVar8 != -1) {
          (*(code *)PTR_lseek_00423568)(iVar8,iVar4,0);
          iVar4 = (*(code *)PTR_write_00423538)(iVar8,iVar5,uVar7 + 0xc);
          (*(code *)PTR_close_00423460)(iVar8);
          (*(code *)PTR_sync_00423504)();
          if (iVar4 == uVar7 + 0xc) {
            (*(code *)PTR_free_0042345c)(iVar5);
            (*(code *)PTR_free_0042345c)(iVar6);
            return 1;
          }
        }
        (*(code *)PTR_printf_004235c4)
                  ("Write flash compress setting[%u] failed![%s-%u]\n",param_1,"flash.c",0x2cf8);
        return 0;
      }
    }
  }
  return 0;
}

