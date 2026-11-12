#include "ck_admin.h"
#include "ck_energy.h"
static int fixed_job(const char *binary,const char *arg) {
  pid_t child=fork();if(child<0) return -1;
  if(!child) { execl(ck_path(binary),binary,arg,(char *)NULL);_exit(127); }
  int status;
  while(waitpid(child,&status,0)<0) if(errno!=EINTR) return -1;
  return WIFEXITED(status) && !WEXITSTATUS(status) ? 0 : -1;
}
/* Executed by the bounded boot job, before either protocol owns the MCU.
 * The durable intent remains until every reset and readback succeeds. */
static int hap_clear_pairing(void) {
  if(fixed_job("/bin/homekitserver","-c")) return -1;
  struct ck_flash f;uint8_t b[0xa5d];
  if(ck_flash_open(&f,2,0)) return -1;
  int r=ck_flash_read(&f,0,b,sizeof(b));close(f.fd);
  if(r || memcmp(b,"PHRX",4)) return -1;
  for(unsigned i=4;i<sizeof(b);i++) if(b[i]) return -1;
  return 0;
}
static int factory_finish(void) {
  int state=ck_factory_pending();if(state<0)return -1;
  if(!state) {
    uint8_t value;size_t n=1;int r=ck_store_get("control/homekit-reset",&value,&n);
    if(r==1)return 0;
    if(r || n!=1 || value!='1' || hap_clear_pairing())return -1;
    return ck_store_delete("control/homekit-reset");
  }
  if(hap_clear_pairing())return -1;
  if(fixed_job("/bin/ck-wificfg","unconfigure") || ck_energy_reset() || ck_store_factory_clear()) return -1;
  return 0;
}
static int admin_export_state(void) {
  uint8_t b[CK_ADMIN_BYTES];int r=ck_admin_load(b);memset(b,0,sizeof(b));
  const char *s=r==0?"1":r==1?"0":"!";
  return ck_atomic(ck_path("/var/run/ck-admin-state"),s,1,0600);
}
static int admin_enroll(void) {
  uint8_t record[CK_ADMIN_BYTES],existing[CK_ADMIN_BYTES];char setup[32];
  const char *request=ck_path("/var/run/ck-admin-enroll");
  FILE *f=fopen(ck_path("/var/run/ck-setup-state"),"r");
  int ready=f && fgets(setup,sizeof(setup),f) && !strcmp(setup,"state=setup\n");
  if(f) fclose(f);
  int r=-1;
  if(ready && ck_admin_load(existing)==1 && !ck_exact_file(request,record,sizeof(record)) && ck_admin_valid(record) &&
     !ck_store_set(CK_ADMIN_KEY,record,sizeof(record))) {
    r=admin_export_state();
    if(!r) r=ck_atomic(ck_path("/var/run/ck-admin-enroll-ok"),"1",1,0600);
  }
  unlink(request);memset(record,0,sizeof(record));memset(existing,0,sizeof(existing));return r;
}
