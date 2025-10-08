cmake_minimum_required(VERSION 4.0.0)

project(campidoglio CXX)

# will check mandatory arguments, see 'cli_arg_checker.cmake' for details
include(cmake/cli_arg_checker.cmake)

# configures cmake, see 'cmake_config.cmake' for details
include(cmake/cmake_config.cmake)

# configures compile options, see 'compile_options.cmake'
include(cmake/compile_options.cmake)

# configure third party components/tools/etc.
include(cmake/thirdparty_setup.cmake)

add_subdirectory(campidoglio)

if(BUILD_TESTING)
  enable_testing()
  add_subdirectory(test)
else()
  add_subdirectory(sandbox)
  target_link_libraries(sandbox
    PRIVATE campidoglio
  )
endif()



