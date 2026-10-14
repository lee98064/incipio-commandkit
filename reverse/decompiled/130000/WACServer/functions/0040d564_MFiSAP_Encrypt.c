/* MFiSAP_Encrypt @ 0040d564 */

undefined4 MFiSAP_Encrypt(char *param_1)

{
  undefined4 uVar1;
  
  if ((*param_1 != '\x04') && (*param_1 != '\x06')) {
    return 0xffffe5cb;
  }
                    /* WARNING: Could not recover jumptable at 0x0040d594. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)PTR_AES_CTR_Update_004332f0)(param_1 + 0x24);
  return uVar1;
}

