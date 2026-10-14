/* FUN_0041b050 @ 0041b050 */

undefined4 FUN_0041b050(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_210 [512];
  
  if (param_2 == 1) {
    uVar2 = 0x302;
  }
  else {
    iVar1 = 0;
    if (param_2 != 2) goto LAB_0041b0b4;
    uVar2 = 10;
  }
  iVar1 = (*(code *)PTR_open_006138f8)(param_1,uVar2,0x1b0);
  if (iVar1 < 0) {
    return 0;
  }
LAB_0041b0b4:
  (*(code *)PTR_strcpy_006115d0)(auStack_210,param_3);
  uVar2 = (*(code *)PTR_strlen_006130b4)(auStack_210);
  (*(code *)PTR_write_00612898)(iVar1,auStack_210,uVar2);
  (*(code *)PTR_close_0061276c)(iVar1);
  return 1;
}

