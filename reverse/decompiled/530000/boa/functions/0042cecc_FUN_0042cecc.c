/* FUN_0042cecc @ 0042cecc */

undefined4 FUN_0042cecc(undefined4 param_1,int param_2,int *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  undefined4 local_9f0;
  uint local_9ec;
  undefined4 local_9e8;
  undefined4 local_9e4;
  int local_9e0;
  undefined4 local_9dc;
  int local_9d8;
  int local_9d4;
  int local_9d0 [6];
  undefined4 local_9b8;
  undefined4 local_9b4;
  undefined2 local_9b0;
  undefined1 auStack_998 [40];
  undefined1 local_970 [56];
  undefined1 auStack_938 [256];
  undefined1 auStack_838 [2048];
  undefined4 local_38;
  undefined4 local_34;
  undefined1 *local_30;
  char *local_2c;
  
  iVar8 = *param_3;
  local_9d8 = -1;
  local_9d0[5] = 0;
  local_9d0[1] = 0;
  local_9d0[2] = 0;
  local_9d0[3] = 0;
  local_9d0[4] = 0;
  if (iVar8 == 0) {
    (*(code *)PTR_fputs_0046a6e4)("Insufficient args\n",*(undefined4 *)PTR_stderr_0046a7f0);
    return 0xffffffff;
  }
  iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,&DAT_00452160);
  if (iVar4 == 0) {
    (*(code *)PTR_strcpy_0046ac60)(local_970,&DAT_00450acc);
    (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
    return 0;
  }
  iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,&DAT_0044e034);
  if (iVar4 == 0) {
    iVar8 = (*(code *)PTR_apmib_get_0046aadc)(0xad,&local_9e0);
    if (iVar8 == 0) {
      return 0xffffffff;
    }
    (*(code *)PTR_sprintf_0046a808)(local_970,"%d",local_9e0);
    (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
    return 0;
  }
  iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"no-cache");
  if (iVar4 == 0) {
    (*(code *)PTR_memset_0046a87c)(auStack_838,0,0x800);
    (*(code *)PTR_sprintf_0046a808)
              (auStack_838,"%s\n%s\n%s\n","<meta http-equiv=\"Pragma\" content=\"no-cache\">",
               "<meta HTTP-equiv=\"Cache-Control\" content=\"no-cache\">",
               "<meta HTTP-EQUIV=\"Expires\" CONTENT=\"Mon, 01 Jan 1990 00:00:01 GMT\">");
    (*(code *)PTR_req_format_write_0046a95c)(param_1,auStack_838);
    return 0;
  }
  iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"usb_update_img_enabled");
  if (iVar4 == 0) {
    (*(code *)PTR_sprintf_0046a808)(local_970,"%d",0);
    (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
    return 0;
  }
  iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"dhcp-current");
  if (iVar4 == 0) {
    iVar8 = (*(code *)PTR_apmib_get_0046aadc)(0xad,&local_9e0);
    if (iVar8 != 0) {
      if ((local_9e0 == 1) &&
         (iVar8 = (*(code *)PTR_isDhcpClientExist_0046a76c)(*(undefined4 *)PTR_BRIDGE_IF_0046abe0),
         iVar8 == 0)) {
        local_9e0 = 0;
      }
      (*(code *)PTR_sprintf_0046a808)(local_970,"%d",local_9e0);
      (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
      return 0;
    }
  }
  else {
    iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,&DAT_0044e03c);
    if (iVar4 == 0) {
      iVar8 = (*(code *)PTR_apmib_get_0046aadc)(0xb3,&local_9ec);
      if (iVar8 == 0) {
        return 0xffffffff;
      }
      (*(code *)PTR_sprintf_0046a808)(local_970,"%d",local_9ec);
      (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
      return 0;
    }
    iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"sch_enabled");
    if (iVar4 == 0) {
      iVar8 = (*(code *)PTR_apmib_get_0046aadc)(0x1f7,&local_9ec);
      if (iVar8 == 0) {
        return 0xffffffff;
      }
      (*(code *)PTR_sprintf_0046a808)(local_970,"%d",local_9ec);
      (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
      return 0;
    }
    iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"isPureAP");
    if (iVar4 == 0) {
      (*(code *)PTR_sprintf_0046a808)(local_970,"%d",1);
      (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
      return 0;
    }
    iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"wanDNS");
    if (iVar4 == 0) {
      (*(code *)PTR_apmib_get_0046aadc)(0x69,&local_9d4);
      (*(code *)PTR_sprintf_0046a808)(local_970,"%d",local_9d4);
      (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
      return 0;
    }
    iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"ntpEnabled");
    if (iVar4 == 0) {
      iVar8 = (*(code *)PTR_apmib_get_0046aadc)(0x97,&local_9ec);
      if (iVar8 == 0) {
        return 0xffffffff;
      }
      (*(code *)PTR_sprintf_0046a808)(local_970,"%d",local_9ec);
      (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
      return 0;
    }
    iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"DaylightSave");
    if (iVar4 == 0) {
      iVar8 = (*(code *)PTR_apmib_get_0046aadc)(0x11a,&local_9ec);
      if (iVar8 == 0) {
        return 0xffffffff;
      }
      (*(code *)PTR_sprintf_0046a808)(local_970,"%d",local_9ec);
      (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
      return 0;
    }
    iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"ntpServerId");
    if (iVar4 == 0) {
      iVar8 = (*(code *)PTR_apmib_get_0046aadc)(0x98,&local_9ec);
      if (iVar8 == 0) {
        return 0xffffffff;
      }
      (*(code *)PTR_sprintf_0046a808)(local_970,"%d",local_9ec);
      (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
      return 0;
    }
    iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"wanDhcp");
    if (iVar4 == 0) {
      iVar8 = (*(code *)PTR_apmib_get_0046aadc)(0x68,&local_9e0);
      if (iVar8 == 0) {
        return 0xffffffff;
      }
      (*(code *)PTR_sprintf_0046a808)(local_970,"%d",local_9e0);
      (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
      return 0;
    }
    iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"multiPppoe");
    if (iVar4 == 0) {
      (*(code *)PTR_sprintf_0046a808)(local_970,"%d",0);
      (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
      return 0;
    }
    iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"pppoeNo");
    if (iVar4 == 0) {
      iVar8 = (*(code *)PTR_apmib_get_0046aadc)(0x5db,&local_9dc);
      if (iVar8 != 0) {
        (*(code *)PTR_sprintf_0046a808)(local_970,"%d",local_9dc);
        (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
        return 0;
      }
LAB_004332ec:
      (*(code *)PTR_sprintf_0046a808)(local_970,"%d",0);
      (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
      return 0xffffffff;
    }
    iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"subnet1");
    if (iVar4 == 0) {
      iVar8 = (*(code *)PTR_apmib_get_0046aadc)(0x5f8,&local_9ec);
      if (iVar8 == 0) {
        return 0xffffffff;
      }
      (*(code *)PTR_sprintf_0046a808)(local_970,"%d",local_9ec);
      (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
      return 0;
    }
    iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"subnet2");
    if (iVar4 == 0) {
      iVar8 = (*(code *)PTR_apmib_get_0046aadc)(0x5ff,&local_9ec);
      if (iVar8 == 0) {
        return 0xffffffff;
      }
      (*(code *)PTR_sprintf_0046a808)(local_970,"%d",local_9ec);
      (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
      return 0;
    }
    iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"subnet3");
    if (iVar4 == 0) {
      iVar8 = (*(code *)PTR_apmib_get_0046aadc)(0x606,&local_9ec);
      if (iVar8 == 0) {
        return 0xffffffff;
      }
      (*(code *)PTR_sprintf_0046a808)(local_970,"%d",local_9ec);
      (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
      return 0;
    }
    iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"subnet4");
    if (iVar4 == 0) {
      iVar8 = (*(code *)PTR_apmib_get_0046aadc)(0x60d,&local_9ec);
      if (iVar8 == 0) {
        return 0xffffffff;
      }
      (*(code *)PTR_sprintf_0046a808)(local_970,"%d",local_9ec);
      (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
      return 0;
    }
    iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"pppConnectType2");
    if (iVar4 == 0) {
      iVar8 = (*(code *)PTR_apmib_get_0046aadc)(0x5e6,&local_9d4);
      if (iVar8 == 0) {
        return 0xffffffff;
      }
      (*(code *)PTR_sprintf_0046a808)(local_970,"%d",local_9d4);
      (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
      return 0;
    }
    iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"pppConnectType3");
    if (iVar4 == 0) {
      iVar8 = (*(code *)PTR_apmib_get_0046aadc)(0x5e8,&local_9d4);
      if (iVar8 == 0) {
        return 0xffffffff;
      }
      (*(code *)PTR_sprintf_0046a808)(local_970,"%d",local_9d4);
      (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
      return 0;
    }
    iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"pppConnectType4");
    if (iVar4 == 0) {
      iVar8 = (*(code *)PTR_apmib_get_0046aadc)(0x5ea,&local_9d4);
      if (iVar8 == 0) {
        return 0xffffffff;
      }
      (*(code *)PTR_sprintf_0046a808)(local_970,"%d",local_9d4);
      (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
      return 0;
    }
    iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"pppConnectStatus2");
    if (iVar4 == 0) {
      uVar5 = isConnectPPP();
      (*(code *)PTR_sprintf_0046a808)(local_970,"%d",uVar5);
      (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
      return 0;
    }
    iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"pppConnectStatus3");
    if (iVar4 == 0) {
      uVar5 = isConnectPPP();
      (*(code *)PTR_sprintf_0046a808)(local_970,"%d",uVar5);
      (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
      return 0;
    }
    iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"pppConnectStatus4");
    if (iVar4 == 0) {
      uVar5 = isConnectPPP();
      (*(code *)PTR_sprintf_0046a808)(local_970,"%d",uVar5);
      (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
      return 0;
    }
    iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"enableGetServIpByDomainName");
    if (iVar4 == 0) {
      (*(code *)PTR_sprintf_0046a808)(local_970,"%d",1);
      (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
      return 0;
    }
    iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"pptpGetServIpByDomainName");
    if (iVar4 == 0) {
      iVar8 = (*(code *)PTR_apmib_get_0046aadc)(0x157,&local_9ec);
      if (iVar8 == 0) {
        return 0xffffffff;
      }
      (*(code *)PTR_sprintf_0046a808)(local_970,"%d",local_9ec);
      (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
      return 0;
    }
    iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"l2tpGetServIpByDomainName");
    if (iVar4 == 0) {
      iVar8 = (*(code *)PTR_apmib_get_0046aadc)(499,&local_9ec);
      if (iVar8 == 0) {
        return 0xffffffff;
      }
      (*(code *)PTR_sprintf_0046a808)(local_970,"%d",local_9ec);
      (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
      return 0;
    }
    iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"wanDhcp-current");
    if (iVar4 == 0) {
      local_9d4 = 0;
      iVar8 = (*(code *)PTR_apmib_get_0046aadc)(0x68,&local_9e0);
      if (iVar8 == 0) {
        return 0xffffffff;
      }
      iVar8 = (*(code *)PTR_apmib_get_0046aadc)(0xc0,&local_9d8);
      if (iVar8 == 0) {
        return 0xffffffff;
      }
      iVar8 = (*(code *)PTR_apmib_get_0046aadc)(0xc1,&local_9d4);
      if (iVar8 != 0) {
        if (local_9d8 == 2) {
          if (local_9d4 == 0) {
            pcVar7 = "wlan0";
          }
          else {
            pcVar7 = (char *)0x0;
            if (local_9d4 == 1) {
              pcVar7 = "wlan1";
            }
          }
        }
        else {
          pcVar7 = *(char **)PTR_WAN_IF_0046a74c;
        }
        if ((local_9e0 == 1) &&
           (iVar8 = (*(code *)PTR_isDhcpClientExist_0046a76c)(pcVar7), iVar8 == 0)) {
          local_9e0 = 0;
        }
        (*(code *)PTR_sprintf_0046a808)(local_970,"%d",local_9e0);
        (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
        return 0;
      }
    }
    else {
      iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"pppConnectType");
      if (iVar4 == 0) {
        iVar8 = (*(code *)PTR_apmib_get_0046aadc)(0x6d,&local_9d4);
        if (iVar8 == 0) {
          return 0xffffffff;
        }
        (*(code *)PTR_sprintf_0046a808)(local_970,"%d",local_9d4);
        (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
        return 0;
      }
      iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"pptp_wan_ip_mode");
      if (iVar4 == 0) {
        iVar8 = (*(code *)PTR_apmib_get_0046aadc)(0x155,&local_9d4);
        if (iVar8 == 0) {
          return 0xffffffff;
        }
        (*(code *)PTR_sprintf_0046a808)(local_970,"%d",local_9d4);
        (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
        return 0;
      }
      iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"pptpConnectType");
      if (iVar4 == 0) {
        iVar8 = (*(code *)PTR_apmib_get_0046aadc)(0x1fd,&local_9d4);
        if (iVar8 == 0) {
          return 0xffffffff;
        }
        (*(code *)PTR_sprintf_0046a808)(local_970,"%d",local_9d4);
        (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
        return 0;
      }
      iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"l2tp_wan_ip_mode");
      if (iVar4 == 0) {
        iVar8 = (*(code *)PTR_apmib_get_0046aadc)(0x1f5,&local_9d4);
        if (iVar8 == 0) {
          return 0xffffffff;
        }
        (*(code *)PTR_sprintf_0046a808)(local_970,"%d",local_9d4);
        (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
        return 0;
      }
      iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"l2tpConnectType");
      if (iVar4 == 0) {
        iVar8 = (*(code *)PTR_apmib_get_0046aadc)(0x151,&local_9d4);
        if (iVar8 == 0) {
          return 0xffffffff;
        }
        (*(code *)PTR_sprintf_0046a808)(local_970,"%d",local_9d4);
        (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
        return 0;
      }
      iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"USB3GConnectType");
      if (iVar4 == 0) {
        local_970[0] = 0;
        iVar8 = (*(code *)PTR_apmib_get_0046aadc)(0x57d,local_970);
        if (iVar8 != 0) {
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
      }
      else {
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"pppConnectStatus");
        if (iVar4 == 0) {
          uVar5 = isConnectPPP();
          (*(code *)PTR_sprintf_0046a808)(local_970,"%d",uVar5);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"portFwNum");
        if (iVar4 == 0) {
          iVar8 = (*(code *)PTR_apmib_get_0046aadc)(0x6f,&local_9ec);
          if (iVar8 == 0) {
            return 0xffffffff;
          }
          (*(code *)PTR_sprintf_0046a808)(local_970,"%d",local_9ec);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"ipFilterNum");
        if (iVar4 == 0) {
          iVar8 = (*(code *)PTR_apmib_get_0046aadc)(0x75,&local_9ec);
          if (iVar8 == 0) {
            return 0xffffffff;
          }
          (*(code *)PTR_sprintf_0046a808)(local_970,"%d",local_9ec);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"portFilterNum");
        if (iVar4 == 0) {
          iVar8 = (*(code *)PTR_apmib_get_0046aadc)(0x81,&local_9ec);
          if (iVar8 == 0) {
            return 0xffffffff;
          }
          (*(code *)PTR_sprintf_0046a808)(local_970,"%d",local_9ec);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"macFilterNum");
        if (iVar4 == 0) {
          iVar8 = (*(code *)PTR_apmib_get_0046aadc)(0x7b,&local_9ec);
          if (iVar8 == 0) {
            return 0xffffffff;
          }
          (*(code *)PTR_sprintf_0046a808)(local_970,"%d",local_9ec);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"urlFilterNum");
        if (iVar4 == 0) {
          iVar8 = (*(code *)PTR_apmib_get_0046aadc)(0xf0,&local_9ec);
          if (iVar8 == 0) {
            return 0xffffffff;
          }
          (*(code *)PTR_sprintf_0046a808)(local_970,"%d",local_9ec);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"triggerPortNum");
        if (iVar4 == 0) {
          iVar8 = (*(code *)PTR_apmib_get_0046aadc)(0x87,&local_9ec);
          if (iVar8 == 0) {
            return 0xffffffff;
          }
          (*(code *)PTR_sprintf_0046a808)(local_970,"%d",local_9ec);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"qosEnabled");
        if (iVar4 == 0) {
          iVar8 = (*(code *)PTR_apmib_get_0046aadc)(0x133,&local_9ec);
          if (iVar8 == 0) {
            return 0xffffffff;
          }
          (*(code *)PTR_sprintf_0046a808)(local_970,"%d",local_9ec);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"qosAutoUplinkSpeed");
        if (iVar4 == 0) {
          iVar8 = (*(code *)PTR_apmib_get_0046aadc)(0x134,&local_9ec);
          if (iVar8 == 0) {
            return 0xffffffff;
          }
          (*(code *)PTR_sprintf_0046a808)(local_970,"%d",local_9ec);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"qosRuleNum");
        if (iVar4 == 0) {
          iVar8 = (*(code *)PTR_apmib_get_0046aadc)(0x136,&local_9ec);
          if (iVar8 == 0) {
            return 0xffffffff;
          }
          (*(code *)PTR_sprintf_0046a808)(local_970,"%d",local_9ec);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"qosAutoDownlinkSpeed");
        if (iVar4 == 0) {
          iVar8 = (*(code *)PTR_apmib_get_0046aadc)(0x28b,&local_9ec);
          if (iVar8 == 0) {
            return 0xffffffff;
          }
          if (local_9ec == 0) {
            pcVar7 = "";
          }
          else {
            pcVar7 = "checked";
          }
          (*(code *)PTR_strcpy_0046ac60)(local_970,pcVar7);
          uVar5 = (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return uVar5;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"portFwEnabled");
        if (iVar4 == 0) {
          iVar8 = (*(code *)PTR_apmib_get_0046aadc)(0x6e,&local_9ec);
          if (iVar8 == 0) {
            return 0xffffffff;
          }
          (*(code *)PTR_sprintf_0046a808)(local_970,"%d",local_9ec);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"ipFilterEnabled");
        if (iVar4 == 0) {
          iVar8 = (*(code *)PTR_apmib_get_0046aadc)(0x74,&local_9ec);
          if (iVar8 == 0) {
            return 0xffffffff;
          }
          (*(code *)PTR_sprintf_0046a808)(local_970,"%d",local_9ec);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"portFilterEnabled");
        if (iVar4 == 0) {
          iVar8 = (*(code *)PTR_apmib_get_0046aadc)(0x80,&local_9ec);
          if (iVar8 == 0) {
            return 0xffffffff;
          }
          (*(code *)PTR_sprintf_0046a808)(local_970,"%d",local_9ec);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"macFilterEnabled");
        if (iVar4 == 0) {
          iVar8 = (*(code *)PTR_apmib_get_0046aadc)(0x7a,&local_9ec);
          if (iVar8 == 0) {
            return 0xffffffff;
          }
          (*(code *)PTR_sprintf_0046a808)(local_970,"%d",local_9ec);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"triggerPortEnabled");
        if (iVar4 == 0) {
          iVar8 = (*(code *)PTR_apmib_get_0046aadc)(0x86,&local_9ec);
          if (iVar8 == 0) {
            return 0xffffffff;
          }
          (*(code *)PTR_sprintf_0046a808)(local_970,"%d",local_9ec);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"dmzEnabled");
        if (iVar4 == 0) {
          iVar8 = (*(code *)PTR_apmib_get_0046aadc)(0x8c,&local_9ec);
          if (iVar8 == 0) {
            return 0xffffffff;
          }
          (*(code *)PTR_sprintf_0046a808)(local_970,"%d",local_9ec);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"upnpEnabled");
        if (iVar4 == 0) {
          iVar8 = (*(code *)PTR_apmib_get_0046aadc)(0x8e,&local_9ec);
          if (iVar8 == 0) {
            return 0xffffffff;
          }
          (*(code *)PTR_sprintf_0046a808)(local_970,"%d",local_9ec);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"igmpproxyDisabled");
        if (iVar4 == 0) {
          iVar8 = (*(code *)PTR_apmib_get_0046aadc)(0x11b,&local_9ec);
          if (iVar8 == 0) {
            return 0xffffffff;
          }
          (*(code *)PTR_sprintf_0046a808)(local_970,"%d",local_9ec);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"channel");
        if (iVar4 == 0) {
          iVar8 = (*(code *)PTR_apmib_get_0046aadc)(2,&local_9f0);
          if (iVar8 == 0) {
            return 0xffffffff;
          }
          (*(code *)PTR_sprintf_0046a808)(local_970,"%d",local_9f0);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"regDomain");
        if (iVar4 == 0) {
          iVar8 = (*(code *)PTR_apmib_get_0046aadc)(0xcc,&local_9e8);
          if (iVar8 == 0) {
            return 0xffffffff;
          }
          (*(code *)PTR_sprintf_0046a808)(local_970,"%d",local_9e8);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,&DAT_00450eb0);
        if (iVar4 == 0) {
          iVar8 = (*(code *)PTR_apmib_get_0046aadc)(3,&local_9e4);
          if (iVar8 == 0) {
            return 0xffffffff;
          }
          (*(code *)PTR_sprintf_0046a808)(local_970,"%d",local_9e4);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"defaultKeyId");
        if (iVar4 == 0) {
          iVar8 = (*(code *)PTR_apmib_get_0046aadc)(0xd,&local_9ec);
          if (iVar8 == 0) {
            return 0xffffffff;
          }
          local_9ec = local_9ec + 1;
          (*(code *)PTR_sprintf_0046a808)(local_970,"%d",local_9ec);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"keyType");
        if (iVar4 == 0) {
          iVar8 = (*(code *)PTR_apmib_get_0046aadc)(0xc,&local_9ec);
          if (iVar8 == 0) {
            return 0xffffffff;
          }
          (*(code *)PTR_sprintf_0046a808)(local_970,"%d",local_9ec);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"authType");
        if (iVar4 == 0) {
          iVar8 = (*(code *)PTR_apmib_get_0046aadc)(0x14,&local_9ec);
          if (iVar8 == 0) {
            return 0xffffffff;
          }
          (*(code *)PTR_sprintf_0046a808)(local_970,"%d",local_9ec);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"operRate");
        if (iVar4 == 0) {
          iVar8 = (*(code *)PTR_apmib_get_0046aadc)(0xf,&local_9ec);
          if (iVar8 == 0) {
            return 0xffffffff;
          }
          (*(code *)PTR_sprintf_0046a808)(local_970,"%d",local_9ec);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"basicRate");
        if (iVar4 == 0) {
          iVar8 = (*(code *)PTR_apmib_get_0046aadc)(0x12,&local_9ec);
          if (iVar8 == 0) {
            return 0xffffffff;
          }
          (*(code *)PTR_sprintf_0046a808)(local_970,"%d",local_9ec);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"preamble");
        if (iVar4 == 0) {
          iVar8 = (*(code *)PTR_apmib_get_0046aadc)(0x11,&local_9ec);
          if (iVar8 == 0) {
            return 0xffffffff;
          }
          (*(code *)PTR_sprintf_0046a808)(local_970,"%d",local_9ec);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"hiddenSSID");
        if (iVar4 == 0) {
          iVar8 = (*(code *)PTR_apmib_get_0046aadc)(0x15,&local_9ec);
          if (iVar8 == 0) {
            return 0xffffffff;
          }
          (*(code *)PTR_sprintf_0046a808)(local_970,"%d",local_9ec);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"wmFilterNum");
        if (iVar4 == 0) {
          iVar8 = (*(code *)PTR_apmib_get_0046aadc)(0x35,&local_9ec);
          if (iVar8 == 0) {
            return 0xffffffff;
          }
          (*(code *)PTR_sprintf_0046a808)(local_970,"%d",local_9ec);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"wlanDisabled");
        if (iVar4 == 0) {
          iVar8 = (*(code *)PTR_apmib_get_0046aadc)(0x16,&local_9ec);
          if (iVar8 == 0) {
            return 0xffffffff;
          }
          (*(code *)PTR_sprintf_0046a808)(local_970,"%d",local_9ec);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"wlanAcNum");
        if (iVar4 == 0) {
          iVar8 = (*(code *)PTR_apmib_get_0046aadc)(0x35,&local_9ec);
          if (iVar8 == 0) {
            return 0xffffffff;
          }
          (*(code *)PTR_sprintf_0046a808)(local_970,"%d",local_9ec);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"wlanAcEnabled");
        if (iVar4 == 0) {
          iVar8 = (*(code *)PTR_apmib_get_0046aadc)(0x34,&local_9ec);
          if (iVar8 == 0) {
            return 0xffffffff;
          }
          (*(code *)PTR_sprintf_0046a808)(local_970,"%d",local_9ec);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"rateAdaptiveEnabled");
        if (iVar4 == 0) {
          iVar8 = (*(code *)PTR_apmib_get_0046aadc)(0x33,&local_9ec);
          if (iVar8 == 0) {
            return 0xffffffff;
          }
          (*(code *)PTR_sprintf_0046a808)(local_970,"%d",local_9ec);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"wlanMode");
        if (iVar4 == 0) {
          iVar8 = (*(code *)PTR_apmib_get_0046aadc)(0x3b,&local_9ec);
          if (iVar8 == 0) {
            return 0xffffffff;
          }
          (*(code *)PTR_sprintf_0046a808)(local_970,"%d",local_9ec);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"wlanMode_rpt");
        if (iVar4 == 0) {
          (*(code *)PTR_sprintf_0046a808)(local_970,"%d",0);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"networkType");
        if (iVar4 == 0) {
          iVar8 = (*(code *)PTR_apmib_get_0046aadc)(0x3c,&local_9ec);
          if (iVar8 == 0) {
            return 0xffffffff;
          }
          (*(code *)PTR_sprintf_0046a808)(local_970,"%d",local_9ec);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"networkType_rpt");
        if (iVar4 == 0) {
          (*(code *)PTR_sprintf_0046a808)(local_970,"%d",0);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"lockdown_stat");
        if (iVar4 == 0) {
          iVar8 = (*(code *)PTR_stat_0046a7a4)("/tmp/wscd_lock_stat",auStack_938);
          local_9ec = (uint)(iVar8 == 0);
          (*(code *)PTR_sprintf_0046a808)(local_970,"%d",local_9ec);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"iappDisabled");
        if (iVar4 == 0) {
          iVar8 = (*(code *)PTR_apmib_get_0046aadc)(0x3e,&local_9ec);
          if (iVar8 == 0) {
            return 0xffffffff;
          }
          (*(code *)PTR_sprintf_0046a808)(local_970,"%d",local_9ec);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"protectionDisabled");
        if (iVar4 == 0) {
          iVar8 = (*(code *)PTR_apmib_get_0046aadc)(0x4e,&local_9ec);
          if (iVar8 == 0) {
            return 0xffffffff;
          }
          (*(code *)PTR_sprintf_0046a808)(local_970,"%d",local_9ec);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"encrypt");
        if (iVar4 == 0) {
          iVar8 = (*(code *)PTR_apmib_get_0046aadc)(0x19,&local_9ec);
          if (iVar8 == 0) {
            return 0xffffffff;
          }
          (*(code *)PTR_sprintf_0046a808)(local_970,"%d",local_9ec);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"encrypt_rpt");
        if (iVar4 == 0) {
          (*(code *)PTR_sprintf_0046a808)(local_970,"%d",0);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"enable1X");
        if (iVar4 == 0) {
          iVar8 = (*(code *)PTR_apmib_get_0046aadc)(0x23,&local_9ec);
          if (iVar8 == 0) {
            return 0xffffffff;
          }
          (*(code *)PTR_sprintf_0046a808)(local_970,"%d",local_9ec);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"enable1x_rpt");
        if (iVar4 == 0) {
          (*(code *)PTR_sprintf_0046a808)(local_970,"%d",0);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"enableSuppNonWpa");
        if (iVar4 == 0) {
          iVar8 = (*(code *)PTR_apmib_get_0046aadc)(0x1a,&local_9ec);
          if (iVar8 == 0) {
            return 0xffffffff;
          }
          (*(code *)PTR_sprintf_0046a808)(local_970,"%d",local_9ec);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"suppNonWpa");
        if (iVar4 == 0) {
          iVar8 = (*(code *)PTR_apmib_get_0046aadc)(0x1b,&local_9ec);
          if (iVar8 == 0) {
            return 0xffffffff;
          }
          (*(code *)PTR_sprintf_0046a808)(local_970,"%d",local_9ec);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"wpaAuth");
        if (iVar4 == 0) {
          iVar8 = (*(code *)PTR_apmib_get_0046aadc)(0x1c,&local_9ec);
          if (iVar8 == 0) {
            return 0xffffffff;
          }
          (*(code *)PTR_sprintf_0046a808)(local_970,"%d",local_9ec);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"wpa_auth_rpt");
        if (iVar4 == 0) {
          (*(code *)PTR_sprintf_0046a808)(local_970,"%d",0);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"clientModeSupport1X");
        if (iVar4 == 0) {
          (*(code *)PTR_sprintf_0046a808)(local_970,"%d",0);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"eapType");
        if (iVar4 == 0) {
          local_9ec = 0;
          (*(code *)PTR_sprintf_0046a808)(local_970,"%d",0);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"eapInsideType");
        if (iVar4 == 0) {
          local_9ec = 0;
          (*(code *)PTR_sprintf_0046a808)(local_970,"%d",0);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"wpaCipher");
        if (iVar4 == 0) {
          iVar8 = (*(code *)PTR_apmib_get_0046aadc)(0x1d,&local_9ec);
          if (iVar8 == 0) {
            return 0xffffffff;
          }
          (*(code *)PTR_sprintf_0046a808)(local_970,"%d",local_9ec);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"wpa2Cipher");
        if (iVar4 == 0) {
          iVar8 = (*(code *)PTR_apmib_get_0046aadc)(0x26,&local_9ec);
          if (iVar8 == 0) {
            return 0xffffffff;
          }
          (*(code *)PTR_sprintf_0046a808)(local_970,"%d",local_9ec);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"pskFormat");
        if (iVar4 == 0) {
          iVar8 = (*(code *)PTR_apmib_get_0046aadc)(0x24,&local_9ec);
          if (iVar8 == 0) {
            return 0xffffffff;
          }
          (*(code *)PTR_sprintf_0046a808)(local_970,"%d",local_9ec);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"accountRsEnabled");
        if (iVar4 == 0) {
          iVar8 = (*(code *)PTR_apmib_get_0046aadc)(0x27,&local_9ec);
          if (iVar8 == 0) {
            return 0xffffffff;
          }
          (*(code *)PTR_sprintf_0046a808)(local_970,"%d",local_9ec);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"accountRsUpdateEnabled");
        if (iVar4 == 0) {
          iVar8 = (*(code *)PTR_apmib_get_0046aadc)(0x2b,&local_9ec);
          if (iVar8 == 0) {
            return 0xffffffff;
          }
          (*(code *)PTR_sprintf_0046a808)(local_970,"%d",local_9ec);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"enableMacAuth");
        if (iVar4 == 0) {
          iVar8 = (*(code *)PTR_apmib_get_0046aadc)(0x2d,&local_9ec);
          if (iVar8 == 0) {
            return 0xffffffff;
          }
          (*(code *)PTR_sprintf_0046a808)(local_970,"%d",local_9ec);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"rsRetry");
        if (iVar4 == 0) {
          iVar8 = (*(code *)PTR_apmib_get_0046aadc)(0x2e,&local_9ec);
          if (iVar8 == 0) {
            return 0xffffffff;
          }
          (*(code *)PTR_sprintf_0046a808)(local_970,"%d",local_9ec);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"accountRsRetry");
        if (iVar4 == 0) {
          iVar8 = (*(code *)PTR_apmib_get_0046aadc)(0x30,&local_9ec);
          if (iVar8 == 0) {
            return 0xffffffff;
          }
          (*(code *)PTR_sprintf_0046a808)(local_970,"%d",local_9ec);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"wlanWdsEnabled");
        if (iVar4 == 0) {
          iVar8 = (*(code *)PTR_apmib_get_0046aadc)(0x3f,&local_9ec);
          if (iVar8 == 0) {
            return 0xffffffff;
          }
          (*(code *)PTR_sprintf_0046a808)(local_970,"%d",local_9ec);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"wlanWdsNum");
        if (iVar4 == 0) {
          iVar8 = (*(code *)PTR_apmib_get_0046aadc)(0x40,&local_9ec);
          if (iVar8 == 0) {
            return 0xffffffff;
          }
          (*(code *)PTR_sprintf_0046a808)(local_970,"%d",local_9ec);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"wdsEncrypt");
        if (iVar4 == 0) {
          iVar8 = (*(code *)PTR_apmib_get_0046aadc)(0x45,&local_9ec);
          if (iVar8 == 0) {
            return 0xffffffff;
          }
          (*(code *)PTR_sprintf_0046a808)(local_970,"%d",local_9ec);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"wdsWepFormat");
        if (iVar4 == 0) {
          iVar8 = (*(code *)PTR_apmib_get_0046aadc)(0x46,&local_9ec);
          if (iVar8 == 0) {
            return 0xffffffff;
          }
          (*(code *)PTR_sprintf_0046a808)(local_970,"%d",local_9ec);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"wdsPskFormat");
        if (iVar4 == 0) {
          iVar8 = (*(code *)PTR_apmib_get_0046aadc)(0x48,&local_9ec);
          if (iVar8 == 0) {
            return 0xffffffff;
          }
          (*(code *)PTR_sprintf_0046a808)(local_970,"%d",local_9ec);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"RFType");
        if (iVar4 == 0) {
          iVar8 = (*(code *)PTR_apmib_get_0046aadc)(0xcd,&local_9ec);
          if (iVar8 == 0) {
            return 0xffffffff;
          }
          (*(code *)PTR_sprintf_0046a808)(local_970,"%d",local_9ec);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"band");
        if (iVar4 == 0) {
          iVar8 = (*(code *)PTR_apmib_get_0046aadc)(0x4a,&local_9ec);
          if (iVar8 == 0) {
            return 0xffffffff;
          }
          (*(code *)PTR_sprintf_0046a808)(local_970,"%d",local_9ec);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"fixTxRate");
        if (iVar4 == 0) {
          iVar8 = (*(code *)PTR_apmib_get_0046aadc)(0x4b,&local_9ec);
          if (iVar8 == 0) {
            return 0xffffffff;
          }
          (*(code *)PTR_sprintf_0046a808)(local_970,"%d",local_9ec);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"preAuth");
        if (iVar4 == 0) {
          iVar8 = (*(code *)PTR_apmib_get_0046aadc)(0x25,&local_9ec);
          if (iVar8 == 0) {
            return 0xffffffff;
          }
          (*(code *)PTR_sprintf_0046a808)(local_970,"%d",local_9ec);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"turboMode");
        if (iVar4 == 0) {
          iVar8 = (*(code *)PTR_apmib_get_0046aadc)(0x106,&local_9ec);
          if (iVar8 == 0) {
            return 0xffffffff;
          }
          (*(code *)PTR_sprintf_0046a808)(local_970,"%d",local_9ec);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"RFPower");
        if (iVar4 == 0) {
          iVar8 = (*(code *)PTR_apmib_get_0046aadc)(0x107,&local_9ec);
          if (iVar8 == 0) {
            return 0xffffffff;
          }
          (*(code *)PTR_sprintf_0046a808)(local_970,"%d",local_9ec);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"ddnsEnabled");
        if (iVar4 == 0) {
          iVar8 = (*(code *)PTR_apmib_get_0046aadc)(0xbb,&local_9ec);
          if (iVar8 == 0) {
            return 0xffffffff;
          }
          (*(code *)PTR_sprintf_0046a808)(local_970,"%d",local_9ec);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"ddnsType");
        if (iVar4 == 0) {
          iVar8 = (*(code *)PTR_apmib_get_0046aadc)(0xbc,&local_9ec);
          if (iVar8 == 0) {
            return 0xffffffff;
          }
          (*(code *)PTR_sprintf_0046a808)(local_970,"%d",local_9ec);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"webWanAccess");
        if (iVar4 == 0) {
          iVar8 = (*(code *)PTR_apmib_get_0046aadc)(0xc2,&local_9ec);
          if (iVar8 == 0) {
            return 0xffffffff;
          }
          (*(code *)PTR_sprintf_0046a808)(local_970,"%d",local_9ec);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"pingWanAccess");
        if (iVar4 == 0) {
          iVar8 = (*(code *)PTR_apmib_get_0046aadc)(0xc3,&local_9ec);
          if (iVar8 == 0) {
            return 0xffffffff;
          }
          (*(code *)PTR_sprintf_0046a808)(local_970,"%d",local_9ec);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"VPNPassThruIPsec");
        if (iVar4 == 0) {
          iVar8 = (*(code *)PTR_apmib_get_0046aadc)(0xf5,&local_9ec);
          if (iVar8 == 0) {
            return 0xffffffff;
          }
          (*(code *)PTR_sprintf_0046a808)(local_970,"%d",local_9ec);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"VPNPassThruPPTP");
        if (iVar4 == 0) {
          iVar8 = (*(code *)PTR_apmib_get_0046aadc)(0xf6,&local_9ec);
          if (iVar8 == 0) {
            return 0xffffffff;
          }
          (*(code *)PTR_sprintf_0046a808)(local_970,"%d",local_9ec);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"VPNPassThruL2TP");
        if (iVar4 == 0) {
          iVar8 = (*(code *)PTR_apmib_get_0046aadc)(0xf7,&local_9ec);
          if (iVar8 == 0) {
            return 0xffffffff;
          }
          (*(code *)PTR_sprintf_0046a808)(local_970,"%d",local_9ec);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"ppoepassthrouh");
        if (iVar4 == 0) {
          iVar8 = (*(code *)PTR_apmib_get_0046aadc)(0x182,&local_9ec);
          if (iVar8 == 0) {
            return 0xffffffff;
          }
          (*(code *)PTR_sprintf_0046a808)(local_970,"%d",local_9ec >> 1 & 1);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"ipv6passthrouh");
        if (iVar4 == 0) {
          iVar8 = (*(code *)PTR_apmib_get_0046aadc)(0x182,&local_9ec);
          if (iVar8 == 0) {
            return 0xffffffff;
          }
          (*(code *)PTR_sprintf_0046a808)(local_970,"%d",local_9ec & 1);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"urlFilterEnabled");
        if (iVar4 == 0) {
          iVar8 = (*(code *)PTR_apmib_get_0046aadc)(0xef,&local_9ec);
          if (iVar8 == 0) {
            return 0xffffffff;
          }
          (*(code *)PTR_sprintf_0046a808)(local_970,"%d",local_9ec);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"urlFilterMode");
        if (iVar4 == 0) {
          iVar8 = (*(code *)PTR_apmib_get_0046aadc)(0xff,&local_9ec);
          if (iVar8 == 0) {
            return 0xffffffff;
          }
          (*(code *)PTR_sprintf_0046a808)(local_970,"%d",local_9ec);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"wispWanId");
        if (iVar4 == 0) {
          iVar8 = (*(code *)PTR_apmib_get_0046aadc)(0xc1,&local_9ec);
          if (iVar8 == 0) {
            return 0xffffffff;
          }
          (*(code *)PTR_sprintf_0046a808)(local_970,"%d",local_9ec);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"opMode");
        if (iVar4 == 0) {
          iVar8 = (*(code *)PTR_apmib_get_0046aadc)(0xc0,&local_9ec);
          if (iVar8 == 0) {
            return 0xffffffff;
          }
          (*(code *)PTR_sprintf_0046a808)(local_970,"%d",local_9ec);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"wlan_num");
        if (iVar4 == 0) {
          (*(code *)PTR_sprintf_0046a808)(local_970,"%d",*(undefined4 *)PTR_wlan_num_0046a8f0);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"show_wlan_num");
        if (iVar4 == 0) {
          (*(code *)PTR_sprintf_0046a808)(local_970,"%d",*(undefined4 *)PTR_wlan_num_0046a8f0);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"vwlan_num");
        if (iVar4 == 0) {
          (*(code *)PTR_sprintf_0046a808)(local_970,"%d",*(undefined4 *)PTR_vwlan_num_0046aa40);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"wlan_idx");
        if (iVar4 == 0) {
          (*(code *)PTR_sprintf_0046a808)(local_970,"%d",*(undefined4 *)PTR_wlan_idx_0046a93c);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"wlanMacClone");
        if (iVar4 == 0) {
          iVar8 = (*(code *)PTR_apmib_get_0046aadc)(0x4d,&local_9ec);
          if (iVar8 == 0) {
            return 0xffffffff;
          }
          (*(code *)PTR_sprintf_0046a808)(local_970,"%d",local_9ec);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"isWispDisplay");
        if (iVar4 == 0) {
          (*(code *)PTR_sprintf_0046a808)(local_970,"%d",1);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"isRepeaterDisplay");
        if (iVar4 == 0) {
          (*(code *)PTR_sprintf_0046a808)(local_970,"%d",1);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"isWDSDefined");
        if (iVar4 == 0) {
          (*(code *)PTR_sprintf_0046a808)(local_970,"%d",1);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"isOtg_Auto");
        if (iVar4 == 0) {
          (*(code *)PTR_sprintf_0046a808)(local_970,"%d",0);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"ulinker_opMode");
        if (iVar4 == 0) {
          (*(code *)PTR_sprintf_0046a808)(local_970,"%d",2);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"isP2PSupport");
        if (iVar4 == 0) {
          (*(code *)PTR_sprintf_0046a808)(local_970,"%d",0);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"isMeshDefined");
        if (iVar4 == 0) {
          (*(code *)PTR_sprintf_0046a808)(local_970,"%d",0);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"isNewMeshUI");
        if (iVar4 == 0) {
          (*(code *)PTR_sprintf_0046a808)(local_970,"%d",0);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"sambaEnabled");
        if (iVar4 == 0) {
          (*(code *)PTR_sprintf_0046a808)(local_970,"%d",0);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"rtLogEnabled");
        if (iVar4 == 0) {
          iVar8 = (*(code *)PTR_apmib_get_0046aadc)(0xe3,&local_9ec);
          if (iVar8 == 0) {
            return 0xffffffff;
          }
          (*(code *)PTR_sprintf_0046a808)(local_970,"%d",local_9ec);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"logEnabled");
        if (iVar4 == 0) {
          iVar8 = (*(code *)PTR_apmib_get_0046aadc)(0xb8,&local_9ec);
          if (iVar8 == 0) {
            return 0xffffffff;
          }
          (*(code *)PTR_sprintf_0046a808)(local_970,"%d",local_9ec);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"multiRepeaterEnabled");
        if (iVar4 == 0) {
          (*(code *)PTR_sprintf_0046a808)(local_970,"%d",0);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"multiAPRepeaterStr");
        if (iVar4 == 0) {
          (*(code *)PTR_strcpy_0046ac60)(local_970,"MultipleAP");
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"repeaterEnabled");
        if (iVar4 == 0) {
          uVar5 = 0xfc;
          if (*(int *)PTR_wlan_idx_0046a93c == 0) {
            uVar5 = 0xfa;
          }
          iVar8 = (*(code *)PTR_apmib_get_0046aadc)(uVar5,&local_9ec);
          if (iVar8 == 0) {
            return 0xffffffff;
          }
          (*(code *)PTR_sprintf_0046a808)(local_970,"%d",local_9ec);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"isRepeaterEnabled");
        if (iVar4 == 0) {
          uVar5 = 0xfa;
          if (*(int *)PTR_wlan_idx_0046a93c != 0) {
            uVar5 = 0xfc;
          }
          (*(code *)PTR_apmib_get_0046aadc)(uVar5,&local_9d4);
          (*(code *)PTR_apmib_get_0046aadc)(0x3c,local_9d0);
          (*(code *)PTR_apmib_get_0046aadc)(0x3b,&local_9ec);
          if (((local_9d4 == 0) || (local_9ec == 2)) || ((local_9ec == 1 && (local_9d0[0] == 1)))) {
            local_9ec = 0;
          }
          else {
            local_9ec = 1;
          }
          (*(code *)PTR_sprintf_0046a808)(local_970,"%d",local_9ec);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"repeaterMode");
        if (iVar4 == 0) {
          iVar8 = (*(code *)PTR_apmib_get_0046aadc)(0x3b,&local_9ec);
          if (iVar8 == 0) {
            return 0xffffffff;
          }
          if ((((local_9ec == 0) || (local_9ec == 3)) || (local_9ec == 4)) || (local_9ec == 5)) {
            local_9ec = 1;
          }
          else {
            local_9ec = 0;
          }
          (*(code *)PTR_sprintf_0046a808)(local_970,"%d",local_9ec);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"WiFiTest");
        if (iVar4 == 0) {
          (*(code *)PTR_apmib_get_0046aadc)(0x104,&local_9ec);
          (*(code *)PTR_sprintf_0046a808)(local_970,"%d",local_9ec);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"dosEnabled");
        if (iVar4 == 0) {
          iVar8 = (*(code *)PTR_apmib_get_0046aadc)(0xe5,&local_9ec);
          if (iVar8 == 0) {
            return 0xffffffff;
          }
          (*(code *)PTR_sprintf_0046a808)(local_970,"%d",local_9ec);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"pptpSecurity");
        if (iVar4 == 0) {
          iVar8 = (*(code *)PTR_apmib_get_0046aadc)(0x9c,&local_9ec);
          if (iVar8 == 0) {
            return 0xffffffff;
          }
          (*(code *)PTR_sprintf_0046a808)(local_970,"%d",local_9ec);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"pptpCompress");
        if (iVar4 == 0) {
          iVar8 = (*(code *)PTR_apmib_get_0046aadc)(0x9f,&local_9ec);
          if (iVar8 == 0) {
            return 0xffffffff;
          }
          (*(code *)PTR_sprintf_0046a808)(local_970,"%d",local_9ec);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"wscDisable");
        if (iVar4 == 0) {
          (*(code *)PTR_apmib_get_0046aadc)(0x10e,&local_9ec);
          (*(code *)PTR_sprintf_0046a808)(local_970,"%d",local_9ec);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"wscConfig");
        if (iVar4 == 0) {
          (*(code *)PTR_apmib_get_0046aadc)(0x110,&local_9ec);
          (*(code *)PTR_sprintf_0046a808)(local_970,"%d",local_9ec);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"wscRptConfig");
        if (iVar4 == 0) {
          (*(code *)PTR_sprintf_0046a808)(local_970,"%d",0);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"wps_by_reg");
        if (iVar4 == 0) {
          (*(code *)PTR_apmib_get_0046aadc)(0x119,&local_9ec);
          (*(code *)PTR_sprintf_0046a808)(local_970,"%d",local_9ec);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"wps_auth");
        if (iVar4 == 0) {
          (*(code *)PTR_apmib_get_0046aadc)(0x112,&local_9ec);
          (*(code *)PTR_sprintf_0046a808)(local_970,"%d",local_9ec);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"wpsRpt_auth");
        if (iVar4 == 0) {
          (*(code *)PTR_sprintf_0046a808)(local_970,"%d",0);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"wps_enc");
        if (iVar4 == 0) {
          (*(code *)PTR_apmib_get_0046aadc)(0x113,&local_9ec);
          (*(code *)PTR_sprintf_0046a808)(local_970,"%d",local_9ec);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"wpsRpt_enc");
        if (iVar4 == 0) {
          (*(code *)PTR_sprintf_0046a808)(local_970,"%d",0);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"hs2Enabled");
        if (iVar4 == 0) {
          (*(code *)PTR_sprintf_0046a808)(local_970,"%d",0xfffffffe);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"wmmEnabled");
        if (iVar4 == 0) {
          iVar8 = (*(code *)PTR_apmib_get_0046aadc)(0x59,&local_9ec);
          if (iVar8 == 0) {
            return 0xffffffff;
          }
          (*(code *)PTR_sprintf_0046a808)(local_970,"%d",local_9ec);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"ChannelBonding");
        if (iVar4 == 0) {
          iVar8 = (*(code *)PTR_apmib_get_0046aadc)(0x11c,&local_9ec);
          if (iVar8 == 0) {
            return 0xffffffff;
          }
          (*(code *)PTR_sprintf_0046a808)(local_970,"%d",local_9ec);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"ControlSideBand");
        if (iVar4 == 0) {
          iVar8 = (*(code *)PTR_apmib_get_0046aadc)(0x11d,&local_9ec);
          if (iVar8 == 0) {
            return 0xffffffff;
          }
          (*(code *)PTR_sprintf_0046a808)(local_970,"%d",local_9ec);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"aggregation");
        if (iVar4 == 0) {
          iVar8 = (*(code *)PTR_apmib_get_0046aadc)(0x11e,&local_9ec);
          if (iVar8 == 0) {
            return 0xffffffff;
          }
          (*(code *)PTR_sprintf_0046a808)(local_970,"%d",local_9ec);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"shortGIEnabled");
        if (iVar4 == 0) {
          iVar8 = (*(code *)PTR_apmib_get_0046aadc)(0x11f,&local_9ec);
          if (iVar8 == 0) {
            return 0xffffffff;
          }
          (*(code *)PTR_sprintf_0046a808)(local_970,"%d",local_9ec);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"static_dhcp");
        if (iVar4 == 0) {
          iVar8 = (*(code *)PTR_apmib_get_0046aadc)(0x124,&local_9ec);
          if (iVar8 == 0) {
            return 0xffffffff;
          }
          (*(code *)PTR_sprintf_0046a808)(local_970,"%d",local_9ec);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"wlanAccess");
        if (iVar4 == 0) {
          iVar8 = (*(code *)PTR_apmib_get_0046aadc)(0x13b,&local_9ec);
          if (iVar8 == 0) {
            return 0xffffffff;
          }
          (*(code *)PTR_sprintf_0046a808)(local_970,"%d",local_9ec);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"rf_used");
        if (iVar4 == 0) {
          iVar8 = (*(code *)PTR_getMiscData_0046aaa8)(PTR_WLAN_IF_0046a890,&local_9b8);
          if (iVar8 < 0) {
            local_9b8._1_1_ = 0;
          }
          else {
          }
          (*(code *)PTR_sprintf_0046a808)(local_970,"%d",local_9b8._1_1_);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"block_relay");
        if (iVar4 == 0) {
          iVar8 = (*(code *)PTR_apmib_get_0046aadc)(0x4c,&local_9ec);
          if (iVar8 == 0) {
            return 0xffffffff;
          }
          (*(code *)PTR_sprintf_0046a808)(local_970,"%d",local_9ec);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"tx_stbc");
        if (iVar4 == 0) {
          iVar8 = (*(code *)PTR_apmib_get_0046aadc)(0x286,&local_9ec);
          if (iVar8 == 0) {
            return 0xffffffff;
          }
          (*(code *)PTR_sprintf_0046a808)(local_970,"%d",local_9ec);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"tx_ldpc");
        if (iVar4 == 0) {
          iVar8 = (*(code *)PTR_apmib_get_0046aadc)(0x288,&local_9ec);
          if (iVar8 == 0) {
            return 0xffffffff;
          }
          (*(code *)PTR_sprintf_0046a808)(local_970,"%d",local_9ec);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"coexist");
        if (iVar4 == 0) {
          iVar8 = (*(code *)PTR_apmib_get_0046aadc)(0x287,&local_9ec);
          if (iVar8 == 0) {
            return 0xffffffff;
          }
          (*(code *)PTR_sprintf_0046a808)(local_970,"%d",local_9ec);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"tx_beamforming");
        if (iVar4 == 0) {
          iVar8 = (*(code *)PTR_apmib_get_0046aadc)(0x1c2,&local_9ec);
          if (iVar8 == 0) {
            return 0xffffffff;
          }
          (*(code *)PTR_sprintf_0046a808)(local_970,"%d",local_9ec);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"mc2u_disable");
        if (iVar4 == 0) {
          iVar8 = (*(code *)PTR_apmib_get_0046aadc)(0x298,&local_9ec);
          if (iVar8 == 0) {
            return 0xffffffff;
          }
          (*(code *)PTR_sprintf_0046a808)(local_970,"%d",local_9ec);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"lowestMlcstRate");
        if (iVar4 == 0) {
          iVar8 = (*(code *)PTR_apmib_get_0046aadc)(0x297,&local_9ec);
          if (iVar8 == 0) {
            return 0xffffffff;
          }
          (*(code *)PTR_sprintf_0046a808)(local_970,"%d",local_9ec);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"vlan_bridge_feature");
        if (iVar4 == 0) {
          (*(code *)PTR_sprintf_0046a808)(local_970,"%d",0);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"hw_vlan_support");
        if (iVar4 == 0) {
          (*(code *)PTR_sprintf_0046a808)(local_970,"%d",0);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"mssid_idx");
        if (iVar4 == 0) {
          (*(code *)PTR_sprintf_0046a808)(local_970,"%d",*(undefined4 *)PTR_mssid_idx_0046a88c);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"wlan_mssid_num");
        if (iVar4 == 0) {
          (*(code *)PTR_sprintf_0046a808)(local_970,"%d",4);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"wlan_root_mssid_rpt_num");
        if (iVar4 == 0) {
          (*(code *)PTR_sprintf_0046a808)(local_970,"%d",6);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"wapiAuth");
        if (iVar4 == 0) {
          local_9ec = 0;
          (*(code *)PTR_sprintf_0046a808)(local_970,"%d",0);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"wapiPskFormat");
        if (iVar4 == 0) {
          local_9ec = 0;
          (*(code *)PTR_sprintf_0046a808)(local_970,"%d",0);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strncmp_0046a918)(iVar8,&DAT_00451c38,4);
        if (iVar4 == 0) {
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"isSupportNewWlanSch");
        if (iVar4 == 0) {
          (*(code *)PTR_sprintf_0046a808)(local_970,"%d",1);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"clientModeSupportWapi");
        if (iVar4 == 0) {
          (*(code *)PTR_sprintf_0046a808)(local_970,"%d",0);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"is_rpt_wps_support");
        if (iVar4 == 0) {
          (*(code *)PTR_sprintf_0046a808)(local_970,"%d",0);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"wps_either_ap_or_vxd");
        if (iVar4 == 0) {
          (*(code *)PTR_sprintf_0046a808)(local_970,"%d",0);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"wlanBand2G5GSelect");
        if (iVar4 == 0) {
          (*(code *)PTR_apmib_get_0046aadc)(0x517,&local_9ec);
          (*(code *)PTR_sprintf_0046a808)(local_970,"%d",local_9ec);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"Band2G5GSupport");
        if (iVar4 == 0) {
          (*(code *)PTR_apmib_get_0046aadc)(0x515,&local_9ec);
          (*(code *)PTR_sprintf_0046a808)(local_970,"%d",local_9ec);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"wlan_support_92D");
        if (iVar4 == 0) {
          (*(code *)PTR_sprintf_0046a808)(local_970,"%d",0);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"wlan_support_8812e");
        if (iVar4 == 0) {
          (*(code *)PTR_sprintf_0046a808)(local_970,"%d",0);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"wlan_support_ac2g");
        if (iVar4 == 0) {
          (*(code *)PTR_sprintf_0046a808)(local_970,"%d",0);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"wlan_support_8192f");
        if (iVar4 == 0) {
          (*(code *)PTR_sprintf_0046a808)(local_970,"%d",0);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"wlan_mode_2x2");
        if (iVar4 == 0) {
          (*(code *)PTR_sprintf_0046a808)(local_970,"%d",0);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"wlan_support_92D_concurrent");
        if (iVar4 == 0) {
          (*(code *)PTR_sprintf_0046a808)(local_970,"%d",0);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"wlan1_phyband");
        if (iVar4 == 0) {
          (*(code *)PTR_strcpy_0046ac60)(local_970,&DAT_0044b32c);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"wlan2_phyband");
        if (iVar4 == 0) {
          (*(code *)PTR_strcpy_0046ac60)(local_970,&DAT_0044b32c);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"maxWebVlanNum");
        if (iVar4 == 0) {
          (*(code *)PTR_sprintf_0046a808)(local_970,"%d",0xf);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"2G_ssid");
        if (iVar4 == 0) {
          uVar5 = *(undefined4 *)PTR_wlan_idx_0046a93c;
          (*(code *)PTR_memset_0046a87c)(auStack_938,0,0x21);
          iVar8 = (*(code *)PTR_whichWlanIfIs_0046ac68)(1);
          if (-1 < iVar8) {
            local_9b8 = 0;
            local_9b4 = 0;
            local_9b0 = 0;
            (*(code *)PTR_sprintf_0046a808)(&local_9b8,"wlan%d",iVar8);
            iVar8 = (*(code *)PTR_SetWlan_idx_0046ab70)(&local_9b8);
            if (iVar8 != 0) {
              (*(code *)PTR_apmib_get_0046aadc)(1,auStack_938);
            }
            *(undefined4 *)PTR_wlan_idx_0046a93c = uVar5;
          }
          local_30 = auStack_938;
          translate_control_code(local_30);
          uVar5 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,local_30);
          return uVar5;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"5G_ssid");
        if (iVar4 == 0) {
          uVar5 = *(undefined4 *)PTR_wlan_idx_0046a93c;
          (*(code *)PTR_memset_0046a87c)(auStack_938,0,0x21);
          iVar8 = (*(code *)PTR_whichWlanIfIs_0046ac68)(2);
          if (-1 < iVar8) {
            local_9b8 = 0;
            local_9b4 = 0;
            local_9b0 = 0;
            (*(code *)PTR_sprintf_0046a808)(&local_9b8,"wlan%d",iVar8);
            iVar8 = (*(code *)PTR_SetWlan_idx_0046ab70)(&local_9b8);
            if (iVar8 != 0) {
              (*(code *)PTR_apmib_get_0046aadc)(1,auStack_938);
            }
            *(undefined4 *)PTR_wlan_idx_0046a93c = uVar5;
          }
          local_30 = auStack_938;
          translate_control_code(local_30);
          uVar5 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,local_30);
          return uVar5;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"dsf_enable");
        if (iVar4 == 0) {
          (*(code *)PTR_sprintf_0046a808)(local_970,"%d",0);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
          return 0;
        }
        iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"set_wlanindex");
        if (iVar4 == 0) {
          if (1 < param_2) {
            uVar5 = (*(code *)PTR_atoi_0046a73c)(param_3[param_2 + -1]);
            puVar1 = PTR_req_format_write_0046a95c;
            *(undefined4 *)PTR_wlan_idx_0046a93c = uVar5;
            (*(code *)puVar1)(param_1,&DAT_0044b32c);
            return 0;
          }
        }
        else {
          iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"vlan_val_init");
          if (iVar4 != 0) {
            iVar4 = (*(code *)PTR_strcmp_0046a824)(iVar8,"wizard_wlband_init");
            if (iVar4 == 0) {
              (*(code *)PTR_memset_0046a87c)(auStack_998,0,0x28);
              (*(code *)PTR_memset_0046a87c)(auStack_838,0,0x800);
              local_34 = *(undefined4 *)PTR_wlan_idx_0046a93c;
              local_38 = *(undefined4 *)PTR_vwlan_idx_0046a9b0;
              (*(code *)PTR_strcpy_0046ac60)(auStack_998,PTR_WLAN_IF_0046a890);
              pcVar7 = "wlan%d";
              for (iVar8 = 0; puVar3 = PTR_strcpy_0046ac60, puVar2 = PTR_vwlan_idx_0046a9b0,
                  puVar1 = PTR_wlan_idx_0046a93c, iVar8 < *(int *)PTR_wlan_num_0046a8f0;
                  iVar8 = iVar8 + 1) {
                local_2c = pcVar7;
                (*(code *)PTR_sprintf_0046a808)(PTR_WLAN_IF_0046a890,pcVar7,iVar8);
                puVar2 = PTR_inner_req_buff_0046abf8;
                (*(code *)PTR_SetWlan_idx_0046ab70)(PTR_WLAN_IF_0046a890);
                FUN_0043349c("wlanDisabled");
                (*(code *)PTR_sprintf_0046a808)
                          (auStack_938,"%s[%d]=%s;\n","wlanDisabled",*(undefined4 *)puVar1,puVar2);
                (*(code *)PTR_strcat_0046a9c8)(auStack_838,auStack_938);
                FUN_0043349c("RFType");
                (*(code *)PTR_sprintf_0046a808)
                          (auStack_938,"%s[%d]=%s;\n","RFType",*(undefined4 *)puVar1,puVar2);
                (*(code *)PTR_strcat_0046a9c8)(auStack_838,auStack_938);
                FUN_0043349c("wlanMode");
                (*(code *)PTR_sprintf_0046a808)
                          (auStack_938,"%s[%d]=%s;\n","APMode",*(undefined4 *)puVar1,puVar2);
                (*(code *)PTR_strcat_0046a9c8)(auStack_838,auStack_938);
                FUN_0043349c("band");
                iVar4 = (*(code *)PTR_atoi_0046a73c)(puVar2);
                local_30 = (undefined1 *)(iVar4 - (uint)(0 < iVar4));
                (*(code *)PTR_sprintf_0046a808)
                          (auStack_938,"%s[%d]=%d;\n","bandIdx",*(undefined4 *)puVar1,local_30);
                (*(code *)PTR_strcat_0046a9c8)(auStack_838,auStack_938);
                (*(code *)PTR_sprintf_0046a808)
                          (auStack_938,"%s[%d]=%d;\n","bandIdxClient",*(undefined4 *)puVar1,local_30
                          );
                (*(code *)PTR_strcat_0046a9c8)(auStack_838,auStack_938);
                FUN_0043349c("networkType");
                (*(code *)PTR_sprintf_0046a808)
                          (auStack_938,"%s[%d]=%s;\n","networkType",*(undefined4 *)puVar1,puVar2);
                (*(code *)PTR_strcat_0046a9c8)(auStack_838,auStack_938);
                FUN_0043349c("regDomain");
                (*(code *)PTR_sprintf_0046a808)
                          (auStack_938,"%s[%d]=%s;\n","regDomain",*(undefined4 *)puVar1,puVar2);
                (*(code *)PTR_strcat_0046a9c8)(auStack_838,auStack_938);
                FUN_0043349c("channel");
                (*(code *)PTR_sprintf_0046a808)
                          (auStack_938,"%s[%d]=%s;\n","defaultChan",*(undefined4 *)puVar1,puVar2);
                (*(code *)PTR_strcat_0046a9c8)(auStack_838,auStack_938);
                FUN_0043349c("band");
                (*(code *)PTR_sprintf_0046a808)
                          (auStack_938,"%s[%d]=%s;\n","usedBand",*(undefined4 *)puVar1,puVar2);
                (*(code *)PTR_strcat_0046a9c8)(auStack_838,auStack_938);
                FUN_0042cdc8(&DAT_00450ea0);
                (*(code *)PTR_sprintf_0046a808)
                          (auStack_938,"%s[%d]=\'%s\';\n",&DAT_00450ea0,*(undefined4 *)puVar1,puVar2
                          );
                FUN_0042ce44(auStack_938);
                (*(code *)PTR_strcat_0046a9c8)(auStack_838,auStack_938);
                FUN_0043349c("encrypt");
                (*(code *)PTR_sprintf_0046a808)
                          (auStack_938,"%s[%d]=%s;\n","encrypt",*(undefined4 *)puVar1,puVar2);
                (*(code *)PTR_strcat_0046a9c8)(auStack_838,auStack_938);
                FUN_0043349c(&DAT_00450eb0);
                (*(code *)PTR_sprintf_0046a808)
                          (auStack_938,"%s[%d]=%s;\n",&DAT_00450eb0,*(undefined4 *)puVar1,puVar2);
                (*(code *)PTR_strcat_0046a9c8)(auStack_838,auStack_938);
                FUN_0043349c("defaultKeyId");
                (*(code *)PTR_sprintf_0046a808)
                          (auStack_938,"%s[%d]=%s;\n","defaultKeyId",*(undefined4 *)puVar1,puVar2);
                (*(code *)PTR_strcat_0046a9c8)(auStack_838,auStack_938);
                FUN_0043349c("pskFormat");
                (*(code *)PTR_sprintf_0046a808)
                          (auStack_938,"%s[%d]=%s;\n","defPskFormat",*(undefined4 *)puVar1,puVar2);
                (*(code *)PTR_strcat_0046a9c8)(auStack_838,auStack_938);
                FUN_0043349c("wlanMacClone");
                (*(code *)PTR_sprintf_0046a808)
                          (auStack_938,"%s[%d]=%s;\n","macClone",*(undefined4 *)puVar1,puVar2);
                (*(code *)PTR_strcat_0046a9c8)(auStack_838,auStack_938);
                FUN_0043349c("wpaCipher");
                (*(code *)PTR_sprintf_0046a808)
                          (auStack_938,"%s[%d]=\'%s\';\n","wpaCipher",*(undefined4 *)puVar1,puVar2);
                (*(code *)PTR_strcat_0046a9c8)(auStack_838,auStack_938);
                FUN_0043349c("wpa2Cipher");
                (*(code *)PTR_sprintf_0046a808)
                          (auStack_938,"%s[%d]=\'%s\';\n","wpa2Cipher",*(undefined4 *)puVar1,puVar2)
                ;
                (*(code *)PTR_strcat_0046a9c8)(auStack_838,auStack_938);
                FUN_0042cdc8("pskValue");
                (*(code *)PTR_sprintf_0046a808)
                          (auStack_938,"%s[%d]=\'%s\';\n","pskValue",*(undefined4 *)puVar1,puVar2);
                (*(code *)PTR_strcat_0046a9c8)(auStack_838,auStack_938);
                FUN_0043349c("keyType");
                (*(code *)PTR_sprintf_0046a808)
                          (auStack_938,"%s[%d]=%s;\n","keyType",*(undefined4 *)puVar1,puVar2);
                (*(code *)PTR_strcat_0046a9c8)(auStack_838,auStack_938);
                FUN_0043349c("wapiAuth");
                (*(code *)PTR_sprintf_0046a808)
                          (auStack_938,"%s[%d]=%s;\n","defWapiAuth",*(undefined4 *)puVar1,puVar2);
                (*(code *)PTR_strcat_0046a9c8)(auStack_838,auStack_938);
                FUN_0043349c("wapiPskFormat");
                (*(code *)PTR_sprintf_0046a808)
                          (auStack_938,"%s[%d]=%s;\n","defWapiPskFormat",*(undefined4 *)puVar1,
                           puVar2);
                (*(code *)PTR_strcat_0046a9c8)(auStack_838,auStack_938);
                FUN_0042cdc8("wapiPskValue");
                (*(code *)PTR_sprintf_0046a808)
                          (auStack_938,"%s[%d]=%s;\n","defWapiPskValue",*(undefined4 *)puVar1,puVar2
                          );
                (*(code *)PTR_strcat_0046a9c8)(auStack_838,auStack_938);
                FUN_0042cdc8("wapiASIp");
                (*(code *)PTR_sprintf_0046a808)
                          (auStack_938,"%s[%d]=%s;\n","defWapiASIP",*(undefined4 *)puVar1,puVar2);
                (*(code *)PTR_strcat_0046a9c8)(auStack_838,auStack_938);
                FUN_0042cdc8("wapiCertSel");
                (*(code *)PTR_sprintf_0046a808)
                          (auStack_938,"%s[%d]=%s;\n","defWapiCertSel",*(undefined4 *)puVar1,puVar2)
                ;
                (*(code *)PTR_strcat_0046a9c8)(auStack_838,auStack_938);
                FUN_0043349c("ChannelBonding");
                (*(code *)PTR_sprintf_0046a808)
                          (auStack_938,"%s[%d]=%s;\n","init_bound",*(undefined4 *)puVar1,puVar2);
                (*(code *)PTR_strcat_0046a9c8)(auStack_838,auStack_938);
                FUN_0043349c("ControlSideBand");
                (*(code *)PTR_sprintf_0046a808)
                          (auStack_938,"%s[%d]=%s;\n","init_sideband",*(undefined4 *)puVar1,puVar2);
                (*(code *)PTR_strcat_0046a9c8)(auStack_838,auStack_938);
                FUN_0043349c("Band2G5GSupport");
                (*(code *)PTR_sprintf_0046a808)
                          (auStack_938,"%s[%d]=%s;\n","wlanBand2G5G",*(undefined4 *)puVar1,puVar2);
                (*(code *)PTR_strcat_0046a9c8)(auStack_838,auStack_938);
                pcVar7 = local_2c;
              }
              *(undefined4 *)PTR_wlan_idx_0046a93c = local_34;
              puVar1 = PTR_WLAN_IF_0046a890;
              *(undefined4 *)puVar2 = local_38;
              (*(code *)puVar3)(puVar1,auStack_998);
              (*(code *)PTR_req_format_write_0046a95c)(param_1,auStack_838);
              return 0;
            }
            iVar8 = (*(code *)PTR_strcmp_0046a824)(iVar8,"is_l7_qos_support");
            if (iVar8 == 0) {
              (*(code *)PTR_sprintf_0046a808)(local_970,"%d",0);
              (*(code *)PTR_req_format_write_0046a95c)(param_1,local_970);
              return 0;
            }
            goto LAB_004332ec;
          }
          (*(code *)PTR_memset_0046a87c)(auStack_998,0,0x28);
          (*(code *)PTR_memset_0046a87c)(auStack_838,0,0x800);
          puVar3 = PTR_vwlan_idx_0046a9b0;
          puVar2 = PTR_wlan_idx_0046a93c;
          local_34 = *(undefined4 *)PTR_wlan_idx_0046a93c;
          local_38 = *(undefined4 *)PTR_vwlan_idx_0046a9b0;
          (*(code *)PTR_strcpy_0046ac60)(auStack_998,PTR_WLAN_IF_0046a890);
          puVar1 = PTR_wlan_num_0046a8f0;
          for (iVar8 = 0; iVar8 < *(int *)puVar1; iVar8 = iVar8 + 1) {
            (*(code *)PTR_sprintf_0046a808)(PTR_WLAN_IF_0046a890,"wlan%d",iVar8);
            (*(code *)PTR_SetWlan_idx_0046ab70)(PTR_WLAN_IF_0046a890);
            iVar4 = (*(code *)PTR_apmib_get_0046aadc)(0x3b,&local_9ec);
            if (iVar4 == 0) {
LAB_0043293c:
              iVar8 = -1;
              goto LAB_00432940;
            }
            (*(code *)PTR_sprintf_0046a808)
                      (local_970,"wlanMode[%d]=%d;\n",*(undefined4 *)puVar2,local_9ec);
            (*(code *)PTR_strcat_0046a9c8)(auStack_838,local_970);
            iVar4 = (*(code *)PTR_apmib_get_0046aadc)(0x16,&local_9ec);
            if (iVar4 == 0) goto LAB_0043293c;
            (*(code *)PTR_sprintf_0046a808)
                      (local_970,"wlanDisabled[%d]=%d;\n",*(undefined4 *)puVar2,local_9ec);
            iVar4 = 0;
            (*(code *)PTR_strcat_0046a9c8)(auStack_838,local_970);
            do {
              (*(code *)PTR_sprintf_0046a808)
                        (PTR_WLAN_IF_0046a890,"wlan%d-va%d",*(undefined4 *)puVar2,
                         *(undefined4 *)puVar3);
              iVar4 = iVar4 + 1;
              (*(code *)PTR_SetWlan_idx_0046ab70)(PTR_WLAN_IF_0046a890);
              iVar6 = (*(code *)PTR_apmib_get_0046aadc)(0x16,&local_9ec);
              if (iVar6 == 0) goto LAB_0043293c;
              (*(code *)PTR_sprintf_0046a808)
                        (local_970,"mssid_disable[%d][%d]=%d;\n",*(undefined4 *)puVar2,
                         *(int *)puVar3 + -1,local_9ec);
              (*(code *)PTR_strcat_0046a9c8)(auStack_838,local_970);
            } while (iVar4 != 4);
          }
          iVar8 = 0;
LAB_00432940:
          puVar2 = PTR_strcpy_0046ac60;
          puVar1 = PTR_WLAN_IF_0046a890;
          *(undefined4 *)PTR_wlan_idx_0046a93c = local_34;
          *(undefined4 *)PTR_vwlan_idx_0046a9b0 = local_38;
          (*(code *)puVar2)(puVar1,auStack_998);
          if (iVar8 == 0) {
            (*(code *)PTR_req_format_write_0046a95c)(param_1,auStack_838);
            return 0;
          }
        }
      }
    }
  }
  return 0xffffffff;
}

