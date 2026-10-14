/* isDhcpClientExist @ 004139d0 */

bool isDhcpClientExist(undefined4 param_1)

{
  int iVar1;
  bool bVar2;
  undefined1 auStack_78 [4];
  undefined1 auStack_74 [104];
  
  iVar1 = (*(code *)PTR_getInAddr_0046ab50)(param_1,0,auStack_78);
  bVar2 = false;
  if (iVar1 != 0) {
    (*(code *)PTR_snprintf_0046abe4)(auStack_74,100,"%s/%s-%s.pid","/etc/udhcpc","udhcpc",param_1);
    iVar1 = getPid(auStack_74);
    bVar2 = 0 < iVar1;
  }
  return bVar2;
}

