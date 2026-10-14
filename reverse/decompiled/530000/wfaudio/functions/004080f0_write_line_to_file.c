/* write_line_to_file @ 004080f0 */

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
    if (param_2 != 2) goto LAB_00408190;
    uVar2 = 10;
  }
  iVar1 = (*(code *)PTR_open_004233e0)(param_1,uVar2);
  if (iVar1 < 0) {
    (*(code *)PTR_fprintf_0042350c)
              (*(undefined4 *)PTR_stderr_00423444,
               "\nFILE %s FUNCTION %s LINE %d: Create %s error!\n\n","utility.c",
               "write_line_to_file",0xfe,param_1);
    return 0;
  }
LAB_00408190:
  (*(code *)PTR_strcpy_004235e0)(auStack_210,param_3);
  uVar2 = (*(code *)PTR_strlen_004233e8)(auStack_210);
  (*(code *)PTR_write_00423510)(iVar1,auStack_210,uVar2);
  (*(code *)PTR_close_004233ac)(iVar1);
  return 1;
}

