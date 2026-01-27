project/
  ├─start/ # 启动和异常表、SysTick、中断弱符号
  ├─ld/    # 链接脚本,区段定义
  ├─bsp/   # 依赖板级硬件:引脚, 外设绑定, Clock,
  ├─mcu/   # MCU外设寄存器驱动
  ├─midlleware/ # FIFO/printf/crc/prtocol/fs/usb 等
  ├─app/ # 用户应用状态机
  ├─build/ # 输出 artifacts(bin,elf,map)
  ├─cmake/ # 或make scripts
  └─docs/ # 文档/调试记录

cmake -G "Ninja" -S .. -B . -DCMAKE_TOOLCHAIN_FILE=../cmake/toolchain.cmake
