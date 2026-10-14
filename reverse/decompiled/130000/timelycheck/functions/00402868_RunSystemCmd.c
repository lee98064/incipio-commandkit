/* RunSystemCmd @ 00402868 */

void RunSystemCmd(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined1 auStackX_0 [4];
  undefined4 local_res4;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined4 *local_78;
  undefined4 local_74 [26];
  
  puVar2 = local_74;
  local_res4 = param_2;
  local_res8 = param_3;
  local_resc = param_4;
  (*(code *)PTR_memset_0042b114)(puVar2,0,0x60);
  iVar1 = 0;
  local_78 = (undefined4 *)register0x00000074;
  while( true ) {
    local_78 = local_78 + 1;
    iVar1 = iVar1 + 1;
    if (*(char *)*local_78 == '\0') break;
    *puVar2 = (char *)*local_78;
    puVar2 = puVar2 + 1;
  }
  local_74[iVar1] = 0;
  DoCmd(local_74,param_1);
  return;
}

