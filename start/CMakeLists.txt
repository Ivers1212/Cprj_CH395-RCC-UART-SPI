# middleware/ch395/CMakeLists.txt

add_library(start STATIC)

target_include_directories(start PUBLIC
  "${CMAKE_CURRENT_SOURCE_DIR}"
  "${CMAKE_CURRENT_SOURCE_DIR}/inc"
)

target_sources(start PRIVATE
  startup_stm32f103xb.s
  stm32f1xx_it.c
  sys_stubs.c
  system_stm32f1xx.c
)

target_link_libraries(start PUBLIC
  mcu_compile
)

