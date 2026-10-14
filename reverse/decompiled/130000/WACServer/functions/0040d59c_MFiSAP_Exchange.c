/* MFiSAP_Exchange @ 0040d59c */

/* WARNING: Removing unreachable block (ram,0x0040d668) */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

int MFiSAP_Exchange(char *param_1,char *param_2,int param_3,int *param_4,undefined4 *param_5,
                   undefined1 *param_6)

{
  longlong lVar1;
  undefined *puVar2;
  char cVar5;
  int iVar3;
  undefined1 *puVar4;
  char *pcVar6;
  uint uVar7;
  int iVar8;
  char *pcVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  int local_118;
  int local_114;
  int local_110;
  int local_10c;
  undefined1 auStack_108 [16];
  undefined1 auStack_f8 [16];
  undefined1 auStack_e8 [20];
  undefined1 auStack_d4 [32];
  undefined1 auStack_b4 [36];
  undefined1 auStack_90 [96];
  undefined1 *local_30;
  
  *param_6 = 0;
  if (*param_1 == '\x01') {
    cVar5 = '\x05';
    if (param_2 == (char *)0x0) {
      cVar5 = '\x02';
    }
    *param_1 = cVar5;
  }
  uVar10 = CONCAT44(DAT_00433600,DAT_00433604);
  iVar8 = -0x1a35;
  if (*param_1 != '\x05') goto LAB_0040daf4;
  local_118 = 0;
  local_110 = 0;
  uVar10 = (*(code *)PTR_UpTicks_004330a0)();
  uVar7 = (uint)uVar10 - DAT_00433604;
  iVar8 = (int)((ulonglong)uVar10 >> 0x20) - DAT_00433600;
  uVar11 = (*(code *)PTR_UpTicksPerSecond_004330b4)();
  if (CONCAT44(iVar8 - (uint)((uint)uVar10 < uVar7),uVar7) < uVar11) {
    if (DAT_00433608 < 4) {
      DAT_00433608 = DAT_00433608 + 1;
    }
    uVar7 = DAT_00433608;
    uVar11 = (*(code *)PTR_UpTicksPerSecond_004330b4)();
    lVar1 = (uVar11 & 0xffffffff) * (ulonglong)uVar7;
    (*(code *)PTR_SleepForUpTicks_00433260)
              ((int)(uVar11 >> 0x20) * uVar7 + (int)((ulonglong)lVar1 >> 0x20),(int)lVar1);
  }
  else {
    DAT_00433608 = 0;
  }
  pcVar6 = param_2 + param_3;
  uVar10 = (*(code *)PTR_UpTicks_004330a0)();
  DAT_00433600 = (int)((ulonglong)uVar10 >> 0x20);
  DAT_00433604 = (int)uVar10;
  if ((param_2 < pcVar6) && (0 < (int)pcVar6 - (int)param_2)) {
    cVar5 = *param_2;
    iVar8 = -0x1a3b;
    param_1[1] = cVar5;
    uVar10 = CONCAT44(DAT_00433600,DAT_00433604);
    if (cVar5 == '\x01') {
      pcVar9 = param_2 + 1;
      uVar10 = CONCAT44(DAT_00433600,DAT_00433604);
      if (((int)pcVar6 - (int)pcVar9 < 0x20) ||
         (uVar10 = CONCAT44(DAT_00433600,DAT_00433604), pcVar6 != param_2 + 0x21))
      goto LAB_0040da8c;
      iVar8 = (*(code *)PTR_PlatformRandomBytes_0043329c)(auStack_d4,0x20);
      uVar10 = CONCAT44(DAT_00433600,DAT_00433604);
      if (iVar8 == 0) {
        local_30 = auStack_b4;
        (*(code *)PTR_curve25519_donna_004330fc)(local_30,auStack_d4,0);
        pcVar6 = param_1 + 2;
        (*(code *)PTR_curve25519_donna_004330fc)(pcVar6,auStack_d4,pcVar9);
        (*(code *)PTR_SHA1_Init_compat_0043308c)(auStack_90);
        (*(code *)PTR_SHA1_Update_compat_0043319c)(auStack_90,"AES-KEY",7);
        (*(code *)PTR_SHA1_Update_compat_0043319c)(auStack_90,pcVar6,0x20);
        (*(code *)PTR_SHA1_Final_compat_00433134)(auStack_e8,auStack_90);
        (*(code *)PTR_memcpy_004332a8)(auStack_108,auStack_e8,0x10);
        (*(code *)PTR_SHA1_Init_compat_0043308c)(auStack_90);
        (*(code *)PTR_SHA1_Update_compat_0043319c)(auStack_90,"AES-IV",6);
        (*(code *)PTR_SHA1_Update_compat_0043319c)(auStack_90,pcVar6,0x20);
        (*(code *)PTR_SHA1_Final_compat_00433134)(auStack_e8,auStack_90);
        (*(code *)PTR_memcpy_004332a8)(auStack_f8,auStack_e8,0x10);
        (*(code *)PTR_SHA1_Init_compat_0043308c)(auStack_90);
        (*(code *)PTR_SHA1_Update_compat_0043319c)(auStack_90,local_30,0x20);
        (*(code *)PTR_SHA1_Update_compat_0043319c)(auStack_90,pcVar9,0x20);
        (*(code *)PTR_SHA1_Final_compat_00433134)(auStack_e8,auStack_90);
        iVar8 = (*(code *)PTR_PlatformMFiAuthCreateSignature_00433120)
                          (auStack_e8,0x14,&local_118,&local_114);
        uVar10 = CONCAT44(DAT_00433600,DAT_00433604);
        if (iVar8 == 0) {
          iVar8 = (*(code *)PTR_PlatformMFiAuthCopyCertificate_004332d0)(&local_110,&local_10c);
          uVar10 = CONCAT44(DAT_00433600,DAT_00433604);
          if (iVar8 == 0) {
            pcVar6 = param_1 + 0x24;
            iVar8 = (*(code *)PTR_AES_CTR_Init_00433164)(pcVar6,auStack_108,auStack_f8);
            uVar10 = CONCAT44(DAT_00433600,DAT_00433604);
            if (iVar8 == 0) {
              iVar8 = (*(code *)PTR_AES_CTR_Update_004332f0)(pcVar6,local_118,local_114,local_118);
              puVar2 = PTR_malloc_00433280;
              if (iVar8 == 0) {
                param_1[0x140] = '\x01';
                iVar3 = (*(code *)puVar2)(local_10c + local_114 + 0x28);
                uVar10 = CONCAT44(DAT_00433600,DAT_00433604);
                if (iVar3 == 0) {
                  iVar8 = -0x1a48;
                }
                else {
                  (*(code *)PTR_memcpy_004332a8)(iVar3,auStack_b4,0x20);
                  puVar2 = PTR_memcpy_004332a8;
                  *(char *)(iVar3 + 0x20) = (char)((uint)local_10c >> 0x18);
                  *(char *)(iVar3 + 0x21) = (char)((uint)local_10c >> 0x10);
                  *(char *)(iVar3 + 0x22) = (char)((uint)local_10c >> 8);
                  *(char *)(iVar3 + 0x23) = (char)local_10c;
                  (*(code *)puVar2)(iVar3 + 0x24,local_110,local_10c);
                  puVar2 = PTR_memcpy_004332a8;
                  puVar4 = (undefined1 *)(iVar3 + 0x24 + local_10c);
                  puVar4[1] = (char)((uint)local_114 >> 0x10);
                  *puVar4 = (char)((uint)local_114 >> 0x18);
                  puVar4[2] = (char)((uint)local_114 >> 8);
                  puVar4[3] = (char)local_114;
                  (*(code *)puVar2)(puVar4 + 4,local_118);
                  *param_4 = iVar3;
                  *param_5 = puVar4 + 4 + (local_114 - iVar3);
                  uVar10 = CONCAT44(DAT_00433600,DAT_00433604);
                }
              }
              else {
                (*(code *)PTR_AES_CTR_Final_004330bc)(pcVar6);
                uVar10 = CONCAT44(DAT_00433600,DAT_00433604);
              }
            }
          }
        }
      }
    }
  }
  else {
LAB_0040da8c:
    iVar8 = -0x1a57;
  }
  DAT_00433600 = (int)((ulonglong)uVar10 >> 0x20);
  DAT_00433604 = (int)uVar10;
  if (local_110 != 0) {
    (*(code *)PTR_free_00433088)();
    uVar10 = CONCAT44(DAT_00433600,DAT_00433604);
  }
  DAT_00433600 = (int)((ulonglong)uVar10 >> 0x20);
  DAT_00433604 = (int)uVar10;
  if (local_118 != 0) {
    (*(code *)PTR_free_00433088)();
    uVar10 = CONCAT44(DAT_00433600,DAT_00433604);
  }
  DAT_00433600 = (int)((ulonglong)uVar10 >> 0x20);
  DAT_00433604 = (int)uVar10;
  if (iVar8 == 0) {
    *param_6 = 1;
    *param_1 = *param_1 + '\x01';
    return 0;
  }
LAB_0040daf4:
  DAT_00433600 = (int)((ulonglong)uVar10 >> 0x20);
  DAT_00433604 = (int)uVar10;
  *param_1 = '\0';
  return iVar8;
}

