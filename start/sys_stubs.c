// mcu/sys_stubs.c

// 强制 Thumb + 空函数 + 避免 newlib relocation 错误
__attribute__((naked)) void _init(void) { __asm__("bx lr"); }

__attribute__((naked)) void _fini(void) { __asm__("bx lr"); }
