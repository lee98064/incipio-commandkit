/* FUN_8040a33c @ 8040a33c */

void FUN_8040a33c(int param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_20 [4];
  
  puVar3 = local_20;
  if (param_1 == 0) {
    FUN_804077a4(s_Target_Address__d__d__d__d_8040e230,DAT_80410050._0_1_,DAT_80410050._1_1_,
                 DAT_80410050._2_1_,(undefined1)DAT_80410050);
  }
  else {
    iVar2 = *param_2;
    do {
      uVar1 = FUN_80406b90(iVar2,0,10);
      *puVar3 = uVar1;
      iVar2 = FUN_804069a8(iVar2,0x2e);
      puVar3 = puVar3 + 1;
      iVar2 = iVar2 + 1;
    } while (puVar3 != (undefined4 *)&stack0xfffffff0);
    DAT_8040e8f1 = (undefined1)local_20[0];
    DAT_8040e8f2 = (undefined1)local_20[1];
    DAT_8040e8f3 = (undefined1)local_20[2];
    DAT_8040e8f4 = (undefined1)local_20[3];
    DAT_80410059 = DAT_8040e8f5;
    DAT_80410054 = DAT_8040e8f0;
    DAT_80410050._0_1_ = DAT_8040e8f1;
    DAT_80410050._1_1_ = DAT_8040e8f2;
    DAT_80410050._2_1_ = DAT_8040e8f3;
    DAT_80410050._3_1_ = DAT_8040e8f4;
    DAT_80410055 = DAT_8040e8f1;
    DAT_80410056 = DAT_8040e8f2;
    DAT_80410057 = DAT_8040e8f3;
    DAT_80410058 = DAT_8040e8f4;
    FUN_804079cc(s_Now_your_Target_IP_is__d__d__d___8040e250);
  }
  return;
}

