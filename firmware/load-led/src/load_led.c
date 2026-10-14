/* Incipio 10219 load LED experiment, not a replacement firmware.
 * Freestanding MIPS-I BE/o32/soft-float; exact vendor addresses are hash-bound.
 * The original meter worker owns UART. This code never opens UART or controls
 * the relay. LED writes use the existing Identify_LEDSetup function only.
 */
typedef unsigned int u32;
typedef int (*led_fn)(unsigned char);
typedef int (*sleep_fn)(u32);
typedef int (*create_fn)(u32 *, const void *, void *(*)(void *), void *);

#define VENDOR_METER_INIT ((void (*)(void))0x00432b94u)
#define VENDOR_POLL ((void (*)(void))0x004345d4u)
#define VENDOR_LED ((led_fn)0x00432d24u)
#define CACHED_POWER (*(volatile u32 *)0x00615f10u)
#define CACHED_RELAY (*(volatile u32 *)0x00615f14u)
/* These bridges establish the application's GP before both already-resolved
 * and unresolved GOT calls. The original MIPS lazy stubs require that GP.
 */
extern int load_led_pthread_create_bridge(u32 *, const void *, void *(*)(void *), void *);
extern int load_led_usleep_bridge(u32);
#define CREATE_THREAD load_led_pthread_create_bridge
#define SLEEP_US load_led_usleep_bridge

/* IEEE754 unsigned ordering is valid only for finite, nonnegative values.
 * 5.0=0x40a00000; 2.0=0x40000000; vendor limit 2000.0=0x44fa0000.
 * Avoid emitting FPU instructions or introducing soft-float library imports.
 */
#define ON_BITS 0x40a00000u
#define OFF_BITS 0x40000000u
#define MAX_BITS 0x44fa0000u

struct led_state {
    u32 sequence, active, high_count, low_count;
    u32 started, thread_id, last_power, last_relay;
    u32 seen_sequence, stale_ticks, phase, was_active;
};
volatile struct led_state load_led_state;
const char load_led_build_id[] = "INCIPIO_LOAD_LED_V2_BANK1_10219_GP_BRIDGE";

/* Called after a complete stock poll, approximately every five seconds.
 * Two consecutive qualifying polls enter/leave load mode. Dead-band values
 * hold the current mode and break the consecutive-poll count.
 */
__attribute__((noinline)) void load_led_sample(void)
{
    u32 power=CACHED_POWER, relay=CACHED_RELAY;
    load_led_state.last_power=power;
    load_led_state.last_relay=relay;
    if (relay != 1u) {
        load_led_state.active=0;
        load_led_state.high_count=0;
        load_led_state.low_count=0;
    } else if (power >= ON_BITS && power <= MAX_BITS) {
        load_led_state.low_count=0;
        if (load_led_state.high_count < 2u) load_led_state.high_count++;
        if (load_led_state.high_count >= 2u) load_led_state.active=1;
    } else if (power <= OFF_BITS || power > MAX_BITS) {
        load_led_state.high_count=0;
        if (load_led_state.low_count < 2u) load_led_state.low_count++;
        if (load_led_state.low_count >= 2u) load_led_state.active=0;
    } else {
        load_led_state.high_count=0;
        load_led_state.low_count=0;
    }
    load_led_state.sequence++;
}

__attribute__((noinline)) void load_led_poll_hook(void)
{
    VENDOR_POLL();
    load_led_sample();
}

/* One 500 ms tick. Restore vendor default only when leaving active mode;
 * idle ticks do not compete with the vendor's own identification blink.
 */
__attribute__((noinline)) void load_led_tick(void)
{
    u32 sequence=load_led_state.sequence;
    if (sequence != load_led_state.seen_sequence) {
        load_led_state.seen_sequence=sequence;
        load_led_state.stale_ticks=0;
    } else if (load_led_state.stale_ticks < 31u) {
        load_led_state.stale_ticks++;
    }
    if (load_led_state.active && load_led_state.stale_ticks < 30u) {
        load_led_state.phase^=1u;
        VENDOR_LED((unsigned char)load_led_state.phase);
        load_led_state.was_active=1;
    } else if (load_led_state.was_active) {
        VENDOR_LED(0);
        load_led_state.was_active=0;
        load_led_state.phase=0;
    }
}

static void *load_led_worker(void *ignored)
{
    u32 i;
    (void)ignored;
    /* Three short pulses, ten seconds after this userspace hook, identify
     * this test image. This proves only that patched userspace reached here.
     */
    for (i=0;i<20;i++) SLEEP_US(500000u);
    for (i=0;i<3;i++) {
        VENDOR_LED(1); SLEEP_US(250000u);
        VENDOR_LED(0); SLEEP_US(250000u);
    }
    for (;;) {
        load_led_tick();
        SLEEP_US(500000u);
    }
    return (void *)0;
}

__attribute__((noinline)) void load_led_init_hook(void)
{
    int result;
    VENDOR_METER_INIT();
    if (load_led_state.started) return;
    load_led_state.started=1;
    result=CREATE_THREAD((u32 *)&load_led_state.thread_id,(void *)0,load_led_worker,(void *)0);
    if (result != 0) load_led_state.started=0;
}
