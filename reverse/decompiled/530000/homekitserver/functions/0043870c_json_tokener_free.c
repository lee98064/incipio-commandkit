/* json_tokener_free @ 0043870c */

void json_tokener_free(int param_1)

{
  (*(code *)PTR_json_tokener_reset_00614b14)(param_1);
  if (*(int *)(param_1 + 4) != 0) {
    (*(code *)PTR_printbuf_free_00612794)(*(undefined4 *)(param_1 + 4));
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    (*(code *)PTR_free_0061286c)(*(undefined4 *)(param_1 + 0x28));
  }
  (*(code *)PTR_free_0061286c)(param_1);
  return;
}

