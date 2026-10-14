/* backup_partitin @ 004029e4 */

undefined4 backup_partitin(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar1 = (*(code *)PTR_strcmp_004162ac)(param_1,&DAT_004058b0);
  if (iVar1 == 0) {
    iVar1 = FUN_004016cc(0x6000,0x8000,"hw2backup");
  }
  else {
    iVar1 = (*(code *)PTR_strcmp_004162ac)(param_1,&DAT_004058c4);
    if (iVar1 == 0) {
      iVar1 = FUN_004016cc(0x8000,0xc000,"def2backup");
    }
    else {
      iVar1 = (*(code *)PTR_strcmp_004162ac)(param_1,&DAT_004058cc);
      if (iVar1 == 0) {
        iVar1 = FUN_004016cc(0xc000,0x10000,"cur2backup");
      }
      else {
        iVar1 = (*(code *)PTR_strcmp_004162ac)(param_1,&DAT_004058d4);
        if (iVar1 == 0) {
          iVar1 = FUN_00401d68(0x6000,0x8000,"backup2hw");
        }
        else {
          iVar1 = (*(code *)PTR_strcmp_004162ac)(param_1,&DAT_004058e8);
          if (iVar1 == 0) {
            iVar1 = FUN_00401d68(0x8000,0xc000,"backup2def");
          }
          else {
            iVar1 = (*(code *)PTR_strcmp_004162ac)(param_1,&DAT_004058f0);
            if (iVar1 == 0) {
              iVar1 = FUN_00401d68(0xc000,0x10000,"backup2cur");
            }
            else {
              iVar1 = (*(code *)PTR_strcmp_004162ac)(param_1,&DAT_004058f8);
              if (iVar1 == 0) {
                iVar1 = FUN_00402404(&DAT_00405790);
              }
              else {
                iVar1 = (*(code *)PTR_strcmp_004162ac)(param_1,&DAT_004058fc);
                if (iVar1 == 0) {
                  iVar1 = FUN_00402404(&DAT_00405794);
                }
                else {
                  iVar1 = (*(code *)PTR_strcmp_004162ac)(param_1,&DAT_00405900);
                  if (iVar1 != 0) {
                    (*(code *)PTR_puts_00416300)("Backup partition tools for backup MIB value. ");
                    (*(code *)PTR_puts_00416300)
                              (
                              "phytrex_tools -bp: usage: phytrex_tools -bp [-h2b|-d2b|-c2b|-b2h|-b2d|-b2c]"
                              );
                    (*(code *)PTR_puts_00416300)("          -h2b:Backup HW MIB value.");
                    (*(code *)PTR_puts_00416300)("          -d2b:Backup Default MIB value.");
                    (*(code *)PTR_puts_00416300)("          -c2b:Backup Current MIB value.");
                    (*(code *)PTR_puts_00416300)
                              ("          -b2h:Restore HW MIB value from backup partition.");
                    (*(code *)PTR_puts_00416300)
                              ("          -b2d:Restore Default MIB value from backup partition.");
                    (*(code *)PTR_puts_00416300)
                              ("          -b2c:Restore Current MIB value from backup partition.");
                    return 1;
                  }
                  iVar1 = FUN_00402404(&DAT_00405798);
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
  uVar4 = *(undefined4 *)PTR_stderr_004162a0;
  puVar2 = (undefined4 *)(*(code *)PTR___errno_location_00416294)();
  uVar3 = (*(code *)PTR_strerror_00416318)(*puVar2);
  (*(code *)PTR_fprintf_004162d8)(uVar4,&DAT_00405ab8,param_1,uVar3);
  return 0;
}

