/* isConnectPPP @ 00423150 */

uint isConnectPPP(void)

{
  uint uVar1;
  undefined1 auStack_a0 [156];
  
  uVar1 = (*(code *)PTR_stat_0046a7a4)("/etc/ppp/link",auStack_a0);
  return ~uVar1 >> 0x1f;
}

