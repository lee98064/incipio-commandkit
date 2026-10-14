/* gcm_init_message @ 0041b438 */

undefined4 gcm_init_message(uint *param_1,uint param_2,int param_3)

{
  uint *puVar1;
  byte bVar2;
  undefined *puVar3;
  uint *puVar4;
  uint uVar5;
  uint *puVar6;
  byte *pbVar7;
  undefined1 auStack_38 [20];
  
  puVar6 = (uint *)(param_3 + 0x1000);
  *(undefined4 *)(param_3 + 0x1000) = 0;
  *(undefined4 *)(param_3 + 0x1004) = 0;
  *(undefined4 *)(param_3 + 0x1008) = 0;
  *(undefined4 *)(param_3 + 0x100c) = 0;
  if (param_2 == 0xc) {
    (*(code *)PTR_memcpy_004332a8)(puVar6,param_1,0xc);
    *(undefined1 *)(param_3 + 0x100f) = 1;
  }
  else {
    puVar4 = param_1;
    for (uVar5 = param_2; puVar3 = PTR_gf_mul_4k_0043321c, 0xf < uVar5; uVar5 = uVar5 - 0x10) {
      *puVar6 = *puVar6 ^ *puVar4;
      *(uint *)(param_3 + 0x1004) = *(uint *)(param_3 + 0x1004) ^ puVar4[1];
      *(uint *)(param_3 + 0x1008) = *(uint *)(param_3 + 0x1008) ^ puVar4[2];
      puVar1 = puVar4 + 3;
      puVar4 = puVar4 + 4;
      *(uint *)(param_3 + 0x100c) = *(uint *)(param_3 + 0x100c) ^ *puVar1;
      (*(code *)puVar3)(puVar6,param_3,auStack_38);
    }
    uVar5 = param_2 & 0xf;
    pbVar7 = (byte *)((int)param_1 + (param_2 & 0xfffffff0));
    puVar4 = puVar6;
    if (uVar5 != 0) {
      do {
        bVar2 = *pbVar7;
        uVar5 = uVar5 - 1;
        pbVar7 = pbVar7 + 1;
        *(byte *)puVar4 = bVar2 ^ *(byte *)puVar4;
        puVar4 = (uint *)((int)puVar4 + 1);
      } while (uVar5 != 0);
      (*(code *)PTR_gf_mul_4k_0043321c)(puVar6,param_3,auStack_38);
    }
    puVar4 = puVar6;
    for (param_2 = param_2 << 3; param_2 != 0; param_2 = param_2 >> 8) {
      *(byte *)((int)puVar4 + 0xf) = (byte)param_2 ^ *(byte *)((int)puVar4 + 0xf);
      puVar4 = (uint *)((int)puVar4 + -1);
    }
    (*(code *)PTR_gf_mul_4k_0043321c)(puVar6,param_3,auStack_38);
  }
  *(undefined4 *)(param_3 + 0x1144) = *(undefined4 *)(param_3 + 0x100c);
  *(undefined4 *)(param_3 + 0x1020) = 0;
  *(undefined4 *)(param_3 + 0x102c) = 0;
  *(undefined4 *)(param_3 + 0x1024) = 0;
  *(undefined4 *)(param_3 + 0x1028) = 0;
  *(undefined4 *)(param_3 + 0x1030) = 0;
  *(undefined4 *)(param_3 + 0x103c) = 0;
  *(undefined4 *)(param_3 + 0x1034) = 0;
  *(undefined4 *)(param_3 + 0x1038) = 0;
  *(undefined4 *)(param_3 + 0x114c) = 0;
  *(undefined4 *)(param_3 + 0x1148) = 0;
  *(undefined4 *)(param_3 + 0x1150) = 0;
  return 0;
}

