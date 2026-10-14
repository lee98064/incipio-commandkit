/* write_line_to_file @ 0041e0ec */

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
    if (param_2 != 2) goto LAB_0041e174;
    uVar2 = 10;
  }
  iVar1 = (*(code *)PTR_open_0046a710)(param_1,uVar2);
  if (iVar1 < 0) {
    (*(code *)PTR_fprintf_0046a9ec)(*(undefined4 *)PTR_stderr_0046a7f0,"Create %s error!\n",param_1)
    ;
    return 0;
  }
LAB_0041e174:
  (*(code *)PTR_strcpy_0046ac60)(auStack_210,param_3);
  uVar2 = (*(code *)PTR_strlen_0046a714)(auStack_210);
  (*(code *)PTR_write_0046a9fc)(iVar1,auStack_210,uVar2);
  (*(code *)PTR_close_0046a694)(iVar1);
  return 1;
}

