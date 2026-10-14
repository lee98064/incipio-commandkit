/* FUN_00410584 @ 00410584 */

void FUN_00410584(void)

{
  char *pcVar1;
  int local_c8;
  int local_c4;
  undefined1 auStack_c0 [52];
  undefined1 auStack_8c [52];
  undefined1 auStack_58 [60];
  
  (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"killall",&DAT_00417998,"ddns_inet","");
  (*(code *)PTR_apmib_get_0042b1a0)(0xbb,&local_c8);
  if (local_c8 == 1) {
    (*(code *)PTR_apmib_get_0042b1a0)(0xbc,&local_c4);
    (*(code *)PTR_apmib_get_0042b1a0)(0xbd,auStack_c0);
    (*(code *)PTR_apmib_get_0042b1a0)(0xbe,auStack_8c);
    (*(code *)PTR_apmib_get_0042b1a0)(0xbf,auStack_58);
    if (local_c4 == 0) {
      pcVar1 = "dyndns";
    }
    else {
      if (local_c4 != 1) {
        return;
      }
      pcVar1 = "tzo";
    }
    (*(code *)PTR_RunSystemCmd_0042b0dc)
              (0,"ddns_inet",&DAT_00418ff8,pcVar1,auStack_8c,auStack_58,auStack_c0,"");
  }
  return;
}

