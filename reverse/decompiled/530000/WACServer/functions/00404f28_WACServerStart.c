/* WACServerStart @ 00404f28 */

int WACServerStart(int *param_1,int param_2)

{
  int iVar1;
  
  (*(code *)PTR_puts_00433294)("\n###################################");
  (*(code *)PTR_printf_004332e4)("# WAC SERVER v%d.%d\n",1,0xe);
  (*(code *)PTR_printf_004332e4)("# BUILD DATE: %s, %s\n","Aug 17 2016","17:47:33");
  (*(code *)PTR_puts_00433294)("###################################\n");
  param_1[0x11] = param_2;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  iVar1 = -0x1a31;
  if (*param_1 != 0) {
    iVar1 = (*(code *)PTR_pthread_create_004332dc)(param_1 + 0xf,0,FUN_00404288,param_1);
    if (iVar1 != 0) {
      (*(code *)PTR_printf_004332e4)("%s, %d create thread fail\n","WACServerStart",0xaf);
    }
  }
  return iVar1;
}

