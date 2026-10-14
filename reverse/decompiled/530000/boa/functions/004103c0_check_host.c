/* check_host @ 004103c0 */

int check_host(char *param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (param_1 != (char *)0x0) {
    iVar5 = *(int *)PTR___ctype_b_0046abc0;
    if ((*(ushort *)(iVar5 + *param_1 * 2) & 0x800) == 0) {
      return -1;
    }
    uVar2 = (*(code *)PTR_strlen_0046a714)();
    iVar3 = 1;
    if (uVar2 < 0x40) {
      bVar1 = false;
      while( true ) {
        iVar4 = (int)param_1[1];
        if (iVar4 == 0) break;
        if (((*(ushort *)(iVar5 + iVar4 * 2) & 0x800) == 0) && (iVar4 != 0x2d)) {
          if (iVar4 != 0x2e) {
            return -1;
          }
          if (!bVar1) {
            return -1;
          }
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        iVar3 = (iVar3 + 1) * 0x10000 >> 0x10;
        param_1 = param_1 + 1;
      }
      if ((*(ushort *)(iVar5 + *param_1 * 2) & 0x800) != 0) {
        return iVar3;
      }
    }
  }
  return -1;
}

