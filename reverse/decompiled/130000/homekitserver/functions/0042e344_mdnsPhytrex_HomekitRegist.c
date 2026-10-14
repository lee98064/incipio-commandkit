/* mdnsPhytrex_HomekitRegist @ 0042e344 */

void mdnsPhytrex_HomekitRegist(undefined4 param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  code *pcVar6;
  undefined1 uVar9;
  code *pcVar7;
  undefined2 uVar8;
  undefined1 auStack_60 [20];
  undefined1 auStack_4c [16];
  undefined2 local_3c;
  undefined1 local_3a;
  undefined1 local_39;
  undefined1 local_38;
  undefined1 local_37;
  undefined1 local_36;
  undefined1 local_35;
  undefined1 *local_28;
  
  if (*(int *)PTR_g_isWACConfigured_00611698 != 0) {
    uVar2 = (*(code *)PTR_socket_00611ea8)(2,1,0);
    local_3c = 2;
    (*(code *)PTR_strncpy_00612580)(auStack_4c,&DAT_005ab154,0xf);
    (*(code *)PTR_ioctl_00613100)(uVar2,0x8927,auStack_4c);
    puVar1 = PTR_stderr_0061292c;
    (*(code *)PTR_close_0061276c)(uVar2);
    (*(code *)PTR_sprintf_00611f90)
              (auStack_60,"%.2x:%.2x:%.2x:%.2x:%.2x:%.2x",local_3a,local_39,local_38,local_37,
               local_36,local_35);
    (*(code *)PTR_fprintf_006120cc)(*(undefined4 *)puVar1,"Get MAC Address: %s\n",auStack_60);
    iVar3 = (*(code *)PTR_dlopen_006117c4)("libdns_sd.so",1);
    if (iVar3 == 0) {
      (*(code *)PTR_fputs_00612428)("Load libdns_so error.\n",*(undefined4 *)puVar1);
    }
    (*(code *)PTR_dlerror_00612cd0)();
    pcVar4 = (code *)(*(code *)PTR_dlsym_00613170)(iVar3,"DNSServiceRegister");
    iVar5 = (*(code *)PTR_dlerror_00612cd0)();
    if (iVar5 != 0) {
      (*(code *)PTR_fprintf_006120cc)(*(undefined4 *)PTR_stderr_0061292c,"dlsym error: %s\n",iVar5);
    }
    (*(code *)PTR_dlerror_00612cd0)();
    pcVar6 = (code *)(*(code *)PTR_dlsym_00613170)(iVar3,"TXTRecordCreate");
    iVar5 = (*(code *)PTR_dlerror_00612cd0)();
    if (iVar5 != 0) {
      (*(code *)PTR_fprintf_006120cc)(*(undefined4 *)PTR_stderr_0061292c,"dlsym error: %s\n",iVar5);
    }
    (*pcVar6)(&DAT_00614824,0,0);
    pcVar6 = (code *)(*(code *)PTR_dlsym_00613170)(iVar3,"TXTRecordSetValue");
    (*pcVar6)(&DAT_00614824,&UNK_005ac75c,1,"1");
    (*pcVar6)(&DAT_00614824,&DAT_005ac760,1,"1");
    local_28 = auStack_60;
    uVar9 = (*(code *)PTR_strlen_006130b4)(local_28);
    (*pcVar6)(&DAT_00614824,"id",uVar9,local_28);
    (*pcVar6)(&DAT_00614824,"md",10,&UNK_005ac764);
    (*pcVar6)(&DAT_00614824,&UNK_005ac770,3,&UNK_005ac774);
    (*pcVar6)(&DAT_00614824,&UNK_005ac778,1,"1");
    (*pcVar6)(&DAT_00614824,&DAT_005ab5c4,1,"1");
    (*pcVar6)(&DAT_00614824,&DAT_005ab5c8,5,&UNK_005ac77c);
    (*pcVar6)(&DAT_00614824,&DAT_005ab5cc,1,&DAT_005b6e24);
    (*(code *)PTR_dlerror_00612cd0)();
    pcVar6 = (code *)(*(code *)PTR_dlsym_00613170)(iVar3,"TXTRecordGetLength");
    iVar5 = (*(code *)PTR_dlerror_00612cd0)();
    if (iVar5 != 0) {
      (*(code *)PTR_fprintf_006120cc)(*(undefined4 *)PTR_stderr_0061292c,"dlsym error: %s\n",iVar5);
    }
    (*(code *)PTR_dlerror_00612cd0)();
    pcVar7 = (code *)(*(code *)PTR_dlsym_00613170)(iVar3,"TXTRecordGetBytesPtr");
    iVar5 = (*(code *)PTR_dlerror_00612cd0)();
    if (iVar5 != 0) {
      (*(code *)PTR_fprintf_006120cc)(*(undefined4 *)PTR_stderr_0061292c,"dlsym error: %s\n",iVar5);
    }
    uVar8 = (*pcVar6)(&DAT_00614824);
    uVar2 = (*pcVar7)(&DAT_00614824);
    iVar5 = (*pcVar4)(&DAT_00614820,0,0,param_1,"_hap._tcp","local","",0xce03,uVar8,uVar2,0,"");
    if (iVar5 != 0) {
      (*(code *)PTR_fprintf_006120cc)
                (*(undefined4 *)PTR_stderr_0061292c,"Error: %s,%s,%d,%d\n",
                 "/home/vendor/rtl819x_v3464_homekit/users/phytrex-homekit/lib_homekitserver/mdns_phytrexHomekit.c"
                 ,"mdnsPhytrex_HomekitRegist",0x16a,iVar5);
    }
    (*(code *)PTR_dlclose_006115d8)(iVar3);
  }
  return;
}

