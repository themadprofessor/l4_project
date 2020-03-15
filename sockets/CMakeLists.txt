cmake_minimum_required(VERSION 3.16)
project(sockets C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

add_executable(sockets main.c)

include(CheckIPOSupported)
check_ipo_supported(RESULT result)
if(result)
  set_target_properties(sockets PROPERTIES INTERPROCEDURAL_OPTIMIZATION TRUE)
endif()

include(FeatureSummary)