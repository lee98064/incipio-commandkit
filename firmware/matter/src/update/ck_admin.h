#ifndef CK_ADMIN_H
#define CK_ADMIN_H
#include "ck_common.h"
#include "ck_store.h"
#include <string.h>
#include <unistd.h>
#define CK_ADMIN_KEY "admin/credential"
#define CK_ADMIN_BYTES 60
#define CK_ADMIN_ITERATIONS 600000u
#define CK_FACTORY_PENDING "control/factory-reset"
static int ck_admin_valid(const uint8_t b[CK_ADMIN_BYTES]) {
  return !memcmp(b,"CKAUTH1\n",8) && ck_be32(b+8)==CK_ADMIN_ITERATIONS;
}
/* 0 configured, 1 unclaimed, -1 storage/format failure. */
static int ck_admin_load(uint8_t b[CK_ADMIN_BYTES]) {
  size_t n=CK_ADMIN_BYTES;int r=ck_store_try_get(CK_ADMIN_KEY,b,&n);
  return r==1 ? 1 : !r && n==CK_ADMIN_BYTES && ck_admin_valid(b) ? 0 : -1;
}
static int ck_factory_pending(void) {
  uint8_t b[8];size_t n=sizeof(b);int r=ck_store_get(CK_FACTORY_PENDING,b,&n);
  return r==1 ? 0 : !r && n==8 && !memcmp(b,"CKRESET1",8) ? 1 : -1;
}
static int ck_factory_request(void) {
  int r=ck_atomic(ck_path("/var/run/ck-factory-pending"),"1",1,0600);
  if(!r) r=ck_store_set(CK_FACTORY_PENDING,"CKRESET1",8);
  if(r) unlink(ck_path("/var/run/ck-factory-pending"));
  return r;
}
#endif
