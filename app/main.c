#include "stm32f1xx.h"
#include "system_stm32f1xx.h"

int main(void) {
  SystemInit();
  SysTick_Config(72000); // 1ms systick handler
  while (1) {
  }
}
