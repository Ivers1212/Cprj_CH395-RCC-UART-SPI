# bsp/CMakeLists.txt

add_library(bsp_lib STATIC)

target_sources(bsp_lib PRIVATE
  bsp_ch395_pins.c
  bsp_spi.c
  bsp_uart_dma.c
)

target_include_directories(bsp_lib PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}")

target_link_libraries(bsp_lib PUBLIC mcu_compile)
