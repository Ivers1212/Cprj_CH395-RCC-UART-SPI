#CMakeLists.txt
cmake_minimum_required(VERSION 3.20)

project(CPrj_Module C ASM)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

message(STATUS "CMAKE_TOOLCHAIN_FILE = ${CMAKE_TOOLCHAIN_FILE}")
message(STATUS "CMAKE_C_COMPILER    = ${CMAKE_C_COMPILER}")
message(STATUS "CMAKE_SYSTEM_NAME   = ${CMAKE_SYSTEM_NAME}")
message(STATUS "CMAKE_SYSTEM_PROC   = ${CMAKE_SYSTEM_PROCESSOR}")

# --- 加载模块化配置 ---
include(cmake/flags.cmake)
include(cmake/sources.cmake)
include(cmake/link.cmake)
include(cmake/postbuild.cmake)
