/* FUN_00413600 @ 00413600 */

undefined4 FUN_00413600(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  byte abStack_1138 [276];
  byte abStack_1024 [4100];
  
  (*(code *)PTR_memset_0057d9dc)(abStack_1024,0,0x1002);
  (*(code *)PTR_memcpy_0057e7cc)
            (abStack_1138,
             "-----BEGIN PUBLIC KEY-----\nMIGfMA0GCSqGSIb3DQEBAQUAA4GNADCBiQKBgQDEfQaDf1W49oIv5Rh1LRiwyosx\nHAqbv+qeJKk9oZO2FUBAv88E6cXTUYtlkg0BUr5H6ecthgpuzsoSOj07HwMefxTI\nPcWLL0XP5Ch5HGiyYTPjutGJgbBmTslnt2s4yWrOzOskUrWv71bd9AdHXwmarAiY\nPQypQJ42EPv/Sv1nKwIDAQAB\n-----END PUBLIC KEY-----\n"
             ,0x111);
  iVar6 = *(int *)(param_1 + 0x80);
  iVar5 = iVar6 + param_2;
  if (iVar5 == 0) {
    pcVar3 = "can\'t get  SIGN_HEADER!";
  }
  else {
    iVar1 = (*(code *)PTR_memcmp_0057d844)(iVar5,&DAT_00532ac8,4);
    if (iVar1 != 0) {
      pcVar3 = "memcmp SIGN_HEADER(%s) fail!\n";
      puVar4 = &DAT_00532ac8;
LAB_004137fc:
      (*(code *)PTR_printf_0057d378)(pcVar3,puVar4);
      return 0;
    }
    iVar6 = FUN_0041344c((byte *)(iVar6 + param_2 + 0x10),*(int *)(iVar5 + 0xc),abStack_1138,
                         abStack_1024);
    if (iVar6 == -1) {
      pcVar3 = "Public Decrypt failed";
    }
    else {
      iVar6 = FUN_004134bc(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x88),
                           abStack_1024,iVar6);
      if (iVar6 == 0) {
        return 0;
      }
      iVar6 = param_2 + 0x10 + *(int *)(iVar5 + 0xc);
      iVar5 = *(int *)(param_1 + 0x80) + iVar6;
      if (iVar5 != 0) {
        iVar1 = (*(code *)PTR_memcmp_0057d844)(iVar5,&DAT_00532b20,4);
        puVar4 = &DAT_00532b20;
        if (iVar1 == 0) {
          (*(code *)PTR_printf_0057d378)
                    ("get DVER_HEADER (%s)startAddr (%d), burnAddr (%d), len (%d)\n",iVar5,
                     *(undefined4 *)(iVar5 + 4),*(undefined4 *)(iVar5 + 8),
                     *(undefined4 *)(iVar5 + 0xc));
          iVar5 = *(int *)(param_1 + 0x80) + iVar6 + 0x10;
          (*(code *)PTR_memset_0057d9dc)(param_1 + 0x40,0,0x40);
          uVar2 = (*(code *)PTR_strlen_0057e310)(iVar5);
          (*(code *)PTR_memcpy_0057e7cc)(param_1 + 0x40,iVar5,uVar2);
          return 1;
        }
        pcVar3 = "memcmp DVER_HEADER(%s) fail!\n";
        goto LAB_004137fc;
      }
      pcVar3 = "can\'t get DVER_HEADER!";
    }
  }
  (*(code *)PTR_puts_0057d338)(pcVar3);
  return 0;
}

