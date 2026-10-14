/* Fixed vendor WLAN site survey. No MIB, flash, GPIO or MCU writes.
 * ABI verified against this device's boa at 0x41fe80/0x420154/0x435b58.
 * The driver returns a 4-byte header followed by 64 records of 172 bytes.
 */
#define diag_main unused_diag_main
#include "../matter_diag.c"
#undef diag_main
#define SURVEY_SIZE (4 + 64 * 172)
static u8 survey[SURVEY_SIZE] __attribute__((aligned(4)));
struct network { char ssid[33]; int length, signal, channel, security; };
static struct network networks[64];
static void scan_pause(void) { int delay[2] = {1, 0}; S2(4166, P(delay), 0); }
static unsigned be16(const u8 *p) { return (unsigned)p[0] * 256 + p[1]; }
static u32 be32(const u8 *p) {
  return ((u32)p[0] << 24) | ((u32)p[1] << 16) | ((u32)p[2] << 8) | p[3];
}
static int utf8(const u8 *p, unsigned n) {
  for (unsigned i = 0; i < n;) {
    unsigned c = p[i++], more, v, minimum;
    if (c < 128) { if (c < 32 || c == 127) return 0; continue; }
    if (c >= 0xc2 && c <= 0xdf) { more = 1; v = c & 31; minimum = 128; }
    else if (c >= 0xe0 && c <= 0xef) { more = 2; v = c & 15; minimum = 2048; }
    else if (c >= 0xf0 && c <= 0xf4) { more = 3; v = c & 7; minimum = 65536; }
    else return 0;
    if (i + more > n) return 0;
    while (more--) {
      unsigned d = p[i++];
      if ((d & 0xc0) != 0x80) return 0;
      v = (v << 6) | (d & 63);
    }
    if (v < minimum || v > 0x10ffff || (v >= 0xd800 && v <= 0xdfff)) return 0;
  }
  return 1;
}
static void json_string(const char *p, unsigned n) {
  append("\"");
  for (unsigned i = 0; i < n; ++i) {
    if (p[i] == '\\' || p[i] == '"') append("\\");
    appendn(p + i, 1);
  }
  append("\"");
}
static int has_prefix(const char *value, const char *prefix) {
  for (unsigned i = 0; prefix[i]; ++i)
    if (value[i] != prefix[i]) return 0;
  return 1;
}
static int emit(unsigned size) {
  int count = 0, skipped = 0;
  if (size < 4 || survey[0] > 64 || size < 4 + (unsigned)survey[0] * 172) return -1;
  for (unsigned i = 0; i < survey[0]; ++i) {
    const u8 *row = survey + 4 + i * 172;
    unsigned len = be16(row + 44), cap = be16(row + 106), channel = row[108];
    if (!len || len > 32 || !utf8(row + 6, len) || channel < 1 || channel > 14 ||
        !(cap & 1) || (cap & 2)) { skipped++; continue; }
    struct network item;
    zero(&item, sizeof(item));
    copy(item.ssid, row + 6, len); item.length = len;
    if (has_prefix(item.ssid, "CommandKit-Setup-")) continue;
    item.channel = channel; item.signal = row[126] > 100 ? 100 : row[126];
    u32 security = be32(row + 96);
    /* WPA2 PSK=4, AES=4 or AES/TKIP=5, independently verified in boa.
     * Retain unsupported networks as disabled choices; never guess a cipher.
     */
    item.security = !(cap & 16) ? 0 :
      ((security >> 28) == 4 && (((security >> 24) & 15) == 4 ||
                                ((security >> 24) & 15) == 5)) ? 1 : 2;
    int duplicate = -1;
    for (int k = 0; k < count; ++k)
      if (item.security == networks[k].security && equal(item.ssid, networks[k].ssid)) duplicate = k;
    if (duplicate >= 0) {
      if (item.signal > networks[duplicate].signal) networks[duplicate] = item;
    } else networks[count++] = item;
  }
  for (int i = 1; i < count; ++i) {
    struct network item = networks[i]; int k = i;
    while (k && networks[k-1].signal < item.signal) { networks[k] = networks[k-1]; k--; }
    networks[k] = item;
  }
  used = 0; append("{\"status\":\"ready\",\"networks\":[");
  for (int i = 0; i < count; ++i) {
    struct network *item = networks + i;
    if (i) append(",");
    append("{\"ssid\":"); json_string(item->ssid, item->length);
    append(",\"security\":\"");
    append(item->security == 0 ? "open" : item->security == 1 ? "wpa2" : "unsupported");
    append("\",\"signal\":"); number(item->signal);
    append(",\"channel\":"); number(item->channel); append("}");
  }
  append("],\"skipped\":"); number(skipped); append("}\n");
  return write_all(1, report, (int)used);
}
static int wireless(int fd, unsigned command, void *buffer, unsigned size) {
  u8 req[32] __attribute__((aligned(4)));
  zero(req, sizeof(req)); copy(req, "wlan0", 6);
  u32 pointer = (u32)P(buffer); copy(req + 16, &pointer, 4);
  req[20] = size >> 8; req[21] = size;
  return S3(4054, fd, command, P(req));
}
int diag_main(int argc, char **argv) {
  if (argc == 3 && equal(argv[1], "--fixture")) {
    int fd = open_ro(argv[2]);
    if (fd < 0) return 2;
    int size = 0, n; u8 extra;
    while (size < SURVEY_SIZE && (n = read_fd(fd, survey + size, SURVEY_SIZE - size)) > 0) size += n;
    n = read_fd(fd, &extra, 1); close_fd(fd);
    return n != 0 || emit(size) < 0 ? 3 : 0;
  }
  if (argc != 1) return 2;
  int fd = S3(4183, 2, 1, 0);
  if (fd < 0) return 4;
  u8 req[32] __attribute__((aligned(4))); zero(req, sizeof(req)); copy(req, "wlan0", 6);
  if (S3(4054, fd, 0x8b01, P(req)) < 0) { close_fd(fd); return 4; }
  int deadline = seconds() + 18, accepted = 0;
  while (seconds() < deadline) {
    u8 status = 0xff;
    if (wireless(fd, 0x8b33, &status, 1) < 0) { close_fd(fd); return 4; }
    if (!status) { accepted = 1; break; }
    if (status == 0xff) { close_fd(fd); return 5; }
    scan_pause();
  }
  if (!accepted) { close_fd(fd); return 6; }
  while (seconds() < deadline) {
    u8 status = 1;
    if (wireless(fd, 0x8b34, &status, 1) < 0) { close_fd(fd); return 4; }
    if (status != 0xff) {
      zero(survey, sizeof(survey));
      int result = wireless(fd, 0x8b34, survey, sizeof(survey)); close_fd(fd);
      return result < 0 || emit(sizeof(survey)) < 0 ? 7 : 0;
    }
    scan_pause();
  }
  close_fd(fd); return 6;
}
