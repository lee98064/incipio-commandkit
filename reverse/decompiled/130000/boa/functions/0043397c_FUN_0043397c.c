/* FUN_0043397c @ 0043397c */

int FUN_0043397c(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  int local_160;
  int local_15c;
  undefined1 auStack_158 [44];
  undefined1 auStack_12c [44];
  undefined1 local_100 [33];
  char local_df;
  undefined1 local_de;
  char local_dd;
  undefined1 auStack_dc [174];
  undefined1 local_2e;
  undefined1 local_2d;
  
  iVar1 = *(int *)PTR_wlan_idx_0046a93c;
  uVar3 = 0x834;
  if (iVar1 != 0) {
    uVar3 = 0x844;
  }
  uVar7 = 0x8848;
  if (iVar1 == 0) {
    uVar7 = 0x8836;
  }
  uVar5 = 0x847;
  if (iVar1 == 0) {
    uVar5 = 0x835;
  }
  (*(code *)PTR_apmib_get_0046aadc)(uVar3,&local_15c);
  if (local_15c == 0) {
    (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,"//wireless profile disabled");
    iVar1 = 0;
  }
  else {
    (*(code *)PTR_apmib_get_0046aadc)(uVar5,&local_160);
    iVar1 = 0;
    for (iVar6 = 1; iVar6 <= local_160; iVar6 = iVar6 + 1) {
      (*(code *)PTR_memset_0046a87c)(auStack_158,0,0x2b);
      (*(code *)PTR_memset_0046a87c)(auStack_12c,0,0x2b);
      (*(code *)PTR_sprintf_0046a808)(auStack_12c,"%d",0);
      (*(code *)PTR_memset_0046a87c)(local_100,0,0xd4);
      local_100[0] = (undefined1)iVar6;
      iVar2 = (*(code *)PTR_apmib_get_0046aadc)(uVar7,local_100);
      if (iVar2 == 0) {
        return -1;
      }
      if ((byte)(local_df - 1U) < 2) {
        (*(code *)PTR_sprintf_0046a808)(auStack_158,"%d",1);
        puVar4 = auStack_12c;
        if (local_df == '\x01') {
          uVar3 = 1;
        }
        else {
LAB_00433b54:
          uVar3 = 2;
        }
      }
      else {
        puVar4 = auStack_158;
        if (local_df == '\x03') goto LAB_00433b54;
        if (local_df == '\x04') {
          uVar3 = 4;
        }
        else {
          uVar3 = 0;
        }
      }
      (*(code *)PTR_sprintf_0046a808)(puVar4,"%d",uVar3);
      uVar3 = 2;
      if (local_dd == '\x02') {
        uVar3 = 1;
      }
      iVar2 = (*(code *)PTR_req_format_write_0046a95c)
                        (param_1,"token[%d] =\'%s|%s|%d|%s|%d|%d|%d|%d|%s\';\n",iVar6 + -1,local_100
                         ,auStack_158,local_de,auStack_12c,local_2e,uVar3,uVar3,local_2d,auStack_dc)
      ;
      iVar1 = iVar1 + iVar2;
    }
  }
  return iVar1;
}

