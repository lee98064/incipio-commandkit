/* FUN_00406b10 @ 00406b10 */

undefined4 FUN_00406b10(uint param_1,undefined4 param_2)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  uint uVar5;
  code *pcVar6;
  undefined4 local_188;
  uint local_184;
  undefined2 local_180;
  undefined2 local_17c;
  undefined2 local_17a;
  uint local_178;
  char local_171;
  undefined1 auStack_168 [11];
  byte local_15d;
  uint local_15c;
  undefined2 local_158;
  undefined1 auStack_154 [16];
  uint local_144;
  undefined4 local_134;
  uint local_130;
  undefined4 local_12c;
  char local_128 [8];
  char local_120 [240];
  uint local_30;
  
  pcVar1 = (char *)(*(code *)PTR_socket_004235a8)(0x11,1,0);
  if ((int)pcVar1 < 0) {
    pcVar1 = "\r\n  Get sock fail!";
    pcVar6 = (code *)PTR_printf_004235f4;
    goto LAB_00406fe4;
  }
  (*(code *)PTR_memset_0042350c)(auStack_154,0,0x20);
  (*(code *)PTR_strncpy_0042353c)(auStack_154,&DAT_0041100c,0xf);
  iVar2 = (*(code *)PTR_ioctl_004235f8)(pcVar1,0x8933,auStack_154);
  uVar5 = local_144;
  if (iVar2 < 0) {
    pcVar4 = "\r\n Interface %s not found";
LAB_00406c38:
    (*(code *)PTR_printf_004235f4)(pcVar4,&DAT_0041100c);
LAB_00406ff4:
    (*(code *)PTR_close_00423490)(pcVar1);
    uVar3 = 0;
  }
  else {
    iVar2 = (*(code *)PTR_ioctl_004235f8)(pcVar1,0x8913,auStack_154);
    if (iVar2 != 0) {
      pcVar4 = "\r\n SIOCGIFFLAGS";
      goto LAB_00406fcc;
    }
    if ((local_144 & 0x10000) == 0) {
      pcVar4 = "\r\n Interface %s is down";
      goto LAB_00406c38;
    }
    if ((local_144 & 0x880000) == 0) {
      pcVar4 = (char *)(*(code *)PTR_socket_004235a8)(2,1,0);
      if ((int)pcVar4 < 0) {
        pcVar4 = "\r\n socket";
        goto LAB_00406fcc;
      }
      iVar2 = (*(code *)PTR_setsockopt_00423558)(pcVar4,0xffff,0x19,&DAT_0041100c,5);
      if (iVar2 == -1) {
        (*(code *)PTR_printf_004235f4)("\r\n WARNING: interface %s is ignored",&DAT_0041100c);
      }
      local_130 = 0;
      local_12c = 0;
      local_128[0] = '\0';
      local_128[1] = '\0';
      local_128[2] = '\0';
      local_128[3] = '\0';
      local_134 = 0x20000;
      iVar2 = (*(code *)PTR_bind_00423560)(pcVar4,&local_134,0x10);
      if (iVar2 == -1) {
        (*(code *)PTR_fputs_004234a0)(&DAT_0041199c,*(undefined4 *)PTR_stderr_004234dc);
        (*(code *)PTR_close_00423490)(pcVar1);
        pcVar1 = pcVar4;
        pcVar6 = (code *)PTR_close_00423490;
        goto LAB_00406fe4;
      }
      (*(code *)PTR_close_00423490)(pcVar4);
      local_17c = 0x11;
      local_178 = uVar5;
      local_17a = 0x8864;
      iVar2 = (*(code *)PTR_bind_00423560)(pcVar1,&local_17c,0x14);
      if (iVar2 == -1) {
        pcVar4 = "\r\n bind";
      }
      else {
        local_188 = 0x14;
        iVar2 = (*(code *)PTR_getsockname_00423488)(pcVar1,&local_17c,&local_188);
        if (iVar2 != -1) {
          if (local_171 == '\0') {
            pcVar4 = "\r\n Interface \"%s\" is not ARPable (no ll address)";
            goto LAB_00406e08;
          }
          (*(code *)PTR_memcpy_004235d4)(auStack_168,&local_17c,0x14);
          (*(code *)PTR_memset_0042350c)(&local_15c,0xffffffff,local_15d);
          local_180 = 0;
          local_184 = 0;
          FUN_00404bf4(param_2,&local_184,0xc);
          uVar5 = (uint)local_15d;
          if ((uVar5 != 6) ||
             (local_30 = uVar5, iVar2 = (*(code *)PTR_memcmp_0042352c)(&local_184,&DAT_004132e0,6),
             uVar5 = local_30, iVar2 == 0)) {
            (*(code *)PTR_printf_004235f4)
                      ("%s(%d): wrong he.sll_halen(%d) or wrong peerMacAddr[%02x:%02x:%02x:%02x:%02x:%02x]!\n"
                       ,"send_ppp_msg",0x2dc7,uVar5,local_184 >> 0x18,local_184 >> 0x10 & 0xff,
                       local_184 >> 8 & 0xff,local_184 & 0xff,local_180._0_1_,(undefined1)local_180)
            ;
            pcVar6 = (code *)PTR_close_00423490;
            goto LAB_00406fe4;
          }
          local_15c = local_184;
          local_158 = local_180;
          local_120[0] = s_User_request_00411a4c[8];
          local_120[1] = s_User_request_00411a4c[9];
          local_120[2] = s_User_request_00411a4c[10];
          local_120[3] = s_User_request_00411a4c[0xb];
          local_134._1_3_ = (uint3)(byte)((param_1 & 0xffff) >> 8) << 8;
          local_134 = CONCAT13(0x11,local_134._1_3_);
          local_134 = CONCAT31(local_134._0_3_,(char)(param_1 & 0xffff));
          local_128[4] = s_User_request_00411a4c[4];
          local_128[5] = s_User_request_00411a4c[5];
          local_128[6] = s_User_request_00411a4c[6];
          local_128[7] = s_User_request_00411a4c[7];
          local_128[0] = s_User_request_00411a4c[0];
          local_128[1] = s_User_request_00411a4c[1];
          local_128[2] = s_User_request_00411a4c[2];
          local_128[3] = s_User_request_00411a4c[3];
          local_12c = CONCAT13(5,CONCAT12(2,DAT_004132e8));
          local_134._1_3_ = (uint3)local_134._2_2_;
          local_134 = CONCAT13(0x11,local_134._1_3_);
          local_130 = (uint)CONCAT12(0x12,DAT_00411a48);
          iVar2 = (*(code *)PTR_sendto_00423530)(pcVar1,&local_134,0x18,0,auStack_168,0x14);
          if ((iVar2 < 0) || (iVar2 != 0x18)) {
            (*(code *)PTR_printf_004235f4)("\r\n \r\n c = %d",iVar2);
            pcVar4 = "\r\n \r\n send_arp Fail!";
            goto LAB_00406fcc;
          }
          goto LAB_00406ff4;
        }
        pcVar4 = "\r\n getsockname";
      }
LAB_00406fcc:
      (*(code *)PTR_printf_004235f4)(pcVar4);
      pcVar6 = (code *)PTR_close_00423490;
    }
    else {
      pcVar4 = "\r\n Interface %s is not ARPable";
LAB_00406e08:
      (*(code *)PTR_printf_004235f4)(pcVar4,&DAT_0041100c);
      pcVar6 = (code *)PTR_close_00423490;
    }
LAB_00406fe4:
    (*pcVar6)(pcVar1);
    uVar3 = 0xffffffff;
  }
  return uVar3;
}

