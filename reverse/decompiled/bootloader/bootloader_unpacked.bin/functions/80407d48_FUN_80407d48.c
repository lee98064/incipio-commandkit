/* FUN_80407d48 @ 80407d48 */

void FUN_80407d48(void)

{
  FUN_804027cc(0);
  FUN_804077a4(s____Ethernet_init_Okay__8040dbb4);
  setCopReg(0,Status,(Status | 0x1f) ^ 0x1e);
  FUN_80400dd8(0);
  FUN_8040a594();
  return;
}

