/* main @ 00401408 */

undefined4 main(void)

{
  int iVar1;
  code *pcVar2;
  
  iVar1 = (*(code *)PTR_apmib_init_0042b0b0)();
  if (iVar1 == 0) {
    (*(code *)PTR_puts_0042b1b8)("Initialize AP MIB failed !");
    return 0xffffffff;
  }
  (*(code *)PTR_signal_0042b158)(0xe,&LAB_004013e0);
  pcVar2 = (code *)PTR_alarm_0042b190;
  do {
    (*pcVar2)(1);
    (*(code *)PTR_checkWanStatus_0042b100)();
    pcVar2 = (code *)PTR_sleep_0042b1a4;
  } while( true );
}

