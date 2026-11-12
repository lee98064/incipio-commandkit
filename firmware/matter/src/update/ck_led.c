#define _GNU_SOURCE
#include "ck_led.h"
#include "ck_store.h"
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <unistd.h>
#include <ctype.h>
#include <stdlib.h>
#include <errno.h>
const char *ck_led_mode(int m) { static const char *names[]={"smart","relay","inverse","load","on","off"};return m>=0 && m<6?names[m]:"smart"; }
const char *ck_led_reason(int m) { static const char *names[]={"normal","night","pairing","joining","setup","error","identify"};return m>=0 && m<7?names[m]:"error"; }
uint64_t ck_led_now(void) { struct timespec t;if(clock_gettime(CLOCK_MONOTONIC,&t))return 0;return (uint64_t)t.tv_sec*1000+t.tv_nsec/1000000; }
void ck_led_default(struct ck_led_config *c) { memset(c,0,sizeof(*c));c->start=1380;c->end=420;c->offset=480;strcpy(c->ntp,"pool.ntp.org"); }
int ck_led_parse(const char *s,struct ck_led_config *c) {
  char mode[16],host[128],numbers[4][24];int used=0;struct ck_led_config v;
  if(strlen(s)>220 || strncmp(s,"CKLED1 ",7) || sscanf(s,"CKLED1 %15s %23s %23s %23s %23s %127s%n",mode,numbers[0],numbers[1],numbers[2],numbers[3],host,&used)!=6)return -1;
  int *fields[]={&v.schedule,&v.start,&v.end,&v.offset};
  for(unsigned j=0;j<4;j++) {
    char *end;errno=0;long n=strtol(numbers[j],&end,10);
    if(errno || *end || n < -720 || n > 1440)return -1;
    *fields[j]=(int)n;
  }
  if(s[used]=='\n')used++;
  if(s[used])return -1;
  for(v.mode=0;v.mode<6 && strcmp(mode,ck_led_mode(v.mode));v.mode++);
  if(v.mode==6 || v.schedule<0 || v.schedule>1 || v.start<0 || v.start>=1440 || v.end<0 || v.end>=1440 || v.start==v.end || v.offset < -720 || v.offset>840 || v.offset%15)return -1;
  size_t n=strlen(host);if(!n || host[0]=='-' || host[n-1]=='-' || host[0]=='.' || host[n-1]=='.')return -1;
  for(size_t i=0;i<n;i++)if(!isalnum((unsigned char)host[i]) && host[i]!='.' && host[i]!='-')return -1;
  memset(v.ntp,0,sizeof(v.ntp));memcpy(v.ntp,host,n);*c=v;return 0;
}
int ck_led_load_config(struct ck_led_config *c) {
  char text[224]={0};size_t n=sizeof(text)-1;int r=ck_store_try_get(CK_LED_KEY,text,&n);
  ck_led_default(c);if(r==1)return 0;if(r || memchr(text,0,n) || ck_led_parse(text,c))return -1;return 0;
}
int ck_led_save_config(const char *text) {
  struct ck_led_config c;char canonical[224],old[224];size_t n=sizeof(old);
  if(ck_led_parse(text,&c))return -2;
  int len=snprintf(canonical,sizeof(canonical),"CKLED1 %s %d %d %d %d %s\n",ck_led_mode(c.mode),c.schedule,c.start,c.end,c.offset,c.ntp);
  int r=ck_store_try_get(CK_LED_KEY,old,&n);
  if(!r && n==(size_t)len && !memcmp(old,canonical,n))return 0;
  return ck_store_set(CK_LED_KEY,canonical,(size_t)len);
}
struct ck_led_output ck_led_evaluate(const struct ck_led_config *c,const struct ck_led_input *i) {
  struct ck_led_output o={0,CK_LED_NORMAL,0};uint64_t t=i->now_ms;int hints=c->mode==CK_LED_SMART || c->mode==CK_LED_OFF;
  if(c->schedule && i->time_valid) {
    int minute=(int)((i->utc_s/60)%1440)+c->offset;minute=(minute+1440)%1440;
    o.night=c->start<c->end?(minute>=c->start && minute<c->end):(minute>=c->start || minute<c->end);
  }
  if(i->identify){o.reason=CK_LED_IDENTIFY;o.on=(t%500)<250;}
  else if(hints && i->error){o.reason=CK_LED_ERROR;o.on=t%3000<500 && (t%200)<100;}
  else if(hints && i->setup){o.reason=CK_LED_SETUP;o.on=t%1000<500;}
  else if(hints && i->joining){o.reason=CK_LED_JOINING;o.on=t%2000<100;}
  else if(hints && i->pairing){o.reason=CK_LED_PAIRING;o.on=t%2000<300 && t%200<100;}
  else if(o.night)o.reason=CK_LED_NIGHT;
  else switch(c->mode) {
    case CK_LED_SMART:case CK_LED_RELAY:o.on=i->known && i->on;break;
    case CK_LED_INVERSE:o.on=i->known && !i->on;break;
    case CK_LED_LOAD:o.on=i->known && i->on && i->load && t%1000<500;break;
    case CK_LED_ON:o.on=1;break;
    default:break;
  }
  return o;
}
int ck_led_hw_publish(const char *protocol,uint64_t now,uint64_t relay,uint64_t power,uint64_t identify,uint32_t mw,uint32_t flags,uint32_t sequence) {
  uint8_t b[CK_LED_HW_SIZE]={0};char path[80];
  if(strcmp(protocol,"matter") && strcmp(protocol,"homekit"))return -1;
  memcpy(b,"CKLEDHW1",8);ck_put64(b+8,now);ck_put64(b+16,relay);ck_put64(b+24,power);ck_put64(b+32,identify);ck_put32(b+40,mw);ck_put32(b+44,flags);ck_put32(b+48,sequence);
  snprintf(path,sizeof(path),"/var/run/ck-led-%s.bin",protocol);return ck_atomic(ck_path(path),b,sizeof(b),0600);
}
int ck_led_set_time(uint64_t utc,int network) {
  uint8_t b[32]={0};if(utc<1577836800ULL || utc>4102444799ULL)return -2;
  memcpy(b,"CKLEDT1\n",8);ck_put64(b+8,ck_led_now());ck_put64(b+16,utc);ck_put32(b+24,network?1:2);
  return ck_atomic(ck_path(CK_LED_CLOCK),b,sizeof(b),0600);
}
int ck_led_find(void) { uint8_t b[8];ck_put64(b,ck_led_now()+15000);return ck_atomic(ck_path(CK_LED_FIND),b,sizeof(b),0600); }
int ck_led_status(char *out,size_t size) {
  struct ck_led_config c;if(ck_led_load_config(&c))return -1;
  uint8_t b[32];uint64_t now=ck_led_now();int live=0,on=0,reason=CK_LED_NORMAL,valid=0,night=0,source=0;uint64_t utc=0;
  if(!ck_exact_file(ck_path(CK_LED_STATE),b,sizeof(b)) && !memcmp(b,"CKLEDS1\n",8) && ck_be64(b+8)<=now && now-ck_be64(b+8)<=3000) {
    live=1;on=b[16];reason=b[17];valid=b[18];night=b[19];source=b[20];utc=ck_be64(b+24);
  }
  int n=snprintf(out,size,"{\"mode\":\"%s\",\"schedule\":%s,\"start\":%d,\"end\":%d,\"utc_offset\":%d,\"ntp\":\"%s\",\"service_ready\":%s,\"on\":%s,\"reason\":\"%s\",\"time_valid\":%s,\"night\":%s,\"time_source\":\"%s\",\"utc_s\":%llu}",ck_led_mode(c.mode),c.schedule?"true":"false",c.start,c.end,c.offset,c.ntp,live?"true":"false",on?"true":"false",ck_led_reason(reason),valid?"true":"false",night?"true":"false",source==1?"ntp":source==2?"phone":"none",(unsigned long long)utc);
  return n<0 || (size_t)n>=size?-1:0;
}
