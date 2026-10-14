/* FUN_0040c5f8 @ 0040c5f8 */

undefined4 FUN_0040c5f8(undefined4 param_1,int param_2)

{
  char *pcVar1;
  uint uVar2;
  undefined4 local_230;
  undefined4 local_22c;
  undefined4 local_228;
  undefined4 local_224;
  undefined4 local_220;
  undefined4 local_21c;
  undefined4 local_218;
  undefined4 local_214;
  undefined4 local_210;
  uint local_20c;
  undefined4 local_208;
  undefined1 auStack_204 [500];
  
  local_230 = 0;
  local_22c = 0;
  local_228 = 0;
  local_224 = 0;
  local_220 = 0;
  local_21c = 0;
  local_218 = 0;
  local_214 = 0;
  local_210 = 0;
  local_20c = 0;
  local_208 = 0;
  (*(code *)PTR_apmib_get_0042b1a0)(0xe6,&local_230);
  (*(code *)PTR_apmib_get_0042b1a0)(0xe7,&local_22c);
  (*(code *)PTR_apmib_get_0042b1a0)(0xe8,&local_228);
  (*(code *)PTR_apmib_get_0042b1a0)(0xe9,&local_224);
  (*(code *)PTR_apmib_get_0042b1a0)(0xea,&local_220);
  (*(code *)PTR_apmib_get_0042b1a0)(0xeb,&local_21c);
  (*(code *)PTR_apmib_get_0042b1a0)(0xec,&local_218);
  (*(code *)PTR_apmib_get_0042b1a0)(0xed,&local_214);
  (*(code *)PTR_apmib_get_0042b1a0)(0xee,&local_210);
  (*(code *)PTR_getInAddr_0042b1c4)(&DAT_00417ad0,2,&local_20c);
  (*(code *)PTR_getInAddr_0042b1c4)(&DAT_00417ad0,4,&local_208);
  if (param_2 == 2) {
    pcVar1 = "echo \" 2 %X %X %ld %d %d %d %d %d %d %d %d %d\" >  /proc/enable_dos";
    uVar2 = local_20c;
  }
  else {
    uVar2 = local_20c & 0xffffff00;
    pcVar1 = "echo \" 0 %X %X %ld %d %d %d %d %d %d %d %d %d\" >  /proc/enable_dos";
  }
  (*(code *)PTR_sprintf_0042b0e8)
            (auStack_204,pcVar1,uVar2,local_208,param_1,local_230,local_22c,local_228,local_224,
             local_220,local_21c,local_218,local_214,local_210);
  (*(code *)PTR_system_0042b1ac)(auStack_204);
  return 0;
}

