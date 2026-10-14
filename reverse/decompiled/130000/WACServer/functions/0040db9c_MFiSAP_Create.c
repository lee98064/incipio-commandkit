/* MFiSAP_Create @ 0040db9c */

undefined4 MFiSAP_Create(undefined4 *param_1,char param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  
  uVar2 = 0xffffe5c5;
  if (param_2 == '\x01') {
    puVar1 = (undefined1 *)(*(code *)PTR_calloc_00433224)(1,0x144);
    uVar2 = 0xffffe5b8;
    if (puVar1 != (undefined1 *)0x0) {
      *param_1 = puVar1;
      uVar2 = 0;
      puVar1[1] = 1;
      *puVar1 = 1;
    }
  }
  return uVar2;
}

