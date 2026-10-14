/* backup_partitin @ 00402964 */

undefined4 backup_partitin(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar1 = (*(code *)PTR_strcmp_00415ebc)(param_1,&DAT_004055d0);
  if (iVar1 == 0) {
    iVar1 = FUN_0040164c(0x6000,0x8000,"hw2backup");
  }
  else {
    iVar1 = (*(code *)PTR_strcmp_00415ebc)(param_1,&DAT_004055e4);
    if (iVar1 == 0) {
      iVar1 = FUN_0040164c(0x8000,0xc000,"def2backup");
    }
    else {
      iVar1 = (*(code *)PTR_strcmp_00415ebc)(param_1,&DAT_004055ec);
      if (iVar1 == 0) {
        iVar1 = FUN_0040164c(0xc000,0x10000,"cur2backup");
      }
      else {
        iVar1 = (*(code *)PTR_strcmp_00415ebc)(param_1,&DAT_004055f4);
        if (iVar1 == 0) {
          iVar1 = FUN_00401ce8(0x6000,0x8000,"backup2hw");
        }
        else {
          iVar1 = (*(code *)PTR_strcmp_00415ebc)(param_1,&DAT_00405608);
          if (iVar1 == 0) {
            iVar1 = FUN_00401ce8(0x8000,0xc000,"backup2def");
          }
          else {
            iVar1 = (*(code *)PTR_strcmp_00415ebc)(param_1,&DAT_00405610);
            if (iVar1 == 0) {
              iVar1 = FUN_00401ce8(0xc000,0x10000,"backup2cur");
            }
            else {
              iVar1 = (*(code *)PTR_strcmp_00415ebc)(param_1,&DAT_00405618);
              if (iVar1 == 0) {
                iVar1 = FUN_00402384(&DAT_004054b0);
              }
              else {
                iVar1 = (*(code *)PTR_strcmp_00415ebc)(param_1,&DAT_0040561c);
                if (iVar1 == 0) {
                  iVar1 = FUN_00402384(&DAT_004054b4);
                }
                else {
                  iVar1 = (*(code *)PTR_strcmp_00415ebc)(param_1,&DAT_00405620);
                  if (iVar1 != 0) {
                    (*(code *)PTR_puts_00415f10)("Backup partition tools for backup MIB value. ");
                    (*(code *)PTR_puts_00415f10)
                              (
                              "phytrex_tools -bp: usage: phytrex_tools -bp [-h2b|-d2b|-c2b|-b2h|-b2d|-b2c]"
                              );
                    (*(code *)PTR_puts_00415f10)("          -h2b:Backup HW MIB value.");
                    (*(code *)PTR_puts_00415f10)("          -d2b:Backup Default MIB value.");
                    (*(code *)PTR_puts_00415f10)("          -c2b:Backup Current MIB value.");
                    (*(code *)PTR_puts_00415f10)
                              ("          -b2h:Restore HW MIB value from backup partition.");
                    (*(code *)PTR_puts_00415f10)
                              ("          -b2d:Restore Default MIB value from backup partition.");
                    (*(code *)PTR_puts_00415f10)
                              ("          -b2c:Restore Current MIB value from backup partition.");
                    return 1;
                  }
                  iVar1 = FUN_00402384(&DAT_004054b8);
                }
              }
            }
          }
        }
      }
    }
  }
  if (iVar1 != 0) {
    return 1;
  }
  uVar4 = *(undefined4 *)PTR_stderr_00415eb0;
  puVar2 = (undefined4 *)(*(code *)PTR___errno_location_00415ea4)();
  uVar3 = (*(code *)PTR_strerror_00415f24)(*puVar2);
  (*(code *)PTR_fprintf_00415ee8)(uVar4,&DAT_004057d8,param_1,uVar3);
  return 0;
}

