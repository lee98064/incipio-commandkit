/* A purpose-specific SoftAP portal and authenticated LAN setup entry.
 * Reuse the proved freestanding MIPS syscall/crypto implementation. No
 * remote shell, arbitrary files, MCU, GPIO, or programmer access. */
#define diag_main unused_diag_main
#include "../matter_diag.c"
#undef diag_main
#include "portal-device-page.h"
#include "portal-scan-script.h"
static char kMatterManualCode[12];
#include "ram_probe.h"
static int ram_worker = -1, ram_time, received_body, content_len;
static int control_fd = -1, portal_fd = -1, dns_fd = -1, worker = -1,
           worker_time;
static int fixture, http_port = 80, dns_port = 53, action_time, join_time,
                    error_code;
static int control_port = 18081;
static const char *mode = "starting";
static char csrf[65], portal_ip[32] = "192.168.1.254", iface_name[16] = "br0";
static char host_allowed[48];
static u8 portal_addr[4];
static int scan_worker = -1, scan_running, scan_started, scan_finished, scan_error;
static int fixture_scan_error;
static char scan_json[16384];
static int scan_json_length;
static const char scan_file[] = "/var/run/ck-wifi-scan.json";
static void scan_tick(void) {
  int now = seconds(), status = 0;
  if (!scan_running) return;
  if (fixture) {
    if (now - scan_started < 1) return;
    const char *result = "{\"status\":\"ready\",\"networks\":[{\"ssid\":\"Lab Network\",\"security\":\"wpa2\",\"signal\":87,\"channel\":6},{\"ssid\":\"Guest Wi-Fi\",\"security\":\"open\",\"signal\":55,\"channel\":1}],\"skipped\":0}\n";
    scan_json_length = slen(result); copy(scan_json, result, scan_json_length + 1);
    scan_error = fixture_scan_error;
    scan_running = 0; scan_finished = now; return;
  }
  int done = S3(4007, scan_worker, P(&status), 1);
  if (done == scan_worker) {
    scan_worker = -1; scan_running = 0; scan_finished = now;
    scan_json_length = read_file(scan_file, scan_json, sizeof(scan_json) - 1);
    if (status || scan_json_length <= 0 || scan_json_length >= (int)sizeof(scan_json)-1 ||
        !prefix(scan_json, "{\"status\":\"ready\",\"networks\":[") ||
        scan_json[scan_json_length-1] != '\n') scan_error = 1;
    else scan_json[scan_json_length] = 0;
    S1(4010, P(scan_file));
  } else if (now - scan_started >= 25) {
    S2(4037, scan_worker, 9); S3(4007, scan_worker, P(&status), 0);
    scan_worker = -1; scan_running = 0; scan_finished = now; scan_error = 1;
    S1(4010, P(scan_file));
  }
}
static void scan_start(void) {
  scan_running = 1; scan_error = 0; scan_json_length = 0; scan_started = seconds();
  if (fixture) return;
  scan_worker = S0(4002);
  if (scan_worker == 0) {
    for (int i = 3; i < 128; ++i) close_fd(i);
    int out = S3(4005, P(scan_file), 0x20301, 0600);
    if (out < 0) { S1(4001, 127); for (;;) {} }
    S2(4063, out, 1); close_fd(out);
    int null = S3(4005, P("/dev/null"), 2, 0);
    if (null >= 0) { S2(4063, null, 0); S2(4063, null, 2); close_fd(null); }
    int core[2] = {0, 0}, memory[2] = {2*1024*1024, 2*1024*1024};
    if (S2(4075, 4, P(core)) < 0 || S2(4075, 6, P(memory)) < 0) {
      S1(4001, 127); for (;;) {}
    }
    S1(4027, 22);
    char *args[] = {"/bin/ck-wifiscan", 0}, *env[] = {0};
    S3(4011, P(args[0]), P(args), P(env)); S1(4001, 127); for (;;) {}
  }
  if (scan_worker < 0) { scan_running = 0; scan_error = 1; scan_finished = seconds(); }
}
static void status_file(void) {
  int f = ram_open("/var/run/ck-setup-state");
  used = 0;
  append("state=");
  append(mode);
  append("\nerror=");
  number(error_code);
  append("\n");
  if (f >= 0) {
    write_all(f, report, (int)used);
    close_fd(f);
  }
}
static void state(const char *s) {
  mode = s;
  status_file();
}
static int socket_at(int type, int port, int any) {
  u8 a[16];
  int one = 1, f = S3(4183, 2, type, 0);
  if (f < 0)
    return f;
  zero(a, 16);
  a[1] = 2;
  a[2] = port >> 8;
  a[3] = port & 255;
  if (!any && !fixture)
    copy(a + 4, portal_addr, 4);
  if (!fixture &&
      S5(4181, f, 0xffff, 25, P(iface_name), slen(iface_name) + 1) < 0) {
    close_fd(f);
    return -1;
  }
  S5(4181, f, 0xffff, 4, P(&one), 4);
  if (S3(4169, f, P(a), 16) < 0 || (type == 2 && S2(4174, f, 3) < 0)) {
    close_fd(f);
    return -1;
  }
  return f;
}
static void close_portal(void) {
  close_fd(portal_fd);
  close_fd(dns_fd);
  portal_fd = dns_fd = -1;
}
static void start_worker(const char *op) {
  worker = S0(4002);
  worker_time = seconds();
  if (worker == 0) {
    char *a[] = {"/bin/ck-setup-backend", (char *)op, 0};
    char *env[] = {0};
    int f = S3(4005, P("/dev/null"), 2, 0);
    if (f >= 0) {
      S2(4063, f, 1);
      S2(4063, f, 2);
      close_fd(f);
    }
    close_fd(control_fd);
    close_portal();
    S3(4011, P(a[0]), P(a), P(env));
    S1(4001, 127);
    for (;;) {
    }
  }
  if (worker < 0) {
    error_code = 1;
    state("error");
  }
}
static void ap_begin(void) {
  close_portal();
  state("ap-starting");
  if (fixture) {
    state("setup");
    return;
  }
  start_worker("ap");
}
static void online(void) {
  close_portal();
  if (fixture) {
    state("online");
  } else {
    state("committing");
    start_worker("commit");
  }
}
static void tick(void) {
  int now = seconds(), st = 0;
  scan_tick();
  char lease[64];
  if (control_fd < 0)
    control_fd = socket_at(2, control_port, 1);
  if (ram_worker > 0) {
    int r = S3(4007, ram_worker, P(&st), 1);
    if (r == ram_worker) {
      ram_worker = -1;
      S1(4010, P(RAM_PROGRAM));
    } else if (now - ram_time > 45) {
      S2(4037, ram_worker, 9);
      S3(4007, ram_worker, P(&st), 0);
      ram_worker = -1;
      S1(4010, P(RAM_PROGRAM));
    }
  }
  if (worker > 0) {
    int r = S3(4007, worker, P(&st), 1);
    if (r == worker) {
      worker = -1;
      /* sysconf may replace br0. SO_BINDTODEVICE stores its old ifindex. */
      if (!equal(mode, "committing")) {
        close_fd(control_fd);
        control_fd = socket_at(2, control_port, 1);
      }
      if (st) {
        error_code = 2;
        if (equal(mode, "joining") || equal(mode, "reconnecting"))
          ap_begin();
        else
          state("error");
      } else if (equal(mode, "ap-starting"))
        state("setup");
      else if (equal(mode, "committing")) {
        state("online");
      }
    } else if (now - worker_time > 45) {
      S2(4037, worker, 9);
      S3(4007, worker, P(&st), 0);
      worker = -1;
      error_code = 3;
      if (equal(mode, "joining") || equal(mode, "reconnecting"))
        ap_begin();
      else
        state("error");
    }
  }
  if (equal(mode, "setup") && portal_fd < 0) {
    portal_fd = socket_at(2, http_port, 0);
    dns_fd = socket_at(1, dns_port, 0);
    if (portal_fd < 0 || dns_fd < 0) {
      close_portal();
      error_code = 4;
    }
  }
  if (action_time && now >= action_time) {
    action_time = 0;
    if (equal(mode, "ap-queued"))
      ap_begin();
    else if (equal(mode, "join-queued")) {
      close_portal();
      join_time = now;
      state("joining");
      if (fixture)
        online();
      else
        start_worker("join");
    }
  }
  if (!fixture && (equal(mode, "joining") || equal(mode, "reconnecting"))) {
    int n = read_file("/var/run/ck-wifi-bound", lease, 63);
    if (n > 0) {
      lease[n] = 0;
      if (prefix(lease, "bound "))
        online();
    } else if (now - join_time > 120) {
      error_code = 5;
      ap_begin();
    }
  }
  if (fixture && equal(mode, "joining"))
    online();
}
static int lower(int c) { return c >= 'A' && c <= 'Z' ? c + 32 : c; }
static char *header(const char *name) {
  char *p = request;
  int len = slen(name);
  while (*p && !prefix(p, "\r\n\r\n")) {
    if (p == request || prefix(p, "\r\n")) {
      if (p != request)
        p += 2;
      int i;
      for (i = 0; i < len && lower(p[i]) == lower(name[i]); i++) {
      }
      if (i == len && p[i] == ':') {
        p += i + 1;
        while (*p == ' ' || *p == '\t')
          p++;
        return p;
      }
    }
    p++;
  }
  return 0;
}
static int hvalue(const char *p, const char *v) {
  return p && prefix(p, v) && prefix(p + slen(v), "\r\n");
}
static int origin_ok(void) {
  char expected[64];
  copy(expected, "http://", 7); copy(expected + 7, host_allowed, slen(host_allowed) + 1);
  const char *value = header("Origin");
  /* Captive assistants and no-referrer navigations can serialize to null.
   * Every mutation additionally checks Host and the per-boot CSRF token.
   */
  return !value || hvalue(value, "null") || hvalue(value, expected);
}
static int form_type(void) {
  const char *p = header("Content-Type"), *media = "application/x-www-form-urlencoded";
  if (!p) return 0;
  for (; *media; ++media, ++p) if (lower(*p) != *media) return 0;
  while (*p == ' ' || *p == '\t') ++p;
  if (prefix(p, "\r\n")) return 1;
  if (*p++ != ';') return 0;
  while (*p == ' ' || *p == '\t') ++p;
  const char *parameter = "charset=";
  for (; *parameter; ++parameter, ++p) if (lower(*p) != *parameter) return 0;
  int quoted = *p == '"'; if (quoted) ++p;
  const char *charset = "utf-8";
  for (; *charset; ++charset, ++p) if (lower(*p) != *charset) return 0;
  if (quoted && *p++ != '"') return 0;
  while (*p == ' ' || *p == '\t') ++p;
  return prefix(p, "\r\n");
}
static void response_typed(int fd, const char *code, const char *body, int n,
                           const char *v) {
  char h[512], num[16];
  int i = 0, j = 0;
  const char *parts[] = {
      "HTTP/1.1 ",
      code,
      "\r\nConnection: close\r\nCache-Control: "
      "no-store\r\nX-Content-Type-Options: nosniff\r\nReferrer-Policy: "
      "same-origin\r\nContent-Security-Policy: default-src 'none'; style-src "
      "'unsafe-inline'; script-src 'self'; connect-src 'self'; img-src 'self'; "
      "base-uri 'none'; form-action 'self'; frame-ancestors "
      "'none'\r\nContent-Type: ",
      v,
      "\r\nContent-Length: ",
      0};
  for (j = 0; parts[j]; j++) {
    int z = slen(parts[j]);
    copy(h + i, parts[j], z);
    i += z;
  }
  j = 0;
  int x = n;
  do {
    num[j++] = (char)('0' + x % 10);
    x /= 10;
  } while (x);
  while (j)
    h[i++] = num[--j];
  copy(h + i, "\r\n\r\n", 4);
  i += 4;
  if (send_all(fd, h, i) == 0)
    send_all(fd, body, n);
}
static void response(int fd, const char *code, const char *body, int n, int html) {
  response_typed(fd, code, body, n, html ? "text/html; charset=utf-8" : "text/plain; charset=utf-8");
}
static void page(int fd) {
  used = 0;
  append(portal_before);
  append(csrf);
  append(portal_middle);
  append(kMatterManualCode);
  append(portal_after);
  response(fd, "200 OK", report, (int)used, 1);
}
static void redirect(int fd) {
  used = 0;
  append("HTTP/1.1 302 Found\r\nConnection: close\r\nCache-Control: "
         "no-store\r\nLocation: http://");
  append(host_allowed);
  append("/\r\nContent-Length: 0\r\n\r\n");
  send_all(fd, report, (int)used);
}
static int duplicate_header(const char *name) {
  char *p = request;
  int len = slen(name), count = 0;
  while (*p && !prefix(p, "\r\n\r\n")) {
    if (prefix(p, "\r\n")) {
      p += 2;
      int i;
      for (i = 0; i < len && lower(p[i]) == lower(name[i]); i++) {
      }
      if (i == len && p[i] == ':')
        count++;
    }
    p++;
  }
  return count > 1;
}
static int receive(int fd, int portal) {
  int n = 0, want = -1, base = 0, deadline = seconds() + 5;
  zero(request, sizeof(request));
  for (;;) {
    if (seconds() >= deadline)
      return -1;
    struct {
      int fd;
      short events, revents;
    } f = {fd, 1, 0};
    if (S3(4188, P(&f), 1, 500) <= 0)
      continue;
    int r = S4(4175, fd, P(request + n), sizeof(request) - 1 - n, 0);
    if (r <= 0)
      return -1;
    n += r;
    request[n] = 0;
    if (want < 0) {
      for (int i = 0; i + 4 <= n; i++)
        if (prefix(request + i, "\r\n\r\n")) {
          base = i + 4;
          want = 0;
          const char *unique[] = {"Content-Length",
                                  "Transfer-Encoding",
                                  "X-Setup-Proof",
                                  "X-Program-SHA256",
                                  "Host",
                                  "Origin",
                                  "Content-Type",
                                  0};
          for (int k = 0; unique[k]; k++)
            if (duplicate_header(unique[k]))
              return -1;
          char *p = header("Content-Length");
          if (p) {
            if (*p < '0' || *p > '9')
              return -1;
            for (; *p >= '0' && *p <= '9'; p++) {
              want = want * 10 + *p - '0';
              if (want > ((!portal && prefix(request, "POST /ram-probe HTTP/"))
                              ? RAM_UPLOAD_MAX
                              : 1024))
                return -1;
            }
            if (!prefix(p, "\r\n"))
              return -1;
          }
          if (header("Transfer-Encoding"))
            return -1;
          content_len = want;
          received_body = n - base;
          if (!portal && prefix(request, "POST /ram-probe HTTP/"))
            return received_body <= want ? base : -1;
          break;
        }
    }
    if (want >= 0 && n >= base + want)
      return n == base + want ? base : -1;
    if (n >= (int)sizeof(request) - 1)
      return -1;
  }
}
static int proof(const char *scope) {
  char message[256], expect[65];
  u8 mac[32];
  char *p = header("X-Setup-Proof");
  int d = 0, now = seconds();
  if (!nonce_valid || !p || slen(p) < 131 || now < nonce_time ||
      now - nonce_time > 10)
    return 0;
  int len = slen(scope);
  if (len > 180)
    return 0;
  copy(message, scope, len);
  copy(message + len, nonce, 64);
  hmac(key, 32, message, len + 64, mac);
  hex(mac, 32, expect);
  for (int i = 0; i < 64; i++) {
    d |= (u8)p[i] ^ (u8)nonce[i];
    d |= (u8)p[65 + i] ^ (u8)expect[i];
  }
  d |= p[64] ^ ':';
  d |= p[129] ^ '\r';
  d |= p[130] ^ '\n';
  zero(mac, 32);
  if (d)
    return 0;
  nonce_valid = 0;
  return 1;
}
static int make_jail(void) {
  const char *dirs[] = {RAM_JAIL, RAM_JAIL "/dev", 0};
  for (int i = 0; dirs[i]; i++) {
    int r = S2(4039, P(dirs[i]), 0755);
    if (r < 0 && r != -17)
      return -1;
    if (S2(4015, P(dirs[i]), 0755) < 0)
      return -1;
  }
  int r = S3(4014, P(RAM_JAIL "/dev/urandom"), 020444, 0x109);
  if (r < 0 && r != -17)
    return -1;
  /* The firmware starts with umask 077. Explicit modes are needed after
   * mknod, including on a jail created by an earlier probe. */
  if (S2(4015, P(RAM_JAIL "/dev/urandom"), 0444) < 0)
    return -1;
  r = S3(4014, P(RAM_JAIL "/dev/null"), 020666, 0x103);
  if (r < 0 && r != -17)
    return -1;
  return S2(4015, P(RAM_JAIL "/dev/null"), 0666) < 0 ? -1 : 0;
}
static void ram_upload(int fd, int base) {
  char digest[65], scope[180];
  char *p = header("X-Program-SHA256");
  u8 claimed[32], actual[32];
  if (!p || slen(p) < 66 || !prefix(p + 64, "\r\n") || unhex(p, claimed, 32) ||
      content_len < 52) {
    response(fd, "400 Bad Request", "Invalid program metadata\n", 25, 0);
    return;
  }
  copy(digest, p, 64);
  digest[64] = 0;
  used = 0;
  append("POST /ram-probe\n");
  number(content_len);
  append("\n");
  append(digest);
  append("\n");
  copy(scope, report, used + 1);
  if (!proof(scope)) {
    response(fd, "403 Forbidden", "Authentication required\n", 24, 0);
    return;
  }
  if (!equal(mode, "online") || worker > 0 || action_time || ram_worker > 0) {
    response(fd, "409 Conflict", "Online and idle required\n", 25, 0);
    return;
  }
  if (!ram_filesystem() || memfree_kb() < 10 * 1024 || make_jail()) {
    response(fd, "503 Unavailable", "RAM test unavailable\n", 21, 0);
    return;
  }
  S1(4010, P(RAM_PROGRAM));
  /* MIPS O_EXCL=0x400, O_NOFOLLOW=0x20000; never accept a caller path. */
  int out = S3(4005, P(RAM_PROGRAM), 0x20502, 0600);
  if (out < 0) {
    response(fd, "503 Unavailable", "RAM test unavailable\n", 21, 0);
    return;
  }
  Sha sha;
  sha_init(&sha);
  int done = received_body, good = 1, deadline = seconds() + 60,
      idle = seconds() + 5;
  if (done) {
    sha_add(&sha, request + base, done);
    good = write_all(out, request + base, done) == 0;
  }
  while (good && done < content_len) {
    if (seconds() >= deadline || seconds() >= idle) {
      good = 0;
      break;
    }
    struct {
      int fd;
      short events, revents;
    } f = {fd, 1, 0};
    if (S3(4188, P(&f), 1, 500) <= 0)
      continue;
    int want = content_len - done;
    if (want > (int)sizeof(scratch))
      want = sizeof(scratch);
    int n = S4(4175, fd, P(scratch), want, 0);
    if (n <= 0) {
      good = 0;
      break;
    }
    sha_add(&sha, scratch, n);
    good = write_all(out, scratch, n) == 0;
    done += n;
    idle = seconds() + 5;
  }
  sha_end(&sha, actual);
  close_fd(out);
  int diff = 0;
  for (int i = 0; i < 32; i++)
    diff |= actual[i] ^ claimed[i];
  out = open_ro(RAM_PROGRAM);
  good = good && !diff && out >= 0 && static_elf(out, content_len);
  close_fd(out);
  zero(actual, sizeof(actual));
  zero(claimed, sizeof(claimed));
  if (!good || S2(4015, P(RAM_PROGRAM), 0555) < 0) {
    S1(4010, P(RAM_PROGRAM));
    response(fd, "400 Bad Request", "Program rejected\n", 17, 0);
    return;
  }
  out = ram_open(RAM_RESULT);
  if (out >= 0) {
    write_all(out, "RAM probe pending\n", 18);
    close_fd(out);
  }
  ram_worker = S0(4002);
  ram_time = seconds();
  if (ram_worker == 0) {
    for (int i = 0; i < 128; i++)
      close_fd(i);
    int null = S3(4005, P("/dev/null"), 2, 0);
    if (null == 0) {
      S2(4063, null, 1);
      S2(4063, null, 2);
    }
    char *args[] = {"/bin/ck-ram-probe", "--run", 0}, *env[] = {0};
    S3(4011, P(args[0]), P(args), P(env));
    S1(4001, 127);
    for (;;) {
    }
  }
  if (ram_worker < 0) {
    S1(4010, P(RAM_PROGRAM));
    response(fd, "503 Unavailable", "RAM test unavailable\n", 21, 0);
    return;
  }
  response(fd, "202 Accepted", "RAM probe started\n", 18, 0);
}
static int decode(const char *s, int n, char *out, int cap) {
  int z = 0;
  for (int i = 0; i < n; i++) {
    int c = (u8)s[i];
    if (c == '+')
      c = ' ';
    else if (c == '%') {
      if (i + 2 >= n)
        return -1;
      char b[2] = {s[i + 1], s[i + 2]};
      u8 v;
      if (unhex(b, &v, 1))
        return -1;
      c = v;
      i += 2;
    }
    if (c < 32 || c == 127 || z >= cap - 1)
      return -1;
    out[z++] = (char)c;
  }
  out[z] = 0;
  return z;
}
static int submit(const char *body) {
  char values[4][129];
  int seen = 0, lens[4] = {0};
  zero(values, sizeof(values));
  while (*body) {
    const char *end = body;
    while (*end && *end != '&')
      end++;
    const char *eq = body;
    while (eq < end && *eq != '=')
      eq++;
    if (eq == end)
      return -1;
    int field = -1;
    const char *names[] = {"ssid", "password", "security", "token"};
    for (int k = 0; k < 4; k++)
      if (eq - body == slen(names[k]) && prefix(body, names[k]))
        field = k;
    if (field < 0 || (seen & (1 << field)))
      return -1;
    seen |= 1 << field;
    lens[field] = decode(eq + 1, (int)(end - eq - 1), values[field],
                         sizeof(values[field]));
    if (lens[field] < 0)
      return -1;
    body = *end ? end + 1 : end;
  }
  if (seen != 15 || lens[0] < 1 || lens[0] > 32 || !equal(values[3], csrf))
    return -1;
  int protected = equal(values[2], "wpa2");
  if (!protected && !equal(values[2], "open"))
    return -1;
  if (protected) {
    if (lens[1] < 8 || lens[1] > 64)
      return -1;
    for (int i = 0; i < lens[1]; i++)
      if ((u8)values[1][i] > 126)
        return -1;
    if (lens[1] == 64)
      for (int i = 0; i < 64; i++)
        if (!((values[1][i] >= '0' && values[1][i] <= '9') ||
              (lower(values[1][i]) >= 'a' && lower(values[1][i]) <= 'f')))
          return -1;
  } else if (lens[1])
    return -1;
  u8 blob[104];
  zero(blob, sizeof(blob));
  copy(blob, "CKW1", 4);
  blob[4] = lens[0];
  blob[5] = lens[1];
  blob[6] = protected;
  copy(blob + 8, values[0], lens[0]);
  copy(blob + 40, values[1], lens[1]);
  int fd = ram_open("/var/run/ck-setup-request.bin");
  int ok = fd >= 0 && write_all(fd, blob, sizeof(blob)) == 0;
  close_fd(fd);
  zero(blob, sizeof(blob));
  zero(values, sizeof(values));
  return ok ? 0 : -1;
}
static void handle_setup(int fd, int portal) {
  int base = receive(fd, portal);
  if (base < 0) {
    response(fd, "400 Bad Request", "Invalid request\n", 16, 0);
    return;
  }
  if (!portal) {
    if (prefix(request, "POST /ram-probe HTTP/")) {
      ram_upload(fd, base);
      return;
    }
    if (prefix(request, "GET /ram-result HTTP/") &&
        proof("GET /ram-result\n")) {
      int n = read_file(RAM_RESULT, scratch, sizeof(scratch));
      if (ram_worker > 0)
        response(fd, "202 Accepted", "Running\n", 8, 0);
      else if (n >= 0)
        response(fd, "200 OK", scratch, n, 0);
      else
        response(fd, "404 Not Found", "No RAM test result\n", 19, 0);
      return;
    }
    if (prefix(request, "GET /challenge HTTP/")) {
      u8 b[32];
      if (random_bytes(b, 32) != 32) {
        response(fd, "503 Unavailable", "Unavailable\n", 12, 0);
        return;
      }
      hex(b, 32, nonce);
      zero(b, 32);
      nonce_time = seconds();
      nonce_valid = 1;
      response(fd, "200 OK", nonce, 64, 0);
      return;
    }
    if (prefix(request, "GET /state HTTP/") && proof("GET /state\n")) {
      used = 0;
      append("state=");
      append(mode);
      append("\nerror=");
      number(error_code);
      append("\n");
      response(fd, "200 OK", report, (int)used, 0);
      return;
    }
    if (prefix(request, "POST /enter-setup HTTP/") && request[base] == 0 &&
        proof("POST /enter-setup\n")) {
      if (worker > 0 || ram_worker > 0 || equal(mode, "joining") ||
          action_time) {
        response(fd, "409 Conflict", "Busy\n", 5, 0);
        return;
      }
      if (equal(mode, "setup")) {
        response(fd, "200 OK", "Already in setup\n", 17, 0);
        return;
      }
      state("ap-queued");
      action_time = seconds() + 2;
      response(fd, "202 Accepted", "Setup requested\n", 16, 0);
      return;
    }
    response(fd, "403 Forbidden", "Authentication required\n", 24, 0);
    return;
  }
  if (!hvalue(header("Host"), host_allowed)) {
    if (prefix(request, "GET "))
      redirect(fd);
    else
      response(fd, "403 Forbidden", "Invalid host\n", 13, 0);
    return;
  }
  if (prefix(request, "GET /matter-qr HTTP/")) {
    int n = read_file("/var/run/matter-qr.svg", scratch, sizeof(scratch));
    if (n > 0) { /* Explicit image type with the same bounded transfer. */
      used = 0;
      append("HTTP/1.1 200 OK\r\nConnection: close\r\nCache-Control: "
             "no-store\r\nContent-Type: image/svg+xml\r\nContent-Length: ");
      number(n);
      append("\r\n\r\n");
      send_all(fd, report, (int)used);
      send_all(fd, scratch, n);
    } else
      response(fd, "404 Not Found", "Unavailable\n", 12, 0);
    return;
  }
  if (prefix(request, "GET /setup.js HTTP/")) {
    response_typed(fd, "200 OK", portal_scan_script, slen(portal_scan_script),
                   "application/javascript; charset=utf-8"); return;
  }
  if (prefix(request, "POST /wifi-scan HTTP/")) {
    const char *body = request + base;
    if (!origin_ok() || !form_type()) {
      response(fd, "403 Forbidden", "請重新開啟設定頁再試一次。", slen("請重新開啟設定頁再試一次。"), 0); return;
    }
    int len = slen(body), diff = 0;
    if (len != content_len || (len != 70 && len != 80) || !prefix(body, "token=") ||
        (len == 80 && !equal(body + 70, "&refresh=1"))) {
      response(fd, "400 Bad Request", "Invalid scan request\n", 21, 0); return;
    }
    for (int i = 0; i < 64; ++i) diff |= (u8)body[6+i] ^ (u8)csrf[i];
    if (diff) { response(fd, "403 Forbidden", "Expired setup page\n", 19, 0); return; }
    if (!equal(mode, "setup") || action_time || worker > 0) {
      response(fd, "409 Conflict", "Busy\n", 5, 0); return;
    }
    if (!scan_running && (len == 80 || !scan_finished || seconds()-scan_finished > 30)) scan_start();
    if (scan_running) {
      const char *body = "{\"status\":\"scanning\"}\n";
      response_typed(fd, "202 Accepted", body, slen(body), "application/json; charset=utf-8");
    } else if (scan_error) {
      const char *body = "{\"status\":\"error\",\"message\":\"掃描未完成，請重試或手動輸入網路名稱。\"}\n";
      response_typed(fd, "200 OK", body, slen(body), "application/json; charset=utf-8");
    } else response_typed(fd, "200 OK", scan_json, scan_json_length, "application/json; charset=utf-8");
    return;
  }
  if (prefix(request, "GET ")) {
    page(fd);
    return;
  }
  if (prefix(request, "POST /wifi HTTP/")) {
    if (!origin_ok() || !form_type()) {
      response(fd, "403 Forbidden", "請重新開啟設定頁再試一次。", slen("請重新開啟設定頁再試一次。"), 0);
      return;
    }
    if (action_time || worker > 0 || scan_running || !equal(mode, "setup")) {
      response(fd, "409 Conflict", "Busy\n", 5, 0);
      return;
    }
    if (slen(request + base) != content_len || submit(request + base)) {
      response(fd, "400 Bad Request", "請檢查網路名稱與密碼。",
               slen("請檢查網路名稱與密碼。"), 0);
      return;
    }
    const char *p =
        "<!doctype html><meta charset=utf-8><meta name=viewport "
        "content='width=device-width,initial-scale=1'><title>準備連線</"
        "title><main style='max-width:440px;margin:40px "
        "auto;padding:24px;font:18px/1.7 "
        "system-ui;color:#17352c'><h1>設定已送出。</h1><p>插座正在嘗試連上家中 "
        "Wi-Fi，設定熱點會暫時關閉。請讓手機切回同一個家中網路。</"
        "p><p>若設定熱點再次出現，表示尚未連線成功，請重新檢查網路名稱與密碼。<"
        "/p><p>先保存下方 Matter 配對碼。確認插座已啟動 Matter 後，再用 Apple "
        "家庭或 Home Assistant 加入。</p><img alt='Matter 配對碼' width=220 "
        "src='/matter-qr'><p>配對後由 Matter 控制插座開關。</p><p>設定碼：</p><code>";
    state("join-queued");
    action_time = seconds() + 3;
    used = 0; append(p); append(kMatterManualCode);
    append("</code><p>開發版配對資料只存在 RAM；斷電後需重新配對。</p></main>");
    response(fd, "202 Accepted", report, (int)used, 1);
    return;
  }
  response(fd, "404 Not Found", "Not found\n", 10, 0);
}
static void dns_packet(void) {
  u8 q[512] __attribute__((aligned(4))), a[544] __attribute__((aligned(4))),
      peer[16] __attribute__((aligned(4)));
  int plen = 16;
  int n = linux_call(4176, dns_fd, P(q), sizeof(q), 0, P(peer), P(&plen));
  if (n < 12 || q[2] & 0x80 || q[4] != 0 || q[5] != 1)
    return;
  int p = 12;
  while (p < n && q[p]) {
    int l = q[p++];
    if (l > 63 || p + l > n)
      return;
    p += l;
  }
  if (p + 5 > n)
    return;
  p++;
  int type = (q[p] << 8) | q[p + 1], cls = (q[p + 2] << 8) | q[p + 3];
  p += 4;
  if (cls != 1)
    return;
  copy(a, q, p);
  a[2] = 0x84 | (q[2] & 1);
  a[3] = 0;
  a[6] = 0;
  a[7] = type == 1 ? 1 : 0;
  a[8] = a[9] = a[10] = a[11] = 0;
  int z = p;
  if (type == 1) {
    u8 rr[16] __attribute__((aligned(4))) = {0xc0, 12, 0, 1, 0, 1, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0};
    copy(rr + 12, portal_addr, 4);
    copy(a + z, rr, 16);
    z += 16;
  }
  linux_call(4180, dns_fd, P(a), z, 0, P(peer), plen);
}
int diag_main(int argc, char **argv) {
  if (argc != 3 && argc != 6)
    return 2;
  fixture = argc == 6;
  if (fixture) fixture_scan_error = equal(argv[4], "scan-error");
  const char *keypath = fixture ? argv[5] : argv[2];
  if (!fixture && !equal(argv[1], "--serve"))
    return 2;
  if (fixture && !equal(argv[1], "--fixture"))
    return 2;
  if (fixture) {
    copy(portal_ip, "127.0.0.1", 10);
    http_port = 0;
    for (const char *p = argv[2]; *p >= '0' && *p <= '9'; p++)
      http_port = http_port * 10 + *p - '0';
    dns_port = http_port + 1;
    control_fd = -1;
  } else {
    if (slen(argv[1]) > 15)
      return 2; /* br0 is fixed for this firmware */
  }
  if (fixture) {
    portal_addr[0] = 127;
    portal_addr[1] = 0;
    portal_addr[2] = 0;
    portal_addr[3] = 1;
  } else {
    portal_addr[0] = 192;
    portal_addr[1] = 168;
    portal_addr[2] = 1;
    portal_addr[3] = 254;
  }
  copy(host_allowed, portal_ip, slen(portal_ip) + 1);
  if (http_port != 80) {
    used = 0;
    append(portal_ip);
    append(":");
    number(http_port);
    copy(host_allowed, report, used + 1);
  }
  if (read_file("/var/run/matter-manual-code", kMatterManualCode, sizeof(kMatterManualCode)) != 11)
    return 11;
  for (int i = 0; i < 11; ++i)
    if (kMatterManualCode[i] < '0' || kMatterManualCode[i] > '9') return 11;
  kMatterManualCode[11] = 0;
  char k[66];
  int n = read_file(keypath, k, sizeof(k));
  if ((n != 64 && n != 65) || unhex(k, key, 32))
    return 3;
  zero(k, sizeof(k));
  u8 b[32];
  if (random_bytes(b, 32) != 32 || selftest())
    return 4;
  hex(b, 32, csrf);
  zero(b, 32);
  if (fixture) {
    control_port = 0;
    for (const char *p = argv[3]; *p >= '0' && *p <= '9'; p++)
      control_port = control_port * 10 + *p - '0';
  }
  control_fd = socket_at(2, control_port, 1);
  if (control_fd < 0)
    return 5;
  if (fixture)
    state("setup");
  else {
    char configured[32];
    n = read_file("/var/run/ck-setup-boot", configured, 31);
    if (n > 0 && prefix(configured, "configured")) {
      join_time = seconds();
      state("reconnecting");
      start_worker("resume");
    } else
      ap_begin();
  }
  for (;;) {
    tick();
    struct {
      int fd;
      short events, revents;
    } f[3] = {{control_fd, 1, 0}, {portal_fd, 1, 0}, {dns_fd, 1, 0}};
    if (S3(4188, P(f), 3, 500) <= 0)
      continue;
    if (f[2].revents & 1)
      dns_packet();
    for (int i = 0; i < 2; i++)
      if (f[i].revents & 1) {
        int c = S3(4168, f[i].fd, 0, 0);
        if (c >= 0) {
          handle_setup(c, i == 1);
          close_fd(c);
        }
      }
  }
}
