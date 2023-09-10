cmake_minimum_required(VERSION 3.10)
project(912Bitmap_SRC)

set(CMAKE_CXX_STANDARD 11)

#指定编译选项
set(CMAKE_BUILD_TYPE Debug )

#指定编译目录
#set(PROJECT_BINARY_DIR ${PROJECT_SOURCE_DIR}/build)

set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/build)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR}/bin)
set(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR}/lib)
# Include the 'include' directory to access header files
include_directories(include ../_share)

# Add the 'src' directory to build the main executable
add_subdirectory(src)

