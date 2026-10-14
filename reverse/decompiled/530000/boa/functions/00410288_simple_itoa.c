/* simple_itoa @ 00410288 */

/* WARNING: Removing unreachable block (ram,0x004102a4) */

void simple_itoa(uint param_1)

{
  char *pcVar1;
  uint uVar2;
  
  DAT_0046f019 = 0;
  pcVar1 = &DAT_0046f019;
  do {
    uVar2 = param_1 / 10;
    pcVar1 = pcVar1 + -1;
    *pcVar1 = (char)(param_1 % 10) + '0';
    param_1 = uVar2;
  } while (uVar2 != 0);
  return;
}

