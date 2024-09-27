cmake_minimum_required(VERSION 3.12)

include(pico_sdk_import.cmake)

include(pico_extras_import_optional.cmake)

project(RaspberryPiPico_blink C CXX ASM)
set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

if (PICO_SDK_VERSION_STRING VERSION_LESS "1.3.0")
    message(FATAL_ERROR "Raspberry Pi Pico SDK version 1.3.0 (or later) required. Your version is ${PICO_SDK_VERSION_STRING}")
endif()

pico_sdk_init()

add_executable(RaspberryPiPico_blink
        blink.c
        )

target_link_libraries(RaspberryPiPico_blink pico_stdlib)

pico_add_extra_outputs(RaspberryPiPico_blink)