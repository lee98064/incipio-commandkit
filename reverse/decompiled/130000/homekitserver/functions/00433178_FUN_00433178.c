/* FUN_00433178 @ 00433178 */

int FUN_00433178(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int unaff_s0;
  
  if (param_1 == 1) {
    unaff_s0 = (*(code *)PTR_open_006138f8)(PTR_s__dev_ttyACM0_005ed7c8,0x882);
    if (unaff_s0 == -1) {
LAB_00433240:
      (*(code *)PTR_perror_006121c8)("Can\'t Open Serial Port");
      return unaff_s0;
    }
    pcVar3 = "open ttyUSB0 .....";
  }
  else if (param_1 == 2) {
    unaff_s0 = (*(code *)PTR_open_006138f8)("/dev/ttyS1",0x882);
    if (unaff_s0 == -1) goto LAB_00433240;
    pcVar3 = "open ttyS1 .....";
  }
  else {
    if (param_1 != 3) goto LAB_00433274;
    unaff_s0 = (*(code *)PTR_open_006138f8)("/dev/ttyS2",0x882);
    if (unaff_s0 == -1) goto LAB_00433240;
    pcVar3 = "open ttyS2 .....";
  }
  (*(code *)PTR_puts_006117e4)(pcVar3);
LAB_00433274:
  iVar1 = (*(code *)PTR_fcntl_00612fec)(unaff_s0,4,0);
  if (iVar1 < 0) {
    (*(code *)PTR_puts_006117e4)("fcntl failed!");
  }
  else {
    uVar2 = (*(code *)PTR_fcntl_00612fec)(unaff_s0,4,0);
    (*(code *)PTR_printf_0061185c)("fcntl=%d\n",uVar2);
  }
  iVar1 = (*(code *)PTR_isatty_00612844)(0);
  if (iVar1 == 0) {
    pcVar3 = "standard input is not a terminal device";
  }
  else {
    pcVar3 = "isatty success!";
  }
  (*(code *)PTR_puts_006117e4)(pcVar3);
  (*(code *)PTR_printf_0061185c)("fd-open=%d\n",unaff_s0);
  return unaff_s0;
}

