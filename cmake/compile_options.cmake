# This file handles all the mandatory options for compilation
# Mandatory options for all compilers:
#   1. Unhandled switch cases must result in compilation error

if (${CMAKE_CXX_COMPILER_ID} STREQUAL "GNU")
  add_compile_options(
    -Werror=switch
  )
endif()
