#cmake/flags.cmake

set(MCU_FLAGS
    -mcpu=cortex-m3
    -mthumb
    -ffreestanding
    -fdata-sections
    -ffunction-sections
)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

add_compile_options(
    ${MCU_FLAGS}
    -Wall
    -Wextra
    -Wno-unused-parameter

    #Debug flags
    $<$<CONFIG:Debug>:-Og>
    $<$<CONFIG:Debug>:-g3>
    $<$<CONFIG:Debug>:-ggdb>

    #Release flags
    $<$<CONFIG:Release>:-O2>
)

# ---- Chip selection for CMSIS ----
add_compile_definitions(
    STM32F103xB     # the correct device macro for F103C8
    $<$<CONFIG:Debug>:DEBUG>
)
