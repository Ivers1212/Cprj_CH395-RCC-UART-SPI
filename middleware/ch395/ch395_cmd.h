// ch395_cmd.h
#pragma once

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
  CH395_STATUS_OK = 0,
  CH395_STATUS_ERROR = -1,
} CH395_Status;

// 初始化底层硬件 + CH395 协议栈（复位、CHECK_EXIST、INIT_CH395 等）
CH395_Status CH395_InitAll(void);

// 简化出来的 UDP 收发接口（后续再细化参数）
int CH395_UDP_Send(uint8_t socket_no, const uint8_t *buf, uint16_t len);
int CH395_UDP_Recv(uint8_t socket_no, uint8_t *buf, uint16_t max_len);

// 还会有: 设置 IP/MASK/GW/MAC、打开 UDP/TCP socket 等接口
// 我们后续一条条加

#ifdef __cplusplus
}
#endif
