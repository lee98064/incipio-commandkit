/* Fixed RAM paths; Linux MIPS o32 values verified against 2.6.30.9 headers. */
#define RAM_UPLOAD_MAX (2 * 1024 * 1024)
#define RAM_JAIL "/var/run/ck-ram-jail"
#define RAM_PROGRAM RAM_JAIL "/probe"
#define RAM_RESULT "/var/log/ck-ram-probe.txt"
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
static u32 be32(const volatile u8 *p) {
  return ((u32)p[0] << 24) | ((u32)p[1] << 16) | ((u32)p[2] << 8) | p[3];
}
static int file_at(int fd, u32 at, void *p, int n) {
  return S3(4019, fd, at, 0) == (int)at && read_fd(fd, p, n) == n;
}
static int static_elf(int fd, int size) {
  u8 h[52], ph[32];
  if (size < 52 || size > RAM_UPLOAD_MAX || !file_at(fd, 0, h, 52) ||
      h[0] != 127 || !prefix((char *)h + 1, "ELF") || h[4] != 1 || h[5] != 2 ||
      h[6] != 1 || h[16] != 0 || h[17] != 2 || h[18] != 0 || h[19] != 8 ||
      be32(h + 20) != 1 || h[40] != 0 || h[41] != 52 || h[42] != 0 ||
      h[43] != 32)
    return 0;
  u32 flags = be32(h + 36), start = be32(h + 24), off = be32(h + 28);
  int count = ((int)h[44] << 8) | h[45], entry_ok = 0, loads = 0;
  u32 total = 0, last_end = 0;
  /* MIPS-I, o32 (or legacy unspecified ABI); reject ABI2/64-bit options. */
  if ((flags & 0xf0000020) || (flags & 0xf000) > 0x1000 || count < 1 ||
      count > 32 || off < 52 || off > (u32)size ||
      (u32)count * 32 > (u32)size - off)
    return 0;
  for (int i = 0; i < count; i++) {
    if (!file_at(fd, off + i * 32, ph, 32))
      return 0;
    u32 type = be32(ph), pos = be32(ph + 4), addr = be32(ph + 8),
        files = be32(ph + 16), mem = be32(ph + 20), prot = be32(ph + 24),
        align = be32(ph + 28);
    if (type == 2 || type == 3 || type == 7) /* DYNAMIC, INTERP, TLS */
      return 0;
    if (type == 0x6474e551 && (prot & 1)) /* executable stack */
      return 0;
    if (type != 1)
      continue;
    if (!mem || files > mem || pos > (u32)size || files > (u32)size - pos ||
        addr < 0x00400000 || addr >= 0x10000000 || mem > 4 * 1024 * 1024 ||
        addr + mem > 0x10000000 || addr < last_end || (prot & 3) == 3 ||
        (prot & ~7) ||
        (align > 1 && ((align & (align - 1)) || ((addr - pos) & (align - 1)))))
      return 0;
    total += mem;
    if (total > 4 * 1024 * 1024)
      return 0;
    last_end = addr + mem;
    loads++;
    if ((prot & 5) == 5 && start >= addr && start - addr < files)
      entry_ok = 1;
  }
  return loads > 0 && entry_ok;
}
