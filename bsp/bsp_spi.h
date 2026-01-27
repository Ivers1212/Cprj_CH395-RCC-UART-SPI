// bsp_spi.h
#pragma once

#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

// 初始化 SPI 外设（主模式，参数针对 CH395）
void BSP_SPI_CH395_Init(void);

// 发送并接收 1 字节（全双工）
uint8_t BSP_SPI_CH395_TransferByte(uint8_t data);

// 连续发送 len 字节（不关心读回内容）
void BSP_SPI_CH395_Transmit(const uint8_t *buf, size_t len);

// 连续接收 len 字节（发送 0xFF 或 0x00 占位）
void BSP_SPI_CH395_Receive(uint8_t *buf, size_t len);

#ifdef __cplusplus
}
#endif
