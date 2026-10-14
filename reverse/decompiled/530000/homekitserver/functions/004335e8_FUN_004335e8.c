/* FUN_004335e8 @ 004335e8 */

int FUN_004335e8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int unaff_s0;
  
  if (param_1 == 1) {
    unaff_s0 = (*(code *)PTR_open_0061479c)(PTR_s__dev_ttyACM0_005ee668,0x882);
    if (unaff_s0 == -1) {
LAB_004336b0:
      (*(code *)PTR_perror_00613058)("can\'t open tty port");
      return unaff_s0;
    }
    pcVar3 = "open ttyUSB0 .....";
  }
  else if (param_1 == 2) {
    unaff_s0 = (*(code *)PTR_open_0061479c)("/dev/ttyS1",0x882);
    if (unaff_s0 == -1) goto LAB_004336b0;
    pcVar3 = "open ttyS1 .....";
  }
  else {
    if (param_1 != 3) goto LAB_004336e4;
    unaff_s0 = (*(code *)PTR_open_0061479c)("/dev/ttyS2",0x882);
    if (unaff_s0 == -1) goto LAB_004336b0;
    pcVar3 = "open ttyS2 .....";
  }
  (*(code *)PTR_puts_00612670)(pcVar3);
LAB_004336e4:
  iVar1 = (*(code *)PTR_fcntl_00613e84)(unaff_s0,4,0);
  if (iVar1 < 0) {
    (*(code *)PTR_puts_00612670)("fcntl failed!");
  }
  else {
    uVar2 = (*(code *)PTR_fcntl_00613e84)(unaff_s0,4,0);
    (*(code *)PTR_printf_006126e8)("fcntl=%d\n",uVar2);
  }
  iVar1 = (*(code *)PTR_isatty_006136dc)(0);
  if (iVar1 == 0) {
    pcVar3 = "standard input is not a terminal device";
  }
  else {
    pcVar3 = "isatty success!";
  }
  (*(code *)PTR_puts_00612670)(pcVar3);
  (*(code *)PTR_printf_006126e8)("fd-open=%d\n",unaff_s0);
  return unaff_s0;
}

