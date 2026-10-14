/* rfc822_time_buf @ 004109e4 */

/* WARNING: Removing unreachable block (ram,0x00410b00) */
/* WARNING: Removing unreachable block (ram,0x00410a98) */
/* WARNING: Removing unreachable block (ram,0x00410a5c) */
/* WARNING: Removing unreachable block (ram,0x00410acc) */
/* WARNING: Removing unreachable block (ram,0x00410b64) */

void rfc822_time_buf(int param_1,int param_2)

{
  undefined *puVar1;
  uint *puVar2;
  int *piVar3;
  uint uVar4;
  char *pcVar5;
  int local_res4 [3];
  
  piVar3 = local_res4;
  if (param_2 == 0) {
    piVar3 = (int *)PTR_current_time_0046ab68;
  }
  pcVar5 = (char *)(param_1 + 0xf);
  local_res4[0] = param_2;
  puVar2 = (uint *)(*(code *)PTR_gmtime_0046a71c)(piVar3);
  (*(code *)PTR_memcpy_0046ab5c)(param_1 + 0x19,&DAT_0044bdcc,4);
  uVar4 = *puVar2;
  *(undefined1 *)(param_1 + 0x16) = 0x3a;
  *(char *)(param_1 + 0x18) = (char)(uVar4 % 10) + '0';
  *(char *)(param_1 + 0x17) = (char)(uVar4 / 10) + '0';
  uVar4 = puVar2[1];
  *(undefined1 *)(param_1 + 0x13) = 0x3a;
  *(char *)(param_1 + 0x15) = (char)(uVar4 % 10) + '0';
  *(char *)(param_1 + 0x14) = (char)(uVar4 / 10) + '0';
  uVar4 = puVar2[2];
  *(undefined1 *)(param_1 + 0x10) = 0x20;
  *(char *)(param_1 + 0x12) = (char)(uVar4 % 10) + '0';
  *(char *)(param_1 + 0x11) = (char)(uVar4 / 10) + '0';
  for (uVar4 = puVar2[5] + 0x76c; uVar4 != 0; uVar4 = uVar4 / 10) {
    *pcVar5 = (char)(uVar4 % 10) + '0';
    pcVar5 = pcVar5 + -1;
  }
  (*(code *)PTR_memcpy_0046ab5c)
            (pcVar5 + -3,
             "Jan Feb Mar Apr May Jun Jul Aug Sep Oct Nov Dec Sun,Mon,Tue,Wed,Thu,Fri,Sat," +
             puVar2[4] * 4,4);
  pcVar5[-4] = ' ';
  uVar4 = puVar2[3];
  pcVar5[-7] = ' ';
  puVar1 = PTR_memcpy_0046ab5c;
  pcVar5[-5] = (char)(uVar4 % 10) + '0';
  pcVar5[-6] = (char)(uVar4 / 10) + '0';
  (*(code *)puVar1)(pcVar5 + -0xb,
                    "Jan Feb Mar Apr May Jun Jul Aug Sep Oct Nov Dec Sun,Mon,Tue,Wed,Thu,Fri,Sat," +
                    puVar2[6] * 4 + 0x30,4);
  return;
}

