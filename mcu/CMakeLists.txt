# mcu/CMakeLists.txt

add_library(mcu_lib STATIC)

target_include_directories( mcu_lib PUBLIC
  ${CMAKE_CURRENT_SOURCE_DIR}
)

target_sources(mcu_lib PRIVATE
)

target_link_libraries(mcu_lib PUBLIC
  mcu_compile
)
