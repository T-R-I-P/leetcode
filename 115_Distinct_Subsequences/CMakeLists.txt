# only for cmake --version >= 3.5.1
cmake_minimum_required(VERSION 3.5.1)

# project name
project(115_Distinct_Subsequences)

# creates the variable EXEC and sets it to hello
set(EXEC 115_unittest)

# set the C++14 standard
set(CMAKE_CXX_STANDARD 14)

# I../includes
#include_directories(includes)

# puts all .cpp files inside src to the SOURCES variable
file(GLOB SOURCES *.cpp)

# compiles the files defined by SOURCES to generante the executable defined by EXEC
add_executable(${EXEC} ${SOURCES})

# GTest needs threading support
find_package (Threads)
target_link_libraries(${EXEC} gtest ${CMAKE_THREAD_LIBS_INIT})

# Run test
#enable_testing()
add_test(${EXEC} ${EXEC})
