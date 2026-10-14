/* FUN_00420888 @ 00420888 */

/* WARNING: Type propagation algorithm not settling */

uint FUN_00420888(char *param_1,uint param_2,undefined4 param_3,uint param_4)

{
  bool bVar1;
  uint uVar2;
  undefined1 **ppuVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 auStack_f8 [4];
  undefined4 local_f4;
  undefined4 local_f0;
  byte local_ec;
  byte local_eb;
  undefined4 local_e4;
  undefined4 local_e0;
  int local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined1 *local_d0 [32];
  undefined1 *local_50;
  undefined4 *local_4c;
  undefined4 *local_48;
  byte *local_44;
  undefined1 **local_40;
  undefined1 **local_3c;
  int local_38;
  undefined1 **local_34;
  undefined4 *local_30;
  uint local_2c;
  
  local_f4 = 0;
  local_f0 = 1;
  if (*param_1 == '\0') {
    ppuVar3 = local_d0;
    do {
      *ppuVar3 = (undefined1 *)0x0;
      ppuVar3 = ppuVar3 + 1;
      uVar2 = param_2 >> 5;
    } while (ppuVar3 != &local_50);
    local_d0[uVar2] = (undefined1 *)((uint)local_d0[uVar2] | 1 << (param_2 & 0x1f));
    local_e4 = 2;
    local_e0 = 0;
    iVar5 = (*(code *)PTR_select_00613cc4)(param_2 + 1,local_d0,0,0,&local_e4);
    if (0 < iVar5) {
      if (((int)local_d0[uVar2] >> (param_2 & 0x1f) & 1U) != 0) {
        (*(code *)PTR_getsockopt_00613710)(param_2,0xffff,0x1007,&local_f4,auStack_f8);
        (*(code *)PTR_memset_006130cc)(param_3,0,param_4);
        uVar2 = (*(code *)PTR_read_00613d88)(param_2,param_3,param_4);
        return uVar2;
      }
      return 0xffffffff;
    }
  }
  else {
    iVar5 = *(int *)(param_1 + 0x48);
    uVar2 = *(uint *)(param_1 + 0x4c);
    uVar8 = param_2 >> 5;
    if (iVar5 != 0 || uVar2 != 0) {
LAB_00420d24:
      if ((iVar5 == 0) && (uVar2 < param_4)) {
        param_4 = uVar2;
      }
      (*(code *)PTR_memcpy_00614674)(param_3,*(undefined4 *)(param_1 + 0x50),param_4);
      uVar2 = *(uint *)(param_1 + 0x4c) - param_4;
      iVar5 = *(int *)(param_1 + 0x48) - (uint)(*(uint *)(param_1 + 0x4c) < uVar2);
      *(int *)(param_1 + 0x48) = iVar5;
      *(uint *)(param_1 + 0x4c) = uVar2;
      if (iVar5 == 0 && uVar2 == 0) {
        (*(code *)PTR_free_0061286c)();
        return param_4;
      }
      (*(code *)PTR_memmove_00613a7c)(*(int *)(param_1 + 0x50),*(int *)(param_1 + 0x50) + param_4);
      return param_4;
    }
    local_50 = auStack_f8;
    local_40 = local_d0;
    local_3c = &local_50;
    local_38 = param_2 + 1;
    local_48 = &local_e4;
    uVar7 = 1 << (param_2 & 0x1f);
    uVar2 = 0;
    local_4c = &local_f4;
    local_44 = &local_ec;
    ppuVar3 = local_40;
    while( true ) {
      do {
        iVar5 = local_38;
        *ppuVar3 = (undefined1 *)0x0;
        ppuVar3 = ppuVar3 + 1;
      } while (ppuVar3 != local_3c);
      local_d0[uVar8] = (undefined1 *)((uint)local_d0[uVar8] | uVar7);
      local_e4 = 2;
      local_e0 = 0;
      iVar5 = (*(code *)PTR_select_00613cc4)(iVar5,local_40,0,0,local_48);
      if (iVar5 < 1) break;
      ppuVar3 = local_40;
      if ((uVar7 & (uint)local_d0[uVar8]) != 0) {
        (*(code *)PTR_getsockopt_00613710)(param_2,0xffff,0x1007,local_4c,local_50);
        local_2c = (*(code *)PTR_read_00613d88)(param_2,local_44 + uVar2,2 - uVar2);
        local_2c = local_2c & 0xffff;
        (*(code *)PTR_setsockopt_00613a04)(param_2,6,1,&local_f0,4);
        (*(code *)PTR_setsockopt_00613a04)(param_2,6,0xc,&local_f0,4);
        ppuVar3 = local_40;
        if (local_2c == 0) {
          bVar1 = uVar2 == 0;
          uVar2 = 1;
          if (bVar1) {
            return 0;
          }
        }
        else {
          uVar2 = local_2c + uVar2 & 0xffff;
          if (1 < uVar2) {
            local_50 = (undefined1 *)((uint)local_eb * 0x100 + (uint)local_ec);
            uVar2 = (uint)(local_50 + 0x10) & 0xffff;
            iVar5 = (*(code *)PTR_calloc_006148c0)(uVar2,1);
            if (iVar5 == 0) {
              return 0;
            }
            local_48 = (undefined4 *)auStack_f8;
            local_44 = (byte *)&local_f0;
            local_34 = local_d0;
            uVar6 = 0;
            local_30 = &local_e4;
            while (ppuVar3 = local_40, uVar6 < uVar2) {
              do {
                do {
                  iVar4 = local_38;
                  *ppuVar3 = (undefined1 *)0x0;
                  ppuVar3 = ppuVar3 + 1;
                } while (local_3c != ppuVar3);
                local_d0[uVar8] = (undefined1 *)((uint)local_d0[uVar8] | uVar7);
                local_e4 = 2;
                local_e0 = 0;
                iVar4 = (*(code *)PTR_select_00613cc4)(iVar4,local_34,0,0,local_30);
                if (iVar4 < 1) {
                  return 0;
                }
                ppuVar3 = local_40;
              } while ((uVar7 & (uint)local_d0[uVar8]) == 0);
              (*(code *)PTR_getsockopt_00613710)(param_2,0xffff,0x1007,local_4c,local_48);
              local_2c = (*(code *)PTR_read_00613d88)(param_2,iVar5 + uVar6 * 4,uVar2 - uVar6);
              local_2c = local_2c & 0xffff;
              (*(code *)PTR_setsockopt_00613a04)(param_2,6,1,local_44,4);
              (*(code *)PTR_setsockopt_00613a04)(param_2,6,0xc,local_44,4);
              if (local_2c == 0) {
                if (uVar6 == 0) {
                  return 0;
                }
              }
              else {
                uVar6 = local_2c + uVar6 & 0xffff;
              }
            }
            iVar4 = (*(code *)PTR_calloc_006148c0)(local_50,1);
            *(int *)(param_1 + 0x50) = iVar4;
            if (iVar4 == 0) {
              return 0;
            }
            local_d8 = 0;
            local_d4 = 0;
            local_dc = (uint)CONCAT11((char)*(undefined4 *)(param_1 + 100),
                                      (char)((uint)*(undefined4 *)(param_1 + 100) >> 8)) << 0x10;
            iVar4 = (*(code *)PTR_crypto_aead_chacha20poly1305_decrypt_00613a28)
                              (iVar4,param_1 + 0x48,0,iVar5,0,uVar2,&local_ec);
            uVar8 = *(uint *)(param_1 + 100) + 1;
            *(uint *)(param_1 + 0x60) =
                 (uint)(uVar8 < *(uint *)(param_1 + 100)) + *(int *)(param_1 + 0x60);
            *(uint *)(param_1 + 100) = uVar8;
            if (iVar4 != 0) {
              (*(code *)PTR_free_0061286c)(iVar5);
              return 0;
            }
            if (*(int *)(param_1 + 0x48) != (uVar2 - 0x10 < uVar2) - 1) {
              return 0;
            }
            if (*(uint *)(param_1 + 0x4c) != uVar2 - 0x10) {
              return 0;
            }
            (*(code *)PTR_free_0061286c)(iVar5);
            iVar5 = *(int *)(param_1 + 0x48);
            uVar2 = *(uint *)(param_1 + 0x4c);
            goto LAB_00420d24;
          }
        }
      }
    }
  }
  return 0;
}

