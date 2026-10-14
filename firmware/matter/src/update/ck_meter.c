#include "ck_meter.h"
#include "ck_common.h"
#include <stdio.h>
#include <string.h>

#define METER_PATH "/var/run/ck-meter.bin"
#define METER_SIZE 72
#define ENERGY_MAX (UINT64_C(1) << 62)

int ck_meter_publish(const struct ck_meter *s) {
  uint8_t b[METER_SIZE] = {0};
  if (ck_ram_storage())
    return -1;
  memcpy(b, "CKMETER1", 8);
  ck_put64(b + 8, s->published_ms);
  ck_put32(b + 16, s->flags);
  ck_put32(b + 20, s->voltage_mv);
  ck_put32(b + 24, s->current_ma);
  ck_put32(b + 28, s->power_mw);
  ck_put64(b + 32, s->energy_mwh);
  ck_put64(b + 40, s->voltage_ms);
  ck_put64(b + 48, s->current_ms);
  ck_put64(b + 56, s->power_ms);
  ck_put64(b + 64, s->relay_ms);
  return ck_atomic(ck_path(METER_PATH), b, sizeof(b), 0600);
}
static int fresh(uint64_t at, uint64_t published, uint64_t now, unsigned limit) {
  return at <= published && at <= now && now - at <= limit;
}
static void number(char *out, size_t size, int valid, uint64_t value, int quoted) {
  if (!valid)
    snprintf(out, size, "null");
  else
    snprintf(out, size, quoted ? "\"%llu\"" : "%llu",
             (unsigned long long)value);
}
int ck_meter_json(char *out, size_t capacity, uint64_t now) {
  uint8_t b[METER_SIZE] = {0};
  int available = 0;
  uint32_t flags = 0, voltage = 0, current = 0, power = 0;
  uint64_t published = 0, energy = 0;
  char v[24], i[24], p[24], e[24], age[24];
  const char *relay = "null";
  if (!ck_exact_file(ck_path(METER_PATH), b, sizeof(b)) &&
      !memcmp(b, "CKMETER1", 8)) {
    published = ck_be64(b + 8);
    flags = ck_be32(b + 16);
    available = !(flags & ~63u) && published <= now && now - published <= 5000;
    voltage = ck_be32(b + 20);
    current = ck_be32(b + 24);
    power = ck_be32(b + 28);
    energy = ck_be64(b + 32);
  }
  number(v, sizeof(v), available && (flags & CK_METER_VOLTAGE) &&
         voltage <= 300000 && fresh(ck_be64(b + 40), published, now, 15000), voltage, 0);
  number(i, sizeof(i), available && (flags & CK_METER_CURRENT) &&
         current <= 15000 && fresh(ck_be64(b + 48), published, now, 15000), current, 0);
  number(p, sizeof(p), available && (flags & CK_METER_POWER) &&
         power <= 2000000 && fresh(ck_be64(b + 56), published, now, 15000), power, 0);
  /* A decimal string preserves all 64-bit checkpoint digits in JavaScript. */
  number(e, sizeof(e), available && (flags & CK_METER_ENERGY) && energy <= ENERGY_MAX, energy, 1);
  number(age, sizeof(age), available, now - published, 0);
  if (available && (flags & CK_METER_RELAY) && fresh(ck_be64(b + 64), published, now, 10000))
    relay = flags & CK_METER_ON ? "true" : "false";
  int n = snprintf(out, capacity,
      "{\"available\":%s,\"sample_age_ms\":%s,\"relay_on\":%s,"
      "\"voltage_mv\":%s,\"current_ma\":%s,\"power_mw\":%s,"
      "\"energy_mwh\":%s,\"energy_estimated\":true,\"checkpoint_interval_s\":30}",
      available ? "true" : "false", age, relay, v, i, p, e);
  return n < 0 || (size_t)n >= capacity ? -1 : 0;
}
