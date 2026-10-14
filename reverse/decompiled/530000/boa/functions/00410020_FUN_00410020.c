/* FUN_00410020 @ 00410020 */

undefined4 FUN_00410020(char *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  byte bVar3;
  
  switch(*param_1 + -0x41) {
  case '\0':
    uVar1 = 7;
    uVar2 = 3;
    bVar3 = param_1[1] ^ 0x70;
    break;
  default:
    return 0xffffffff;
  case '\x03':
    return 0xb;
  case '\x05':
    return 1;
  case '\t':
    if (param_1[1] == 'a') {
      return 0;
    }
    uVar1 = 6;
    uVar2 = 5;
    bVar3 = param_1[2] ^ 0x6e;
    break;
  case '\f':
    uVar1 = 4;
    uVar2 = 2;
    bVar3 = param_1[2] ^ 0x72;
    break;
  case '\r':
    return 10;
  case '\x0e':
    return 9;
  case '\x12':
    return 8;
  }
  if (bVar3 == 0) {
    uVar1 = uVar2;
  }
  return uVar1;
}

