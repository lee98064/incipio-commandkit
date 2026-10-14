/* FUN_00402bb4 @ 00402bb4 */

void FUN_00402bb4(void)

{
  undefined4 local_18;
  undefined4 local_14;
  int local_10 [3];
  
  local_18 = 0;
  local_14 = 0;
  local_10[0] = 0;
  (*(code *)PTR_apmib_get_0042b1a0)(0xc0,local_10);
  if (local_10[0] != 1) {
    (*(code *)PTR_apmib_get_0042b1a0)(0xc1,&local_18);
    (*(code *)PTR_apmib_get_0042b1a0)(0x68,&local_14);
    (*(code *)PTR_set_QoS_0042b12c)(local_10[0],local_14,local_18);
  }
  return;
}

