/* Get_Irms_value @ 00432a68 */

/* WARNING: Unknown calling convention */

float Get_Irms_value(void)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_20 [20];
  
  DAT_0061504c = 1;
  (*(code *)PTR_write_00612898)(DAT_0061505c,&DAT_005ffcd8,0xe);
  iVar1 = FUN_00432754(auStack_20,10,&DAT_005ffcd8,0xe);
  fVar3 = 0.0;
  if (0 < iVar1) {
    iVar1 = (*(code *)PTR_memchr_00611e1c)(auStack_20,0xff,iVar1);
    uVar2 = (*(code *)PTR___floatunsisf_00612818)(*(undefined1 *)(iVar1 + 2));
    uVar4 = (*(code *)PTR___extendsfdf2_00611f30)(uVar2);
    uVar2 = (*(code *)PTR___floatunsisf_00612818)(*(undefined1 *)(iVar1 + 1));
    uVar5 = (*(code *)PTR___extendsfdf2_00611f30)(uVar2);
    uVar5 = (*(code *)PTR___muldf3_00612854)
                      ((int)((ulonglong)uVar5 >> 0x20),(int)uVar5,DAT_005ad988,DAT_005ad98c);
    uVar4 = (*(code *)PTR___adddf3_006127b4)
                      ((int)((ulonglong)uVar4 >> 0x20),(int)uVar4,(int)((ulonglong)uVar5 >> 0x20),
                       (int)uVar5);
    uVar4 = (*(code *)PTR___adddf3_006127b4)((int)((ulonglong)uVar4 >> 0x20),(int)uVar4,0,0);
    fVar3 = (float)(*(code *)PTR___truncdfsf2_00613a98)((int)((ulonglong)uVar4 >> 0x20),(int)uVar4);
    uVar2 = *(undefined4 *)PTR_stdout_00612c98;
    uVar4 = (*(code *)PTR___extendsfdf2_00611f30)(fVar3);
    (*(code *)PTR_fprintf_006120cc)
              (uVar2,"Irms value = %f\n",(int)((ulonglong)uVar4 >> 0x20),(int)uVar4);
  }
  DAT_0061504c = 0;
  return fVar3;
}

