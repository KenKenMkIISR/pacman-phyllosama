cmake_minimum_required(VERSION 3.12)

# Pull in SDK (must be before project)
include(pico_sdk_import.cmake)

project(phyllosoma-pacman C CXX ASM)
set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)
set(PICO_NO_FLASH 1)

# Initialize the SDK
pico_sdk_init()

add_executable(phyllosoma-pacman
	phyllosoma-pacman.c
	ili9341_spi.c
	graphlib.c
	pacman2data.c
	graphlib.h
	LCDdriver.h
	pacman2.h
	ff.C
	pico-sdmm.c
	diskio.h
	ff.h
	ffconf.h
)

# Pull in basic dependencies
target_link_libraries(phyllosoma-pacman pico_stdlib hardware_spi hardware_pwm)

pico_set_linker_script(phyllosoma-pacman ${CMAKE_CURRENT_SOURCE_DIR}/memmap_no_flash.ld)

# create map/bin/hex file etc.
pico_add_extra_outputs(phyllosoma-pacman)
