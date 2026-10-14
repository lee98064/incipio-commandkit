/* FUN_00408cc0 @ 00408cc0 */

undefined4 * FUN_00408cc0(int param_1,char *param_2,int param_3)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  puVar4 = *(undefined4 **)(param_1 + param_3 * 4);
  if (param_2 == (char *)0x0) {
    uVar3 = *(undefined4 *)PTR_stderr_0046a7f0;
    pcVar2 = "Yipes! Null value sent as key! [hash_find]!\n";
  }
  else {
    if (*param_2 != '\0') {
      while( true ) {
        if (puVar4 == (undefined4 *)0x0) {
          return (undefined4 *)0x0;
        }
        iVar1 = (*(code *)PTR_strcmp_0046a824)(*puVar4,param_2);
        if (iVar1 == 0) break;
        puVar4 = (undefined4 *)puVar4[2];
      }
      return puVar4;
    }
    uVar3 = *(undefined4 *)PTR_stderr_0046a7f0;
    pcVar2 = "Attempt to locate empty string in hash! [hash_find]!\n";
  }
  (*(code *)PTR_fputs_0046a6e4)(pcVar2,uVar3);
  return (undefined4 *)0x0;
}

