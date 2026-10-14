/* MFiSAP_Decrypt @ 0040d6bc */

undefined4 MFiSAP_Decrypt(char *param_1)

{
  undefined4 uVar1;
  
  if ((*param_1 != '\x04') && (*param_1 != '\x06')) {
    return 0xffffe5cb;
  }
                    /* WARNING: Could not recover jumptable at 0x0040d6ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)PTR_AES_CTR_Update_004332f0)(param_1 + 0x24);
  return uVar1;
}

