/* Serial_Gpio_Write @ 0043258c */

/* WARNING: Restarted to delay deadcode elimination for space: ram */

undefined4 Serial_Gpio_Write(void)

{
  undefined4 uVar1;
  
  if (DAT_00615055 == '\0') {
    if (DAT_0061504a != DAT_00615054) {
      DAT_00615055 = '\x01';
    }
  }
  else {
    if (DAT_00615055 == '\x01') {
      DAT_00615048 = DAT_0061504a;
      DAT_00615054 = DAT_0061504a;
      (*(code *)PTR_HKUpdateValueToGlobalEventTable_00613b54)(10);
    }
    DAT_00615055 = '\0';
  }
  if ((PTR_receivebuffer_00612828[DAT_00615050 + -4] == -2) &&
     (PTR_receivebuffer_00612828[DAT_00615050 + -1] == 'V')) {
    if ((PTR_receivebuffer_00612828[DAT_00615050 + -3] == '0') &&
       (PTR_receivebuffer_00612828[DAT_00615050 + -2] == '0')) {
      DAT_00615049 = 0;
      uVar1 = 0;
    }
    else {
      DAT_00615049 = 1;
      uVar1 = 1;
    }
    (*(code *)PTR_fprintf_006120cc)
              (*(undefined4 *)PTR_stdout_00612c98,"relay_switchstate = %d\n",DAT_00615049);
    (*(code *)PTR_HKUpdateValueToGlobalEventTable_00613b54)(9,uVar1);
  }
  return 0;
}

