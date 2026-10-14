/* FUN_00413d88 @ 00413d88 */

int FUN_00413d88(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 auStack_28 [8];
  uint local_20;
  
  iVar1 = (*(code *)PTR_open_0057e884)(param_1,0);
  if (iVar1 == -1) {
    (*(code *)PTR_fprintf_0057d8e4)(*(undefined4 *)PTR_stderr_0057de44,"%s\n","Open file failed!\n")
    ;
    iVar1 = -0x80000000;
  }
  else {
    (*(code *)PTR_lseek_0057e290)(iVar1,0x10000,0);
    local_30 = 0;
    local_2c = 0;
    iVar2 = (*(code *)PTR_read_0057e204)(iVar1,auStack_28,0x10);
    iVar3 = 0;
    if (iVar2 == 0x10) {
      local_30 = DAT_00532cb4;
      local_2c = DAT_00532cbc;
      iVar2 = (*(code *)PTR_memcmp_0057d844)(auStack_28,&local_30,4);
      iVar3 = 1;
      if (iVar2 != 0) {
        iVar2 = (*(code *)PTR_memcmp_0057d844)(auStack_28,&local_2c,4);
        iVar3 = 2;
        if (iVar2 != 0) {
          (*(code *)PTR_puts_0057d338)("no sys signature at !");
          iVar3 = 0;
        }
      }
    }
    (*(code *)PTR_lseek_0057e290)(iVar1,0x10000,0);
    uVar4 = 0x80000000;
    if ((iVar3 != 0) && (uVar4 = local_20, -1 < (int)local_20)) {
      uVar4 = 0x80000001;
    }
    (*(code *)PTR_close_0057dd2c)(iVar1);
    iVar1 = -0x7ffffffe;
    if (((0x80000001 < uVar4) && (iVar1 = -0x10, uVar4 != 0xfffffff0)) &&
       (iVar1 = uVar4 + 1, param_2 == 0)) {
      iVar1 = -0x10;
    }
  }
  return iVar1;
}

