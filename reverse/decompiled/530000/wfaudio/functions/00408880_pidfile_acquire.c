/* pidfile_acquire @ 00408880 */

int pidfile_acquire(int param_1)

{
  int iVar1;
  
  iVar1 = -1;
  if (param_1 != 0) {
    iVar1 = (*(code *)PTR_open_004233e0)(param_1,0x101,0x1a4);
    if (iVar1 < 0) {
      (*(code *)PTR_printf_004235c0)("Unable to open pidfile %s\n",param_1);
    }
    else {
      (*(code *)PTR_lockf_00423488)(iVar1,1,0);
    }
  }
  return iVar1;
}

