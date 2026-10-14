/* Relay_SwitchSetup @ 00432ed8 */

undefined4 Relay_SwitchSetup(char param_1)

{
  undefined4 uVar1;
  
  DAT_0061504c = 1;
  if (param_1 == '\0') {
    (*(code *)PTR_fputs_00612428)("Switch off\n",*(undefined4 *)PTR_stdout_00612c98);
    (*(code *)PTR_write_00612898)(DAT_0061505c,&DAT_005ffc78,0xe);
    DAT_00615049 = 0;
    uVar1 = 0;
  }
  else if (param_1 == '\x01') {
    (*(code *)PTR_fputs_00612428)("Switch on\n",*(undefined4 *)PTR_stdout_00612c98);
    (*(code *)PTR_write_00612898)(DAT_0061505c,&DAT_005ffc88,0xe);
    uVar1 = 1;
    DAT_00615049 = 1;
  }
  else {
    (*(code *)PTR_fputs_00612428)("Every fail\n",*(undefined4 *)PTR_stdout_00612c98);
    uVar1 = 0xffffffff;
  }
  DAT_0061504c = 0;
  return uVar1;
}

