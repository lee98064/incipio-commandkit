/* FUN_0040c300 @ 0040c300 */

undefined4 FUN_0040c300(void)

{
  int iVar1;
  int local_c0;
  undefined1 local_bc;
  undefined1 local_bb;
  undefined1 local_ba;
  undefined1 local_b9;
  undefined1 local_b8;
  undefined1 local_b7;
  undefined1 auStack_a0 [32];
  undefined1 auStack_80 [80];
  undefined1 *local_30;
  
  local_c0 = 0;
  (*(code *)PTR_apmib_get_0042b1a0)(0x7b,&local_c0);
  iVar1 = 1;
  while( true ) {
    local_30 = &local_bc;
    if (local_c0 < iVar1) break;
    (*(code *)PTR_memset_0042b114)(local_30,0,0x1b);
    local_bc = (undefined1)iVar1;
    (*(code *)PTR_apmib_get_0042b1a0)(0x807c,local_30);
    (*(code *)PTR_sprintf_0042b0e8)
              (auStack_a0,"%02X:%02X:%02X:%02X:%02X:%02X",local_bc,local_bb,local_ba,local_b9,
               local_b8,local_b7);
    (*(code *)PTR_RunSystemCmd_0042b0dc)
              (0,s_iptables_0042ae70,&DAT_0042aef4,s_FORWARD_0042ae98,&DAT_0042af20,&DAT_00418b48,
               s___mac_source_0042af48,auStack_a0,&DAT_0042af1c,&DAT_0042aec0,"");
    (*(code *)PTR_RunSystemCmd_0042b0dc)
              (0,s_iptables_0042ae70,&DAT_0042aef4,s_INPUT_0042ae88,&DAT_0042af20,&DAT_00418b48,
               s___mac_source_0042af48,auStack_a0,&DAT_0042af1c,&DAT_0042aec0,"");
    iVar1 = iVar1 + 1;
    (*(code *)PTR_memset_0042b114)(auStack_80,0,0x50);
    (*(code *)PTR_sprintf_0042b0e8)
              (auStack_80,"rtk_cmd igmp_delete %02X:%02X:%02X:%02X:%02X:%02X",local_bc,local_bb,
               local_ba,local_b9,local_b8,local_b7);
    (*(code *)PTR_system_0042b1ac)(auStack_80);
  }
  return 0;
}

