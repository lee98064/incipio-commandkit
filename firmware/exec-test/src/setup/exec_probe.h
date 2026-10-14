/* Fixed RAM paths; Linux MIPS o32 values verified against 2.6.30.9 headers. */
#define RAM_UPLOAD_MAX (2 * 1024 * 1024)
#define RAM_JAIL "/var/run/exec-test-jail"
#define RAM_PROGRAM RAM_JAIL "/probe"
#define RAM_RESULT "/var/log/test-cpp_lean.txt"
static int memfree_kb(void) {
  char b[2048];
  int n = read_file("/proc/meminfo", b, sizeof(b) - 1);
  if (n <= 0)
    return -1;
  b[n] = 0;
  for (int i = 0; i < n; i++)
    if ((i == 0 || b[i - 1] == '\n') && prefix(b + i, "MemFree:")) {
      char *p = b + i + 8;
      while (*p == ' ' || *p == '\t')
        p++;
      int v = 0;
      while (*p >= '0' && *p <= '9') {
        v = v * 10 + *p++ - '0';
        if (v > 1024 * 1024)
          return -1;
      }
      return v;
    }
  return -1;
}
static int ram_filesystem(void) {
  u32 s[32];
  zero(s, sizeof(s));
  if (S2(4099, P("/var"), P(s)) < 0)
    return 0;
  return s[0] == 0x858458f6 || s[0] == 0x01021994;
}
