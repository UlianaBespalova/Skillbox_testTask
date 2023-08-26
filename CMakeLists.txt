cmake_minimum_required(VERSION 3.10)

project(skillbox_text_task)

set(CMAKE_CXX_COMPILER /usr/bin/g++)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(project/librobo project/common)

set(SIMPLE_DIR project/librobo)
set(COMMON_DIR project/common)

set(SIMPLE_LIB_SOURCE_FILES ${SIMPLE_DIR}/Robot2D.cpp ${SIMPLE_DIR}/Robot3D.cpp)
add_library(librobo_library STATIC ${SIMPLE_LIB_SOURCE_FILES})

add_executable(main project/main.cpp)
target_link_libraries(main librobo_library)

