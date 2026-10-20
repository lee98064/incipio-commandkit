#include "ck_energy.h"
#include "ck_common.h"
#include <limits.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#define RECORD 64u
#define COUNT (2u*CK_ERASE_SIZE/RECORD)
#define ENERGY_MAX (UINT64_C(1)<<62)
#define DENOMINATOR 7200000u
static unsigned offset(unsigned i) {
    return CK_JOURNAL_OFFSET+(i/(CK_ERASE_SIZE/RECORD))*CK_SLOT_SIZE+
           CK_SLOT_SIZE-CK_ERASE_SIZE+(i%(CK_ERASE_SIZE/RECORD))*RECORD;
}
static int erased(const uint8_t *p,unsigned n) {
    while(n--) if(*p++!=255) return 0;
    return 1;
}
static int valid(const uint8_t *p) {
    uint8_t hash[32];
    if(memcmp(p,"CKENRG1\n",8) || memcmp(p+60,"CKOK",4) || !ck_be64(p+8) ||
       ck_be64(p+16)>ENERGY_MAX || ck_be32(p+24)>=DENOMINATOR) return 0;
    ck_sha256(p,28,hash);return ck_equal(hash,p+28,32);
}
static int scan(struct ck_flash *f,uint8_t pages[2*CK_ERASE_SIZE],int *latest) {
    *latest=-1;
    /* Never take space occupied by an older, oversized snapshot. */
    for(unsigned i=0;i<2;i++) {
        uint8_t header[64];
        if(ck_flash_read(f,CK_JOURNAL_OFFSET+i*CK_SLOT_SIZE,header,sizeof(header))) return -1;
        if(!memcmp(header,"CKSTORE1",8) && !memcmp(header+60,"CKOK",4) &&
           ck_be32(header+16)>CK_STORE_PAYLOAD_MAX) return -1;
        if(ck_flash_read(f,offset(i*(CK_ERASE_SIZE/RECORD)),pages+i*CK_ERASE_SIZE,CK_ERASE_SIZE)) return -1;
    }
    for(unsigned i=0;i<COUNT;i++) {
        const uint8_t *p=pages+i*RECORD;
        if(!valid(p)) continue;
        if(*latest>=0 && ck_be64(p+8)==ck_be64(pages+*latest*RECORD+8) &&
           !ck_equal(p,pages+*latest*RECORD,RECORD)) return -1;
        if(*latest<0 || ck_be64(p+8)>ck_be64(pages+*latest*RECORD+8)) *latest=(int)i;
    }
    if(*latest<0 && !erased(pages,2*CK_ERASE_SIZE)) {
        /* A complete initial zero body with an interrupted commit can retry
         * into the next erased record. Never reset an unknown/corrupt counter. */
        uint8_t first[RECORD];memcpy(first,pages,RECORD);memcpy(first+60,"CKOK",4);
        if(!valid(first) || ck_be64(first+8)!=1 || ck_be64(first+16) || ck_be32(first+24) ||
           !erased(pages+60,4) || !erased(pages+RECORD,sizeof(uint8_t)*2*CK_ERASE_SIZE-RECORD)) return -1;
    }
    return 0;
}
static int load_energy(uint64_t *mwh,uint32_t *remainder,int nonblocking) {
    int lock=nonblocking?ck_try_lock():ck_lock(),result=-1,latest;
    struct ck_flash f;uint8_t pages[2*CK_ERASE_SIZE];
    if(lock<0) return -1;
    if(ck_flash_open(&f,1,0)) goto done;
    if(scan(&f,pages,&latest)) goto closed;
    *mwh=latest<0?0:ck_be64(pages+latest*RECORD+16);
    *remainder=latest<0?0:ck_be32(pages+latest*RECORD+24);
    result=latest<0?1:0;
closed:close(f.fd);
done:ck_unlock(lock);return result;
}
int ck_energy_load(uint64_t *mwh,uint32_t *remainder) { return load_energy(mwh,remainder,0); }
int ck_energy_try_load(uint64_t *mwh,uint32_t *remainder) { return load_energy(mwh,remainder,1); }
static int save_energy(uint64_t mwh,uint32_t remainder,int reset) {
    if(mwh>ENERGY_MAX || remainder>=DENOMINATOR) return -1;
    int lock=ck_lock(),result=-1,latest;
    struct ck_flash f;uint8_t pages[2*CK_ERASE_SIZE],record[RECORD],verify[RECORD];
    if(lock<0) return -1;
    if(ck_flash_open(&f,1,1)) goto done;
    if(scan(&f,pages,&latest)) goto closed;
    uint64_t seq=latest<0?0:ck_be64(pages+latest*RECORD+8);
    if(seq==UINT64_MAX) goto closed;
    if(latest>=0) {
        uint64_t old=ck_be64(pages+latest*RECORD+16);uint32_t fraction=ck_be32(pages+latest*RECORD+24);
        if(!reset && (mwh<old || (mwh==old && remainder<fraction))) goto closed;
        if(mwh==old && remainder==fraction) {result=0;goto closed;}
    }
    unsigned next=latest<0?0:((unsigned)latest+1)%COUNT;
    for(unsigned tried=0;tried<COUNT;tried++,next=(next+1)%COUNT) {
        if(erased(pages+next*RECORD,RECORD)) break;
        if(next%(CK_ERASE_SIZE/RECORD)==0 &&
           (latest<0 || next/(CK_ERASE_SIZE/RECORD)!=(unsigned)latest/(CK_ERASE_SIZE/RECORD))) {
            if(ck_flash_erase(&f,offset(next),CK_ERASE_SIZE)) goto closed;
#ifdef CK_TESTING
            if(getenv("CK_FAIL_ENERGY") && !strcmp(getenv("CK_FAIL_ENERGY"),"after-erase")) goto closed;
#endif
            break;
        }
        if(tried==COUNT-1) goto closed;
    }
    memset(record,255,sizeof(record));memcpy(record,"CKENRG1\n",8);
    ck_put64(record+8,seq+1);ck_put64(record+16,mwh);ck_put32(record+24,remainder);
    ck_sha256(record,28,record+28);
    if(ck_flash_write(&f,offset(next),record,60) || ck_flash_sync(&f)) goto closed;
#ifdef CK_TESTING
    if(getenv("CK_FAIL_ENERGY") && !strcmp(getenv("CK_FAIL_ENERGY"),"before-commit")) goto closed;
#endif
    if(ck_flash_write(&f,offset(next)+60,"CKOK",4) || ck_flash_sync(&f) ||
       ck_flash_read(&f,offset(next),verify,sizeof(verify)) || !valid(verify) ||
       !ck_equal(record,verify,60)) goto closed;
    result=0;
closed:close(f.fd);
done:ck_unlock(lock);return result;
}
int ck_energy_save(uint64_t mwh,uint32_t remainder) { return save_energy(mwh,remainder,0); }
int ck_energy_reset(void) { return save_energy(0,0,1); }
