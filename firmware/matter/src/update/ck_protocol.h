#ifndef CK_PROTOCOL_H
#define CK_PROTOCOL_H
#include "ck_common.h"
#include "ck_store.h"
#include "ck_matter_control.h"
#include <string.h>
#define CK_PROTOCOL_KEY "config/protocol"
#define CK_PROTOCOL_ACTIVE "/var/run/ck-protocol-active"
/* A missing preference is the existing Matter behavior. An unreadable or
 * malformed journal never silently selects a different hardware owner. */
static int ck_protocol_valid(const char *p) {
  return !strcmp(p,"matter") || !strcmp(p,"homekit");
}
static const char *ck_protocol_selected(void) {
  char value[8] = {0}; size_t n = 7;
  int r = ck_store_try_get(CK_PROTOCOL_KEY,value,&n);
  if (r == 1) return "matter";
  if (!r && ((n == 6 && !memcmp(value,"matter",6)) ||
             (n == 7 && !memcmp(value,"homekit",7))))
    return n == 6 ? "matter" : "homekit";
  return "unavailable";
}
static const char *ck_protocol_active(void) {
  char value[8] = {0};
  if (!ck_exact_file(ck_path(CK_PROTOCOL_ACTIVE),value,6) && !memcmp(value,"matter",6)) return "matter";
  if (!ck_exact_file(ck_path(CK_PROTOCOL_ACTIVE),value,7) && !memcmp(value,"homekit",7)) return "homekit";
  return "unavailable";
}
#endif
