.set noreorder
.set noat
.set mips1
.section .text.start,"ax",@progbits
.globl _start
.ent _start
_start:
    move $a0, $sp
    lw $a0, 0($a0)
    addiu $a1, $sp, 4
    li $t0, -8
    and $sp, $sp, $t0
    addiu $sp, $sp, -32
    jal diag_main
    nop
    move $a0, $v0
    li $v0, 4001
    syscall
    nop
.end _start

# C: call(nr, a, b, c, d, e, f). Negative errno, no libc/TLS.
.section .text.linux_call,"ax",@progbits
.globl linux_call
.ent linux_call
linux_call:
    move $v0, $a0
    move $a0, $a1
    move $a1, $a2
    move $a2, $a3
    lw $a3, 16($sp)
    lw $t0, 20($sp)
    lw $t1, 24($sp)
    addiu $sp, $sp, -32
    sw $t0, 16($sp)
    sw $t1, 20($sp)
    syscall
    nop
    beq $a3, $zero, 1f
    nop
    subu $v0, $zero, $v0
1:  addiu $sp, $sp, 32
    jr $ra
    nop
.end linux_call

# These are intentionally isolated child-only probes, never service code.
.section .text.probe_llsc,"ax",@progbits
.globl probe_llsc
.ent probe_llsc
probe_llsc:
    .set mips2
1:  ll $v0, 0($a0)
    nop
    addiu $v0, $v0, 1
    sc $v0, 0($a0)
    nop
    beq $v0, $zero, 1b
    nop
    .set mips1
    jr $ra
    nop
.end probe_llsc
.section .text.probe_tls,"ax",@progbits
.globl probe_tls
.ent probe_tls
probe_tls:
    .word 0x7c02e83b  # rdhwr v0, $29 (kernel TLS emulation)
    jr $ra
    nop
.end probe_tls
.section .text.probe_sync,"ax",@progbits
.globl probe_sync
.ent probe_sync
probe_sync:
    .word 0x0000000f  # SYNC is tested only in an isolated child.
    jr $ra
    nop
.end probe_sync
.section .note.GNU-stack,"",@progbits
