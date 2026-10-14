OUTPUT_ARCH(mips)
ENTRY(load_led_init_hook)
SECTIONS
{
  . = 0x00620000;
  __payload_start = .;
  .text : { *(.text .text.*) }
  .rodata : { *(.rodata .rodata.*) }
  .data : { *(.data .data.*) *(.sdata .sdata.*) }
  .bss : { *(.bss .bss.*) *(.sbss .sbss.*) *(COMMON) }
  __payload_end = .;
  /DISCARD/ : { *(.comment) *(.note*) *(.pdr) *(.mdebug*) *(.reginfo) *(.MIPS.abiflags) }
}
