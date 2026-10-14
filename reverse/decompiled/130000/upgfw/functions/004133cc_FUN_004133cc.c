/* FUN_004133cc @ 004133cc */

undefined4 FUN_004133cc(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 local_c0 [20];
  undefined1 auStack_ac [44];
  undefined1 auStack_80 [100];
  
  (*(code *)PTR_SHA1_Init_0057d594)(auStack_80);
  puVar4 = local_c0;
  (*(code *)PTR_SHA1_Update_0057e340)(auStack_80,param_1,param_2);
  (*(code *)PTR_SHA1_Final_0057d480)(puVar4,auStack_80);
  puVar3 = auStack_ac;
  do {
    uVar1 = *puVar4;
    puVar4 = puVar4 + 1;
    (*(code *)PTR_sprintf_0057d6e0)(puVar3,&DAT_00532934,uVar1);
    puVar3 = puVar3 + 2;
  } while (puVar4 != auStack_ac);
  iVar2 = (*(code *)PTR_memcmp_0057d714)(param_3,auStack_ac,param_4);
  if ((iVar2 == 0) && (iVar2 = (*(code *)PTR_strlen_0057e1dc)(auStack_ac), param_4 == iVar2)) {
    (*(code *)PTR_puts_0057d208)("The signature check successfully.");
    return 1;
  }
  (*(code *)PTR_puts_0057d208)("The signature doesn\'t match the firmware hash code.");
  return 0;
}

