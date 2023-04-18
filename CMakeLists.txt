cmake_minimum_required(VERSION 3.21)
project(COSMOS)

## Error if not using switch toolchain file
if (NOT SWITCH)
    message(FATAL_ERROR "Not targeting switch, make sure to specify -DCMAKE_TOOLCHAIN_FILE=cmake/toolchain.cmake")
endif()

set(CMAKE_C_STANDARD 17)
set(CMAKE_CXX_STANDARD 20)
enable_language(ASM C CXX)

## Title Id
set(CONFIG_TITLE_ID 0x0100801011c3e000)
add_compile_definitions(EXL_PROGRAM_ID=${CONFIG_TITLE_ID} EXL_LOAD_KIND=Module EXL_LOAD_KIND_ENUM=2)
configure_file(${PROJECT_SOURCE_DIR}/COSMOS.json ${CMAKE_CURRENT_BINARY_DIR}/COSMOS.json)

## Project sources
include_directories(${PROJECT_SOURCE_DIR}/source/)
file(GLOB_RECURSE SOURCES_ASM ${PROJECT_SOURCE_DIR}/source/*.s)
file(GLOB_RECURSE SOURCES_C ${PROJECT_SOURCE_DIR}/source/*.c)
file(GLOB_RECURSE SOURCES_CXX ${PROJECT_SOURCE_DIR}/source/*.cpp)

## Include nx tools
include(${CMAKE_SOURCE_DIR}/cmake/SwitchTools.cmake)

## subsdk9
set(CMAKE_EXECUTABLE_SUFFIX ".elf")
add_executable(COSMOS ${SOURCES_ASM} ${SOURCES_C} ${SOURCES_CXX})