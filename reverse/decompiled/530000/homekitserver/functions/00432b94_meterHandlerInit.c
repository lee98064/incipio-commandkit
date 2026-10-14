/* meterHandlerInit @ 00432b94 */

void meterHandlerInit(void)

{
  int iVar1;
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [36];
  
  (*(code *)PTR_pthread_attr_init_006143b4)(auStack_2c);
  (*(code *)PTR_pthread_attr_setdetachstate_00614770)(auStack_2c,1);
  iVar1 = (*(code *)PTR_pthread_create_00613740)(auStack_30,auStack_2c,FUN_00434a3c,0);
  if (iVar1 != 0) {
    (*(code *)PTR_puts_00612670)("serial port thread create error");
  }
  (*(code *)PTR_pthread_attr_destroy_00613830)(auStack_2c);
  return;
}

