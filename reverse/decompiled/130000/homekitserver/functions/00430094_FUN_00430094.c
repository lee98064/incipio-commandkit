/* FUN_00430094 @ 00430094 */

void FUN_00430094(void)

{
  if (DAT_00614a88 != 0) {
    (*(code *)PTR_SSL_shutdown_00611cb0)();
  }
  if (0 < DAT_00614a8c) {
    (*(code *)PTR_close_0061276c)();
    DAT_00614a8c = -1;
  }
  if (DAT_00614a88 != 0) {
    (*(code *)PTR_SSL_free_00613020)();
    DAT_00614a88 = 0;
  }
  if (DAT_00614a90 != 0) {
    (*(code *)PTR_SSL_CTX_free_006116a4)();
    DAT_00614a90 = 0;
  }
  return;
}

