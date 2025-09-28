file(GLOB_RECURSE ALL_CPP_FILES "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp")
file(GLOB_RECURSE ALL_HPP_FILES "${CMAKE_CURRENT_SOURCE_DIR}/*.hpp")

set(PCH_HEADERS)
set(PUBLIC_INCLUDE_DIRS)
set(PRIVATE_INCLUDE_DIRS)

foreach(header ${ALL_HPP_FILES})
  get_filename_component(HEADER_DIR "${header}" DIRECTORY)

  if("${header}" MATCHES ".*/pch/.*$")

    list(APPEND PCH_HEADERS "${header}")

  elseif("${header}" MATCHES ".*/private/.*$")

    # Private header
    list(FIND PRIVATE_INCLUDE_DIRS "${HEADER_DIR}" FOUND_INDEX)
    if(FOUND_INDEX EQUAL -1)
      get_filename_component(PARENT_DIR "${HEADER_DIR}" DIRECTORY)
      list(APPEND PRIVATE_INCLUDE_DIRS "${PARENT_DIR}")
    endif()

  elseif("${header}" MATCHES ".*/public/.*$")

    # Public header
    list(FIND PUBLIC_INCLUDE_DIRS "${HEADER_DIR}" FOUND_INDEX)
    if(FOUND_INDEX EQUAL -1)
      get_filename_component(PARENT_DIR "${HEADER_DIR}" DIRECTORY)
      list(APPEND PUBLIC_INCLUDE_DIRS "${PARENT_DIR}")
    endif()

  endif()
endforeach()

message(STATUS "Public include dirs: ${PUBLIC_INCLUDE_DIRS}")
message(STATUS "Private include dirs: ${PRIVATE_INCLUDE_DIRS}")
message(STATUS "PCH headers: ${PCH_HEADERS}")

add_library(${TARGET_NAME} STATIC ${ALL_CPP_FILES})

target_include_directories(${TARGET_NAME}
  PUBLIC  ${PUBLIC_INCLUDE_DIRS}
  PRIVATE ${PRIVATE_INCLUDE_DIRS}
)

target_precompile_headers(${TARGET_NAME}
  PRIVATE ${PCH_HEADERS}
)
