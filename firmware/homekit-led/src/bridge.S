.set noreorder
.set mips1
.text
.globl ck_hap_read_bridge
.ent ck_hap_read_bridge
ck_hap_read_bridge:
    addiu $sp,$sp,-24
    sw $ra,20($sp)
    sw $gp,16($sp)
    lui $gp,0x62
    addiu $gp,$gp,-0x5cf0
    lw $t9,-0x6588($gp)
    nop
    jalr $t9
    nop
    lw $gp,16($sp)
    lw $ra,20($sp)
    nop
    jr $ra
    addiu $sp,$sp,24
.end ck_hap_read_bridge
