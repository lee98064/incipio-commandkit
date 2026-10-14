/* json_tokener_free @ 0043793c */

void json_tokener_free(int param_1)

{
  (*(code *)PTR_json_tokener_reset_00613c6c)(param_1);
  if (*(int *)(param_1 + 4) != 0) {
    (*(code *)PTR_printbuf_free_00611904)(*(undefined4 *)(param_1 + 4));
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    (*(code *)PTR_free_006119dc)(*(undefined4 *)(param_1 + 0x28));
  }
  (*(code *)PTR_free_006119dc)(param_1);
  return;
}

