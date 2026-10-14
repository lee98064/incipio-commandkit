/* lh_table_free @ 0043ef28 */

void lh_table_free(int param_1)

{
  undefined4 local_10;
  
  for (local_10 = *(int *)(param_1 + 0x20); local_10 != 0; local_10 = *(int *)(local_10 + 8)) {
    if (*(int *)(param_1 + 0x2c) != 0) {
      (**(code **)(param_1 + 0x2c))(local_10);
    }
  }
  (*(code *)PTR_free_006119dc)(*(undefined4 *)(param_1 + 0x28));
  (*(code *)PTR_free_006119dc)(param_1);
  return;
}

