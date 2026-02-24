# app/CMakeLists.txt

add_library(app_lib STATIC)

target_sources(app_lib PRIVATE
  main.c
)

target_include_directories(
  app_lib PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}"
)

target_link_libraries(
  app_lib PUBLIC mcu_compile
)

