/* FUN_00413a64 @ 00413a64 */

int FUN_00413a64(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 local_200;
  undefined4 local_1fc;
  undefined4 local_1f8;
  undefined4 local_1f4;
  undefined1 local_1f0;
  undefined1 local_1ef;
  undefined1 local_1ee;
  undefined1 local_1ed;
  undefined1 local_1ec;
  undefined1 local_1eb;
  undefined4 local_1e0;
  int local_1dc;
  undefined1 auStack_1d8 [40];
  undefined1 auStack_1b0 [40];
  undefined1 auStack_188 [80];
  undefined1 auStack_138 [104];
  undefined1 auStack_d0 [52];
  uint local_9c;
  undefined1 *local_38;
  undefined1 *local_34;
  undefined4 *local_30;
  
  (*(code *)PTR_snprintf_0046abe4)(auStack_138,100,"%s/%s.pid","/var/run","udhcpd");
  iVar1 = getPid(auStack_138);
  (*(code *)PTR_snprintf_0046abe4)(auStack_138,100,"kill -SIGUSR1 %d\n",iVar1);
  if (0 < iVar1) {
    (*(code *)PTR_system_0046ab18)(auStack_138);
  }
  (*(code *)PTR_usleep_0046aba0)(1000);
  iVar1 = (*(code *)PTR_stat_0046a7a4)("/var/lib/misc/udhcpd.leases",auStack_d0);
  iVar4 = 0;
  if (((iVar1 < 0) || (iVar4 = (*(code *)PTR_malloc_0046ab14)(local_9c), iVar4 == 0)) ||
     (iVar1 = (*(code *)PTR_fopen_0046a894)("/var/lib/misc/udhcpd.leases","r"), iVar1 == 0)) {
    iVar1 = 0;
  }
  else {
    (*(code *)PTR_fread_0046a8b0)(iVar4,1,local_9c,iVar1);
    (*(code *)PTR_fclose_0046a85c)(iVar1);
    local_30 = &local_200;
    local_38 = auStack_1d8;
    local_34 = auStack_1b0;
    iVar6 = 0;
    iVar1 = 0;
    uVar5 = local_9c;
    iVar7 = iVar4;
    while( true ) {
      local_200 = 0;
      local_1fc = 0;
      local_1f8 = 0;
      local_1f4 = 0;
      if (uVar5 < 0x18) break;
      (*(code *)PTR_memcpy_0046ab5c)(&local_1f0,iVar7,0x18);
      if ((local_1dc != 0) &&
         (iVar2 = (*(code *)PTR_memcmp_0046a8d0)(&local_1f0,local_30,0x10), iVar2 != 0)) {
        uVar3 = (*(code *)PTR_inet_ntoa_0046a854)(local_1e0);
        (*(code *)PTR_strcpy_0046ac60)(local_38,uVar3);
        (*(code *)PTR_snprintf_0046abe4)
                  (local_34,0x14,"%02x:%02x:%02x:%02x:%02x:%02x",local_1f0,local_1ef,local_1ee,
                   local_1ed,local_1ec,local_1eb);
        if (local_1dc == -1) {
          (*(code *)PTR_strcpy_0046ac60)(auStack_188,"Always");
        }
        else {
          (*(code *)PTR_snprintf_0046abe4)(auStack_188,10,"%lu",local_1dc);
        }
        iVar2 = (*(code *)PTR_req_format_write_0046a95c)
                          (param_1,
                           "<tr bgcolor=#b7b7b7><td><font size=2>%s</td><td><font size=2>%s</td><td><font size=2>%s</td></tr>"
                           ,local_38,local_34,auStack_188);
        iVar1 = iVar1 + iVar2;
        iVar6 = iVar6 + 1;
      }
      iVar7 = iVar7 + 0x18;
      uVar5 = uVar5 - 0x18;
    }
    if (iVar6 != 0) goto LAB_00413d78;
  }
  iVar7 = (*(code *)PTR_req_format_write_0046a95c)
                    (param_1,
                     "<tr bgcolor=#b7b7b7><td><font size=2>None</td><td><font size=2>----</td><td><font size=2>----</td></tr>"
                    );
  iVar1 = iVar1 + iVar7;
  if (iVar4 == 0) {
    return iVar1;
  }
LAB_00413d78:
  (*(code *)PTR_free_0046a680)(iVar4);
  return iVar1;
}

