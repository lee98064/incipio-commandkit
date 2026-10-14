/* FUN_00430944 @ 00430944 */

void FUN_00430944(void)

{
  if (DAT_00615938 != 0) {
    (*(code *)PTR_SSL_shutdown_00612b40)();
  }
  if (0 < DAT_0061593c) {
    (*(code *)PTR_close_00613604)();
    DAT_0061593c = -1;
  }
  if (DAT_00615938 != 0) {
    (*(code *)PTR_SSL_free_00613eb8)();
    DAT_00615938 = 0;
  }
  if (DAT_00615940 != 0) {
    (*(code *)PTR_SSL_CTX_free_00612534)();
    DAT_00615940 = 0;
  }
  return;
}

