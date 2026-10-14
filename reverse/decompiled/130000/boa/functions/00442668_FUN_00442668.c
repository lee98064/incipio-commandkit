/* FUN_00442668 @ 00442668 */

int FUN_00442668(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_b0 [152];
  
  iVar1 = (*(code *)PTR_fopen_0046a894)("/tmp/syscmd.log","r");
  iVar3 = 0;
  if (iVar1 == 0) {
    iVar3 = 0;
  }
  else {
    while( true ) {
      iVar2 = (*(code *)PTR_fgets_0046ab78)(auStack_b0,0x96,iVar1);
      if (iVar2 == 0) break;
      iVar2 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,auStack_b0);
      iVar3 = iVar3 + iVar2;
    }
    (*(code *)PTR_fclose_0046a85c)(iVar1);
    (*(code *)PTR_unlink_0046a900)("/tmp/syscmd.log");
  }
  return iVar3;
}

