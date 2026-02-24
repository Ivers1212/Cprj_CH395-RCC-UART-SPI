# ${CMAKE_SOURCE_DIR}\CMakeLists.txt

#--- CMake 最小模板 ---

cmake_minimum_required(VERSION 3.20)

project(
  Cprj_CH395
  VERSION 0.10
  LANGUAGES C ASM
)

#--- 工程的可执行文件 ---

add_executable(${PROJECT_NAME} "${PROJECT_SOURCE_DIR}/app/entry.c")

#--- 生成JSON文件 ---

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

#--- 板级选项配置 ---

include("${CMAKE_CURRENT_LIST_DIR}/cmake/mcu_compile.cmake")
include("${CMAKE_CURRENT_LIST_DIR}/cmake/mcu_link.cmake")
target_link_libraries(${PROJECT_NAME} PRIVATE
  mcu_compile
  mcu_link
)

#--- 工程内各模块 ---

##--- 添加子目录 ---
add_subdirectory(app)
add_subdirectory(bsp)
add_subdirectory(mcu)
add_subdirectory(middleware/ch395)
add_subdirectory(start)

target_link_libraries(${PROJECT_NAME} PRIVATE
  app_lib
  bsp_lib
  mcu_lib
  ch395_lib
  start_lib
)

#--- postbuild ---

include("${CMAKE_CURRENT_LIST_DIR}/cmake/postbuild.cmake")
#--- extra command ---


## --- export compile_commands.json to source root for LSP ---

set(_CC_SRC "${PROJECT_BINARY_DIR}/compile_commands.json")
set(_CC_DST "${PROJECT_SOURCE_DIR}/compile_commands.json")

add_custom_target(compile_commands_to_root ALL
  COMMAND ${CMAKE_COMMAND} -E rm -f "${_CC_DST}"
  COMMAND ${CMAKE_COMMAND} -E copy_if_different "${_CC_SRC}" "${_CC_DST}"
  COMMENT "Refreshing compile_commands.json in project root"
)
