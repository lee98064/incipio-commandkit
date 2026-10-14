/* http_ver_string @ 0040d310 */

char * http_ver_string(int param_1)

{
  if (param_1 == 1) {
    return "HTTP/0.9";
  }
  if (param_1 != 3) {
    return "HTTP/1.0";
  }
  return "HTTP/1.1";
}

