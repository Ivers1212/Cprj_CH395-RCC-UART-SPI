#cmake/link.cmake

set(LINKER_SCRIPT ${CMAKE_SOURCE_DIR}/ld/STM32F103C8TX_FLASH.ld)

#
set_target_properties(${PROJECT_NAME} PROPERTIES
  SUFFIX ".elf"
)

target_link_libraries(${PROJECT_NAME} nosys)

target_link_options(${PROJECT_NAME} PRIVATE
    ${MCU_FLAGS}
    -T${LINKER_SCRIPT}
    -nostartfiles
    -nostdlib
    -Wl,--gc-sections
    -Wl,-Map=${PROJECT_NAME}.map
    --specs=nosys.specs
)

