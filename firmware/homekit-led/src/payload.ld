OUTPUT_ARCH(mips)
ENTRY(ck_hap_read_relay)
SECTIONS {
 . = 0x00630000;
 .text : { *(.text .text.*) }
 .rodata : { *(.rodata .rodata.*) }
 .data : { *(.data .data.*) *(.sdata .sdata.*) }
 .bss : { *(.bss .bss.*) *(.sbss .sbss.*) *(COMMON) }
 __payload_end = .;
 /DISCARD/ : { *(.comment) *(.note*) *(.pdr) *(.mdebug*) *(.reginfo) *(.MIPS.abiflags) }
}
