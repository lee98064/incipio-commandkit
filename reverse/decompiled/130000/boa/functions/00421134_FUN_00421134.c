/* FUN_00421134 @ 00421134 */

undefined4 FUN_00421134(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_20;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined4 local_18;
  
  local_20 = 1;
  local_1c = 2;
  local_18 = 0x7f000001;
  local_1a = 18000;
  uVar1 = (*(code *)PTR_socket_0046aad4)(2,2,0);
  (*(code *)PTR_setsockopt_0046a98c)(uVar1,0xffff,4,&local_20,4);
  iVar2 = (*(code *)PTR_connect_0046ac14)(uVar1,&local_1c,0x10);
  if (iVar2 < 0) {
    (*(code *)PTR_puts_0046ab3c)("connect error");
    uVar1 = 0;
  }
  return uVar1;
}

