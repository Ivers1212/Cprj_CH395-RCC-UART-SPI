// bsp_ch395_pins.h
#pragma once

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

// 初始化 CH395 相关 GPIO：CS、RSTI、INT# 等
void BSP_CH395_Pins_Init(void);

// 片选控制
void CH395_CS_Low(void);
void CH395_CS_High(void);

// 复位：RSTI 拉低一段时间再拉高
void CH395_ResetPulse(void);

// 读取中断引脚状态：返回 1 = 有中断（INT# 被拉低），0 = 无
uint8_t CH395_INT_IsAsserted(void);

#ifdef __cplusplus
}
#endif
