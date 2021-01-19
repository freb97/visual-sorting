cmake_minimum_required(VERSION 3.10)

project(visual_sorting)

set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR}/build)

add_executable(visualsort
  src/array_container.h,
  src/array_container.c,
  visual_sorting.c
)