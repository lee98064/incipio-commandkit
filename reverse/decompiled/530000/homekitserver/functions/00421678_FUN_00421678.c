/* FUN_00421678 @ 00421678 */

char * FUN_00421678(int param_1)

{
  if (param_1 != 200) {
    if (param_1 == 400) {
      return "Bad Request";
    }
    if (param_1 == 0x193) {
      return "Forbidden";
    }
    if (param_1 == 500) {
      return "Internal Server Error";
    }
    if (param_1 == 0xcf) {
      return "Multi-Status";
    }
    if (param_1 == 0x1ad) {
      return "Too Many Requests";
    }
    if (param_1 == 0xcc) {
      return "No Content";
    }
  }
  return "OK";
}

