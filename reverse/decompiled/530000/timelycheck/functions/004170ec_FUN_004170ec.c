/* FUN_004170ec @ 004170ec */

void FUN_004170ec(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_48;
  undefined1 auStack_44 [24];
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  (*(code *)PTR_getInAddr_0042b1c4)(&DAT_00417e5c,2,&local_48);
  uVar1 = (*(code *)PTR_inet_ntoa_0042b108)(local_48);
  (*(code *)PTR_strcpy_0042b208)(auStack_44,uVar1);
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_2c = 0;
  iVar2 = 0;
  (*(code *)PTR_apmib_get_0042b1a0)(0xc9,&local_2c);
  do {
    iVar2 = iVar2 + 1;
    FUN_00416f08(&local_2c,local_48,local_48);
    (*(code *)PTR_sleep_0042b1a4)(1);
  } while (iVar2 != 3);
  return;
}

