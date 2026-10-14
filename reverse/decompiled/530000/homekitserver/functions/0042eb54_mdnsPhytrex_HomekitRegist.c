/* mdnsPhytrex_HomekitRegist @ 0042eb54 */

void mdnsPhytrex_HomekitRegist(undefined4 param_1)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  code *pcVar4;
  undefined1 uVar8;
  code *pcVar5;
  undefined2 uVar7;
  undefined4 uVar6;
  
  if (*(int *)PTR_g_isWACConfigured_00612528 != 0) {
    iVar1 = (*(code *)PTR_dlopen_00612650)("libdns_sd.so",1);
    if (iVar1 == 0) {
      (*(code *)PTR_fputs_006132bc)("Load libdns_so error.\n",*(undefined4 *)PTR_stderr_006137c8);
    }
    (*(code *)PTR_dlerror_00613b68)();
    pcVar2 = (code *)(*(code *)PTR_dlsym_0061400c)(iVar1,"DNSServiceRegister");
    iVar3 = (*(code *)PTR_dlerror_00613b68)();
    if (iVar3 != 0) {
      (*(code *)PTR_fprintf_00612f5c)(*(undefined4 *)PTR_stderr_006137c8,"dlsym error: %s\n",iVar3);
    }
    (*(code *)PTR_dlerror_00613b68)();
    pcVar4 = (code *)(*(code *)PTR_dlsym_0061400c)(iVar1,"TXTRecordCreate");
    iVar3 = (*(code *)PTR_dlerror_00613b68)();
    if (iVar3 != 0) {
      (*(code *)PTR_fprintf_00612f5c)(*(undefined4 *)PTR_stderr_006137c8,"dlsym error: %s\n",iVar3);
    }
    (*pcVar4)(&DAT_006156c4,0,0);
    pcVar4 = (code *)(*(code *)PTR_dlsym_0061400c)(iVar1,"TXTRecordSetValue");
    (*pcVar4)(&DAT_006156c4,&UNK_005ad594,1,"1");
    (*pcVar4)(&DAT_006156c4,"ff",1,"1");
    uVar8 = (*(code *)PTR_strlen_00613f4c)(&DAT_006156d4);
    (*pcVar4)(&DAT_006156c4,"id",uVar8,&DAT_006156d4);
    (*pcVar4)(&DAT_006156c4,"md",10,&UNK_005ad598);
    (*pcVar4)(&DAT_006156c4,&UNK_005ad5a4,3,&UNK_005ad5a8);
    (*pcVar4)(&DAT_006156c4,&UNK_005ad5ac,1,"1");
    (*pcVar4)(&DAT_006156c4,&DAT_005ac3f4,1,"1");
    (*pcVar4)(&DAT_006156c4,&DAT_005ac3f8,5,&UNK_005ad5b0);
    (*pcVar4)(&DAT_006156c4,&DAT_005ac3fc,1,&DAT_005b7cc4);
    (*(code *)PTR_dlerror_00613b68)();
    pcVar4 = (code *)(*(code *)PTR_dlsym_0061400c)(iVar1,"TXTRecordGetLength");
    iVar3 = (*(code *)PTR_dlerror_00613b68)();
    if (iVar3 != 0) {
      (*(code *)PTR_fprintf_00612f5c)(*(undefined4 *)PTR_stderr_006137c8,"dlsym error: %s\n",iVar3);
    }
    (*(code *)PTR_dlerror_00613b68)();
    pcVar5 = (code *)(*(code *)PTR_dlsym_0061400c)(iVar1,"TXTRecordGetBytesPtr");
    iVar3 = (*(code *)PTR_dlerror_00613b68)();
    if (iVar3 != 0) {
      (*(code *)PTR_fprintf_00612f5c)(*(undefined4 *)PTR_stderr_006137c8,"dlsym error: %s\n",iVar3);
    }
    uVar7 = (*pcVar4)(&DAT_006156c4);
    uVar6 = (*pcVar5)(&DAT_006156c4);
    iVar3 = (*pcVar2)(&DAT_006156c0,0,0,param_1,"_hap._tcp","local","",0xce03,uVar7,uVar6,0,"");
    if (iVar3 != 0) {
      (*(code *)PTR_fprintf_00612f5c)
                (*(undefined4 *)PTR_stderr_006137c8,"Error: %s,%s,%d,%d\n",
                 "/home/vendor/rtl819x_v3464_homekit/users/phytrex-homekit/lib_homekitserver/mdns_phytrexHomekit.c"
                 ,"mdnsPhytrex_HomekitRegist",0x16c,iVar3);
    }
                    /* WARNING: Could not recover jumptable at 0x0042efdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_dlclose_0061246c)(iVar1);
    return;
  }
  return;
}

