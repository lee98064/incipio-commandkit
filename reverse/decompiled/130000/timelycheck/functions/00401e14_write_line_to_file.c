/* write_line_to_file @ 00401e14 */

undefined4 write_line_to_file(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_210 [512];
  
  if (param_2 == 1) {
    uVar2 = 0x302;
  }
  else {
    iVar1 = 0;
    if (param_2 != 2) goto LAB_00401e9c;
    uVar2 = 10;
  }
  iVar1 = (*(code *)PTR_open_0042b0b4)(param_1,uVar2);
  if (iVar1 < 0) {
    (*(code *)PTR_fprintf_0042b174)(*(undefined4 *)PTR_stderr_0042b0e4,"Create %s error!\n",param_1)
    ;
    return 0;
  }
LAB_00401e9c:
  (*(code *)PTR_strcpy_0042b208)(auStack_210,param_3);
  uVar2 = (*(code *)PTR_strlen_0042b0bc)(auStack_210);
  (*(code *)PTR_write_0042b178)(iVar1,auStack_210,uVar2);
  (*(code *)PTR_close_0042b098)(iVar1);
  return 1;
}

