cmake_minimum_required(VERSION 3.10)

project(skillbox_text_task)

set(CMAKE_CXX_COMPILER /usr/bin/g++)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_FLAGS "--coverage -ftest-coverage")

include_directories(project/librobo project/common)

set(SIMPLE_DIR project/librobo)
set(COMMON_DIR project/common)

set(SIMPLE_LIB_SOURCE_FILES ${SIMPLE_DIR}/Robot2D.cpp ${SIMPLE_DIR}/Robot3D.cpp)
add_library(librobo_library STATIC ${SIMPLE_LIB_SOURCE_FILES})

add_executable(main project/main.cpp)
target_link_libraries(main librobo_library)

find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})
add_executable(skillbox_text_task_testing project/test/gtests.cpp)
target_link_libraries(skillbox_text_task_testing ${GTEST_LIBRARIES})
target_link_libraries(skillbox_text_task_testing pthread)
target_link_libraries(skillbox_text_task_testing librobo_library)