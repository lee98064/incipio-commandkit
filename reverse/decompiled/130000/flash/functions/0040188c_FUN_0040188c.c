/* FUN_0040188c @ 0040188c */

undefined4 FUN_0040188c(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char cVar5;
  undefined4 uVar6;
  char *pcVar7;
  undefined1 auStack_28 [6];
  ushort local_22;
  uint local_20;
  
  if (param_1 == 0x8000) {
    pcVar7 = "COMPDS";
    uVar6 = 2;
  }
  else if (param_1 == 0xc000) {
    pcVar7 = "COMPCS";
    uVar6 = 4;
  }
  else {
    if (param_1 != 0x6000) {
      (*(code *)PTR_printf_004235c4)("offset error-[%s-%u]\n","flash.c",0x2c5f);
      return 0xffffffff;
    }
    pcVar7 = "COMPHS";
    uVar6 = 1;
  }
  uVar1 = (*(code *)PTR_mib_get_real_len_004235a0)(uVar6);
  FUN_004017c0(auStack_28,param_1,0xc);
  iVar2 = (*(code *)PTR_strncmp_00423510)(auStack_28,pcVar7,6);
  if (iVar2 != 0) {
    return 0xffffffff;
  }
  if (local_20 == 0) {
    return 0xffffffff;
  }
  if (local_20 <= uVar1) {
    iVar2 = (*(code *)PTR_calloc_00423540)(1,local_20 + 0xc);
    if (iVar2 == 0) {
      return 0xffffffff;
    }
    iVar3 = (*(code *)PTR_calloc_00423540)(1,local_22 * local_20);
    if (iVar3 != 0) {
      FUN_004017c0(iVar2,param_1,local_20 + 0xc);
      (*(code *)PTR_Decode_004235b0)(iVar2 + 0xc,local_20,iVar3);
      uVar1 = (uint)*(ushort *)(iVar3 + 4);
      pcVar7 = (char *)(*(code *)PTR_calloc_00423540)(1,uVar1);
      if (pcVar7 != (char *)0x0) {
        (*(code *)PTR_memcpy_004235a4)(pcVar7,iVar3 + 6,uVar1);
        cVar5 = '\0';
        for (pcVar4 = pcVar7; pcVar4 != pcVar7 + uVar1; pcVar4 = pcVar4 + 1) {
          cVar5 = cVar5 + *pcVar4;
        }
        if (cVar5 != '\0') {
          return 0xffffffff;
        }
        (*(code *)PTR_free_0042345c)(iVar2);
        (*(code *)PTR_free_0042345c)(iVar3);
        (*(code *)PTR_free_0042345c)(pcVar7);
        return 1;
      }
      (*(code *)PTR_free_0042345c)(iVar2);
      iVar2 = iVar3;
    }
    (*(code *)PTR_free_0042345c)(iVar2);
    return 0xffffffff;
  }
  return 0xffffffff;
}

