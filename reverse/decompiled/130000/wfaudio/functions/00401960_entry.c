/* entry @ 00401960 */

void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_20 [16];
  undefined *local_10;
  undefined4 local_c;
  undefined1 *local_8;
  
  local_8 = auStack_20;
  local_10 = PTR__fini_00423168;
  local_c = param_1;
  (*(code *)PTR___uClibc_main_004231c0)
            (PTR_main_004231a4,param_2,&stack0x00000004,PTR__init_00423250);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

