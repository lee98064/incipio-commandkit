/* RegisterWACBonjourService @ 0040508c */

int RegisterWACBonjourService(int *param_1,undefined1 param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 uVar6;
  undefined4 uVar4;
  int iVar5;
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [16];
  int local_28;
  undefined4 local_24;
  
  if (param_1 != (int *)0x0) {
    (*(code *)PTR_sprintf_00433144)(auStack_58,&DAT_0041cdf8,param_2);
    uVar2 = 5;
    if (*(char *)(*param_1 + 0x2c) == '\0') {
      uVar2 = 4;
    }
    (*(code *)PTR_sprintf_00433144)(auStack_48,&DAT_0041cdf8,uVar2);
    (*(code *)PTR_sprintf_00433144)(auStack_38,"%d.%d",1,0xe);
    (*(code *)PTR_TXTRecordCreate_00433114)(auStack_68,0,0);
    iVar3 = (*(code *)PTR_DataToHexStringWithColons_004332ec)(*param_1,6);
    if (iVar3 != 0) {
      uVar6 = (*(code *)PTR_strlen_004330cc)(iVar3);
      local_28 = (*(code *)PTR_TXTRecordSetValue_00433244)(auStack_68,"deviceid",uVar6,iVar3);
      (*(code *)PTR_free_00433088)(iVar3);
      iVar3 = local_28;
      if (local_28 == 0) {
        uVar6 = (*(code *)PTR_strlen_004330cc)(auStack_58);
        iVar3 = (*(code *)PTR_TXTRecordSetValue_00433244)(auStack_68,&DAT_0041d544,uVar6,auStack_58)
        ;
        if (iVar3 == 0) {
          uVar6 = (*(code *)PTR_strlen_004330cc)(auStack_48);
          iVar3 = (*(code *)PTR_TXTRecordSetValue_00433244)(auStack_68,"features",uVar6,auStack_48);
          if (iVar3 == 0) {
            uVar6 = (*(code *)PTR_strlen_004330cc)(auStack_38);
            iVar3 = (*(code *)PTR_TXTRecordSetValue_00433244)(auStack_68,"srcvers",uVar6,auStack_38)
            ;
            if (iVar3 == 0) {
              uVar2 = 0;
              if (*PTR_g_InputIface_004331ec != '\0') {
                uVar2 = (*(code *)PTR_if_nametoindex_00433200)();
              }
              local_24 = *(undefined4 *)(*param_1 + 0x1c);
              uVar1 = *(undefined2 *)(param_1[1] + 0x16);
              local_28 = uVar2;
              uVar2 = (*(code *)PTR_TXTRecordGetLength_004331c0)(auStack_68);
              uVar4 = (*(code *)PTR_TXTRecordGetBytesPtr_0043325c)(auStack_68);
              iVar5 = (*(code *)PTR_DNSServiceRegister_00433168)
                                (param_1 + 0xe,0,local_28,local_24,"_mfi-config._tcp","local",0,
                                 uVar1,uVar2,uVar4,0,0);
              iVar3 = -0x1a6a;
              if (iVar5 == 0) {
                iVar3 = 0;
              }
            }
          }
        }
      }
      goto LAB_00405354;
    }
  }
  iVar3 = -0x1a31;
LAB_00405354:
  local_28 = iVar3;
  (*(code *)PTR_TXTRecordDeallocate_00433188)(auStack_68);
  return local_28;
}

