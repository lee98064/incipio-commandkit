#ifndef CK_METER_H
#define CK_METER_H
#include <stddef.h>
#include <stdint.h>
#ifdef __cplusplus
extern "C" {
#endif
enum {
  CK_METER_VOLTAGE = 1, CK_METER_CURRENT = 2, CK_METER_POWER = 4,
  CK_METER_ENERGY = 8, CK_METER_RELAY = 16, CK_METER_ON = 32
};
/* RAM-only snapshot published by the existing Matter/MCU owner. Integer units
 * match Matter; energy is the last successfully saved checkpoint. */
struct ck_meter {
  uint64_t published_ms, energy_mwh;
  uint64_t voltage_ms, current_ms, power_ms, relay_ms;
  uint32_t flags, voltage_mv, current_ma, power_mw;
};
int ck_meter_publish(const struct ck_meter *sample);
int ck_meter_json(char *out, size_t capacity, uint64_t now_ms);
#ifdef __cplusplus
}
#endif
#endif
