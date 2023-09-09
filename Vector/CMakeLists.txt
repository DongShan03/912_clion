
##指定编译选项
#set(CMAKE_BUILD_TYPE Debug )
#
##指定编译目录
#set(PROJECT_BINARY_DIR ${PROJECT_SOURCE_DIR}/build)
#
#add_subdirectory(Src)
#add_subdirectory(Include)
#
#add_executable(vector)
#target_link_libraries(vector PRIVATE Include Src)

cmake_minimum_required(VERSION 3.10)
project(912Vector)

set(CMAKE_CXX_STANDARD 11)

#指定编译选项
set(CMAKE_BUILD_TYPE Debug )

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -fexec-charset=GBK")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -fexec-charset=GBK")
#指定编译目录
#set(PROJECT_BINARY_DIR ${PROJECT_SOURCE_DIR}/build)

set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/build)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR}/bin)
set(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR}/lib)
# Include the 'include' directory to access header files
include_directories(include)

# Add the 'src' directory to build the main executable
add_subdirectory(src)

# Add your main executable target
add_executable(912Vector src/main.cpp)

# Link the main executable with the "Vector" library (if needed)
target_link_libraries(912Vector Vector)