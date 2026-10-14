/* FUN_0040e39c @ 0040e39c */

undefined4 FUN_0040e39c(void)

{
  int iVar1;
  undefined1 *puVar2;
  char *pcVar3;
  int iVar4;
  int local_458;
  uint local_454;
  undefined1 local_450 [7];
  undefined1 auStack_449 [24];
  byte local_431;
  undefined1 auStack_430 [40];
  undefined1 auStack_408 [500];
  undefined1 auStack_214 [500];
  
  local_458 = 0;
  (*(code *)PTR_apmib_get_0042b1a0)(0xff,&local_454);
  (*(code *)PTR_apmib_get_0042b1a0)(0xf0,&local_458);
  (*(code *)PTR_sprintf_0042b0e8)(auStack_408,&DAT_00418d5c,local_458);
  for (iVar4 = 1; iVar4 <= local_458; iVar4 = iVar4 + 1) {
    (*(code *)PTR_memset_0042b114)(local_450,0,0x20);
    local_450[0] = (undefined1)iVar4;
    (*(code *)PTR_apmib_get_0042b1a0)(0x80f1,local_450);
    if (local_454 == local_431) {
      iVar1 = (*(code *)PTR_strncmp_0042b154)(local_450,"http://",7);
      puVar2 = auStack_449;
      if (iVar1 != 0) {
        puVar2 = local_450;
      }
      (*(code *)PTR_sprintf_0042b0e8)(auStack_430,&DAT_00418d68,puVar2);
      (*(code *)PTR_strcat_0042b170)(auStack_408,auStack_430);
    }
  }
  if (local_454 == 0) {
    pcVar3 = "black";
  }
  else {
    pcVar3 = "white";
  }
  (*(code *)PTR_RunSystemCmd_0042b0dc)("/proc/filter_table",&DAT_00417a78,pcVar3,"");
  (*(code *)PTR_sprintf_0042b0e8)(auStack_214,"add:0%c3 3 %s",0x16,auStack_408);
  (*(code *)PTR_RunSystemCmd_0042b0dc)("/proc/filter_table",&DAT_00417a78,auStack_214,"");
  return 0;
}

