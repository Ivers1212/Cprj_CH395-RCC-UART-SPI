# cmake/sources.cmake

# app / bsp / middleware
file(GLOB APP_SOURCES   ${CMAKE_SOURCE_DIR}/app/*.c)
file(GLOB BSP_SOURCES   ${CMAKE_SOURCE_DIR}/bsp/*.c)
file(GLOB CH395_SOURCES ${CMAKE_SOURCE_DIR}/middleware/ch395/*.c)
file(GLOB MCU_SOURCES ${CMAKE_SOURCE_DIR}/mcu/*.c)

# 启动 & 中断
set(STARTUP_SOURCES
    ${CMAKE_SOURCE_DIR}/start/startup_stm32f103xb.s
    ${CMAKE_SOURCE_DIR}/start/stm32f1xx_it.c
)

add_executable(${PROJECT_NAME}
    ${APP_SOURCES}
    ${BSP_SOURCES}
    ${CH395_SOURCES}
    ${MCU_SOURCES}
    ${STARTUP_SOURCES}
)

target_include_directories(${PROJECT_NAME} PRIVATE
    ${CMAKE_SOURCE_DIR}/app
    ${CMAKE_SOURCE_DIR}/bsp
    ${CMAKE_SOURCE_DIR}/mcu
    ${CMAKE_SOURCE_DIR}/middleware/ch395
    ${CMAKE_SOURCE_DIR}/start
    ${CMAKE_SOURCE_DIR}/start/inc
)

