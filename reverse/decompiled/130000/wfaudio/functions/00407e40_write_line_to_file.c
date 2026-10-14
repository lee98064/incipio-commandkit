/* write_line_to_file @ 00407e40 */

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
    if (param_2 != 2) goto LAB_00407ee0;
    uVar2 = 10;
  }
  iVar1 = (*(code *)PTR_open_00423100)(param_1,uVar2);
  if (iVar1 < 0) {
    (*(code *)PTR_fprintf_00423224)
              (*(undefined4 *)PTR_stderr_00423160,
               "\nFILE %s FUNCTION %s LINE %d: Create %s error!\n\n","utility.c",
               "write_line_to_file",0xfe,param_1);
    return 0;
  }
LAB_00407ee0:
  (*(code *)PTR_strcpy_004232f4)(auStack_210,param_3);
  uVar2 = (*(code *)PTR_strlen_00423108)(auStack_210);
  (*(code *)PTR_write_00423228)(iVar1,auStack_210,uVar2);
  (*(code *)PTR_close_004230cc)(iVar1);
  return 1;
}

