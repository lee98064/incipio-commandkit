/* MIPS-I BE/o32 bridges for this hash-bound 10219 application.
 * Reserve the o32 16-byte argument area and preserve RA and incoming GP.
 * Reset application GP before entering its original lazy-binding stub.
 * Resolved shared-library functions still receive their own address in t9.
 */
    .set noreorder
    .text
    .align 2

    .globl load_led_pthread_create_bridge
    .type load_led_pthread_create_bridge,@function
    .ent load_led_pthread_create_bridge
load_led_pthread_create_bridge:
    addiu $sp,$sp,-24
    sw $ra,20($sp)
    sw $gp,16($sp)
    lui $gp,0x62
    addiu $gp,$gp,-0x5cf0
    lw $t9,-0x6bd0($gp)
    nop
    jalr $t9
    nop
    lw $gp,16($sp)
    lw $ra,20($sp)
    nop
    jr $ra
    addiu $sp,$sp,24
    .end load_led_pthread_create_bridge
    .size load_led_pthread_create_bridge,.-load_led_pthread_create_bridge

    .globl load_led_usleep_bridge
    .type load_led_usleep_bridge,@function
    .ent load_led_usleep_bridge
load_led_usleep_bridge:
    addiu $sp,$sp,-24
    sw $ra,20($sp)
    sw $gp,16($sp)
    lui $gp,0x62
    addiu $gp,$gp,-0x5cf0
    lw $t9,-0x5c8c($gp)
    nop
    jalr $t9
    nop
    lw $gp,16($sp)
    lw $ra,20($sp)
    nop
    jr $ra
    addiu $sp,$sp,24
    .end load_led_usleep_bridge
    .size load_led_usleep_bridge,.-load_led_usleep_bridge
