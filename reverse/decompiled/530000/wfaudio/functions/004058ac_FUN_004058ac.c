/* FUN_004058ac @ 004058ac */

int FUN_004058ac(int param_1)

{
  undefined *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  if (DAT_00422520 < 1) {
    (*(code *)PTR_puts_00423564)("WFD  Send NL Msg Err, Null Socket_fd");
    iVar3 = -1;
  }
  else {
    local_20 = 0x100000;
    local_1c = 0;
    local_18 = 0;
    piVar2 = (int *)(*(code *)PTR_calloc_0042351c)(*(ushort *)(param_1 + 2) + 0x13 & 0xfffffffc,1);
    (*(code *)PTR_memcpy_0042357c)(piVar2 + 4,param_1,*(undefined2 *)(param_1 + 2));
    puVar1 = PTR_getpid_00423594;
    *piVar2 = *(ushort *)(param_1 + 2) + 0x10;
    *(undefined2 *)(piVar2 + 1) = 0x12;
    iVar3 = (*(code *)puVar1)();
    piVar2[3] = iVar3;
    puVar1 = PTR_sendto_004234d0;
    iVar3 = DAT_00422520;
    *(undefined2 *)((int)piVar2 + 6) = 0;
    iVar3 = (*(code *)puVar1)(iVar3,piVar2,*piVar2,0,&local_20,0xc);
    if (iVar3 < 1) {
      (*(code *)PTR_printf_004235c0)("WFD Send NL Msg Err (%d)\n",iVar3);
    }
    (*(code *)PTR_free_004233a8)(piVar2);
  }
  return iVar3;
}

