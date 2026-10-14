ENTRY(_start)
PHDRS { text PT_LOAD FLAGS(5); data PT_LOAD FLAGS(6); stack PT_GNU_STACK FLAGS(6); }
SECTIONS {
  . = 0x00400000 + SIZEOF_HEADERS;
  .text : { *(.text .text.*) } :text
  .rodata : { *(.rodata .rodata.*) } :text
  .MIPS.abiflags : { *(.MIPS.abiflags) } :text
  .reginfo : { *(.reginfo) } :text
  . = ALIGN(0x10000);
  .data : { *(.data .data.*) *(.sdata .sdata.*) *(.got) } :data
  .bss : { *(.bss .bss.*) *(.sbss .sbss.*) *(COMMON) } :data
  /DISCARD/ : { *(.comment) *(.note*) *(.pdr) *(.mdebug*) *(.eh_frame*) }
}
