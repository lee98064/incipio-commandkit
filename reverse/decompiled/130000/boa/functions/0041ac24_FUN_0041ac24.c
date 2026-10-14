/* FUN_0041ac24 @ 0041ac24 */

/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_0041ac24(undefined4 param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  undefined *puVar3;
  int local_e0 [3];
  undefined1 local_d4 [17];
  undefined1 local_c3;
  undefined1 local_c2;
  undefined1 local_c1;
  undefined2 local_c0;
  undefined1 auStack_bc [32];
  undefined1 auStack_9c [136];
  
  local_e0[0] = -1;
  (*(code *)PTR_memset_0046a87c)(auStack_bc,0,0x20);
  local_e0[1] = 0;
  local_e0[2] = 0;
  (*(code *)PTR_memset_0046a87c)(auStack_9c,0,0x80);
  if ((0x10 < param_2) || (param_2 == 0)) {
    (*(code *)PTR_sprintf_0046a808)(auStack_9c,"token[%d] =\'0|none|0|0|0|0|0|0|LAN\';\n",param_2);
    goto LAB_0041aeac;
  }
  local_d4[0] = (undefined1)param_2;
  iVar1 = (*(code *)PTR_apmib_get_0046aadc)(0x826a,local_d4);
  if (iVar1 == 0) {
    (*(code *)PTR_fputs_0046a6e4)("Get vlan entry fail\n",*(undefined4 *)PTR_stderr_0046a7f0);
    return 0xffffffff;
  }
  (*(code *)PTR_apmib_get_0046aadc)(0xc0,local_e0);
  switch(param_2) {
  case 1:
  case 2:
  case 3:
  case 4:
    pcVar2 = "Ethernet Port";
    iVar1 = param_2;
    break;
  case 5:
    (*(code *)PTR_strcpy_0046ac60)(auStack_bc,"Wireless 1 Primary AP");
    if (local_e0[0] != 2) goto LAB_0041ae20;
LAB_0041adf4:
    puVar3 = &DAT_0044f92c;
    goto LAB_0041ae2c;
  case 6:
  case 7:
  case 8:
  case 9:
    pcVar2 = "Wireless 1 Virtual AP";
    iVar1 = param_2 + -5;
    break;
  case 10:
    pcVar2 = "Wireless 2 Primary AP";
    goto LAB_0041ae0c;
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
    pcVar2 = "Wireless 2 Virtual AP";
    iVar1 = param_2 + -10;
    break;
  case 0xf:
    (*(code *)PTR_strcpy_0046ac60)(auStack_bc,"Ethernet Port5");
    if (1 < local_e0[0] - 1U) goto LAB_0041adf4;
    goto LAB_0041ae20;
  case 0x10:
    pcVar2 = "Local Host/WAN";
LAB_0041ae0c:
    (*(code *)PTR_strcpy_0046ac60)(auStack_bc,pcVar2);
    goto LAB_0041ae20;
  default:
    goto switchD_0041ad1c_default;
  }
  (*(code *)PTR_sprintf_0046a808)(auStack_bc,&DAT_0044f8f8,pcVar2,iVar1);
LAB_0041ae20:
  puVar3 = &DAT_0044f910;
LAB_0041ae2c:
  (*(code *)PTR_strcpy_0046ac60)(local_e0 + 1,puVar3);
switchD_0041ad1c_default:
  (*(code *)PTR_sprintf_0046a808)
            (auStack_9c,"token[%d] =\'%d|%s|%d|%d|%d|%d|%d|%d|%s\';\n",param_2,local_d4[0],
             auStack_bc,local_c3,0,local_c2,local_c1,0,local_c0,local_e0 + 1);
LAB_0041aeac:
  (*(code *)PTR_req_format_write_0046a95c)(param_1,auStack_9c);
  return 0;
}

