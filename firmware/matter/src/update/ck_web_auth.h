#include "ck_admin.h"
/* Bounded RAM sessions; no password, bearer token or proof is logged. */
struct web_session { char token[65],csrf[65]; uint32_t ip; time_t until; };
struct web_challenge { char nonce[65];uint32_t ip;time_t until; };
static struct web_session web_sessions[4];
static struct web_challenge web_challenges[8];
static unsigned web_next_challenge,web_next_session;
static uint8_t web_credential[CK_ADMIN_BYTES];
static int web_credential_state=-1;
static int web_storage_ready;
struct web_limit { uint32_t ip;unsigned failures;time_t retry; };
static struct web_limit web_limits[8];
static time_t web_now(void) { struct timespec t;return clock_gettime(CLOCK_MONOTONIC,&t)?-1:t.tv_sec; }
static int web_random(char out[65]) {
  uint8_t b[32];int f=open("/dev/urandom",O_RDONLY|O_CLOEXEC);
  int r=f<0?-1:ck_read_all(f,b,sizeof(b));if(f>=0)close(f);
  if(!r)ck_hex(b,32,out);memset(b,0,sizeof(b));return r;
}
static int web_load(void) {
  uint8_t next[CK_ADMIN_BYTES]={0};int state=ck_admin_load(next);
  web_storage_ready=state>=0;
  if(state<0) return -1;
  if(state!=web_credential_state || memcmp(next,web_credential,sizeof(next))) {
    memset(web_sessions,0,sizeof(web_sessions));memset(web_challenges,0,sizeof(web_challenges));
    memcpy(web_credential,next,sizeof(next));web_credential_state=state;
  }
  const char *flag=state==0?"1":state==1?"0":"!";
  ck_atomic(ck_path("/var/run/ck-admin-state"),flag,1,0600);
  return state;
}
static struct web_session *web_session(const char *cookie,uint32_t ip) {
  if(web_load())return NULL;
  const char *p=cookie;char token[65]={0};unsigned found=0;
  while(*p) {
    while(*p==' ' || *p==';')p++;
    const char *end=strchr(p,';');if(!end)end=p+strlen(p);
    if(end-p>=7 && !memcmp(p,"ck_sid=",7)) {
      if(++found!=1 || end-p!=71)return NULL;
      memcpy(token,p+7,64);
    }
    p=end;
  }
  if(found!=1)return NULL;
  time_t now=web_now();if(now<0)return NULL;
  for(unsigned i=0;i<4;i++) {
    struct web_session *s=web_sessions+i;
    if(s->until>now && s->ip==ip && ck_equal(token,s->token,64))return s;
  }
  return NULL;
}
static int web_authorized(struct web_session *s,const char *csrf) {
  if(!s || strlen(csrf)!=64 || !ck_equal(csrf,s->csrf,64))return 0;
  s->until=web_now()+900;return 1;
}
static void web_challenge(int fd,uint32_t ip) {
  int r=web_load();if(r) { json(fd,r==1?409:503,r==1?"{\"error\":\"setup_required\"}":"{\"error\":\"storage\"}");return; }
  struct web_challenge *c=&web_challenges[web_next_challenge++%8];
  c->until=0;if(web_random(c->nonce)) { json(fd,503,"{}");return; }
  c->ip=ip;c->until=web_now()+120;
  char b[240],salt[33];ck_hex(web_credential+12,16,salt);
  snprintf(b,sizeof(b),"{\"nonce\":\"%s\",\"salt\":\"%s\",\"iterations\":%u}",c->nonce,salt,CK_ADMIN_ITERATIONS);
  json(fd,200,b);
}
static struct web_limit *web_limit(uint32_t ip) {
  struct web_limit *slot=&web_limits[ip%8];
  for(unsigned i=0;i<8;i++)if(web_limits[i].ip==ip)return web_limits+i;
  for(unsigned i=0;i<8;i++)if(!web_limits[i].ip){slot=web_limits+i;break;}
  memset(slot,0,sizeof(*slot));slot->ip=ip;return slot;
}
static void web_login(int fd,uint32_t ip,const char *proof) {
  int loaded=web_load();if(loaded) { json(fd,loaded<0?503:409,loaded<0?"{\"error\":\"storage\"}":"{\"error\":\"setup_required\"}");return; }
  struct web_limit *limit=web_limit(ip);time_t now=web_now();
  if(now<0 || limit->retry>now) { json(fd,429,"{\"error\":\"retry_later\"}");return; }
  struct web_challenge *challenge=NULL;
  if(strlen(proof)==129 && proof[64]==':')
    for(unsigned i=0;i<8;i++)if(web_challenges[i].ip==ip && web_challenges[i].until>now &&
       ck_equal(proof,web_challenges[i].nonce,64)){challenge=web_challenges+i;break;}
  int valid=0;
  if(challenge) {
    char message[96];uint8_t actual[32],given[32];
    int n=snprintf(message,sizeof(message),"ck-admin-login-v1\n%s",challenge->nonce);
    challenge->until=0;
    ck_hmac(web_credential+28,message,n,actual);
    valid=!ck_unhex(proof+65,32,given) && ck_equal(actual,given,32);
  }
  if(!valid) {
    if(limit->failures<8)limit->failures++;
    limit->retry=now+(limit->failures<3?0:1u<<(limit->failures>7?5:limit->failures-3));
    json(fd,403,"{\"error\":\"login\"}");return;
  }
  memset(limit,0,sizeof(*limit));
  struct web_session *s=&web_sessions[web_next_session++%4];memset(s,0,sizeof(*s));
  if(web_random(s->token) || web_random(s->csrf)){json(fd,503,"{}");return;}
  s->ip=ip;s->until=now+900;
  char b[128],h[512];int n=snprintf(b,sizeof(b),"{\"authenticated\":true,\"csrf\":\"%s\"}",s->csrf);
  int hn=snprintf(h,sizeof(h),"HTTP/1.1 200 OK\r\nContent-Type: application/json\r\nContent-Length: %d\r\nConnection: close\r\nCache-Control: no-store\r\nSet-Cookie: ck_sid=%s; HttpOnly; SameSite=Strict; Path=/; Max-Age=900\r\nX-Content-Type-Options: nosniff\r\n\r\n",n,s->token);
  sendall(fd,h,hn);sendall(fd,b,n);
}
