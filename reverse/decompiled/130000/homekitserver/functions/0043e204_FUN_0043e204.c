/* FUN_0043e204 @ 0043e204 */

void FUN_0043e204(void)

{
  bool bVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  int local_10;
  int local_c;
  
  (*(code *)PTR_sscanf_006125dc)(PTR_PTR_006114b0 + -0x1f94,PTR_PTR_006114b0 + -0x1f74,&local_10);
  piVar3 = (int *)(*(code *)PTR___errno_location_0061397c)();
  iVar4 = *piVar3;
  bVar1 = false;
  if ((local_10 == -0x80000000) && (local_c == 0)) {
    bVar1 = true;
  }
  (*(code *)PTR_sscanf_006125dc)(PTR_PTR_006114b0 + -0x1f6c,PTR_PTR_006114b0 + -0x1f74,&local_10);
  piVar3 = (int *)(*(code *)PTR___errno_location_0061397c)();
  bVar2 = false;
  if ((local_10 == 0x7fffffff) && (local_c == -1)) {
    bVar2 = true;
  }
  if ((((iVar4 != 0x22) || (!bVar1)) || (*piVar3 != 0x22)) || (!bVar2)) {
    *(undefined4 *)(PTR_DAT_00611498 + 0x5060) = 1;
  }
  return;
}

