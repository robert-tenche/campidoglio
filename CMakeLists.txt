cmake_minimum_required(VERSION 4.0.0)

# will check mandatory arguments, see 'cli_arg_checker.cmake' for details
include(cmake/cli_arg_checker.cmake)

# configures cmake, see 'cmake_config.cmake' for details
include(cmake/cmake_config.cmake)

project(campidoglio CXX)

add_subdirectory(campidoglio)
add_subdirectory(sandbox)

target_link_libraries(sandbox
  PRIVATE campidoglio
)
