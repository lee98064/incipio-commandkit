/* FUN_00432fcc @ 00432fcc */

int FUN_00432fcc(void)

{
  undefined4 uVar1;
  undefined4 local_70;
  code *local_6c;
  undefined1 auStack_68 [16];
  undefined4 local_58;
  undefined1 auStack_50 [8];
  uint local_48;
  uint local_44;
  int local_18;
  
  DAT_00615058 = (*(code *)PTR_open_006138f8)(PTR_s__dev_ttyACM0_005ed7c8,0x82);
  if (DAT_00615058 == -1) {
    (*(code *)PTR_puts_006117e4)("Unable to open /dev/ttyUSB0");
  }
  else {
    local_6c = FUN_004326d4;
    (*(code *)PTR_sigemptyset_00611fa0)(auStack_68);
    local_70 = 0;
    local_58 = 0;
    (*(code *)PTR_sigaction_00612630)(0x16,&local_70,0);
    local_18 = DAT_00615058;
    uVar1 = (*(code *)PTR_getpid_00612c9c)();
    (*(code *)PTR_fcntl_00612fec)(local_18,0x18,uVar1);
    (*(code *)PTR_fcntl_00612fec)(DAT_00615058,4,0x1000);
    (*(code *)PTR_puts_006117e4)("Serial Port open");
    (*(code *)PTR_tcgetattr_00612368)(DAT_00615058,PTR_serial_options_orig_00611dd8);
    (*(code *)PTR_tcgetattr_00612368)(DAT_00615058,auStack_50);
    (*(code *)PTR_cfsetispeed_00612e1c)(auStack_50,0x1002);
    (*(code *)PTR_cfsetospeed_00612ab8)(auStack_50,0x1002);
    local_48 = local_48 | 0x8b0;
    local_44 = local_44 | 2;
    (*(code *)PTR_tcsetattr_006124e0)(DAT_00615058,0x540e,auStack_50);
  }
  return DAT_00615058;
}

