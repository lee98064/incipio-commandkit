/* get_commonlog_time @ 00410ef0 */

/* WARNING: Removing unreachable block (ram,0x004110cc) */
/* WARNING: Removing unreachable block (ram,0x00411068) */
/* WARNING: Removing unreachable block (ram,0x00411008) */
/* WARNING: Removing unreachable block (ram,0x00410fc8) */
/* WARNING: Removing unreachable block (ram,0x00410f5c) */
/* WARNING: Removing unreachable block (ram,0x00410fe8) */
/* WARNING: Removing unreachable block (ram,0x00411038) */
/* WARNING: Removing unreachable block (ram,0x00411098) */
/* WARNING: Removing unreachable block (ram,0x00411138) */

char * get_commonlog_time(void)

{
  char cVar1;
  char cVar2;
  uint *puVar3;
  uint uVar4;
  char *pcVar5;
  int iVar6;
  uint uVar7;
  
  if (*(int *)PTR_use_localtime_0046a700 == 0) {
    puVar3 = (uint *)(*(code *)PTR_gmtime_0046a71c)(PTR_current_time_0046ab68);
    uVar4 = 0;
  }
  else {
    puVar3 = (uint *)(*(code *)PTR_localtime_0046a880)(PTR_current_time_0046ab68);
    uVar4 = puVar3[9];
  }
  DAT_0046f032 = 0x2d;
  if (-1 < (int)uVar4) {
    DAT_0046f032 = 0x2b;
  }
  DAT_0046f037 = 0x5d;
  DAT_0046f031 = 0x20;
  DAT_0046f038 = 0x20;
  DAT_0046f039 = 0;
  pcVar5 = &DAT_0046f027;
  uVar7 = (int)uVar4 / 0x3c >> 0x1f;
  uVar7 = (uVar7 ^ (int)uVar4 / 0x3c) - uVar7;
  uVar4 = uVar7 / 10;
  DAT_0046f036 = (char)(uVar7 % 10) + '0';
  uVar7 = uVar4 / 6;
  DAT_0046f035 = (char)(uVar4 % 6) + '0';
  DAT_0046f034 = (char)(uVar7 % 10) + '0';
  DAT_0046f033 = (char)(uVar7 / 10) + '0';
  DAT_0046f02e = 0x3a;
  DAT_0046f030 = (char)(*puVar3 % 10) + '0';
  DAT_0046f02f = (char)(*puVar3 / 10) + '0';
  DAT_0046f02b = 0x3a;
  DAT_0046f02d = (char)(puVar3[1] % 10) + '0';
  DAT_0046f02c = (char)(puVar3[1] / 10) + '0';
  DAT_0046f028 = 0x3a;
  DAT_0046f02a = (char)(puVar3[2] % 10) + '0';
  DAT_0046f029 = (char)(puVar3[2] / 10) + '0';
  for (uVar4 = puVar3[5] + 0x76c; uVar4 != 0; uVar4 = uVar4 / 10) {
    *pcVar5 = (char)(uVar4 % 10) + '0';
    pcVar5 = pcVar5 + -1;
  }
  *pcVar5 = '/';
  iVar6 = puVar3[4] * 4;
  cVar1 = "Jan Feb Mar Apr May Jun Jul Aug Sep Oct Nov Dec Sun,Mon,Tue,Wed,Thu,Fri,Sat,"[iVar6 + 2];
  cVar2 = "Jan Feb Mar Apr May Jun Jul Aug Sep Oct Nov Dec Sun,Mon,Tue,Wed,Thu,Fri,Sat,"[iVar6 + 1];
  pcVar5[-3] = "Jan Feb Mar Apr May Jun Jul Aug Sep Oct Nov Dec Sun,Mon,Tue,Wed,Thu,Fri,Sat,"[iVar6]
  ;
  pcVar5[-1] = cVar1;
  pcVar5[-2] = cVar2;
  pcVar5[-4] = '/';
  uVar4 = puVar3[3];
  pcVar5[-7] = '[';
  pcVar5[-5] = (char)(uVar4 % 10) + '0';
  pcVar5[-6] = (char)(uVar4 / 10) + '0';
  return pcVar5 + -7;
}

