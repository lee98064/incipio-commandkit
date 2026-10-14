/* FUN_00412b9c @ 00412b9c */

undefined4 FUN_00412b9c(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  undefined *puVar2;
  char *pcVar3;
  int iVar4;
  
  pcVar3 = (char *)FUN_00411c70(param_1,"----------------------------",param_2);
  puVar2 = PTR_str_boundry_0046ab20;
  iVar4 = 0;
  if (pcVar3 == (char *)0x0) {
    pcVar3 = "can\'t get boundry string";
  }
  else {
    while( true ) {
      cVar1 = *pcVar3;
      if ((cVar1 == '\r') && (pcVar3[1] == '\n')) break;
      pcVar3 = pcVar3 + 1;
      if (iVar4 == 0x40) goto LAB_00412c34;
      puVar2[iVar4] = cVar1;
      iVar4 = iVar4 + 1;
    }
    if (iVar4 < 0x40) {
      PTR_str_boundry_0046ab20[iVar4] = 0;
      return 0;
    }
LAB_00412c34:
    pcVar3 = "the string of boundry is too long";
  }
  (*(code *)PTR_puts_0046ab3c)(pcVar3);
  return 0xffffffff;
}

