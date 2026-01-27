// bsp_uart_dma.h
#pragma once

#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

// 根据需要调整大小，建议 2 的幂：256/512/1024
#define UART_RX_RING_SIZE 512

// 初始化 UART + DMA（不开启 DMA）
void BSP_UART_DMA_Init(void);

// 启动 UART DMA 环形接收
void BSP_UART_DMA_Start(void);

// 返回当前环形缓冲中可读字节数
size_t BSP_UART_DMA_Available(void);

// 从环形缓冲中读取最多 max_len 字节，返回实际读取长度
size_t BSP_UART_DMA_Read(uint8_t *dst, size_t max_len);

#ifdef __cplusplus
}
#endif
