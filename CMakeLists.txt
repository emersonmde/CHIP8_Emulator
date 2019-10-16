cmake_minimum_required(VERSION 3.15)
project(chip8)

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${chip8_SOURCE_DIR}/cmake")

find_package(SDL2 REQUIRED)
#find_package(SDL2_image REQUIRED)
#find_package(SDL2_ttf REQUIRED)

add_executable(chip8 main.cpp Platform.cpp Platform.h Processor.cpp Processor.h Display.cpp Display.h Memory.cpp Memory.h)

include_directories(${SDL2_INCLUDE_DIR})
#        ${SDL2_IMAGE_INCLUDE_DIR}
#        ${SDL2_TTF_INCLUDE_DIR})
target_link_libraries(chip8 ${SDL2_LIBRARY})
#        ${SDL2_IMAGE_LIBRARIES}
#        ${SDL2_TTF_LIBRARIES})

file(COPY assets DESTINATION ${CMAKE_BINARY_DIR})

