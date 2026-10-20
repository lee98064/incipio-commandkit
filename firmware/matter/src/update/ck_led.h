#ifndef CK_LED_H
#define CK_LED_H
#include "ck_common.h"
#ifdef __cplusplus
extern "C" {
#endif
#define CK_LED_KEY "config/led"
#define CK_LED_STATE "/var/run/ck-led-state"
#define CK_LED_CLOCK "/var/run/ck-led-clock"
#define CK_LED_FIND "/var/run/ck-led-find"
#define CK_LED_HW_SIZE 56
enum { CK_LED_SMART, CK_LED_RELAY, CK_LED_INVERSE, CK_LED_LOAD, CK_LED_ON, CK_LED_OFF };
enum { CK_LED_NORMAL, CK_LED_NIGHT, CK_LED_PAIRING, CK_LED_JOINING, CK_LED_SETUP, CK_LED_ERROR, CK_LED_IDENTIFY };
enum { CK_LED_KNOWN=1, CK_LED_RELAY_ON=2, CK_LED_POWER=4, CK_LED_PAIRED=8, CK_LED_READY=16 };
struct ck_led_config { int mode, schedule, start, end, offset; char ntp[128]; };
struct ck_led_input { int known,on,load,setup,joining,pairing,error,identify,time_valid; uint64_t utc_s,now_ms; };
struct ck_led_output { int on,reason,night; };
const char *ck_led_mode(int mode);
const char *ck_led_reason(int reason);
uint64_t ck_led_now(void);
void ck_led_default(struct ck_led_config *c);
int ck_led_parse(const char *text,struct ck_led_config *c);
int ck_led_load_config(struct ck_led_config *c);
int ck_led_save_config(const char *text);
struct ck_led_output ck_led_evaluate(const struct ck_led_config *c,const struct ck_led_input *in);
int ck_led_hw_publish(const char *protocol,uint64_t now,uint64_t relay_at,uint64_t power_at,uint64_t identify_until,uint32_t power_mw,uint32_t flags,uint32_t sequence);
int ck_led_status(char *out,size_t capacity);
int ck_led_find(void);
int ck_led_set_time(uint64_t utc_s,int network);
int ck_led_run(void);
int ck_led_ntp(const char *server);
#ifdef __cplusplus
}
#endif
#endif
